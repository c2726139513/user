/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 15 "gram.y"

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


#line 102 "gram.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_GRAM_H_INCLUDED
# define YY_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INTERFACE = 258,             /* T_INTERFACE  */
    T_PREFIX = 259,                /* T_PREFIX  */
    T_ROUTE = 260,                 /* T_ROUTE  */
    T_RDNSS = 261,                 /* T_RDNSS  */
    T_DNSSL = 262,                 /* T_DNSSL  */
    T_CLIENTS = 263,               /* T_CLIENTS  */
    T_LOWPANCO = 264,              /* T_LOWPANCO  */
    T_ABRO = 265,                  /* T_ABRO  */
    T_RASRCADDRESS = 266,          /* T_RASRCADDRESS  */
    STRING = 267,                  /* STRING  */
    NUMBER = 268,                  /* NUMBER  */
    SIGNEDNUMBER = 269,            /* SIGNEDNUMBER  */
    DECIMAL = 270,                 /* DECIMAL  */
    SWITCH = 271,                  /* SWITCH  */
    IPV6ADDR = 272,                /* IPV6ADDR  */
    INFINITY = 273,                /* INFINITY  */
    T_IgnoreIfMissing = 274,       /* T_IgnoreIfMissing  */
    T_AdvSendAdvert = 275,         /* T_AdvSendAdvert  */
    T_MaxRtrAdvInterval = 276,     /* T_MaxRtrAdvInterval  */
    T_MinRtrAdvInterval = 277,     /* T_MinRtrAdvInterval  */
    T_MinDelayBetweenRAs = 278,    /* T_MinDelayBetweenRAs  */
    T_AdvManagedFlag = 279,        /* T_AdvManagedFlag  */
    T_AdvOtherConfigFlag = 280,    /* T_AdvOtherConfigFlag  */
    T_AdvLinkMTU = 281,            /* T_AdvLinkMTU  */
    T_AdvRAMTU = 282,              /* T_AdvRAMTU  */
    T_AdvReachableTime = 283,      /* T_AdvReachableTime  */
    T_AdvRetransTimer = 284,       /* T_AdvRetransTimer  */
    T_AdvCurHopLimit = 285,        /* T_AdvCurHopLimit  */
    T_AdvDefaultLifetime = 286,    /* T_AdvDefaultLifetime  */
    T_AdvDefaultPreference = 287,  /* T_AdvDefaultPreference  */
    T_AdvSourceLLAddress = 288,    /* T_AdvSourceLLAddress  */
    T_AdvOnLink = 289,             /* T_AdvOnLink  */
    T_AdvAutonomous = 290,         /* T_AdvAutonomous  */
    T_AdvValidLifetime = 291,      /* T_AdvValidLifetime  */
    T_AdvPreferredLifetime = 292,  /* T_AdvPreferredLifetime  */
    T_DeprecatePrefix = 293,       /* T_DeprecatePrefix  */
    T_DecrementLifetimes = 294,    /* T_DecrementLifetimes  */
    T_AdvRouterAddr = 295,         /* T_AdvRouterAddr  */
    T_AdvHomeAgentFlag = 296,      /* T_AdvHomeAgentFlag  */
    T_AdvIntervalOpt = 297,        /* T_AdvIntervalOpt  */
    T_AdvHomeAgentInfo = 298,      /* T_AdvHomeAgentInfo  */
    T_Base6Interface = 299,        /* T_Base6Interface  */
    T_Base6to4Interface = 300,     /* T_Base6to4Interface  */
    T_UnicastOnly = 301,           /* T_UnicastOnly  */
    T_AdvRASolicitedUnicast = 302, /* T_AdvRASolicitedUnicast  */
    T_HomeAgentPreference = 303,   /* T_HomeAgentPreference  */
    T_HomeAgentLifetime = 304,     /* T_HomeAgentLifetime  */
    T_AdvRoutePreference = 305,    /* T_AdvRoutePreference  */
    T_AdvRouteLifetime = 306,      /* T_AdvRouteLifetime  */
    T_RemoveRoute = 307,           /* T_RemoveRoute  */
    T_AdvRDNSSPreference = 308,    /* T_AdvRDNSSPreference  */
    T_AdvRDNSSOpenFlag = 309,      /* T_AdvRDNSSOpenFlag  */
    T_AdvRDNSSLifetime = 310,      /* T_AdvRDNSSLifetime  */
    T_FlushRDNSS = 311,            /* T_FlushRDNSS  */
    T_AdvDNSSLLifetime = 312,      /* T_AdvDNSSLLifetime  */
    T_FlushDNSSL = 313,            /* T_FlushDNSSL  */
    T_AdvMobRtrSupportFlag = 314,  /* T_AdvMobRtrSupportFlag  */
    T_AdvContextLength = 315,      /* T_AdvContextLength  */
    T_AdvContextCompressionFlag = 316, /* T_AdvContextCompressionFlag  */
    T_AdvContextID = 317,          /* T_AdvContextID  */
    T_AdvLifeTime = 318,           /* T_AdvLifeTime  */
    T_AdvContextPrefix = 319,      /* T_AdvContextPrefix  */
    T_AdvVersionLow = 320,         /* T_AdvVersionLow  */
    T_AdvVersionHigh = 321,        /* T_AdvVersionHigh  */
    T_AdvValidLifeTime = 322,      /* T_AdvValidLifeTime  */
    T_Adv6LBRaddress = 323,        /* T_Adv6LBRaddress  */
    T_BAD_TOKEN = 324              /* T_BAD_TOKEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#line 138 "gram.y"

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

#line 308 "gram.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INTERFACE = 3,                /* T_INTERFACE  */
  YYSYMBOL_T_PREFIX = 4,                   /* T_PREFIX  */
  YYSYMBOL_T_ROUTE = 5,                    /* T_ROUTE  */
  YYSYMBOL_T_RDNSS = 6,                    /* T_RDNSS  */
  YYSYMBOL_T_DNSSL = 7,                    /* T_DNSSL  */
  YYSYMBOL_T_CLIENTS = 8,                  /* T_CLIENTS  */
  YYSYMBOL_T_LOWPANCO = 9,                 /* T_LOWPANCO  */
  YYSYMBOL_T_ABRO = 10,                    /* T_ABRO  */
  YYSYMBOL_T_RASRCADDRESS = 11,            /* T_RASRCADDRESS  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_NUMBER = 13,                    /* NUMBER  */
  YYSYMBOL_SIGNEDNUMBER = 14,              /* SIGNEDNUMBER  */
  YYSYMBOL_DECIMAL = 15,                   /* DECIMAL  */
  YYSYMBOL_SWITCH = 16,                    /* SWITCH  */
  YYSYMBOL_IPV6ADDR = 17,                  /* IPV6ADDR  */
  YYSYMBOL_INFINITY = 18,                  /* INFINITY  */
  YYSYMBOL_T_IgnoreIfMissing = 19,         /* T_IgnoreIfMissing  */
  YYSYMBOL_T_AdvSendAdvert = 20,           /* T_AdvSendAdvert  */
  YYSYMBOL_T_MaxRtrAdvInterval = 21,       /* T_MaxRtrAdvInterval  */
  YYSYMBOL_T_MinRtrAdvInterval = 22,       /* T_MinRtrAdvInterval  */
  YYSYMBOL_T_MinDelayBetweenRAs = 23,      /* T_MinDelayBetweenRAs  */
  YYSYMBOL_T_AdvManagedFlag = 24,          /* T_AdvManagedFlag  */
  YYSYMBOL_T_AdvOtherConfigFlag = 25,      /* T_AdvOtherConfigFlag  */
  YYSYMBOL_T_AdvLinkMTU = 26,              /* T_AdvLinkMTU  */
  YYSYMBOL_T_AdvRAMTU = 27,                /* T_AdvRAMTU  */
  YYSYMBOL_T_AdvReachableTime = 28,        /* T_AdvReachableTime  */
  YYSYMBOL_T_AdvRetransTimer = 29,         /* T_AdvRetransTimer  */
  YYSYMBOL_T_AdvCurHopLimit = 30,          /* T_AdvCurHopLimit  */
  YYSYMBOL_T_AdvDefaultLifetime = 31,      /* T_AdvDefaultLifetime  */
  YYSYMBOL_T_AdvDefaultPreference = 32,    /* T_AdvDefaultPreference  */
  YYSYMBOL_T_AdvSourceLLAddress = 33,      /* T_AdvSourceLLAddress  */
  YYSYMBOL_T_AdvOnLink = 34,               /* T_AdvOnLink  */
  YYSYMBOL_T_AdvAutonomous = 35,           /* T_AdvAutonomous  */
  YYSYMBOL_T_AdvValidLifetime = 36,        /* T_AdvValidLifetime  */
  YYSYMBOL_T_AdvPreferredLifetime = 37,    /* T_AdvPreferredLifetime  */
  YYSYMBOL_T_DeprecatePrefix = 38,         /* T_DeprecatePrefix  */
  YYSYMBOL_T_DecrementLifetimes = 39,      /* T_DecrementLifetimes  */
  YYSYMBOL_T_AdvRouterAddr = 40,           /* T_AdvRouterAddr  */
  YYSYMBOL_T_AdvHomeAgentFlag = 41,        /* T_AdvHomeAgentFlag  */
  YYSYMBOL_T_AdvIntervalOpt = 42,          /* T_AdvIntervalOpt  */
  YYSYMBOL_T_AdvHomeAgentInfo = 43,        /* T_AdvHomeAgentInfo  */
  YYSYMBOL_T_Base6Interface = 44,          /* T_Base6Interface  */
  YYSYMBOL_T_Base6to4Interface = 45,       /* T_Base6to4Interface  */
  YYSYMBOL_T_UnicastOnly = 46,             /* T_UnicastOnly  */
  YYSYMBOL_T_AdvRASolicitedUnicast = 47,   /* T_AdvRASolicitedUnicast  */
  YYSYMBOL_T_HomeAgentPreference = 48,     /* T_HomeAgentPreference  */
  YYSYMBOL_T_HomeAgentLifetime = 49,       /* T_HomeAgentLifetime  */
  YYSYMBOL_T_AdvRoutePreference = 50,      /* T_AdvRoutePreference  */
  YYSYMBOL_T_AdvRouteLifetime = 51,        /* T_AdvRouteLifetime  */
  YYSYMBOL_T_RemoveRoute = 52,             /* T_RemoveRoute  */
  YYSYMBOL_T_AdvRDNSSPreference = 53,      /* T_AdvRDNSSPreference  */
  YYSYMBOL_T_AdvRDNSSOpenFlag = 54,        /* T_AdvRDNSSOpenFlag  */
  YYSYMBOL_T_AdvRDNSSLifetime = 55,        /* T_AdvRDNSSLifetime  */
  YYSYMBOL_T_FlushRDNSS = 56,              /* T_FlushRDNSS  */
  YYSYMBOL_T_AdvDNSSLLifetime = 57,        /* T_AdvDNSSLLifetime  */
  YYSYMBOL_T_FlushDNSSL = 58,              /* T_FlushDNSSL  */
  YYSYMBOL_T_AdvMobRtrSupportFlag = 59,    /* T_AdvMobRtrSupportFlag  */
  YYSYMBOL_T_AdvContextLength = 60,        /* T_AdvContextLength  */
  YYSYMBOL_T_AdvContextCompressionFlag = 61, /* T_AdvContextCompressionFlag  */
  YYSYMBOL_T_AdvContextID = 62,            /* T_AdvContextID  */
  YYSYMBOL_T_AdvLifeTime = 63,             /* T_AdvLifeTime  */
  YYSYMBOL_T_AdvContextPrefix = 64,        /* T_AdvContextPrefix  */
  YYSYMBOL_T_AdvVersionLow = 65,           /* T_AdvVersionLow  */
  YYSYMBOL_T_AdvVersionHigh = 66,          /* T_AdvVersionHigh  */
  YYSYMBOL_T_AdvValidLifeTime = 67,        /* T_AdvValidLifeTime  */
  YYSYMBOL_T_Adv6LBRaddress = 68,          /* T_Adv6LBRaddress  */
  YYSYMBOL_T_BAD_TOKEN = 69,               /* T_BAD_TOKEN  */
  YYSYMBOL_70_ = 70,                       /* '{'  */
  YYSYMBOL_71_ = 71,                       /* '}'  */
  YYSYMBOL_72_ = 72,                       /* ';'  */
  YYSYMBOL_73_ = 73,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_grammar = 75,                   /* grammar  */
  YYSYMBOL_ifacedef = 76,                  /* ifacedef  */
  YYSYMBOL_ifacehead = 77,                 /* ifacehead  */
  YYSYMBOL_name = 78,                      /* name  */
  YYSYMBOL_ifaceparams = 79,               /* ifaceparams  */
  YYSYMBOL_ifaceparam = 80,                /* ifaceparam  */
  YYSYMBOL_ifaceval = 81,                  /* ifaceval  */
  YYSYMBOL_clientslist = 82,               /* clientslist  */
  YYSYMBOL_v6addrlist_clients = 83,        /* v6addrlist_clients  */
  YYSYMBOL_rasrcaddresslist = 84,          /* rasrcaddresslist  */
  YYSYMBOL_v6addrlist_rasrcaddress = 85,   /* v6addrlist_rasrcaddress  */
  YYSYMBOL_prefixdef = 86,                 /* prefixdef  */
  YYSYMBOL_prefixhead = 87,                /* prefixhead  */
  YYSYMBOL_optional_prefixplist = 88,      /* optional_prefixplist  */
  YYSYMBOL_prefixplist = 89,               /* prefixplist  */
  YYSYMBOL_prefixparms = 90,               /* prefixparms  */
  YYSYMBOL_routedef = 91,                  /* routedef  */
  YYSYMBOL_routehead = 92,                 /* routehead  */
  YYSYMBOL_optional_routeplist = 93,       /* optional_routeplist  */
  YYSYMBOL_routeplist = 94,                /* routeplist  */
  YYSYMBOL_routeparms = 95,                /* routeparms  */
  YYSYMBOL_rdnssdef = 96,                  /* rdnssdef  */
  YYSYMBOL_rdnssaddrs = 97,                /* rdnssaddrs  */
  YYSYMBOL_rdnssaddr = 98,                 /* rdnssaddr  */
  YYSYMBOL_rdnsshead = 99,                 /* rdnsshead  */
  YYSYMBOL_optional_rdnssplist = 100,      /* optional_rdnssplist  */
  YYSYMBOL_rdnssplist = 101,               /* rdnssplist  */
  YYSYMBOL_rdnssparms = 102,               /* rdnssparms  */
  YYSYMBOL_dnssldef = 103,                 /* dnssldef  */
  YYSYMBOL_dnsslsuffixes = 104,            /* dnsslsuffixes  */
  YYSYMBOL_dnsslsuffix = 105,              /* dnsslsuffix  */
  YYSYMBOL_dnsslhead = 106,                /* dnsslhead  */
  YYSYMBOL_optional_dnsslplist = 107,      /* optional_dnsslplist  */
  YYSYMBOL_dnsslplist = 108,               /* dnsslplist  */
  YYSYMBOL_dnsslparms = 109,               /* dnsslparms  */
  YYSYMBOL_lowpancodef = 110,              /* lowpancodef  */
  YYSYMBOL_lowpancohead = 111,             /* lowpancohead  */
  YYSYMBOL_optional_lowpancoplist = 112,   /* optional_lowpancoplist  */
  YYSYMBOL_lowpancoplist = 113,            /* lowpancoplist  */
  YYSYMBOL_lowpancoparms = 114,            /* lowpancoparms  */
  YYSYMBOL_abrodef = 115,                  /* abrodef  */
  YYSYMBOL_abrohead = 116,                 /* abrohead  */
  YYSYMBOL_abrohead_new = 117,             /* abrohead_new  */
  YYSYMBOL_abrohead_dep = 118,             /* abrohead_dep  */
  YYSYMBOL_optional_abroplist = 119,       /* optional_abroplist  */
  YYSYMBOL_abroplist = 120,                /* abroplist  */
  YYSYMBOL_abroparms = 121,                /* abroparms  */
  YYSYMBOL_number_or_infinity = 122        /* number_or_infinity  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 154 "gram.y"

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

#line 470 "gram.c"


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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
static const yytype_int16 yyrline[] =
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INTERFACE",
  "T_PREFIX", "T_ROUTE", "T_RDNSS", "T_DNSSL", "T_CLIENTS", "T_LOWPANCO",
  "T_ABRO", "T_RASRCADDRESS", "STRING", "NUMBER", "SIGNEDNUMBER",
  "DECIMAL", "SWITCH", "IPV6ADDR", "INFINITY", "T_IgnoreIfMissing",
  "T_AdvSendAdvert", "T_MaxRtrAdvInterval", "T_MinRtrAdvInterval",
  "T_MinDelayBetweenRAs", "T_AdvManagedFlag", "T_AdvOtherConfigFlag",
  "T_AdvLinkMTU", "T_AdvRAMTU", "T_AdvReachableTime", "T_AdvRetransTimer",
  "T_AdvCurHopLimit", "T_AdvDefaultLifetime", "T_AdvDefaultPreference",
  "T_AdvSourceLLAddress", "T_AdvOnLink", "T_AdvAutonomous",
  "T_AdvValidLifetime", "T_AdvPreferredLifetime", "T_DeprecatePrefix",
  "T_DecrementLifetimes", "T_AdvRouterAddr", "T_AdvHomeAgentFlag",
  "T_AdvIntervalOpt", "T_AdvHomeAgentInfo", "T_Base6Interface",
  "T_Base6to4Interface", "T_UnicastOnly", "T_AdvRASolicitedUnicast",
  "T_HomeAgentPreference", "T_HomeAgentLifetime", "T_AdvRoutePreference",
  "T_AdvRouteLifetime", "T_RemoveRoute", "T_AdvRDNSSPreference",
  "T_AdvRDNSSOpenFlag", "T_AdvRDNSSLifetime", "T_FlushRDNSS",
  "T_AdvDNSSLLifetime", "T_FlushDNSSL", "T_AdvMobRtrSupportFlag",
  "T_AdvContextLength", "T_AdvContextCompressionFlag", "T_AdvContextID",
  "T_AdvLifeTime", "T_AdvContextPrefix", "T_AdvVersionLow",
  "T_AdvVersionHigh", "T_AdvValidLifeTime", "T_Adv6LBRaddress",
  "T_BAD_TOKEN", "'{'", "'}'", "';'", "'/'", "$accept", "grammar",
  "ifacedef", "ifacehead", "name", "ifaceparams", "ifaceparam", "ifaceval",
  "clientslist", "v6addrlist_clients", "rasrcaddresslist",
  "v6addrlist_rasrcaddress", "prefixdef", "prefixhead",
  "optional_prefixplist", "prefixplist", "prefixparms", "routedef",
  "routehead", "optional_routeplist", "routeplist", "routeparms",
  "rdnssdef", "rdnssaddrs", "rdnssaddr", "rdnsshead",
  "optional_rdnssplist", "rdnssplist", "rdnssparms", "dnssldef",
  "dnsslsuffixes", "dnsslsuffix", "dnsslhead", "optional_dnsslplist",
  "dnsslplist", "dnsslparms", "lowpancodef", "lowpancohead",
  "optional_lowpancoplist", "lowpancoplist", "lowpancoparms", "abrodef",
  "abrohead", "abrohead_new", "abrohead_dep", "optional_abroplist",
  "abroplist", "abroparms", "number_or_infinity", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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
#endif

#define YYPACT_NINF (-96)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
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
static const yytype_int8 yydefact[] =
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
static const yytype_int16 yytable[] =
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
static const yytype_int8 yystos[] =
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
static const yytype_int8 yyr1[] =
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
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (YY_("syntax error: cannot back up")); \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
yyparse (void)
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 4: /* ifacedef: ifacehead '{' ifaceparams '}' ';'  */
#line 178 "gram.y"
                {
			dlog(LOG_DEBUG, 4, "%s interface definition ok", iface->props.name);

			iface->next = IfaceList;
			IfaceList = iface;

			iface = NULL;
		}
