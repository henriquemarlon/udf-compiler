/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "udf_parser.y"
  
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

#line 87 "udf_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "udf_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tINTEGER = 3,                   /* tINTEGER  */
  YYSYMBOL_tDOUBLE = 4,                    /* tDOUBLE  */
  YYSYMBOL_tIDENTIFIER = 5,                /* tIDENTIFIER  */
  YYSYMBOL_tSTRING = 6,                    /* tSTRING  */
  YYSYMBOL_tINT = 7,                       /* tINT  */
  YYSYMBOL_tREAL = 8,                      /* tREAL  */
  YYSYMBOL_tSTRING_TYPE = 9,               /* tSTRING_TYPE  */
  YYSYMBOL_tTENSOR = 10,                   /* tTENSOR  */
  YYSYMBOL_tPTR = 11,                      /* tPTR  */
  YYSYMBOL_tVOID = 12,                     /* tVOID  */
  YYSYMBOL_tAUTO = 13,                     /* tAUTO  */
  YYSYMBOL_tPUBLIC = 14,                   /* tPUBLIC  */
  YYSYMBOL_tFORWARD = 15,                  /* tFORWARD  */
  YYSYMBOL_tPRIVATE = 16,                  /* tPRIVATE  */
  YYSYMBOL_tIF = 17,                       /* tIF  */
  YYSYMBOL_tELIF = 18,                     /* tELIF  */
  YYSYMBOL_tELSE = 19,                     /* tELSE  */
  YYSYMBOL_tFOR = 20,                      /* tFOR  */
  YYSYMBOL_tBREAK = 21,                    /* tBREAK  */
  YYSYMBOL_tCONTINUE = 22,                 /* tCONTINUE  */
  YYSYMBOL_tRETURN = 23,                   /* tRETURN  */
  YYSYMBOL_tWRITE = 24,                    /* tWRITE  */
  YYSYMBOL_tWRITELN = 25,                  /* tWRITELN  */
  YYSYMBOL_tINPUT = 26,                    /* tINPUT  */
  YYSYMBOL_tNULLPTR = 27,                  /* tNULLPTR  */
  YYSYMBOL_tOBJECTS = 28,                  /* tOBJECTS  */
  YYSYMBOL_tSIZEOF = 29,                   /* tSIZEOF  */
  YYSYMBOL_tCAPACITY = 30,                 /* tCAPACITY  */
  YYSYMBOL_tRANK = 31,                     /* tRANK  */
  YYSYMBOL_tDIMS = 32,                     /* tDIMS  */
  YYSYMBOL_tDIM = 33,                      /* tDIM  */
  YYSYMBOL_tRESHAPE = 34,                  /* tRESHAPE  */
  YYSYMBOL_tCONTRACT = 35,                 /* tCONTRACT  */
  YYSYMBOL_tGE = 36,                       /* tGE  */
  YYSYMBOL_tLE = 37,                       /* tLE  */
  YYSYMBOL_tEQ = 38,                       /* tEQ  */
  YYSYMBOL_tNE = 39,                       /* tNE  */
  YYSYMBOL_tIFX = 40,                      /* tIFX  */
  YYSYMBOL_41_ = 41,                       /* '='  */
  YYSYMBOL_tOR = 42,                       /* tOR  */
  YYSYMBOL_tAND = 43,                      /* tAND  */
  YYSYMBOL_44_ = 44,                       /* '~'  */
  YYSYMBOL_45_ = 45,                       /* '<'  */
  YYSYMBOL_46_ = 46,                       /* '>'  */
  YYSYMBOL_47_ = 47,                       /* '+'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_50_ = 50,                       /* '/'  */
  YYSYMBOL_51_ = 51,                       /* '%'  */
  YYSYMBOL_tUNARY = 52,                    /* tUNARY  */
  YYSYMBOL_53_ = 53,                       /* '@'  */
  YYSYMBOL_54_ = 54,                       /* '.'  */
  YYSYMBOL_55_ = 55,                       /* '('  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* ')'  */
  YYSYMBOL_60_ = 60,                       /* '{'  */
  YYSYMBOL_61_ = 61,                       /* '}'  */
  YYSYMBOL_62_ = 62,                       /* '?'  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_file = 65,                      /* file  */
  YYSYMBOL_declarations = 66,              /* declarations  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_qualifier_opt = 68,             /* qualifier_opt  */
  YYSYMBOL_type = 69,                      /* type  */
  YYSYMBOL_tensor_dims = 70,               /* tensor_dims  */
  YYSYMBOL_reshape_dims = 71,              /* reshape_dims  */
  YYSYMBOL_variable_decl = 72,             /* variable_decl  */
  YYSYMBOL_vardecs = 73,                   /* vardecs  */
  YYSYMBOL_opt_vardecs = 74,               /* opt_vardecs  */
  YYSYMBOL_function_decl = 75,             /* function_decl  */
  YYSYMBOL_function_def = 76,              /* function_def  */
  YYSYMBOL_parameters = 77,                /* parameters  */
  YYSYMBOL_opt_instructions = 78,          /* opt_instructions  */
  YYSYMBOL_block = 79,                     /* block  */
  YYSYMBOL_stmts = 80,                     /* stmts  */
  YYSYMBOL_stmt = 81,                      /* stmt  */
  YYSYMBOL_return = 82,                    /* return  */
  YYSYMBOL_elif_chain = 83,                /* elif_chain  */
  YYSYMBOL_exprs = 84,                     /* exprs  */
  YYSYMBOL_exprs_opt = 85,                 /* exprs_opt  */
  YYSYMBOL_expr = 86,                      /* expr  */
  YYSYMBOL_literal = 87,                   /* literal  */
  YYSYMBOL_fordec = 88,                    /* fordec  */
  YYSYMBOL_fordecs = 89,                   /* fordecs  */
  YYSYMBOL_opt_forinit = 90,               /* opt_forinit  */
  YYSYMBOL_string = 91,                    /* string  */
  YYSYMBOL_tensor_literal = 92,            /* tensor_literal  */
  YYSYMBOL_lval = 93                       /* lval  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 78 "udf_parser.y"
  
//-- The rules below will be included in yyparse, the main parsing function.  

#line 218 "udf_parser.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   764

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      55,    59,    49,    47,    58,    48,    54,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
      45,    41,    46,    62,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,    44,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    42,    43,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    83,    83,    86,    87,    90,    91,    92,    95,    96,
      97,   100,   101,   102,   103,   104,   105,   106,   109,   110,
     113,   114,   117,   119,   121,   125,   126,   129,   130,   133,
     135,   139,   141,   145,   146,   149,   150,   153,   156,   157,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     172,   173,   176,   178,   180,   184,   185,   186,   190,   191,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   230,   231,   232,   236,   239,   240,
     243,   244,   245,   248,   251,   252,   255,   258,   259,   260
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tINTEGER", "tDOUBLE",
  "tIDENTIFIER", "tSTRING", "tINT", "tREAL", "tSTRING_TYPE", "tTENSOR",
  "tPTR", "tVOID", "tAUTO", "tPUBLIC", "tFORWARD", "tPRIVATE", "tIF",
  "tELIF", "tELSE", "tFOR", "tBREAK", "tCONTINUE", "tRETURN", "tWRITE",
  "tWRITELN", "tINPUT", "tNULLPTR", "tOBJECTS", "tSIZEOF", "tCAPACITY",
  "tRANK", "tDIMS", "tDIM", "tRESHAPE", "tCONTRACT", "tGE", "tLE", "tEQ",
  "tNE", "tIFX", "'='", "tOR", "tAND", "'~'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "tUNARY", "'@'", "'.'", "'('", "'['", "';'", "','",
  "')'", "'{'", "'}'", "'?'", "']'", "$accept", "file", "declarations",
  "declaration", "qualifier_opt", "type", "tensor_dims", "reshape_dims",
  "variable_decl", "vardecs", "opt_vardecs", "function_decl",
  "function_def", "parameters", "opt_instructions", "block", "stmts",
  "stmt", "return", "elif_chain", "exprs", "exprs_opt", "expr", "literal",
  "fordec", "fordecs", "opt_forinit", "string", "tensor_literal", "lval", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,  -127,  -127,     3,    10,  -127,    71,   -49,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   -15,   -10,  -127,    33,    48,
    -127,    57,   230,    21,   -28,  -127,    13,  -127,    24,   401,
     401,     4,  -127,    91,  -127,  -127,  -127,    19,  -127,  -127,
    -127,    40,    43,   401,   401,   401,   401,   401,   634,  -127,
      93,  -127,   -36,   634,    41,    71,  -127,   -30,  -127,   241,
     401,   401,   678,   -20,   -20,   438,    82,   634,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,    45,    59,   401,  -127,   401,  -127,   264,  -127,
      97,    -3,    41,  -127,   171,   463,   488,  -127,   401,  -127,
     634,   708,    99,    99,   700,   700,   656,   678,    99,    99,
     708,   708,   -20,   -20,   -20,   401,  -127,  -127,  -127,    58,
      60,   416,   634,    46,   264,   161,    75,  -127,  -127,  -127,
    -127,  -127,   634,   207,   401,   109,  -127,  -127,    61,    62,
      66,  -127,  -127,   333,   401,   401,    63,  -127,   161,  -127,
    -127,   588,  -127,   513,  -127,     9,  -127,   401,   388,  -127,
     611,   254,   287,  -127,  -127,  -127,  -127,   119,  -127,   538,
     118,   120,   320,  -127,    69,    74,  -127,  -127,  -127,  -127,
     161,    94,    95,   230,   401,    54,   401,   401,  -127,   320,
      84,    87,   161,  -127,   634,   634,   401,   401,  -127,    80,
     563,   161,   161,  -127,    54,  -127
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     9,    10,     0,     8,     3,     0,     0,     6,     7,
       1,     4,    11,    12,    13,     0,     0,    14,     0,     0,
       5,     0,     0,     0,    23,    18,     0,    15,     0,     0,
       0,     8,    17,     0,    16,    94,    95,   107,   104,    63,
      64,     0,     0,     0,     0,     0,     0,     0,    24,    60,
      96,    93,    61,    22,    30,     0,    33,     0,    19,     0,
       0,     0,    69,    67,    68,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,    70,    27,    32,
       0,     8,    29,    87,     0,     0,     0,    85,     0,   106,
      57,    76,    80,    79,    81,    84,    83,    82,    77,    78,
      71,    72,    73,    74,    75,     0,    88,    89,    90,     0,
       0,     0,    62,     0,    28,    35,    23,    34,    31,    86,
      65,    66,    56,     0,     0,     0,   108,    25,     0,     0,
       0,    43,    44,     0,     0,     0,     0,    49,    36,    38,
      45,     0,   109,     0,    20,     0,    26,     0,   100,    50,
       0,     0,     0,    37,    39,    40,    91,     0,    92,     0,
       0,     0,   103,    98,   101,     0,    51,    41,    42,    21,
       0,     0,     0,     0,    58,    46,     0,     0,    99,    59,
       0,     0,     0,    47,   102,    97,    58,     0,    54,     0,
       0,     0,     0,    48,    52,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,   140,     2,     1,  -127,  -127,   -27,  -127,
    -127,  -127,  -127,  -127,  -127,   -34,  -127,  -126,  -127,   -50,
     -38,   -40,   -29,  -127,   -24,  -127,  -127,  -127,  -127,  -127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,    55,   171,    26,   155,     7,   124,
     125,     8,     9,    57,   146,   147,   148,   149,   150,   193,
     189,   190,    67,    49,   173,   174,   175,    50,    51,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    53,     6,    10,    56,    86,     6,    19,    20,    66,
      -2,     1,     2,    30,    62,    63,    64,    65,     1,     2,
      89,    94,   164,    28,     1,     2,    87,    31,    91,    92,
      21,    95,    96,    82,    83,    22,    84,   100,    23,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    24,   185,   121,    90,   122,   128,    32,
      25,   123,    29,    54,   127,   100,   198,   167,   168,   132,
      34,    33,   191,   192,    59,   203,   204,   133,    12,    13,
      14,    15,    16,    17,    18,    35,    36,    37,    38,   116,
     117,   118,   119,   120,    58,    60,   151,   138,    61,    85,
     115,    88,   126,   137,   100,   153,   161,   162,    39,    40,
      41,    42,   154,   134,   160,   135,    30,   157,   156,   151,
     172,   158,   179,   181,   163,   182,    43,   183,   169,    44,
      45,   184,   100,   100,    68,   186,   187,    46,    47,   201,
      98,   196,   197,   100,    11,    99,    77,    78,    79,    80,
      81,   151,    82,    83,   205,    84,   199,   194,   195,   188,
     100,     0,     0,   151,    35,    36,    37,    38,   200,     0,
       0,     0,   151,   151,    35,    36,    37,    38,   139,     0,
       0,   140,   141,   142,   143,   144,   145,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,     0,     0,     0,     0,    43,     0,     0,    44,    45,
      35,    36,    37,    38,     0,    43,    46,    47,    44,    45,
       0,    88,     0,     0,     0,     0,    46,    47,     0,    98,
     129,     0,     0,    39,    40,    41,    42,    12,    13,    14,
      15,    16,    17,    27,    35,    36,    37,    38,     0,     0,
       0,    43,     0,     0,    44,    45,     0,    35,    36,    37,
      38,     0,    46,    47,     0,    98,   152,    39,    40,    41,
      42,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     1,     2,
      39,    40,    41,    42,     0,    43,     0,     0,    44,    45,
      35,    36,    37,    38,     0,     0,    46,    47,    43,     0,
      93,    44,    45,     0,     0,     0,     0,     0,     0,    46,
      47,   177,    98,    39,    40,    41,    42,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,     0,     0,     0,
       0,    43,     0,     0,    44,    45,    35,    36,    37,    38,
       0,     0,    46,    47,   178,    98,    39,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,     0,    43,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,    46,    47,    43,    98,     0,
      44,    45,     0,     0,     0,     0,     0,     0,    46,    47,
     159,    35,    36,    37,    38,    12,    13,    14,    15,    16,
      17,   170,     0,     0,    35,    36,    37,    38,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,     0,    43,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,    46,    47,    43,     0,     0,    44,    45,
       0,    68,    69,    70,    71,    72,    46,    47,    73,    74,
       0,    75,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,    84,    68,    69,    70,    71,    72,     0,   136,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,    84,     0,     0,    97,    68,    69,
      70,    71,    72,     0,     0,    73,    74,     0,    75,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,    84,
       0,     0,   130,    68,    69,    70,    71,    72,     0,     0,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,    84,     0,     0,   131,    68,    69,
      70,    71,    72,     0,     0,    73,    74,     0,    75,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,    84,
       0,     0,   166,    68,    69,    70,    71,    72,     0,     0,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,    84,     0,     0,   180,    68,    69,
      70,    71,    72,     0,     0,    73,    74,     0,    75,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,    84,
       0,     0,   202,    68,    69,    70,    71,    72,     0,     0,
      73,    74,     0,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,    84,   165,    68,    69,    70,    71,
      72,     0,     0,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,     0,    84,   176,    68,
      69,    70,    71,    72,     0,     0,    73,    74,     0,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
      84,    68,    69,    70,    71,    72,     0,     0,     0,    74,
       0,    75,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,    84,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,    84,    68,    69,    70,     0,     0,
       0,     0,     0,    68,     0,    75,    76,    77,    78,    79,
      80,    81,     0,    82,    83,     0,    84,    79,    80,    81,
       0,    82,    83,     0,    84
};

static const yytype_int16 yycheck[] =
{
      29,    30,     0,     0,    31,    41,     4,     6,    57,    47,
       0,    14,    15,    41,    43,    44,    45,    46,    14,    15,
      54,    59,   148,    22,    14,    15,    62,    55,    58,    59,
      45,    60,    61,    53,    54,    45,    56,    66,     5,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     5,   180,    84,    55,    86,    92,    46,
       3,    88,    41,    59,    91,    94,   192,    58,    59,    98,
      46,    58,    18,    19,    55,   201,   202,   115,     7,     8,
       9,    10,    11,    12,    13,     3,     4,     5,     6,    30,
      31,    32,    33,    34,     3,    55,   125,   124,    55,     6,
      55,    60,     5,    57,   133,   134,   144,   145,    26,    27,
      28,    29,     3,    55,   143,    55,    41,    55,    57,   148,
     158,    55,     3,     5,    61,     5,    44,    58,   157,    47,
      48,    57,   161,   162,    35,    41,    41,    55,    56,    59,
      58,    57,    55,   172,     4,    63,    47,    48,    49,    50,
      51,   180,    53,    54,   204,    56,   196,   186,   187,   183,
     189,    -1,    -1,   192,     3,     4,     5,     6,   197,    -1,
      -1,    -1,   201,   202,     3,     4,     5,     6,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    48,
       3,     4,     5,     6,    -1,    44,    55,    56,    47,    48,
      -1,    60,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,    -1,    -1,    26,    27,    28,    29,     7,     8,     9,
      10,    11,    12,    13,     3,     4,     5,     6,    -1,    -1,
      -1,    44,    -1,    -1,    47,    48,    -1,     3,     4,     5,
       6,    -1,    55,    56,    -1,    58,    59,    26,    27,    28,
      29,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      26,    27,    28,    29,    -1,    44,    -1,    -1,    47,    48,
       3,     4,     5,     6,    -1,    -1,    55,    56,    44,    -1,
      59,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    48,     3,     4,     5,     6,
      -1,    -1,    55,    56,    57,    58,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    44,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    44,    58,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    -1,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    44,    -1,    -1,    47,    48,
      -1,    35,    36,    37,    38,    39,    55,    56,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    56,    35,    36,    37,    38,    39,    -1,    63,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    56,    -1,    -1,    59,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    -1,    56,
      -1,    -1,    59,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    56,    -1,    -1,    59,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    -1,    56,
      -1,    -1,    59,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    56,    -1,    -1,    59,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    -1,    56,
      -1,    -1,    59,    35,    36,    37,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    56,    57,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    -1,    56,    57,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    -1,
      56,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    -1,    56,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    -1,    56,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    -1,    56,    49,    50,    51,
      -1,    53,    54,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    15,    65,    66,    67,    68,    72,    75,    76,
       0,    67,     7,     8,     9,    10,    11,    12,    13,    69,
      57,    45,    45,     5,     5,     3,    70,    13,    69,    41,
      41,    55,    46,    58,    46,     3,     4,     5,     6,    26,
      27,    28,    29,    44,    47,    48,    55,    56,    86,    87,
      91,    92,    93,    86,    59,    68,    72,    77,     3,    55,
      55,    55,    86,    86,    86,    86,    84,    86,    35,    36,
      37,    38,    39,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    53,    54,    56,     6,    41,    62,    60,    79,
      69,    58,    59,    59,    84,    86,    86,    59,    58,    63,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    55,    30,    31,    32,    33,
      34,    86,    86,    72,    73,    74,     5,    72,    79,    59,
      59,    59,    86,    84,    55,    55,    63,    57,    72,    17,
      20,    21,    22,    23,    24,    25,    78,    79,    80,    81,
      82,    86,    59,    86,     3,    71,    57,    55,    55,    57,
      86,    84,    84,    61,    81,    57,    59,    58,    59,    86,
      13,    69,    84,    88,    89,    90,    57,    57,    57,     3,
      59,     5,     5,    58,    57,    81,    41,    41,    88,    84,
      85,    18,    19,    83,    86,    86,    57,    55,    81,    85,
      86,    59,    59,    81,    81,    83
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    79,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    87,    88,    89,    89,
      90,    90,    90,    90,    91,    91,    92,    93,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     3,
       1,     3,     5,     3,     5,     2,     3,     0,     1,     6,
       5,     7,     6,     1,     3,     0,     1,     4,     1,     2,
       2,     3,     3,     1,     1,     1,     5,     6,     9,     1,
       2,     3,     5,     6,     2,     1,     3,     2,     0,     1,
       1,     1,     3,     1,     1,     4,     4,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     6,     6,     1,     1,     1,     1,     4,     1,     3,
       0,     1,     4,     1,     1,     2,     3,     1,     4,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (compiler, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, compiler); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (compiler);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, compiler);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, std::shared_ptr<cdk::compiler> compiler)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], compiler);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, compiler); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YY_USE (yyvaluep);
  YY_USE (compiler);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (std::shared_ptr<cdk::compiler> compiler)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* file: declarations  */
