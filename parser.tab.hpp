/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    LEXERROR = 258,
    BOOL = 259,
    VOID = 260,
    INT = 261,
    BYTE = 262,
    B = 263,
    ENUM = 264,
    TRUE = 265,
    FALSE = 266,
    RETURN = 267,
    WHILE = 268,
    IF = 269,
    BREAK = 270,
    CONTINUE = 271,
    SC = 272,
    COMMA = 273,
    LPAREN = 274,
    RPAREN = 275,
    LBRACE = 276,
    RBRACE = 277,
    ID = 278,
    NUM = 279,
    STRING = 280,
    ASSIGN = 281,
    OR = 282,
    AND = 283,
    RELEQ = 284,
    RELOP = 285,
    BINOPL = 286,
    BINOPH = 287,
    CAST = 288,
    NOT = 289,
    PARANS = 290,
    THEN = 291,
    ELSE = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