#line 1628 "gram.c"
    break;

  case 5: /* ifacehead: T_INTERFACE name  */
#line 188 "gram.y"
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
#line 1659 "gram.c"
    break;

  case 6: /* name: STRING  */
#line 217 "gram.y"
                {
			/* check vality */
			(yyval.str) = (yyvsp[0].str);
		}
#line 1668 "gram.c"
    break;

  case 10: /* ifaceparam: prefixdef  */
#line 228 "gram.y"
                                { ADD_TO_LL(struct AdvPrefix, AdvPrefixList, (yyvsp[0].pinfo)); }
#line 1674 "gram.c"
    break;

  case 11: /* ifaceparam: clientslist  */
#line 229 "gram.y"
                                { ADD_TO_LL(struct Clients, ClientList, (yyvsp[0].ainfo)); }
#line 1680 "gram.c"
    break;

  case 12: /* ifaceparam: routedef  */
#line 230 "gram.y"
                                { ADD_TO_LL(struct AdvRoute, AdvRouteList, (yyvsp[0].rinfo)); }
#line 1686 "gram.c"
    break;

  case 13: /* ifaceparam: rdnssdef  */
#line 231 "gram.y"
                                { ADD_TO_LL(struct AdvRDNSS, AdvRDNSSList, (yyvsp[0].rdnssinfo)); }