#line 83 "udf_parser.y"
                                       { compiler->ast((yyvsp[0].sequence)); }
#line 1423 "udf_parser.tab.c"
    break;

  case 3: /* declarations: declaration  */
#line 86 "udf_parser.y"
                                       { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1429 "udf_parser.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 87 "udf_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1435 "udf_parser.tab.c"
    break;

  case 5: /* declaration: variable_decl ';'  */
#line 90 "udf_parser.y"
                                       { (yyval.node) = (yyvsp[-1].node); }
#line 1441 "udf_parser.tab.c"
    break;

  case 6: /* declaration: function_decl  */
#line 91 "udf_parser.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 1447 "udf_parser.tab.c"
    break;

  case 7: /* declaration: function_def  */
#line 92 "udf_parser.y"
                                       { (yyval.node) = (yyvsp[0].node); }
#line 1453 "udf_parser.tab.c"
    break;

  case 8: /* qualifier_opt: %empty  */
#line 95 "udf_parser.y"
                                       { (yyval.qualifier_val) = tPRIVATE; }
#line 1459 "udf_parser.tab.c"
    break;

  case 9: /* qualifier_opt: tPUBLIC  */
#line 96 "udf_parser.y"
                                       { (yyval.qualifier_val) = tPUBLIC; }
#line 1465 "udf_parser.tab.c"
    break;

  case 10: /* qualifier_opt: tFORWARD  */
#line 97 "udf_parser.y"
                                       { (yyval.qualifier_val) = tFORWARD; }
#line 1471 "udf_parser.tab.c"
    break;

  case 11: /* type: tINT  */
#line 100 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_INT); }
#line 1477 "udf_parser.tab.c"
    break;

  case 12: /* type: tREAL  */
#line 101 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(8, cdk::TYPE_DOUBLE); }
#line 1483 "udf_parser.tab.c"
    break;

  case 13: /* type: tSTRING_TYPE  */
#line 102 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_STRING); }
#line 1489 "udf_parser.tab.c"
    break;

  case 14: /* type: tVOID  */
#line 103 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(0, cdk::TYPE_VOID); }
#line 1495 "udf_parser.tab.c"
    break;

  case 15: /* type: tAUTO  */
#line 104 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(0, cdk::TYPE_UNSPEC); }
#line 1501 "udf_parser.tab.c"
    break;

  case 16: /* type: tPTR '<' type '>'  */
#line 105 "udf_parser.y"
                                      { (yyval.type) = cdk::reference_type::create(4, (yyvsp[-1].type)); }
#line 1507 "udf_parser.tab.c"
    break;

  case 17: /* type: tTENSOR '<' tensor_dims '>'  */
#line 106 "udf_parser.y"
                                      { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_POINTER); }
