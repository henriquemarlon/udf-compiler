%{  
//-- don't change *any* of these: if you do, you'll break the compiler.  
#include <algorithm>  
#include <memory>  
#include <cstring>  
#include <cdk/compiler.h>  
#include <cdk/types/types.h>  
#include ".auto/all_nodes.h"  
#define LINE                         compiler->scanner()->lineno()  
#define yylex()                      compiler->scanner()->scan()  
#define yyerror(compiler, s)         compiler->scanner()->error(s)  
//-- don't change *any* of these --- END!  

#define NIL (new cdk::nil_node(LINE))
%}

  
%parse-param {std::shared_ptr<cdk::compiler> compiler}  
  
%union {  
  //--- don't change *any* of these: if you do, you'll break the compiler.  
  YYSTYPE() : type(cdk::primitive_type::create(0, cdk::TYPE_VOID)) {}  
  ~YYSTYPE() {}  
  YYSTYPE(const YYSTYPE &other) { *this = other; }  
  YYSTYPE& operator=(const YYSTYPE &other) { type = other.type; return *this; }  
  
  std::shared_ptr<cdk::basic_type> type;        /* expression type */  
  //-- don't change *any* of these --- END!  
  
  int                   i;          /* integer value */  
  double                d;          /* double value */  
  std::string          *s;          /* symbol name or string literal */  
  cdk::basic_node      *node;       /* node pointer */  
  cdk::sequence_node   *sequence;  
  cdk::expression_node *expression; /* expression nodes */  
  cdk::lvalue_node     *lvalue;  
  int                   qualifier_val; /* qualifier as integer */  

  udf::block_node *block;
};  
  
%token <i> tINTEGER  
%token <d> tDOUBLE  
%token <s> tIDENTIFIER tSTRING  
%token tINT tREAL tSTRING_TYPE tTENSOR tPTR tVOID tAUTO  
%token tPUBLIC tFORWARD tPRIVATE  
%token tIF tELIF tELSE tFOR tBREAK tCONTINUE tRETURN  
%token tWRITE tWRITELN tINPUT  
%token tNULLPTR tOBJECTS tSIZEOF  
%token tCAPACITY tRANK tDIMS tDIM tRESHAPE  
%token tCONTRACT
%token tGE tLE tEQ tNE  
  
%nonassoc tIFX  
%nonassoc tELIF tELSE  
  
%right '='  
%left tOR  
%left tAND  
%left '~'  
%left tEQ tNE  
%left '<' '>' tLE tGE  
%left '+' '-'  
%right tCONTRACT  
%left '*' '/' '%'  
%right tUNARY  
%left '@' '.' '(' '['  
  
%type <node> stmt declaration variable_decl function_decl function_def elif_chain fordec return
%type <sequence> stmts declarations exprs tensor_dims reshape_dims  parameters opt_forinit fordecs exprs_opt opt_vardecs opt_instructions vardecs
%type <expression> expr literal tensor_literal   
%type <lvalue> lval  
%type <type> type
%type <block> block
%type <qualifier_val> qualifier_opt  
%type <s> string
  
%{  
//-- The rules below will be included in yyparse, the main parsing function.  
%}  
%%  
  
file : declarations                    { compiler->ast($1); }  
     ;  
  
declarations : declaration             { $$ = new cdk::sequence_node(LINE, $1); }  
             | declarations declaration { $$ = new cdk::sequence_node(LINE, $2, $1); }  
             ;  
  
declaration : variable_decl ';'        { $$ = $1; }  
            | function_decl        { $$ = $1; }  
            | function_def             { $$ = $1; }  
            ;  
  
qualifier_opt : /* empty */            { $$ = tPRIVATE; }  
              | tPUBLIC                { $$ = tPUBLIC; }  
              | tFORWARD               { $$ = tFORWARD; }  
              ;  
  
type : tINT                           { $$ = cdk::primitive_type::create(4, cdk::TYPE_INT); }  
     | tREAL                          { $$ = cdk::primitive_type::create(8, cdk::TYPE_DOUBLE); }  
     | tSTRING_TYPE                   { $$ = cdk::primitive_type::create(4, cdk::TYPE_STRING); }  
     | tVOID                          { $$ = cdk::primitive_type::create(0, cdk::TYPE_VOID); }  
     | tAUTO                          { $$ = cdk::primitive_type::create(0, cdk::TYPE_UNSPEC); }  
     | tPTR '<' type '>'              { $$ = cdk::reference_type::create(4, $3); }  
     | tTENSOR '<' tensor_dims '>'    { $$ = cdk::primitive_type::create(4, cdk::TYPE_POINTER); }  
     ;  
  
tensor_dims : tINTEGER                { $$ = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, $1)); }  
            | tensor_dims ',' tINTEGER { $$ = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, $3), $1); }  
            ;  
  