#line 1692 "gram.c"
    break;

  case 14: /* ifaceparam: dnssldef  */
#line 232 "gram.y"
                                { ADD_TO_LL(struct AdvDNSSL, AdvDNSSLList, (yyvsp[0].dnsslinfo)); }
#line 1698 "gram.c"
    break;

  case 15: /* ifaceparam: lowpancodef  */
#line 233 "gram.y"
                                { ADD_TO_LL(struct AdvLowpanCo, AdvLowpanCoList, (yyvsp[0].lowpancoinfo)); }
#line 1704 "gram.c"
    break;

  case 16: /* ifaceparam: abrodef  */
#line 234 "gram.y"
                                { ADD_TO_LL(struct AdvAbro, AdvAbroList, (yyvsp[0].abroinfo)); }
#line 1710 "gram.c"
    break;

  case 17: /* ifaceparam: rasrcaddresslist  */
#line 235 "gram.y"
                                   { ADD_TO_LL(struct AdvRASrcAddress, AdvRASrcAddressList, (yyvsp[0].rasrcaddressinfo)); }
#line 1716 "gram.c"
    break;

  case 18: /* ifaceval: T_MinRtrAdvInterval NUMBER ';'  */
#line 239 "gram.y"
                {
			iface->MinRtrAdvInterval = (yyvsp[-1].num);
		}