#line 1513 "udf_parser.tab.c"
    break;

  case 18: /* tensor_dims: tINTEGER  */
#line 109 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, (yyvsp[0].i))); }
#line 1519 "udf_parser.tab.c"
    break;

  case 19: /* tensor_dims: tensor_dims ',' tINTEGER  */
#line 110 "udf_parser.y"
                                       { (yyval.sequence) = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, (yyvsp[0].i)), (yyvsp[-2].sequence)); }
#line 1525 "udf_parser.tab.c"
    break;

  case 20: /* reshape_dims: tINTEGER  */
#line 113 "udf_parser.y"
                                           { (yyval.sequence) = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, (yyvsp[0].i))); }
#line 1531 "udf_parser.tab.c"
    break;

  case 21: /* reshape_dims: reshape_dims ',' tINTEGER  */
#line 114 "udf_parser.y"
                                           { (yyval.sequence) = new cdk::sequence_node(LINE, new cdk::integer_node(LINE, (yyvsp[0].i)), (yyvsp[-2].sequence)); }
#line 1537 "udf_parser.tab.c"
    break;

  case 22: /* variable_decl: qualifier_opt type tIDENTIFIER '=' expr  */
#line 118 "udf_parser.y"
              { (yyval.node) = new udf::variable_declaration_node(LINE, (yyvsp[-4].qualifier_val), (yyvsp[-3].type), *(yyvsp[-2].s), (yyvsp[0].expression)); }