reshape_dims : tINTEGER                    { $$ = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, $1)); }  
             | reshape_dims ',' tINTEGER   { $$ = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, $3), $1); }  
             ;  
  
variable_decl : qualifier_opt type tIDENTIFIER '=' expr   
              { $$ = new udf::variable_declaration_node(LINE, $1, $2, *$3, $5); }  
              | qualifier_opt type tIDENTIFIER  
              { $$ = new udf::variable_declaration_node(LINE, $1, $2, *$3, nullptr); }  
              | qualifier_opt tAUTO tIDENTIFIER '=' expr  
              { $$ = new udf::variable_declaration_node(LINE, $1, nullptr, *$3, $5); }  
              ;

vardecs      : variable_decl ';'          { $$ = new cdk::sequence_node(LINE, $1);     }
             | vardecs variable_decl ';' { $$ = new cdk::sequence_node(LINE, $2, $1); }
             ;
             
opt_vardecs  : /* empty */ { $$ = NULL; }
             | vardecs     { $$ = $1; }
             ;
  
function_decl : qualifier_opt type tIDENTIFIER '(' parameters ')'    
              { $$ = new udf::function_declaration_node(LINE, $1, $2, *$3, $5); }    
              | qualifier_opt type tIDENTIFIER '(' ')'    
              { $$ = new udf::function_declaration_node(LINE, $1, $2, *$3, nullptr); }    
              ;
  
function_def : qualifier_opt type tIDENTIFIER '(' parameters ')' block
             { $$ = new udf::function_definition_node(LINE, $1, $2, *$3, $5, $7); }    
             | qualifier_opt type tIDENTIFIER '(' ')' block   
             { $$ = new udf::function_definition_node(LINE, $1, $2, *$3, nullptr, $6); }    
             ;

parameters : variable_decl                { $$ = new cdk::sequence_node(LINE, $1); }  
           | parameters ',' variable_decl  { $$ = new cdk::sequence_node(LINE, $3, $1); }
           ;

opt_instructions: /* empty */  { $$ = new cdk::sequence_node(LINE); }
                | stmts { $$ = $1; }
                ;

block    : '{' opt_vardecs opt_instructions '}' { $$ = new udf::block_node(LINE, $2, $3); }
         ;
  
stmts : stmt                          { $$ = new cdk::sequence_node(LINE, $1); }  
      | stmts stmt                    { $$ = new cdk::sequence_node(LINE, $2, $1); }  
      ;  
  
stmt : expr ';'                       { $$ = new udf::evaluation_node(LINE, $1); }  
     | tWRITE exprs ';'               { $$ = new udf::write_node(LINE, $2); }  
     | tWRITELN exprs ';'             { $$ = new udf::write_node(LINE, $2); }  
     | tBREAK                    { $$ = new udf::break_node(LINE); }  
     | tCONTINUE                 { $$ = new udf::continue_node(LINE); }
     | return                         { $$ = $1; }
     | tIF '(' expr ')' stmt %prec tIFX { $$ = new udf::if_node(LINE, $3, $5); }  
     | tIF '(' expr ')' stmt elif_chain { $$ = new udf::if_else_node(LINE, $3, $5, $6); }
     | tFOR '(' opt_forinit ';' exprs_opt ';' exprs_opt ')' stmt  { $$ = new udf::for_node(LINE, $3, $5, $7, $9); }
     | block                          { $$ = $1; }
     ;

return          : tRETURN             ';' { $$ = new udf::return_node(LINE, nullptr); }
                | tRETURN expr    ';' { $$ = new udf::return_node(LINE,  $2); }
                ;

elif_chain : tELIF '(' expr ')' stmt %prec tIFX   
           { $$ = new udf::if_node(LINE, $3, $5); }  
           | tELIF '(' expr ')' stmt elif_chain   
           { $$ = new udf::if_else_node(LINE, $3, $5, $6); }  
           | tELSE stmt   
           { $$ = $2; }  
           ;
  
exprs : expr                          { $$ = new cdk::sequence_node(LINE, $1); }  
      | exprs ',' expr                { $$ = new cdk::sequence_node(LINE, $3, $1); }  
      | exprs expr                    { $$ = new cdk::sequence_node(LINE, $2, $1); }  
      ;  

  
exprs_opt : /* empty */                { $$ = new cdk::sequence_node(LINE, NIL); }  
         | exprs                       { $$ = $1; }  
         ;  
  
