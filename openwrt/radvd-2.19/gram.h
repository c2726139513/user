/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 220 "gram.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAM_H_INCLUDED  */