#line 1543 "udf_parser.tab.c"
    break;

  case 23: /* variable_decl: qualifier_opt type tIDENTIFIER  */
#line 120 "udf_parser.y"
              { (yyval.node) = new udf::variable_declaration_node(LINE, (yyvsp[-2].qualifier_val), (yyvsp[-1].type), *(yyvsp[0].s), nullptr); }
#line 1549 "udf_parser.tab.c"
    break;

  case 24: /* variable_decl: qualifier_opt tAUTO tIDENTIFIER '=' expr  */
#line 122 "udf_parser.y"
              { (yyval.node) = new udf::variable_declaration_node(LINE, (yyvsp[-4].qualifier_val), nullptr, *(yyvsp[-2].s), (yyvsp[0].expression)); }
#line 1555 "udf_parser.tab.c"
    break;

  case 25: /* vardecs: variable_decl ';'  */
#line 125 "udf_parser.y"
                                          { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-1].node));     }
#line 1561 "udf_parser.tab.c"
    break;

  case 26: /* vardecs: vardecs variable_decl ';'  */
#line 126 "udf_parser.y"
                                         { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-1].node), (yyvsp[-2].sequence)); }
#line 1567 "udf_parser.tab.c"
    break;

  case 27: /* opt_vardecs: %empty  */
