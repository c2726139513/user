/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 15 "gram.y" /* yacc.c:339  */

#include "config.h"
#include "includes.h"
#include "radvd.h"
#include "defaults.h"

#define YYERROR_VERBOSE 1

#if 0 /* no longer necessary? */
#ifndef HAVE_IN6_ADDR_S6_ADDR
# ifdef __FreeBSD__
#  define s6_addr32 __u6_addr.__u6_addr32
#  define s6_addr16 __u6_addr.__u6_addr16
# endif
#endif
#endif

#define ADD_TO_LL(type, list, value) \
	do { \
		if (iface->list == NULL) \
			iface->list = value; \
		else { \
			type *current = iface->list; \
			while (current->next != NULL) \
				current = current->next; \
			current->next = value; \
		} \
	} while (0)


#line 97 "gram.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_GRAM_H_INCLUDED
# define YY_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INTERFACE = 258,
    T_PREFIX = 259,
    T_ROUTE = 260,
    T_RDNSS = 261,
    T_DNSSL = 262,
    T_CLIENTS = 263,
    T_LOWPANCO = 264,
    T_ABRO = 265,
    T_RASRCADDRESS = 266,
    STRING = 267,
    NUMBER = 268,
    SIGNEDNUMBER = 269,
    DECIMAL = 270,
    SWITCH = 271,
    IPV6ADDR = 272,
    INFINITY = 273,
    T_IgnoreIfMissing = 274,
    T_AdvSendAdvert = 275,
    T_MaxRtrAdvInterval = 276,
    T_MinRtrAdvInterval = 277,
    T_MinDelayBetweenRAs = 278,
    T_AdvManagedFlag = 279,
    T_AdvOtherConfigFlag = 280,
    T_AdvLinkMTU = 281,
    T_AdvRAMTU = 282,
    T_AdvReachableTime = 283,
    T_AdvRetransTimer = 284,
    T_AdvCurHopLimit = 285,
    T_AdvDefaultLifetime = 286,
    T_AdvDefaultPreference = 287,
    T_AdvSourceLLAddress = 288,
    T_AdvOnLink = 289,
    T_AdvAutonomous = 290,
    T_AdvValidLifetime = 291,
    T_AdvPreferredLifetime = 292,
    T_DeprecatePrefix = 293,
    T_DecrementLifetimes = 294,
    T_AdvRouterAddr = 295,
    T_AdvHomeAgentFlag = 296,
    T_AdvIntervalOpt = 297,
    T_AdvHomeAgentInfo = 298,
    T_Base6Interface = 299,
    T_Base6to4Interface = 300,
    T_UnicastOnly = 301,
    T_AdvRASolicitedUnicast = 302,
    T_HomeAgentPreference = 303,
    T_HomeAgentLifetime = 304,
    T_AdvRoutePreference = 305,
    T_AdvRouteLifetime = 306,
    T_RemoveRoute = 307,
    T_AdvRDNSSPreference = 308,
    T_AdvRDNSSOpenFlag = 309,
    T_AdvRDNSSLifetime = 310,
    T_FlushRDNSS = 311,
    T_AdvDNSSLLifetime = 312,
    T_FlushDNSSL = 313,
    T_AdvMobRtrSupportFlag = 314,
    T_AdvContextLength = 315,
    T_AdvContextCompressionFlag = 316,
    T_AdvContextID = 317,
    T_AdvLifeTime = 318,
    T_AdvContextPrefix = 319,
    T_AdvVersionLow = 320,
    T_AdvVersionHigh = 321,
    T_AdvValidLifeTime = 322,
    T_Adv6LBRaddress = 323,
    T_BAD_TOKEN = 324
  };
#endif
/* Tokens.  */
#define T_INTERFACE 258
#define T_PREFIX 259
#define T_ROUTE 260
#define T_RDNSS 261
#define T_DNSSL 262
#define T_CLIENTS 263
#define T_LOWPANCO 264
#define T_ABRO 265
#define T_RASRCADDRESS 266
#define STRING 267
#define NUMBER 268
#define SIGNEDNUMBER 269
#define DECIMAL 270
#define SWITCH 271
#define IPV6ADDR 272
#define INFINITY 273
#define T_IgnoreIfMissing 274
#define T_AdvSendAdvert 275
#define T_MaxRtrAdvInterval 276
#define T_MinRtrAdvInterval 277
#define T_MinDelayBetweenRAs 278
#define T_AdvManagedFlag 279
#define T_AdvOtherConfigFlag 280
#define T_AdvLinkMTU 281
#define T_AdvRAMTU 282
#define T_AdvReachableTime 283
#define T_AdvRetransTimer 284
#define T_AdvCurHopLimit 285
#define T_AdvDefaultLifetime 286
#define T_AdvDefaultPreference 287
#define T_AdvSourceLLAddress 288
#define T_AdvOnLink 289
#define T_AdvAutonomous 290
#define T_AdvValidLifetime 291
#define T_AdvPreferredLifetime 292
#define T_DeprecatePrefix 293
#define T_DecrementLifetimes 294
#define T_AdvRouterAddr 295
#define T_AdvHomeAgentFlag 296
#define T_AdvIntervalOpt 297
#define T_AdvHomeAgentInfo 298
#define T_Base6Interface 299
#define T_Base6to4Interface 300
#define T_UnicastOnly 301
#define T_AdvRASolicitedUnicast 302
#define T_HomeAgentPreference 303
#define T_HomeAgentLifetime 304
#define T_AdvRoutePreference 305
#define T_AdvRouteLifetime 306
#define T_RemoveRoute 307
#define T_AdvRDNSSPreference 308
#define T_AdvRDNSSOpenFlag 309
#define T_AdvRDNSSLifetime 310
#define T_FlushRDNSS 311
#define T_AdvDNSSLLifetime 312
#define T_FlushDNSSL 313
#define T_AdvMobRtrSupportFlag 314
#define T_AdvContextLength 315
#define T_AdvContextCompressionFlag 316
#define T_AdvContextID 317
#define T_AdvLifeTime 318
#define T_AdvContextPrefix 319
#define T_AdvVersionLow 320
#define T_AdvVersionHigh 321
#define T_AdvValidLifeTime 322
#define T_Adv6LBRaddress 323
#define T_BAD_TOKEN 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 138 "gram.y" /* yacc.c:355  */

	unsigned int		num;
	int			snum;
	double			dec;
	struct in6_addr		*addr;
	char			*str;
	struct AdvPrefix	*pinfo;
	struct AdvRoute		*rinfo;
	struct AdvRDNSS		*rdnssinfo;
	struct AdvDNSSL		*dnsslinfo;
	struct Clients		*ainfo;
	struct AdvLowpanCo	*lowpancoinfo;
	struct AdvAbro		*abroinfo;
	struct AdvRASrcAddress	*rasrcaddressinfo;