expr : literal                        { $$ = $1; }  
     | lval                           { $$ = new cdk::rvalue_node(LINE, $1); }  
     | lval '=' expr                  { $$ = new cdk::assignment_node(LINE, $1, $3); }  
     | tINPUT                         { $$ = new udf::input_node(LINE); }  
     | tNULLPTR                       { $$ = new udf::nullptr_node(LINE); }  
     | tOBJECTS '(' expr ')'          { $$ = new udf::stack_alloc_node(LINE, $3); }  
     | tSIZEOF '(' expr ')'           { $$ = new udf::sizeof_node(LINE, $3); }  
     | '+' expr %prec tUNARY          { $$ = new cdk::unary_plus_node(LINE, $2); }  
     | '-' expr %prec tUNARY          { $$ = new cdk::unary_minus_node(LINE, $2); }  
     | '~' expr                       { $$ = new cdk::not_node(LINE, $2); }  
     | lval '?'                       { $$ = new udf::address_node(LINE, $1); }  
     | expr '+' expr                  { $$ = new cdk::add_node(LINE, $1, $3); }  
     | expr '-' expr                  { $$ = new cdk::sub_node(LINE, $1, $3); }  
     | expr '*' expr                  { $$ = new cdk::mul_node(LINE, $1, $3); }  
     | expr '/' expr                  { $$ = new cdk::div_node(LINE, $1, $3); }  
     | expr '%' expr                  { $$ = new cdk::mod_node(LINE, $1, $3); }  
     | expr tCONTRACT expr            { $$ = new udf::tensor_contract_node(LINE, $1, $3); }  
     | expr '<' expr                  { $$ = new cdk::lt_node(LINE, $1, $3); }  
     | expr '>' expr                  { $$ = new cdk::gt_node(LINE, $1, $3); }  
     | expr tLE expr                  { $$ = new cdk::le_node(LINE, $1, $3); }  
     | expr tGE expr                  { $$ = new cdk::ge_node(LINE, $1, $3); }  
     | expr tEQ expr                  { $$ = new cdk::eq_node(LINE, $1, $3); } 
     | expr  tAND expr                 { $$ = new cdk::and_node(LINE, $1, $3); } 
     | expr  tOR expr                 { $$ = new cdk::or_node(LINE, $1, $3); } 
     | expr tNE expr                  { $$ = new cdk::ne_node(LINE, $1, $3); }  
     | '(' expr ')'                   { $$ = $2; }  
     | tIDENTIFIER '(' exprs ')'      { $$ = new udf::function_call_node(LINE, *$1, $3); }  
     | tIDENTIFIER '(' ')'            { $$ = new udf::function_call_node(LINE, *$1, nullptr); }  
     | expr '.' tCAPACITY             { $$ = new udf::tensor_capacity_node(LINE, $1); }  
     | expr '.' tRANK                 { $$ = new udf::tensor_rank_node(LINE, $1); }  
     | expr '.' tDIMS                 { $$ = new udf::tensor_dimensions_node(LINE, $1); }  
     | expr '.' tDIM '(' expr ')'     { $$ = new udf::tensor_dimension_node(LINE, $1, $5); }  
     | expr '.' tRESHAPE '(' reshape_dims ')' { $$ = new udf::tensor_reshape_node(LINE, $1, $5); }  
     | tensor_literal                 { $$ = $1; }  
     ;  
  
literal : tINTEGER                   { $$ = new cdk::integer_node(LINE, $1); }  
        | tDOUBLE                    { $$ = new cdk::double_node(LINE, $1); }  
        | string                    { $$ = new cdk::string_node(LINE, $1); }  
        ;


fordec          : type tIDENTIFIER '=' expr { $$ = new udf::variable_declaration_node(LINE, tPRIVATE,  $1, *$2, $4); }
                ;
              
fordecs         :             fordec { $$ = new cdk::sequence_node(LINE, $1);     }
                | fordecs ',' fordec { $$ = new cdk::sequence_node(LINE, $3, $1); }
                ;

opt_forinit     : /**/     { $$ = new cdk::sequence_node(LINE, NIL); }
                | fordecs  { $$ = $1; }
                | tAUTO tIDENTIFIER '=' expr {
                   $$ = new cdk::sequence_node(LINE, new udf::variable_declaration_node(LINE, tPRIVATE, nullptr, *$2, $4));
                }
                | exprs { $$ =  $1; }
                ;

string          : tSTRING                       { $$ = $1; }
                | string tSTRING                { $$ = $1; $$->append(*$2); delete $2; }
                ;  

tensor_literal : '[' exprs ']'       { $$ = new udf::tensor_node(LINE, $2); }  
               ;  
  
lval : tIDENTIFIER                   { $$ = new cdk::variable_node(LINE, *$1); }  
     | expr '[' expr ']'             { $$ = new udf::index_node(LINE, $1, $3); }  
     | expr '@' '(' exprs ')'        { $$ = new udf::tensor_index_node(LINE, $1, $4); }  
     ;  
  
%%