#line 129 "udf_parser.y"
                           { (yyval.sequence) = NULL; }
#line 1573 "udf_parser.tab.c"
    break;

  case 28: /* opt_vardecs: vardecs  */
#line 130 "udf_parser.y"
                           { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1579 "udf_parser.tab.c"
    break;

  case 29: /* function_decl: qualifier_opt type tIDENTIFIER '(' parameters ')'  */
#line 134 "udf_parser.y"
              { (yyval.node) = new udf::function_declaration_node(LINE, (yyvsp[-5].qualifier_val), (yyvsp[-4].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1585 "udf_parser.tab.c"
    break;

  case 30: /* function_decl: qualifier_opt type tIDENTIFIER '(' ')'  */
#line 136 "udf_parser.y"
              { (yyval.node) = new udf::function_declaration_node(LINE, (yyvsp[-4].qualifier_val), (yyvsp[-3].type), *(yyvsp[-2].s), nullptr); }
#line 1591 "udf_parser.tab.c"
    break;

  case 31: /* function_def: qualifier_opt type tIDENTIFIER '(' parameters ')' block  */
#line 140 "udf_parser.y"
             { (yyval.node) = new udf::function_definition_node(LINE, (yyvsp[-6].qualifier_val), (yyvsp[-5].type), *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].block)); }
#line 1597 "udf_parser.tab.c"
    break;

  case 32: /* function_def: qualifier_opt type tIDENTIFIER '(' ')' block  */
#line 142 "udf_parser.y"
             { (yyval.node) = new udf::function_definition_node(LINE, (yyvsp[-5].qualifier_val), (yyvsp[-4].type), *(yyvsp[-3].s), nullptr, (yyvsp[0].block)); }
#line 1603 "udf_parser.tab.c"
    break;

  case 33: /* parameters: variable_decl  */
#line 145 "udf_parser.y"
                                          { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1609 "udf_parser.tab.c"
    break;

  case 34: /* parameters: parameters ',' variable_decl  */
#line 146 "udf_parser.y"
                                           { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-2].sequence)); }
#line 1615 "udf_parser.tab.c"
    break;

  case 35: /* opt_instructions: %empty  */