#line 291 "gram.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 154 "gram.y" /* yacc.c:358  */

extern int num_lines;
static char const * filename;
static struct Interface *iface;
static struct Interface *IfaceList;
static struct AdvPrefix *prefix;
static struct AdvRoute *route;
static struct AdvRDNSS *rdnss;
static struct AdvDNSSL *dnssl;
static struct AdvLowpanCo *lowpanco;
static struct AdvAbro  *abro;
static void cleanup(void);
#define ABORT	do { cleanup(); YYABORT; } while (0);
static void yyerror(char const * msg);

#line 323 "gram.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    72,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,    71,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   173,   173,   174,   177,   187,   216,   223,   224,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   238,   242,
     246,   250,   254,   258,   262,   266,   270,   274,   278,   282,
     288,   292,   296,   300,   304,   308,   312,   316,   320,   324,
     328,   332,   336,   340,   346,   352,   363,   377,   383,   394,
     408,   433,   464,   465,   466,   469,   470,   473,   479,   485,
     491,   498,   505,   511,   517,   531,   546,   554,   578,   579,
     582,   583,   587,   591,   595,   601,   608,   609,   612,   647,
     656,   657,   660,   661,   665,   669,   673,   688,   694,   701,
     702,   705,   747,   756,   757,   760,   761,   765,   777,   783,
     790,   803,   804,   807,   808,   811,   815,   819,   823,   829,
     836,   836,   838,   852,   872,   873,   876,   877,   880,   884,
     888,   894,   898
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INTERFACE", "T_PREFIX", "T_ROUTE",
  "T_RDNSS", "T_DNSSL", "T_CLIENTS", "T_LOWPANCO", "T_ABRO",
  "T_RASRCADDRESS", "STRING", "NUMBER", "SIGNEDNUMBER", "DECIMAL",
  "SWITCH", "IPV6ADDR", "INFINITY", "T_IgnoreIfMissing", "T_AdvSendAdvert",
  "T_MaxRtrAdvInterval", "T_MinRtrAdvInterval", "T_MinDelayBetweenRAs",
  "T_AdvManagedFlag", "T_AdvOtherConfigFlag", "T_AdvLinkMTU", "T_AdvRAMTU",
  "T_AdvReachableTime", "T_AdvRetransTimer", "T_AdvCurHopLimit",
  "T_AdvDefaultLifetime", "T_AdvDefaultPreference", "T_AdvSourceLLAddress",
  "T_AdvOnLink", "T_AdvAutonomous", "T_AdvValidLifetime",
  "T_AdvPreferredLifetime", "T_DeprecatePrefix", "T_DecrementLifetimes",
  "T_AdvRouterAddr", "T_AdvHomeAgentFlag", "T_AdvIntervalOpt",
  "T_AdvHomeAgentInfo", "T_Base6Interface", "T_Base6to4Interface",
  "T_UnicastOnly", "T_AdvRASolicitedUnicast", "T_HomeAgentPreference",
  "T_HomeAgentLifetime", "T_AdvRoutePreference", "T_AdvRouteLifetime",
  "T_RemoveRoute", "T_AdvRDNSSPreference", "T_AdvRDNSSOpenFlag",
  "T_AdvRDNSSLifetime", "T_FlushRDNSS", "T_AdvDNSSLLifetime",
  "T_FlushDNSSL", "T_AdvMobRtrSupportFlag", "T_AdvContextLength",
  "T_AdvContextCompressionFlag", "T_AdvContextID", "T_AdvLifeTime",
  "T_AdvContextPrefix", "T_AdvVersionLow", "T_AdvVersionHigh",
  "T_AdvValidLifeTime", "T_Adv6LBRaddress", "T_BAD_TOKEN", "'{'", "'}'",
  "';'", "'/'", "$accept", "grammar", "ifacedef", "ifacehead", "name",
  "ifaceparams", "ifaceparam", "ifaceval", "clientslist",
  "v6addrlist_clients", "rasrcaddresslist", "v6addrlist_rasrcaddress",
  "prefixdef", "prefixhead", "optional_prefixplist", "prefixplist",
  "prefixparms", "routedef", "routehead", "optional_routeplist",
  "routeplist", "routeparms", "rdnssdef", "rdnssaddrs", "rdnssaddr",
  "rdnsshead", "optional_rdnssplist", "rdnssplist", "rdnssparms",
  "dnssldef", "dnsslsuffixes", "dnsslsuffix", "dnsslhead",
  "optional_dnsslplist", "dnsslplist", "dnsslparms", "lowpancodef",
  "lowpancohead", "optional_lowpancoplist", "lowpancoplist",
  "lowpancoparms", "abrodef", "abrohead", "abrohead_new", "abrohead_dep",
  "optional_abroplist", "abroplist", "abroparms", "number_or_infinity", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     123,   125,    59,    47
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    24,    58,   -96,   -11,   -96,   -96,   -96,   -96,   -96,
      -4,    43,    48,    49,    64,     7,   -96,    63,    26,    65,
      83,    78,    79,    82,    84,    85,    89,    90,    91,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   106,
     107,   105,    37,   -96,   -96,   -96,   -96,   -96,    28,   -96,
      41,   -96,    42,   -96,    52,   -96,    53,   -96,    54,   -96,
     -96,    55,    56,   -96,    49,   -96,   -96,    64,   -96,   108,
      57,   109,    59,    60,    61,    62,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    80,    81,
      86,    87,    88,    92,   103,   104,   110,   111,   -96,    12,
     112,    38,   -43,   -17,   -29,    19,   114,   122,   -96,   -96,
     113,    -9,   123,   115,    -8,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   121,   134,    17,    17,   135,   138,   139,    24,    24,
     -96,    34,   -96,   -96,   142,    17,   141,   117,    38,   -96,
     148,   146,    17,   147,   118,   -43,   -96,    17,   149,   119,
     -17,   -96,   153,   151,   155,   156,   120,   -29,   -96,   157,
     158,   159,   124,    19,   -96,   -96,   -96,   -96,   125,   126,
     -96,   -96,   127,   128,   129,   130,   -96,   -96,   131,   132,
     133,   136,   137,   140,   143,   -96,   -96,   144,   145,   150,
     152,   -96,   154,   160,   161,   162,   163,   -96,   164,   165,
     166,   -96,   167,   168,   169,   170,   171,   -96,   172,   173,
     174,   175,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     0,     6,     5,     1,     2,     8,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     9,    11,    17,    10,    52,    12,
       0,    13,     0,    14,     0,    15,     0,    16,     0,   110,
     111,     0,     0,    78,    79,    77,    91,    92,    90,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,    68,    80,    93,   101,   114,     0,     0,    76,    89,
       0,     0,     0,     0,     0,    24,    25,    19,    22,    18,
      21,    20,    23,    26,    27,    28,    29,    30,    31,    34,
      32,    33,    35,    38,    36,    37,    41,    42,    39,    40,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,    56,    50,     0,     0,     0,     0,    69,    71,
       0,     0,     0,     0,     0,    81,    83,     0,     0,     0,
      94,    96,     0,     0,     0,     0,     0,   102,   104,     0,
       0,     0,     0,   115,   117,    51,    67,    45,     0,     0,
     113,    48,     0,     0,     0,     0,   121,   122,     0,     0,
       0,     0,     0,     0,     0,    54,    55,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,    82,     0,     0,
       0,    95,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,   116,    46,    44,    49,    47,    57,    58,    60,
      61,    62,    63,    59,    64,    65,    72,    73,    74,    66,
      84,    85,    86,    87,    75,    97,    98,    88,   105,   106,
     107,   108,    99,   118,   119,   120,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   176,   -96,   -95,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,    22,   -96,   -96,   -96,
     -96,    16,   -96,   -96,   116,   -96,   -96,   -96,    14,   -96,
     -96,   181,   -96,   -96,   -96,    23,   -96,   -96,   -96,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,    -2,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     6,    10,    43,    44,    45,   111,
      46,   114,    47,    48,   100,   151,   152,    49,    50,   157,
     158,   159,    51,    64,    65,    52,   164,   165,   166,    53,
      67,    68,    54,   169,   170,   171,    55,    56,   176,   177,
     178,    57,    58,    59,    60,   182,   183,   184,   198
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      11,    12,    13,    14,    15,    16,    17,    18,   188,   192,
     160,   161,   162,   163,     1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     196,   172,   173,   174,   175,   197,     5,    34,    35,    36,
     167,   168,    37,    38,    39,    40,   141,   142,   143,   144,
     145,   146,   147,   203,   204,    41,   148,   149,     7,     9,
      61,     1,   189,   193,   199,    62,    63,    42,   141,   142,
     143,   144,   145,   146,   147,   208,    66,    69,   148,   149,
      70,    72,   214,   150,   179,   180,   181,   218,   154,   155,
     156,    74,    76,    75,    77,    78,    71,    79,    99,    73,
      80,    81,    82,    83,    84,   205,    85,    86,    87,    98,
      88,   101,   102,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   103,   104,   105,   110,   113,   185,   106,   107,
     112,   115,   116,   117,   118,   186,   190,   194,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     195,   200,   131,   132,   201,   202,   207,   209,   133,   134,
     135,   212,   213,   215,   136,   219,   222,   223,   224,   225,
     228,   229,   230,   206,   211,   137,   138,   227,     8,   217,
     108,   232,   139,   140,   153,   187,     0,   191,   210,   216,
     220,   226,     0,   221,     0,   231,     0,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,   242,   243,
       0,     0,   244,     0,     0,   245,   246,   247,     0,     0,
       0,     0,   248,     0,   249,     0,   250,     0,     0,     0,
       0,     0,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   109
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,     7,     8,     9,    10,    11,    17,    17,
      53,    54,    55,    56,     3,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      13,    60,    61,    62,    63,    18,    12,    41,    42,    43,
      57,    58,    46,    47,    48,    49,    34,    35,    36,    37,
      38,    39,    40,   148,   149,    59,    44,    45,     0,    70,
      17,     3,    71,    71,   144,    17,    17,    71,    34,    35,
      36,    37,    38,    39,    40,   155,    12,    70,    44,    45,
      17,    16,   162,    71,    65,    66,    67,   167,    50,    51,
      52,    13,    13,    15,    15,    13,    70,    15,    70,    16,
      16,    16,    13,    13,    13,    71,    13,    13,    13,    72,
      14,    70,    70,    16,    16,    16,    16,    16,    16,    13,
      13,    16,    70,    70,    70,    17,    17,    13,    73,    73,
      73,    72,    72,    72,    72,    13,    13,    16,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      16,    16,    72,    72,    16,    16,    14,    16,    72,    72,
      72,    13,    16,    16,    72,    16,    13,    16,    13,    13,
      13,    13,    13,   151,   158,    72,    72,   177,     2,   165,
      64,   183,    72,    72,    72,    72,    -1,    72,    71,    71,
      71,    71,    -1,   170,    -1,    71,    -1,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    -1,    -1,    72,    72,
      -1,    -1,    72,    -1,    -1,    72,    72,    72,    -1,    -1,
      -1,    -1,    72,    -1,    72,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    75,    76,    77,    12,    78,     0,    76,    70,
      79,     4,     5,     6,     7,     8,     9,    10,    11,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    41,    42,    43,    46,    47,    48,
      49,    59,    71,    80,    81,    82,    84,    86,    87,    91,
      92,    96,    99,   103,   106,   110,   111,   115,   116,   117,
     118,    17,    17,    17,    97,    98,    12,   104,   105,    70,
      17,    70,    16,    16,    13,    15,    13,    15,    13,    15,
      16,    16,    13,    13,    13,    13,    13,    13,    14,    16,
      16,    16,    16,    16,    16,    13,    13,    16,    72,    70,
      88,    70,    70,    70,    70,    70,    73,    73,    98,   105,
      17,    83,    73,    17,    85,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    34,    35,    36,    37,    38,    39,    40,    44,    45,
      71,    89,    90,    72,    50,    51,    52,    93,    94,    95,
      53,    54,    55,    56,   100,   101,   102,    57,    58,   107,
     108,   109,    60,    61,    62,    63,   112,   113,   114,    65,
      66,    67,   119,   120,   121,    13,    13,    72,    17,    71,
      13,    72,    17,    71,    16,    16,    13,    18,   122,   122,
      16,    16,    16,    78,    78,    71,    90,    14,   122,    16,
      71,    95,    13,    16,   122,    16,    71,   102,   122,    16,
      71,   109,    13,    16,    13,    13,    71,   114,    13,    13,
      13,    71,   121,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    76,    77,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    83,    83,    84,    85,    85,
      86,    87,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    92,    93,    93,
      94,    94,    95,    95,    95,    96,    97,    97,    98,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   103,   104,
     104,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   114,   114,   115,
     116,   116,   117,   118,   119,   119,   120,   120,   121,   121,
     121,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     2,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     2,     3,     5,     2,     3,
       3,     4,     0,     2,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     0,     1,
       2,     1,     3,     3,     3,     5,     2,     1,     1,     2,
       0,     1,     2,     1,     3,     3,     3,     3,     5,     2,
       1,     1,     2,     0,     1,     2,     1,     3,     3,     5,
       1,     0,     1,     2,     1,     3,     3,     3,     3,     5,
       1,     1,     2,     4,     0,     1,     2,     1,     3,     3,
       3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 4:
#line 178 "gram.y" /* yacc.c:1646  */
    {
			dlog(LOG_DEBUG, 4, "%s interface definition ok", iface->props.name);

			iface->next = IfaceList;
			IfaceList = iface;

			iface = NULL;
		}
#line 1609 "gram.c" /* yacc.c:1646  */
    break;

  case 5:
#line 188 "gram.y" /* yacc.c:1646  */
    {
			iface = IfaceList;

			while (iface)
			{
				if (!strcmp((yyvsp[0].str), iface->props.name))
				{
					flog(LOG_ERR, "duplicate interface "
						"definition for %s", (yyvsp[0].str));
					ABORT;
				}
				iface = iface->next;
			}

			iface = malloc(sizeof(struct Interface));

			if (iface == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			iface_init_defaults(iface);
			strncpy(iface->props.name, (yyvsp[0].str), IFNAMSIZ-1);
			iface->props.name[IFNAMSIZ-1] = '\0';
			iface->lineno = num_lines;
		}
#line 1640 "gram.c" /* yacc.c:1646  */
    break;

  case 6:
#line 217 "gram.y" /* yacc.c:1646  */
    {
			/* check vality */
			(yyval.str) = (yyvsp[0].str);
		}
#line 1649 "gram.c" /* yacc.c:1646  */
    break;

  case 10:
#line 228 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvPrefix, AdvPrefixList, (yyvsp[0].pinfo)); }
#line 1655 "gram.c" /* yacc.c:1646  */
    break;

  case 11:
#line 229 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct Clients, ClientList, (yyvsp[0].ainfo)); }
#line 1661 "gram.c" /* yacc.c:1646  */
    break;

  case 12:
#line 230 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvRoute, AdvRouteList, (yyvsp[0].rinfo)); }
#line 1667 "gram.c" /* yacc.c:1646  */
    break;

  case 13:
#line 231 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvRDNSS, AdvRDNSSList, (yyvsp[0].rdnssinfo)); }
#line 1673 "gram.c" /* yacc.c:1646  */
    break;

  case 14:
#line 232 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvDNSSL, AdvDNSSLList, (yyvsp[0].dnsslinfo)); }
#line 1679 "gram.c" /* yacc.c:1646  */
    break;

  case 15:
#line 233 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvLowpanCo, AdvLowpanCoList, (yyvsp[0].lowpancoinfo)); }
#line 1685 "gram.c" /* yacc.c:1646  */
    break;

  case 16:
#line 234 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvAbro, AdvAbroList, (yyvsp[0].abroinfo)); }
#line 1691 "gram.c" /* yacc.c:1646  */
    break;

  case 17:
#line 235 "gram.y" /* yacc.c:1646  */
    { ADD_TO_LL(struct AdvRASrcAddress, AdvRASrcAddressList, (yyvsp[0].rasrcaddressinfo)); }
#line 1697 "gram.c" /* yacc.c:1646  */
    break;

  case 18:
#line 239 "gram.y" /* yacc.c:1646  */
    {
			iface->MinRtrAdvInterval = (yyvsp[-1].num);
		}
#line 1705 "gram.c" /* yacc.c:1646  */
    break;

  case 19:
#line 243 "gram.y" /* yacc.c:1646  */
    {
			iface->MaxRtrAdvInterval = (yyvsp[-1].num);
		}
#line 1713 "gram.c" /* yacc.c:1646  */
    break;

  case 20:
#line 247 "gram.y" /* yacc.c:1646  */
    {
			iface->MinDelayBetweenRAs = (yyvsp[-1].num);
		}
#line 1721 "gram.c" /* yacc.c:1646  */
    break;

  case 21:
#line 251 "gram.y" /* yacc.c:1646  */
    {
			iface->MinRtrAdvInterval = (yyvsp[-1].dec);
		}
#line 1729 "gram.c" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "gram.y" /* yacc.c:1646  */
    {
			iface->MaxRtrAdvInterval = (yyvsp[-1].dec);
		}
#line 1737 "gram.c" /* yacc.c:1646  */
    break;

  case 23:
#line 259 "gram.y" /* yacc.c:1646  */
    {
			iface->MinDelayBetweenRAs = (yyvsp[-1].dec);
		}
#line 1745 "gram.c" /* yacc.c:1646  */
    break;

  case 24:
#line 263 "gram.y" /* yacc.c:1646  */
    {
			iface->IgnoreIfMissing = (yyvsp[-1].num);
		}
#line 1753 "gram.c" /* yacc.c:1646  */
    break;

  case 25:
#line 267 "gram.y" /* yacc.c:1646  */
    {
			iface->AdvSendAdvert = (yyvsp[-1].num);
		}
#line 1761 "gram.c" /* yacc.c:1646  */
    break;

  case 26:
#line 271 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvManagedFlag = (yyvsp[-1].num);
		}