#line 1724 "gram.c"
    break;

  case 19: /* ifaceval: T_MaxRtrAdvInterval NUMBER ';'  */
#line 243 "gram.y"
                {
			iface->MaxRtrAdvInterval = (yyvsp[-1].num);
		}
#line 1732 "gram.c"
    break;

  case 20: /* ifaceval: T_MinDelayBetweenRAs NUMBER ';'  */
#line 247 "gram.y"
                {
			iface->MinDelayBetweenRAs = (yyvsp[-1].num);
		}
#line 1740 "gram.c"
    break;

  case 21: /* ifaceval: T_MinRtrAdvInterval DECIMAL ';'  */
#line 251 "gram.y"
                {
			iface->MinRtrAdvInterval = (yyvsp[-1].dec);
		}
#line 1748 "gram.c"
    break;

  case 22: /* ifaceval: T_MaxRtrAdvInterval DECIMAL ';'  */
#line 255 "gram.y"
                {
			iface->MaxRtrAdvInterval = (yyvsp[-1].dec);
		}
#line 1756 "gram.c"
    break;

  case 23: /* ifaceval: T_MinDelayBetweenRAs DECIMAL ';'  */
#line 259 "gram.y"
                {
			iface->MinDelayBetweenRAs = (yyvsp[-1].dec);
		}