#line 149 "udf_parser.y"
                               { (yyval.sequence) = new cdk::sequence_node(LINE); }
#line 1621 "udf_parser.tab.c"
    break;

  case 36: /* opt_instructions: stmts  */
#line 150 "udf_parser.y"
                        { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1627 "udf_parser.tab.c"
    break;

  case 37: /* block: '{' opt_vardecs opt_instructions '}'  */
#line 153 "udf_parser.y"
                                                { (yyval.block) = new udf::block_node(LINE, (yyvsp[-2].sequence), (yyvsp[-1].sequence)); }
#line 1633 "udf_parser.tab.c"
    break;

  case 38: /* stmts: stmt  */
#line 156 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1639 "udf_parser.tab.c"
    break;

  case 39: /* stmts: stmts stmt  */
#line 157 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1645 "udf_parser.tab.c"
    break;

  case 40: /* stmt: expr ';'  */
#line 160 "udf_parser.y"
                                      { (yyval.node) = new udf::evaluation_node(LINE, (yyvsp[-1].expression)); }
#line 1651 "udf_parser.tab.c"
    break;

  case 41: /* stmt: tWRITE exprs ';'  */
#line 161 "udf_parser.y"
                                      { (yyval.node) = new udf::write_node(LINE, (yyvsp[-1].sequence)); }
#line 1657 "udf_parser.tab.c"
    break;

  case 42: /* stmt: tWRITELN exprs ';'  */
#line 162 "udf_parser.y"
                                      { (yyval.node) = new udf::write_node(LINE, (yyvsp[-1].sequence)); }
#line 1663 "udf_parser.tab.c"
    break;

  case 43: /* stmt: tBREAK  */
#line 163 "udf_parser.y"
                                 { (yyval.node) = new udf::break_node(LINE); }
#line 1669 "udf_parser.tab.c"
    break;

  case 44: /* stmt: tCONTINUE  */
#line 164 "udf_parser.y"
                                 { (yyval.node) = new udf::continue_node(LINE); }
#line 1675 "udf_parser.tab.c"
    break;

  case 45: /* stmt: return  */
#line 165 "udf_parser.y"
                                      { (yyval.node) = (yyvsp[0].node); }
#line 1681 "udf_parser.tab.c"
    break;

  case 46: /* stmt: tIF '(' expr ')' stmt  */
#line 166 "udf_parser.y"
                                        { (yyval.node) = new udf::if_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1687 "udf_parser.tab.c"
    break;

  case 47: /* stmt: tIF '(' expr ')' stmt elif_chain  */
#line 167 "udf_parser.y"
                                        { (yyval.node) = new udf::if_else_node(LINE, (yyvsp[-3].expression), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1693 "udf_parser.tab.c"
    break;

  case 48: /* stmt: tFOR '(' opt_forinit ';' exprs_opt ';' exprs_opt ')' stmt  */
#line 168 "udf_parser.y"
                                                                  { (yyval.node) = new udf::for_node(LINE, (yyvsp[-6].sequence), (yyvsp[-4].sequence), (yyvsp[-2].sequence), (yyvsp[0].node)); }
#line 1699 "udf_parser.tab.c"
    break;

  case 49: /* stmt: block  */
#line 169 "udf_parser.y"
                                      { (yyval.node) = (yyvsp[0].block); }
#line 1705 "udf_parser.tab.c"
    break;

  case 50: /* return: tRETURN ';'  */
#line 172 "udf_parser.y"
                                          { (yyval.node) = new udf::return_node(LINE, nullptr); }
#line 1711 "udf_parser.tab.c"
    break;

  case 51: /* return: tRETURN expr ';'  */
#line 173 "udf_parser.y"
                                      { (yyval.node) = new udf::return_node(LINE,  (yyvsp[-1].expression)); }
#line 1717 "udf_parser.tab.c"
    break;

  case 52: /* elif_chain: tELIF '(' expr ')' stmt  */
#line 177 "udf_parser.y"
           { (yyval.node) = new udf::if_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1723 "udf_parser.tab.c"
    break;

  case 53: /* elif_chain: tELIF '(' expr ')' stmt elif_chain  */
#line 179 "udf_parser.y"
           { (yyval.node) = new udf::if_else_node(LINE, (yyvsp[-3].expression), (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1729 "udf_parser.tab.c"
    break;

  case 54: /* elif_chain: tELSE stmt  */
#line 181 "udf_parser.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 1735 "udf_parser.tab.c"
    break;

  case 55: /* exprs: expr  */
#line 184 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression)); }
#line 1741 "udf_parser.tab.c"
    break;

  case 56: /* exprs: exprs ',' expr  */
#line 185 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-2].sequence)); }
#line 1747 "udf_parser.tab.c"
    break;

  case 57: /* exprs: exprs expr  */
#line 186 "udf_parser.y"
                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-1].sequence)); }
#line 1753 "udf_parser.tab.c"
    break;

  case 58: /* exprs_opt: %empty  */
#line 190 "udf_parser.y"
                                       { (yyval.sequence) = new cdk::sequence_node(LINE, NIL); }
#line 1759 "udf_parser.tab.c"
    break;

  case 59: /* exprs_opt: exprs  */
#line 191 "udf_parser.y"
                                       { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1765 "udf_parser.tab.c"
    break;

  case 60: /* expr: literal  */
#line 194 "udf_parser.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 1771 "udf_parser.tab.c"
    break;

  case 61: /* expr: lval  */
#line 195 "udf_parser.y"
                                      { (yyval.expression) = new cdk::rvalue_node(LINE, (yyvsp[0].lvalue)); }
#line 1777 "udf_parser.tab.c"
    break;

  case 62: /* expr: lval '=' expr  */
#line 196 "udf_parser.y"
                                      { (yyval.expression) = new cdk::assignment_node(LINE, (yyvsp[-2].lvalue), (yyvsp[0].expression)); }
#line 1783 "udf_parser.tab.c"
    break;

  case 63: /* expr: tINPUT  */
#line 197 "udf_parser.y"
                                      { (yyval.expression) = new udf::input_node(LINE); }
#line 1789 "udf_parser.tab.c"
    break;

  case 64: /* expr: tNULLPTR  */
#line 198 "udf_parser.y"
                                      { (yyval.expression) = new udf::nullptr_node(LINE); }
#line 1795 "udf_parser.tab.c"
    break;

  case 65: /* expr: tOBJECTS '(' expr ')'  */
#line 199 "udf_parser.y"
                                      { (yyval.expression) = new udf::stack_alloc_node(LINE, (yyvsp[-1].expression)); }
#line 1801 "udf_parser.tab.c"
    break;

  case 66: /* expr: tSIZEOF '(' expr ')'  */
#line 200 "udf_parser.y"
                                      { (yyval.expression) = new udf::sizeof_node(LINE, (yyvsp[-1].expression)); }
#line 1807 "udf_parser.tab.c"
    break;

  case 67: /* expr: '+' expr  */
#line 201 "udf_parser.y"
                                      { (yyval.expression) = new cdk::unary_plus_node(LINE, (yyvsp[0].expression)); }
#line 1813 "udf_parser.tab.c"
    break;

  case 68: /* expr: '-' expr  */
#line 202 "udf_parser.y"
                                      { (yyval.expression) = new cdk::unary_minus_node(LINE, (yyvsp[0].expression)); }
#line 1819 "udf_parser.tab.c"
    break;

  case 69: /* expr: '~' expr  */
#line 203 "udf_parser.y"
                                      { (yyval.expression) = new cdk::not_node(LINE, (yyvsp[0].expression)); }
#line 1825 "udf_parser.tab.c"
    break;

  case 70: /* expr: lval '?'  */
#line 204 "udf_parser.y"
                                      { (yyval.expression) = new udf::address_node(LINE, (yyvsp[-1].lvalue)); }
#line 1831 "udf_parser.tab.c"
    break;

  case 71: /* expr: expr '+' expr  */
#line 205 "udf_parser.y"
                                      { (yyval.expression) = new cdk::add_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1837 "udf_parser.tab.c"
    break;

  case 72: /* expr: expr '-' expr  */
#line 206 "udf_parser.y"
                                      { (yyval.expression) = new cdk::sub_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1843 "udf_parser.tab.c"
    break;

  case 73: /* expr: expr '*' expr  */
#line 207 "udf_parser.y"
                                      { (yyval.expression) = new cdk::mul_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1849 "udf_parser.tab.c"
    break;

  case 74: /* expr: expr '/' expr  */
#line 208 "udf_parser.y"
                                      { (yyval.expression) = new cdk::div_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1855 "udf_parser.tab.c"
    break;

  case 75: /* expr: expr '%' expr  */
#line 209 "udf_parser.y"
                                      { (yyval.expression) = new cdk::mod_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1861 "udf_parser.tab.c"
    break;

  case 76: /* expr: expr tCONTRACT expr  */
#line 210 "udf_parser.y"
                                      { (yyval.expression) = new udf::tensor_contract_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1867 "udf_parser.tab.c"
    break;

  case 77: /* expr: expr '<' expr  */
#line 211 "udf_parser.y"
                                      { (yyval.expression) = new cdk::lt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1873 "udf_parser.tab.c"
    break;

  case 78: /* expr: expr '>' expr  */
#line 212 "udf_parser.y"
                                      { (yyval.expression) = new cdk::gt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1879 "udf_parser.tab.c"
    break;

  case 79: /* expr: expr tLE expr  */
#line 213 "udf_parser.y"
                                      { (yyval.expression) = new cdk::le_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1885 "udf_parser.tab.c"
    break;

  case 80: /* expr: expr tGE expr  */
#line 214 "udf_parser.y"
                                      { (yyval.expression) = new cdk::ge_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1891 "udf_parser.tab.c"
    break;

  case 81: /* expr: expr tEQ expr  */
#line 215 "udf_parser.y"
                                      { (yyval.expression) = new cdk::eq_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1897 "udf_parser.tab.c"
    break;

  case 82: /* expr: expr tAND expr  */
#line 216 "udf_parser.y"
                                       { (yyval.expression) = new cdk::and_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1903 "udf_parser.tab.c"
    break;

  case 83: /* expr: expr tOR expr  */
#line 217 "udf_parser.y"
                                      { (yyval.expression) = new cdk::or_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1909 "udf_parser.tab.c"
    break;

  case 84: /* expr: expr tNE expr  */
#line 218 "udf_parser.y"
                                      { (yyval.expression) = new cdk::ne_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1915 "udf_parser.tab.c"
    break;

  case 85: /* expr: '(' expr ')'  */
#line 219 "udf_parser.y"
                                      { (yyval.expression) = (yyvsp[-1].expression); }
#line 1921 "udf_parser.tab.c"
    break;

  case 86: /* expr: tIDENTIFIER '(' exprs ')'  */
#line 220 "udf_parser.y"
                                      { (yyval.expression) = new udf::function_call_node(LINE, *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1927 "udf_parser.tab.c"
    break;

  case 87: /* expr: tIDENTIFIER '(' ')'  */
#line 221 "udf_parser.y"
                                      { (yyval.expression) = new udf::function_call_node(LINE, *(yyvsp[-2].s), nullptr); }
#line 1933 "udf_parser.tab.c"
    break;

  case 88: /* expr: expr '.' tCAPACITY  */
#line 222 "udf_parser.y"
                                      { (yyval.expression) = new udf::tensor_capacity_node(LINE, (yyvsp[-2].expression)); }
#line 1939 "udf_parser.tab.c"
    break;

  case 89: /* expr: expr '.' tRANK  */
#line 223 "udf_parser.y"
                                      { (yyval.expression) = new udf::tensor_rank_node(LINE, (yyvsp[-2].expression)); }
#line 1945 "udf_parser.tab.c"
    break;

  case 90: /* expr: expr '.' tDIMS  */
#line 224 "udf_parser.y"
                                      { (yyval.expression) = new udf::tensor_dimensions_node(LINE, (yyvsp[-2].expression)); }
#line 1951 "udf_parser.tab.c"
    break;

  case 91: /* expr: expr '.' tDIM '(' expr ')'  */
#line 225 "udf_parser.y"
                                      { (yyval.expression) = new udf::tensor_dimension_node(LINE, (yyvsp[-5].expression), (yyvsp[-1].expression)); }
#line 1957 "udf_parser.tab.c"
    break;

  case 92: /* expr: expr '.' tRESHAPE '(' reshape_dims ')'  */
#line 226 "udf_parser.y"
                                              { (yyval.expression) = new udf::tensor_reshape_node(LINE, (yyvsp[-5].expression), (yyvsp[-1].sequence)); }
#line 1963 "udf_parser.tab.c"
    break;

  case 93: /* expr: tensor_literal  */
#line 227 "udf_parser.y"
                                      { (yyval.expression) = (yyvsp[0].expression); }
#line 1969 "udf_parser.tab.c"
    break;

  case 94: /* literal: tINTEGER  */
#line 230 "udf_parser.y"
                                     { (yyval.expression) = new cdk::integer_node(LINE, (yyvsp[0].i)); }
#line 1975 "udf_parser.tab.c"
    break;

  case 95: /* literal: tDOUBLE  */
#line 231 "udf_parser.y"
                                     { (yyval.expression) = new cdk::double_node(LINE, (yyvsp[0].d)); }
#line 1981 "udf_parser.tab.c"
    break;

  case 96: /* literal: string  */
#line 232 "udf_parser.y"
                                    { (yyval.expression) = new cdk::string_node(LINE, (yyvsp[0].s)); }
#line 1987 "udf_parser.tab.c"
    break;

  case 97: /* fordec: type tIDENTIFIER '=' expr  */
#line 236 "udf_parser.y"
                                            { (yyval.node) = new udf::variable_declaration_node(LINE, tPRIVATE,  (yyvsp[-3].type), *(yyvsp[-2].s), (yyvsp[0].expression)); }
#line 1993 "udf_parser.tab.c"
    break;

  case 98: /* fordecs: fordec  */
#line 239 "udf_parser.y"
                                     { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node));     }
#line 1999 "udf_parser.tab.c"
    break;

  case 99: /* fordecs: fordecs ',' fordec  */
#line 240 "udf_parser.y"
                                     { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-2].sequence)); }
#line 2005 "udf_parser.tab.c"
    break;

  case 100: /* opt_forinit: %empty  */
#line 243 "udf_parser.y"
                           { (yyval.sequence) = new cdk::sequence_node(LINE, NIL); }
#line 2011 "udf_parser.tab.c"
    break;

  case 101: /* opt_forinit: fordecs  */
#line 244 "udf_parser.y"
                           { (yyval.sequence) = (yyvsp[0].sequence); }
#line 2017 "udf_parser.tab.c"
    break;

  case 102: /* opt_forinit: tAUTO tIDENTIFIER '=' expr  */
#line 245 "udf_parser.y"
                                             {
                   (yyval.sequence) = new cdk::sequence_node(LINE, new udf::variable_declaration_node(LINE, tPRIVATE, nullptr, *(yyvsp[-2].s), (yyvsp[0].expression)));
                }
#line 2025 "udf_parser.tab.c"
    break;

  case 103: /* opt_forinit: exprs  */
#line 248 "udf_parser.y"
                        { (yyval.sequence) =  (yyvsp[0].sequence); }
#line 2031 "udf_parser.tab.c"
    break;

  case 104: /* string: tSTRING  */
#line 251 "udf_parser.y"
                                                { (yyval.s) = (yyvsp[0].s); }
#line 2037 "udf_parser.tab.c"
    break;

  case 105: /* string: string tSTRING  */
#line 252 "udf_parser.y"
                                                { (yyval.s) = (yyvsp[-1].s); (yyval.s)->append(*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2043 "udf_parser.tab.c"
    break;

  case 106: /* tensor_literal: '[' exprs ']'  */
#line 255 "udf_parser.y"
                                     { (yyval.expression) = new udf::tensor_node(LINE, (yyvsp[-1].sequence)); }
#line 2049 "udf_parser.tab.c"
    break;

  case 107: /* lval: tIDENTIFIER  */
#line 258 "udf_parser.y"
                                     { (yyval.lvalue) = new cdk::variable_node(LINE, *(yyvsp[0].s)); }
#line 2055 "udf_parser.tab.c"
    break;

  case 108: /* lval: expr '[' expr ']'  */
#line 259 "udf_parser.y"
                                     { (yyval.lvalue) = new udf::index_node(LINE, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2061 "udf_parser.tab.c"
    break;

  case 109: /* lval: expr '@' '(' exprs ')'  */
#line 260 "udf_parser.y"
                                     { (yyval.lvalue) = new udf::tensor_index_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].sequence)); }
#line 2067 "udf_parser.tab.c"
    break;


#line 2071 "udf_parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (compiler, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, compiler);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, compiler);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (compiler, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, compiler);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, compiler);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 263 "udf_parser.y"