#line 1769 "gram.c" /* yacc.c:1646  */
    break;

  case 27:
#line 275 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvOtherConfigFlag = (yyvsp[-1].num);
		}
#line 1777 "gram.c" /* yacc.c:1646  */
    break;

  case 28:
#line 279 "gram.y" /* yacc.c:1646  */
    {
			iface->AdvLinkMTU = (yyvsp[-1].num);
		}
#line 1785 "gram.c" /* yacc.c:1646  */
    break;

  case 29:
#line 283 "gram.y" /* yacc.c:1646  */
    {
			iface->AdvRAMTU = (yyvsp[-1].num);
			iface->AdvRAMTU = MAX(MIN_AdvLinkMTU, iface->AdvRAMTU);
			iface->AdvRAMTU = MIN(MAX_AdvLinkMTU, iface->AdvRAMTU);
		}
#line 1795 "gram.c" /* yacc.c:1646  */
    break;

  case 30:
#line 289 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvReachableTime = (yyvsp[-1].num);
		}
#line 1803 "gram.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvRetransTimer = (yyvsp[-1].num);
		}
#line 1811 "gram.c" /* yacc.c:1646  */
    break;

  case 32:
#line 297 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvDefaultLifetime = (yyvsp[-1].num);
		}
#line 1819 "gram.c" /* yacc.c:1646  */
    break;

  case 33:
#line 301 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvDefaultPreference = (yyvsp[-1].snum);
		}
#line 1827 "gram.c" /* yacc.c:1646  */
    break;

  case 34:
#line 305 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvCurHopLimit = (yyvsp[-1].num);
		}
#line 1835 "gram.c" /* yacc.c:1646  */
    break;

  case 35:
#line 309 "gram.y" /* yacc.c:1646  */
    {
			iface->AdvSourceLLAddress = (yyvsp[-1].num);
		}
#line 1843 "gram.c" /* yacc.c:1646  */
    break;

  case 36:
#line 313 "gram.y" /* yacc.c:1646  */
    {
			iface->mipv6.AdvIntervalOpt = (yyvsp[-1].num);
		}
#line 1851 "gram.c" /* yacc.c:1646  */
    break;

  case 37:
#line 317 "gram.y" /* yacc.c:1646  */
    {
			iface->mipv6.AdvHomeAgentInfo = (yyvsp[-1].num);
		}
#line 1859 "gram.c" /* yacc.c:1646  */
    break;

  case 38:
#line 321 "gram.y" /* yacc.c:1646  */
    {
			iface->ra_header_info.AdvHomeAgentFlag = (yyvsp[-1].num);
		}
#line 1867 "gram.c" /* yacc.c:1646  */
    break;

  case 39:
#line 325 "gram.y" /* yacc.c:1646  */
    {
			iface->mipv6.HomeAgentPreference = (yyvsp[-1].num);
		}
#line 1875 "gram.c" /* yacc.c:1646  */
    break;

  case 40:
#line 329 "gram.y" /* yacc.c:1646  */
    {
			iface->mipv6.HomeAgentLifetime = (yyvsp[-1].num);
		}
#line 1883 "gram.c" /* yacc.c:1646  */
    break;

  case 41:
#line 333 "gram.y" /* yacc.c:1646  */
    {
			iface->UnicastOnly = (yyvsp[-1].num);
		}
#line 1891 "gram.c" /* yacc.c:1646  */
    break;

  case 42:
#line 337 "gram.y" /* yacc.c:1646  */
    {
			iface->AdvRASolicitedUnicast = (yyvsp[-1].num);
		}
#line 1899 "gram.c" /* yacc.c:1646  */
    break;

  case 43:
#line 341 "gram.y" /* yacc.c:1646  */
    {
			iface->mipv6.AdvMobRtrSupportFlag = (yyvsp[-1].num);
		}
#line 1907 "gram.c" /* yacc.c:1646  */
    break;

  case 44:
#line 347 "gram.y" /* yacc.c:1646  */
    {
			(yyval.ainfo) = (yyvsp[-2].ainfo);
		}
#line 1915 "gram.c" /* yacc.c:1646  */
    break;

  case 45:
#line 353 "gram.y" /* yacc.c:1646  */
    {
			struct Clients *new = calloc(1, sizeof(struct Clients));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->Address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			(yyval.ainfo) = new;
		}
#line 1930 "gram.c" /* yacc.c:1646  */
    break;

  case 46:
#line 364 "gram.y" /* yacc.c:1646  */
    {
			struct Clients *new = calloc(1, sizeof(struct Clients));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->Address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			new->next = (yyvsp[-2].ainfo);
			(yyval.ainfo) = new;
		}
#line 1946 "gram.c" /* yacc.c:1646  */
    break;

  case 47:
#line 378 "gram.y" /* yacc.c:1646  */
    {
			(yyval.rasrcaddressinfo) = (yyvsp[-2].rasrcaddressinfo);
		}
#line 1954 "gram.c" /* yacc.c:1646  */
    break;

  case 48:
#line 384 "gram.y" /* yacc.c:1646  */
    {
			struct AdvRASrcAddress *new = calloc(1, sizeof(struct AdvRASrcAddress));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			(yyval.rasrcaddressinfo) = new;
		}
#line 1969 "gram.c" /* yacc.c:1646  */
    break;

  case 49:
#line 395 "gram.y" /* yacc.c:1646  */
    {
			struct AdvRASrcAddress *new = calloc(1, sizeof(struct AdvRASrcAddress));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			new->next = (yyvsp[-2].rasrcaddressinfo);
			(yyval.rasrcaddressinfo) = new;
		}
#line 1985 "gram.c" /* yacc.c:1646  */
    break;

  case 50:
#line 409 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {

				if (prefix->AdvPreferredLifetime > prefix->AdvValidLifetime)
				{
					flog(LOG_ERR, "AdvValidLifeTime must be "
						"greater than AdvPreferredLifetime in %s, line %d",
						filename, num_lines);
					ABORT;
				}

				if ( prefix->if6[0] )
				{
					if (prefix->PrefixLen != 64) {
						flog(LOG_ERR, "only /64 is allowed with Base6Interface.  %s:%d", filename, num_lines);
						ABORT;
					}
				}
			}
			(yyval.pinfo) = prefix;
			prefix = NULL;
		}
#line 2012 "gram.c" /* yacc.c:1646  */
    break;

  case 51:
#line 434 "gram.y" /* yacc.c:1646  */
    {
			struct in6_addr zeroaddr;
			memset(&zeroaddr, 0, sizeof(zeroaddr));

#ifndef HAVE_IFADDRS_H	// all-zeros prefix is a way to tell us to get the prefix from the interface config
			if (!memcmp((yyvsp[-2].addr), &zeroaddr, sizeof(struct in6_addr))) {
				flog(LOG_WARNING, "invalid all-zeros prefix in %s, line %d", filename, num_lines);
			}
#endif
			prefix = malloc(sizeof(struct AdvPrefix));

			if (prefix == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			prefix_init_defaults(prefix);

			if ((yyvsp[0].num) > MAX_PrefixLen)
			{
				flog(LOG_ERR, "invalid prefix length in %s, line %d", filename, num_lines);
				ABORT;
			}

			prefix->PrefixLen = (yyvsp[0].num);

			memcpy(&prefix->Prefix, (yyvsp[-2].addr), sizeof(struct in6_addr));
		}
#line 2045 "gram.c" /* yacc.c:1646  */
    break;

  case 57:
#line 474 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->AdvOnLinkFlag = (yyvsp[-1].num);
			}
		}
#line 2055 "gram.c" /* yacc.c:1646  */
    break;

  case 58:
#line 480 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->AdvAutonomousFlag = (yyvsp[-1].num);
			}
		}
#line 2065 "gram.c" /* yacc.c:1646  */
    break;

  case 59:
#line 486 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->AdvRouterAddr = (yyvsp[-1].num);
			}
		}
#line 2075 "gram.c" /* yacc.c:1646  */
    break;

  case 60:
#line 492 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->AdvValidLifetime = (yyvsp[-1].num);
				prefix->curr_validlft = (yyvsp[-1].num);
			}
		}
#line 2086 "gram.c" /* yacc.c:1646  */
    break;

  case 61:
#line 499 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->AdvPreferredLifetime = (yyvsp[-1].num);
				prefix->curr_preferredlft = (yyvsp[-1].num);
			}
		}
#line 2097 "gram.c" /* yacc.c:1646  */
    break;

  case 62:
#line 506 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->DeprecatePrefixFlag = (yyvsp[-1].num);
			}
		}
#line 2107 "gram.c" /* yacc.c:1646  */
    break;

  case 63:
#line 512 "gram.y" /* yacc.c:1646  */
    {
			if (prefix) {
				prefix->DecrementLifetimesFlag = (yyvsp[-1].num);
			}
		}
#line 2117 "gram.c" /* yacc.c:1646  */
    break;

  case 64:
#line 518 "gram.y" /* yacc.c:1646  */
    {
#ifndef HAVE_IFADDRS_H
			flog(LOG_ERR, "Base6Interface not supported in %s, line %d", filename, num_lines);
			ABORT;
#else
			if (prefix) {
				dlog(LOG_DEBUG, 4, "using prefixes on interface %s for prefixes on interface %s", (yyvsp[-1].str), iface->props.name);
				strncpy(prefix->if6, (yyvsp[-1].str), IFNAMSIZ-1);
				prefix->if6[IFNAMSIZ-1] = '\0';
			}
#endif
		}
#line 2134 "gram.c" /* yacc.c:1646  */
    break;

  case 65:
#line 532 "gram.y" /* yacc.c:1646  */
    {
#ifndef HAVE_IFADDRS_H
			flog(LOG_ERR, "Base6to4Interface not supported in %s, line %d", filename, num_lines);
			ABORT;
#else
			if (prefix) {
				dlog(LOG_DEBUG, 4, "using interface %s for 6to4 prefixes on interface %s", (yyvsp[-1].str), iface->props.name);
				strncpy(prefix->if6to4, (yyvsp[-1].str), IFNAMSIZ-1);
				prefix->if6to4[IFNAMSIZ-1] = '\0';
			}
#endif
		}
#line 2151 "gram.c" /* yacc.c:1646  */
    break;

  case 66:
#line 547 "gram.y" /* yacc.c:1646  */
    {
			(yyval.rinfo) = route;
			route = NULL;
		}
#line 2160 "gram.c" /* yacc.c:1646  */
    break;

  case 67:
#line 555 "gram.y" /* yacc.c:1646  */
    {
			route = malloc(sizeof(struct AdvRoute));

			if (route == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			route_init_defaults(route, iface);

			if ((yyvsp[0].num) > MAX_PrefixLen)
			{
				flog(LOG_ERR, "invalid route prefix length in %s, line %d", filename, num_lines);
				ABORT;
			}

			route->PrefixLen = (yyvsp[0].num);

			memcpy(&route->Prefix, (yyvsp[-2].addr), sizeof(struct in6_addr));
		}
#line 2185 "gram.c" /* yacc.c:1646  */
    break;

  case 72:
#line 588 "gram.y" /* yacc.c:1646  */
    {
			route->AdvRoutePreference = (yyvsp[-1].snum);
		}
#line 2193 "gram.c" /* yacc.c:1646  */
    break;

  case 73:
#line 592 "gram.y" /* yacc.c:1646  */
    {
			route->AdvRouteLifetime = (yyvsp[-1].num);
		}
#line 2201 "gram.c" /* yacc.c:1646  */
    break;

  case 74:
#line 596 "gram.y" /* yacc.c:1646  */
    {
			route->RemoveRouteFlag = (yyvsp[-1].num);
		}
#line 2209 "gram.c" /* yacc.c:1646  */
    break;

  case 75:
#line 602 "gram.y" /* yacc.c:1646  */
    {
			(yyval.rdnssinfo) = rdnss;
			rdnss = NULL;
		}
#line 2218 "gram.c" /* yacc.c:1646  */
    break;

  case 78:
#line 613 "gram.y" /* yacc.c:1646  */
    {
			if (!rdnss) {
				/* first IP found */
				rdnss = malloc(sizeof(struct AdvRDNSS));

				if (rdnss == NULL) {
					flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
					ABORT;
				}

				rdnss_init_defaults(rdnss, iface);
			}

			switch (rdnss->AdvRDNSSNumber) {
				case 0:
					memcpy(&rdnss->AdvRDNSSAddr1, (yyvsp[0].addr), sizeof(struct in6_addr));
					rdnss->AdvRDNSSNumber++;
					break;
				case 1:
					memcpy(&rdnss->AdvRDNSSAddr2, (yyvsp[0].addr), sizeof(struct in6_addr));
					rdnss->AdvRDNSSNumber++;
					break;
				case 2:
					memcpy(&rdnss->AdvRDNSSAddr3, (yyvsp[0].addr), sizeof(struct in6_addr));
					rdnss->AdvRDNSSNumber++;
					break;
				default:
					flog(LOG_CRIT, "too many addresses in RDNSS section");
					ABORT;
			}

		}
#line 2255 "gram.c" /* yacc.c:1646  */
    break;

  case 79:
#line 648 "gram.y" /* yacc.c:1646  */
    {
			if (!rdnss) {
				flog(LOG_CRIT, "no address specified in RDNSS section");
				ABORT;
			}
		}
#line 2266 "gram.c" /* yacc.c:1646  */
    break;

  case 84:
#line 666 "gram.y" /* yacc.c:1646  */
    {
			flog(LOG_WARNING, "ignoring deprecated RDNSS preference");
		}
#line 2274 "gram.c" /* yacc.c:1646  */
    break;

  case 85:
#line 670 "gram.y" /* yacc.c:1646  */
    {
			flog(LOG_WARNING, "ignoring deprecated RDNSS open flag");
		}
#line 2282 "gram.c" /* yacc.c:1646  */
    break;

  case 86:
#line 674 "gram.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-1].num) > 2*(iface->MaxRtrAdvInterval))
				flog(LOG_WARNING, "warning: AdvRDNSSLifetime <= 2*MaxRtrAdvInterval would allow stale DNS servers to be deleted faster");
			if ((yyvsp[-1].num) < iface->MaxRtrAdvInterval && (yyvsp[-1].num) != 0) {
				flog(LOG_ERR, "AdvRDNSSLifetime must be at least MaxRtrAdvInterval");
				rdnss->AdvRDNSSLifetime = iface->MaxRtrAdvInterval;
			} else {
				rdnss->AdvRDNSSLifetime = (yyvsp[-1].num);
			}
			if ((yyvsp[-1].num) > 2*(iface->MaxRtrAdvInterval))
				flog(LOG_WARNING, "warning: (%s:%d) AdvRDNSSLifetime <= 2*MaxRtrAdvInterval would allow stale DNS servers to be deleted faster", filename, num_lines);

			rdnss->AdvRDNSSLifetime = (yyvsp[-1].num);
		}
#line 2301 "gram.c" /* yacc.c:1646  */
    break;

  case 87:
#line 689 "gram.y" /* yacc.c:1646  */
    {
			rdnss->FlushRDNSSFlag = (yyvsp[-1].num);
		}
#line 2309 "gram.c" /* yacc.c:1646  */
    break;

  case 88:
#line 695 "gram.y" /* yacc.c:1646  */
    {
			(yyval.dnsslinfo) = dnssl;
			dnssl = NULL;
		}
#line 2318 "gram.c" /* yacc.c:1646  */
    break;

  case 91:
#line 706 "gram.y" /* yacc.c:1646  */
    {
			char *ch;
			for (ch = (yyvsp[0].str);*ch != '\0';ch++) {
				if (*ch >= 'A' && *ch <= 'Z')
					continue;
				if (*ch >= 'a' && *ch <= 'z')
					continue;
				if (*ch >= '0' && *ch <= '9')
					continue;
				if (*ch == '-' || *ch == '.')
					continue;

				flog(LOG_CRIT, "invalid domain suffix specified");
				ABORT;
			}

			if (!dnssl) {
				/* first domain found */
				dnssl = malloc(sizeof(struct AdvDNSSL));

				if (dnssl == NULL) {
					flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
					ABORT;
				}

				dnssl_init_defaults(dnssl, iface);
			}

			dnssl->AdvDNSSLNumber++;
			dnssl->AdvDNSSLSuffixes =
				realloc(dnssl->AdvDNSSLSuffixes,
					dnssl->AdvDNSSLNumber * sizeof(char*));
			if (dnssl->AdvDNSSLSuffixes == NULL) {
				flog(LOG_CRIT, "realloc failed: %s", strerror(errno));
				ABORT;
			}

			dnssl->AdvDNSSLSuffixes[dnssl->AdvDNSSLNumber - 1] = strdup((yyvsp[0].str));
		}
#line 2362 "gram.c" /* yacc.c:1646  */
    break;

  case 92:
#line 748 "gram.y" /* yacc.c:1646  */
    {
			if (!dnssl) {
				flog(LOG_CRIT, "no domain specified in DNSSL section");
				ABORT;
			}
		}
#line 2373 "gram.c" /* yacc.c:1646  */
    break;

  case 97:
#line 766 "gram.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-1].num) > 2*(iface->MaxRtrAdvInterval))
				flog(LOG_WARNING, "warning: AdvDNSSLLifetime <= 2*MaxRtrAdvInterval would allow stale DNS suffixes to be deleted faster");
			if ((yyvsp[-1].num) < iface->MaxRtrAdvInterval && (yyvsp[-1].num) != 0) {
				flog(LOG_ERR, "AdvDNSSLLifetime must be at least MaxRtrAdvInterval");
				dnssl->AdvDNSSLLifetime = iface->MaxRtrAdvInterval;
			} else {
				dnssl->AdvDNSSLLifetime = (yyvsp[-1].num);
			}

		}
#line 2389 "gram.c" /* yacc.c:1646  */
    break;

  case 98:
#line 778 "gram.y" /* yacc.c:1646  */
    {
			dnssl->FlushDNSSLFlag = (yyvsp[-1].num);
		}
#line 2397 "gram.c" /* yacc.c:1646  */
    break;

  case 99:
#line 784 "gram.y" /* yacc.c:1646  */
    {
			(yyval.lowpancoinfo) = lowpanco;
			lowpanco = NULL;
		}
#line 2406 "gram.c" /* yacc.c:1646  */
    break;

  case 100:
#line 791 "gram.y" /* yacc.c:1646  */
    {
			lowpanco = malloc(sizeof(struct AdvLowpanCo));

			if (lowpanco == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			memset(lowpanco, 0, sizeof(struct AdvLowpanCo));
		}
#line 2421 "gram.c" /* yacc.c:1646  */
    break;

  case 105:
#line 812 "gram.y" /* yacc.c:1646  */
    {
			lowpanco->ContextLength = (yyvsp[-1].num);
		}
#line 2429 "gram.c" /* yacc.c:1646  */
    break;

  case 106:
#line 816 "gram.y" /* yacc.c:1646  */
    {
			lowpanco->ContextCompressionFlag = (yyvsp[-1].num);
		}
#line 2437 "gram.c" /* yacc.c:1646  */
    break;

  case 107:
#line 820 "gram.y" /* yacc.c:1646  */
    {
			lowpanco->AdvContextID = (yyvsp[-1].num);
		}
#line 2445 "gram.c" /* yacc.c:1646  */
    break;

  case 108:
#line 824 "gram.y" /* yacc.c:1646  */
    {
			lowpanco->AdvLifeTime = (yyvsp[-1].num);
		}
#line 2453 "gram.c" /* yacc.c:1646  */
    break;

  case 109:
#line 830 "gram.y" /* yacc.c:1646  */
    {
			(yyval.abroinfo) = abro;
			abro = NULL;
		}
#line 2462 "gram.c" /* yacc.c:1646  */
    break;

  case 112:
#line 839 "gram.y" /* yacc.c:1646  */
    {
			abro = malloc(sizeof(struct AdvAbro));

			if (abro == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			memset(abro, 0, sizeof(struct AdvAbro));
			memcpy(&abro->LBRaddress, (yyvsp[0].addr), sizeof(struct in6_addr));
		}
#line 2478 "gram.c" /* yacc.c:1646  */
    break;

  case 113:
#line 853 "gram.y" /* yacc.c:1646  */
    {
			flog(LOG_WARNING
				, "%s:%d abro prefix length deprecated, remove trailing '/%d'"
				, filename
				, num_lines
				, (yyvsp[0].num)
			);
			abro = malloc(sizeof(struct AdvAbro));

			if (abro == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			memset(abro, 0, sizeof(struct AdvAbro));
			memcpy(&abro->LBRaddress, (yyvsp[-2].addr), sizeof(struct in6_addr));
		}
#line 2500 "gram.c" /* yacc.c:1646  */
    break;

  case 118:
#line 881 "gram.y" /* yacc.c:1646  */
    {
			abro->Version[1] = (yyvsp[-1].num);
		}
#line 2508 "gram.c" /* yacc.c:1646  */
    break;

  case 119:
#line 885 "gram.y" /* yacc.c:1646  */
    {
			abro->Version[0] = (yyvsp[-1].num);
		}
#line 2516 "gram.c" /* yacc.c:1646  */
    break;

  case 120:
#line 889 "gram.y" /* yacc.c:1646  */
    {
			abro->ValidLifeTime = (yyvsp[-1].num);
		}
#line 2524 "gram.c" /* yacc.c:1646  */
    break;

  case 121:
#line 895 "gram.y" /* yacc.c:1646  */
    {
				(yyval.num) = (yyvsp[0].num);
			}
#line 2532 "gram.c" /* yacc.c:1646  */
    break;

  case 122:
#line 899 "gram.y" /* yacc.c:1646  */
    {
				(yyval.num) = (uint32_t)~0;
			}
#line 2540 "gram.c" /* yacc.c:1646  */
    break;


#line 2544 "gram.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 904 "gram.y" /* yacc.c:1906  */


static void cleanup(void)
{
	if (iface) {
		free_ifaces(iface);
		iface = 0;
	}

	if (prefix) {
		free(prefix);
		prefix = 0;
	}

	if (route) {
		free(route);
		route = 0;
	}

	if (rdnss) {
		free(rdnss);
		rdnss = 0;
	}

	if (dnssl) {
		int i;
		for (i = 0;i < dnssl->AdvDNSSLNumber;i++)
			free(dnssl->AdvDNSSLSuffixes[i]);
		free(dnssl->AdvDNSSLSuffixes);
		free(dnssl);
		dnssl = 0;
	}

	if (lowpanco) {
		free(lowpanco);
		lowpanco = 0;
	}

	if (abro) {
		free(abro);
		abro = 0;
	}
}

struct Interface * readin_config(char const *path)
{
	IfaceList = 0;
	FILE * in = fopen(path, "r");
	if (in) {
		filename = path;
		num_lines = 1;
		iface = 0;

		yyset_in(in);
		if (yyparse() != 0) {
			free_ifaces(iface);
			iface = 0;
			IfaceList = 0;
		} else {
			dlog(LOG_DEBUG, 1, "config file, %s, syntax ok", path);
		}
		yylex_destroy();
		fclose(in);
	}

	return IfaceList;
}

static void yyerror(char const * msg)
{
	fprintf(stderr, "%s:%d error: %s\n",
		filename,
		num_lines,
		msg);
}