#line 1764 "gram.c"
    break;

  case 24: /* ifaceval: T_IgnoreIfMissing SWITCH ';'  */
#line 263 "gram.y"
                {
			iface->IgnoreIfMissing = (yyvsp[-1].num);
		}
#line 1772 "gram.c"
    break;

  case 25: /* ifaceval: T_AdvSendAdvert SWITCH ';'  */
#line 267 "gram.y"
                {
			iface->AdvSendAdvert = (yyvsp[-1].num);
		}
#line 1780 "gram.c"
    break;

  case 26: /* ifaceval: T_AdvManagedFlag SWITCH ';'  */
#line 271 "gram.y"
                {
			iface->ra_header_info.AdvManagedFlag = (yyvsp[-1].num);
		}
#line 1788 "gram.c"
    break;

  case 27: /* ifaceval: T_AdvOtherConfigFlag SWITCH ';'  */
#line 275 "gram.y"
                {
			iface->ra_header_info.AdvOtherConfigFlag = (yyvsp[-1].num);
		}
#line 1796 "gram.c"
    break;

  case 28: /* ifaceval: T_AdvLinkMTU NUMBER ';'  */
#line 279 "gram.y"
                {
			iface->AdvLinkMTU = (yyvsp[-1].num);
		}
#line 1804 "gram.c"
    break;

  case 29: /* ifaceval: T_AdvRAMTU NUMBER ';'  */
#line 283 "gram.y"
                {
			iface->AdvRAMTU = (yyvsp[-1].num);
			iface->AdvRAMTU = MAX(MIN_AdvLinkMTU, iface->AdvRAMTU);
			iface->AdvRAMTU = MIN(MAX_AdvLinkMTU, iface->AdvRAMTU);
		}
#line 1814 "gram.c"
    break;

  case 30: /* ifaceval: T_AdvReachableTime NUMBER ';'  */
#line 289 "gram.y"
                {
			iface->ra_header_info.AdvReachableTime = (yyvsp[-1].num);
		}
#line 1822 "gram.c"
    break;

  case 31: /* ifaceval: T_AdvRetransTimer NUMBER ';'  */
#line 293 "gram.y"
                {
			iface->ra_header_info.AdvRetransTimer = (yyvsp[-1].num);
		}
#line 1830 "gram.c"
    break;

  case 32: /* ifaceval: T_AdvDefaultLifetime NUMBER ';'  */
#line 297 "gram.y"
                {
			iface->ra_header_info.AdvDefaultLifetime = (yyvsp[-1].num);
		}
#line 1838 "gram.c"
    break;

  case 33: /* ifaceval: T_AdvDefaultPreference SIGNEDNUMBER ';'  */
#line 301 "gram.y"
                {
			iface->ra_header_info.AdvDefaultPreference = (yyvsp[-1].snum);
		}
#line 1846 "gram.c"
    break;

  case 34: /* ifaceval: T_AdvCurHopLimit NUMBER ';'  */
#line 305 "gram.y"
                {
			iface->ra_header_info.AdvCurHopLimit = (yyvsp[-1].num);
		}
#line 1854 "gram.c"
    break;

  case 35: /* ifaceval: T_AdvSourceLLAddress SWITCH ';'  */
#line 309 "gram.y"
                {
			iface->AdvSourceLLAddress = (yyvsp[-1].num);
		}
#line 1862 "gram.c"
    break;

  case 36: /* ifaceval: T_AdvIntervalOpt SWITCH ';'  */
#line 313 "gram.y"
                {
			iface->mipv6.AdvIntervalOpt = (yyvsp[-1].num);
		}
#line 1870 "gram.c"
    break;

  case 37: /* ifaceval: T_AdvHomeAgentInfo SWITCH ';'  */
#line 317 "gram.y"
                {
			iface->mipv6.AdvHomeAgentInfo = (yyvsp[-1].num);
		}
#line 1878 "gram.c"
    break;

  case 38: /* ifaceval: T_AdvHomeAgentFlag SWITCH ';'  */
#line 321 "gram.y"
                {
			iface->ra_header_info.AdvHomeAgentFlag = (yyvsp[-1].num);
		}
#line 1886 "gram.c"
    break;

  case 39: /* ifaceval: T_HomeAgentPreference NUMBER ';'  */
#line 325 "gram.y"
                {
			iface->mipv6.HomeAgentPreference = (yyvsp[-1].num);
		}
#line 1894 "gram.c"
    break;

  case 40: /* ifaceval: T_HomeAgentLifetime NUMBER ';'  */
#line 329 "gram.y"
                {
			iface->mipv6.HomeAgentLifetime = (yyvsp[-1].num);
		}
#line 1902 "gram.c"
    break;

  case 41: /* ifaceval: T_UnicastOnly SWITCH ';'  */
#line 333 "gram.y"
                {
			iface->UnicastOnly = (yyvsp[-1].num);
		}
#line 1910 "gram.c"
    break;

  case 42: /* ifaceval: T_AdvRASolicitedUnicast SWITCH ';'  */
#line 337 "gram.y"
                {
			iface->AdvRASolicitedUnicast = (yyvsp[-1].num);
		}
#line 1918 "gram.c"
    break;

  case 43: /* ifaceval: T_AdvMobRtrSupportFlag SWITCH ';'  */
#line 341 "gram.y"
                {
			iface->mipv6.AdvMobRtrSupportFlag = (yyvsp[-1].num);
		}
#line 1926 "gram.c"
    break;

  case 44: /* clientslist: T_CLIENTS '{' v6addrlist_clients '}' ';'  */
#line 347 "gram.y"
                {
			(yyval.ainfo) = (yyvsp[-2].ainfo);
		}
#line 1934 "gram.c"
    break;

  case 45: /* v6addrlist_clients: IPV6ADDR ';'  */
#line 353 "gram.y"
                {
			struct Clients *new = calloc(1, sizeof(struct Clients));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->Address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			(yyval.ainfo) = new;
		}
#line 1949 "gram.c"
    break;

  case 46: /* v6addrlist_clients: v6addrlist_clients IPV6ADDR ';'  */
#line 364 "gram.y"
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
#line 1965 "gram.c"
    break;

  case 47: /* rasrcaddresslist: T_RASRCADDRESS '{' v6addrlist_rasrcaddress '}' ';'  */
#line 378 "gram.y"
                {
			(yyval.rasrcaddressinfo) = (yyvsp[-2].rasrcaddressinfo);
		}
#line 1973 "gram.c"
    break;

  case 48: /* v6addrlist_rasrcaddress: IPV6ADDR ';'  */
#line 384 "gram.y"
                {
			struct AdvRASrcAddress *new = calloc(1, sizeof(struct AdvRASrcAddress));
			if (new == NULL) {
				flog(LOG_CRIT, "calloc failed: %s", strerror(errno));
				ABORT;
			}

			memcpy(&(new->address), (yyvsp[-1].addr), sizeof(struct in6_addr));
			(yyval.rasrcaddressinfo) = new;
		}
#line 1988 "gram.c"
    break;

  case 49: /* v6addrlist_rasrcaddress: v6addrlist_rasrcaddress IPV6ADDR ';'  */
#line 395 "gram.y"
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
#line 2004 "gram.c"
    break;

  case 50: /* prefixdef: prefixhead optional_prefixplist ';'  */
#line 409 "gram.y"
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
#line 2031 "gram.c"
    break;

  case 51: /* prefixhead: T_PREFIX IPV6ADDR '/' NUMBER  */
#line 434 "gram.y"
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
#line 2064 "gram.c"
    break;

  case 57: /* prefixparms: T_AdvOnLink SWITCH ';'  */
#line 474 "gram.y"
                {
			if (prefix) {
				prefix->AdvOnLinkFlag = (yyvsp[-1].num);
			}
		}
#line 2074 "gram.c"
    break;

  case 58: /* prefixparms: T_AdvAutonomous SWITCH ';'  */
#line 480 "gram.y"
                {
			if (prefix) {
				prefix->AdvAutonomousFlag = (yyvsp[-1].num);
			}
		}
#line 2084 "gram.c"
    break;

  case 59: /* prefixparms: T_AdvRouterAddr SWITCH ';'  */
#line 486 "gram.y"
                {
			if (prefix) {
				prefix->AdvRouterAddr = (yyvsp[-1].num);
			}
		}
#line 2094 "gram.c"
    break;

  case 60: /* prefixparms: T_AdvValidLifetime number_or_infinity ';'  */
#line 492 "gram.y"
                {
			if (prefix) {
				prefix->AdvValidLifetime = (yyvsp[-1].num);
				prefix->curr_validlft = (yyvsp[-1].num);
			}
		}
#line 2105 "gram.c"
    break;

  case 61: /* prefixparms: T_AdvPreferredLifetime number_or_infinity ';'  */
#line 499 "gram.y"
                {
			if (prefix) {
				prefix->AdvPreferredLifetime = (yyvsp[-1].num);
				prefix->curr_preferredlft = (yyvsp[-1].num);
			}
		}
#line 2116 "gram.c"
    break;

  case 62: /* prefixparms: T_DeprecatePrefix SWITCH ';'  */
#line 506 "gram.y"
                {
			if (prefix) {
				prefix->DeprecatePrefixFlag = (yyvsp[-1].num);
			}
		}
#line 2126 "gram.c"
    break;

  case 63: /* prefixparms: T_DecrementLifetimes SWITCH ';'  */
#line 512 "gram.y"
                {
			if (prefix) {
				prefix->DecrementLifetimesFlag = (yyvsp[-1].num);
			}
		}
#line 2136 "gram.c"
    break;

  case 64: /* prefixparms: T_Base6Interface name ';'  */
#line 518 "gram.y"
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
#line 2153 "gram.c"
    break;

  case 65: /* prefixparms: T_Base6to4Interface name ';'  */
#line 532 "gram.y"
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
#line 2170 "gram.c"
    break;

  case 66: /* routedef: routehead '{' optional_routeplist '}' ';'  */
#line 547 "gram.y"
                {
			(yyval.rinfo) = route;
			route = NULL;
		}
#line 2179 "gram.c"
    break;

  case 67: /* routehead: T_ROUTE IPV6ADDR '/' NUMBER  */
#line 555 "gram.y"
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
#line 2204 "gram.c"
    break;

  case 72: /* routeparms: T_AdvRoutePreference SIGNEDNUMBER ';'  */
#line 588 "gram.y"
                {
			route->AdvRoutePreference = (yyvsp[-1].snum);
		}
#line 2212 "gram.c"
    break;

  case 73: /* routeparms: T_AdvRouteLifetime number_or_infinity ';'  */
#line 592 "gram.y"
                {
			route->AdvRouteLifetime = (yyvsp[-1].num);
		}
#line 2220 "gram.c"
    break;

  case 74: /* routeparms: T_RemoveRoute SWITCH ';'  */
#line 596 "gram.y"
                {
			route->RemoveRouteFlag = (yyvsp[-1].num);
		}
#line 2228 "gram.c"
    break;

  case 75: /* rdnssdef: rdnsshead '{' optional_rdnssplist '}' ';'  */
#line 602 "gram.y"
                {
			(yyval.rdnssinfo) = rdnss;
			rdnss = NULL;
		}
#line 2237 "gram.c"
    break;

  case 78: /* rdnssaddr: IPV6ADDR  */
#line 613 "gram.y"
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
#line 2274 "gram.c"
    break;

  case 79: /* rdnsshead: T_RDNSS rdnssaddrs  */
#line 648 "gram.y"
                {
			if (!rdnss) {
				flog(LOG_CRIT, "no address specified in RDNSS section");
				ABORT;
			}
		}
#line 2285 "gram.c"
    break;

  case 84: /* rdnssparms: T_AdvRDNSSPreference NUMBER ';'  */
#line 666 "gram.y"
                {
			flog(LOG_WARNING, "ignoring deprecated RDNSS preference");
		}
#line 2293 "gram.c"
    break;

  case 85: /* rdnssparms: T_AdvRDNSSOpenFlag SWITCH ';'  */
#line 670 "gram.y"
                {
			flog(LOG_WARNING, "ignoring deprecated RDNSS open flag");
		}
#line 2301 "gram.c"
    break;

  case 86: /* rdnssparms: T_AdvRDNSSLifetime number_or_infinity ';'  */
#line 674 "gram.y"
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
#line 2320 "gram.c"
    break;

  case 87: /* rdnssparms: T_FlushRDNSS SWITCH ';'  */
#line 689 "gram.y"
                {
			rdnss->FlushRDNSSFlag = (yyvsp[-1].num);
		}
#line 2328 "gram.c"
    break;

  case 88: /* dnssldef: dnsslhead '{' optional_dnsslplist '}' ';'  */
#line 695 "gram.y"
                {
			(yyval.dnsslinfo) = dnssl;
			dnssl = NULL;
		}
#line 2337 "gram.c"
    break;

  case 91: /* dnsslsuffix: STRING  */
#line 706 "gram.y"
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
#line 2381 "gram.c"
    break;

  case 92: /* dnsslhead: T_DNSSL dnsslsuffixes  */
#line 748 "gram.y"
                {
			if (!dnssl) {
				flog(LOG_CRIT, "no domain specified in DNSSL section");
				ABORT;
			}
		}
#line 2392 "gram.c"
    break;

  case 97: /* dnsslparms: T_AdvDNSSLLifetime number_or_infinity ';'  */
#line 766 "gram.y"
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
#line 2408 "gram.c"
    break;

  case 98: /* dnsslparms: T_FlushDNSSL SWITCH ';'  */
#line 778 "gram.y"
                {
			dnssl->FlushDNSSLFlag = (yyvsp[-1].num);
		}
#line 2416 "gram.c"
    break;

  case 99: /* lowpancodef: lowpancohead '{' optional_lowpancoplist '}' ';'  */
#line 784 "gram.y"
                {
			(yyval.lowpancoinfo) = lowpanco;
			lowpanco = NULL;
		}
#line 2425 "gram.c"
    break;

  case 100: /* lowpancohead: T_LOWPANCO  */
#line 791 "gram.y"
                {
			lowpanco = malloc(sizeof(struct AdvLowpanCo));

			if (lowpanco == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			memset(lowpanco, 0, sizeof(struct AdvLowpanCo));
		}
#line 2440 "gram.c"
    break;

  case 105: /* lowpancoparms: T_AdvContextLength NUMBER ';'  */
#line 812 "gram.y"
                {
			lowpanco->ContextLength = (yyvsp[-1].num);
		}
#line 2448 "gram.c"
    break;

  case 106: /* lowpancoparms: T_AdvContextCompressionFlag SWITCH ';'  */
#line 816 "gram.y"
                {
			lowpanco->ContextCompressionFlag = (yyvsp[-1].num);
		}
#line 2456 "gram.c"
    break;

  case 107: /* lowpancoparms: T_AdvContextID NUMBER ';'  */
#line 820 "gram.y"
                {
			lowpanco->AdvContextID = (yyvsp[-1].num);
		}
#line 2464 "gram.c"
    break;

  case 108: /* lowpancoparms: T_AdvLifeTime NUMBER ';'  */
#line 824 "gram.y"
                {
			lowpanco->AdvLifeTime = (yyvsp[-1].num);
		}
#line 2472 "gram.c"
    break;

  case 109: /* abrodef: abrohead '{' optional_abroplist '}' ';'  */
#line 830 "gram.y"
                {
			(yyval.abroinfo) = abro;
			abro = NULL;
		}
#line 2481 "gram.c"
    break;

  case 112: /* abrohead_new: T_ABRO IPV6ADDR  */
#line 839 "gram.y"
                {
			abro = malloc(sizeof(struct AdvAbro));

			if (abro == NULL) {
				flog(LOG_CRIT, "malloc failed: %s", strerror(errno));
				ABORT;
			}

			memset(abro, 0, sizeof(struct AdvAbro));
			memcpy(&abro->LBRaddress, (yyvsp[0].addr), sizeof(struct in6_addr));
		}
#line 2497 "gram.c"
    break;

  case 113: /* abrohead_dep: T_ABRO IPV6ADDR '/' NUMBER  */
#line 853 "gram.y"
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
#line 2519 "gram.c"
    break;

  case 118: /* abroparms: T_AdvVersionLow NUMBER ';'  */
#line 881 "gram.y"
                {
			abro->Version[1] = (yyvsp[-1].num);
		}
#line 2527 "gram.c"
    break;

  case 119: /* abroparms: T_AdvVersionHigh NUMBER ';'  */
#line 885 "gram.y"
                {
			abro->Version[0] = (yyvsp[-1].num);
		}
#line 2535 "gram.c"
    break;

  case 120: /* abroparms: T_AdvValidLifeTime NUMBER ';'  */
#line 889 "gram.y"
                {
			abro->ValidLifeTime = (yyvsp[-1].num);
		}
#line 2543 "gram.c"
    break;

  case 121: /* number_or_infinity: NUMBER  */
#line 895 "gram.y"
                        {
				(yyval.num) = (yyvsp[0].num);
			}
#line 2551 "gram.c"
    break;

  case 122: /* number_or_infinity: INFINITY  */
#line 899 "gram.y"
                        {
				(yyval.num) = (uint32_t)~0;
			}
#line 2559 "gram.c"
    break;


#line 2563 "gram.c"

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
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 904 "gram.y"


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

