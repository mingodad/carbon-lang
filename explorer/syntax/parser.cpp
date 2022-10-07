// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 55 "parser.ypp"

  #include <algorithm>
  #include <cstdarg>
  #include <cstdio>
  #include <cstdlib>
  #include <vector>

  #include "explorer/syntax/parse_and_lex_context.h"
  #include "llvm/ADT/StringExtras.h"
  #include "llvm/Support/FormatVariadic.h"
  #include "llvm/Support/raw_ostream.h"

#line 52 "parser.cpp"




#include "parser.h"


// Unqualified %code blocks.
#line 88 "parser.ypp"

  void Carbon::Parser::error(const location_type&, const std::string& message) {
    pl_context.RecordSyntaxError(message);
  }

#line 67 "parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 23 "parser.ypp"
namespace  Carbon  {
#line 160 "parser.cpp"

  /// Build a parser object.
   Parser :: Parser  (Nonnull<Arena*> arena_yyarg, yyscan_t yyscanner_yyarg, ParseAndLexContext& pl_context_yyarg, std::optional<AST>* ast_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      arena (arena_yyarg),
      yyscanner (yyscanner_yyarg),
      pl_context (pl_context_yyarg),
      ast (ast_yyarg)
  {}

   Parser ::~ Parser  ()
  {}

   Parser ::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
   Parser ::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

   Parser ::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
   Parser ::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
   Parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

   Parser ::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

   Parser ::symbol_kind_type
   Parser ::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

   Parser ::stack_symbol_type::stack_symbol_type ()
  {}

   Parser ::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_clause: // clause
        value.YY_MOVE_OR_COPY< BisonWrap<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_term: // return_term
        value.YY_MOVE_OR_COPY< BisonWrap<ReturnTerm> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.YY_MOVE_OR_COPY< ClassExtensibility > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.YY_MOVE_OR_COPY< ImplKind > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.YY_MOVE_OR_COPY< IntrinsicExpression::Intrinsic > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.YY_MOVE_OR_COPY< LibraryName > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.YY_MOVE_OR_COPY< Nonnull<AliasDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative: // alternative
        value.YY_MOVE_OR_COPY< Nonnull<AlternativeSignature*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.YY_MOVE_OR_COPY< Nonnull<BindingPattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.YY_MOVE_OR_COPY< Nonnull<Block*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.YY_MOVE_OR_COPY< Nonnull<Declaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.YY_MOVE_OR_COPY< Nonnull<DestructorDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_ref_deref_expression: // ref_deref_expression
      case symbol_kind::S_fn_type_expression: // fn_type_expression
      case symbol_kind::S_type_expression: // type_expression
      case symbol_kind::S_minus_expression: // minus_expression
      case symbol_kind::S_complement_expression: // complement_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_simple_binary_operand: // simple_binary_operand
      case symbol_kind::S_multiplicative_lhs: // multiplicative_lhs
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_additive_operand: // additive_operand
      case symbol_kind::S_additive_lhs: // additive_lhs
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_modulo_expression: // modulo_expression
      case symbol_kind::S_bitwise_and_lhs: // bitwise_and_lhs
      case symbol_kind::S_bitwise_and_expression: // bitwise_and_expression
      case symbol_kind::S_bitwise_or_lhs: // bitwise_or_lhs
      case symbol_kind::S_bitwise_or_expression: // bitwise_or_expression
      case symbol_kind::S_bitwise_xor_lhs: // bitwise_xor_lhs
      case symbol_kind::S_bitwise_xor_expression: // bitwise_xor_expression
      case symbol_kind::S_bitwise_expression: // bitwise_expression
      case symbol_kind::S_bit_shift_expression: // bit_shift_expression
      case symbol_kind::S_as_expression: // as_expression
      case symbol_kind::S_unimpl_expression: // unimpl_expression
      case symbol_kind::S_value_expression: // value_expression
      case symbol_kind::S_comparison_operand: // comparison_operand
      case symbol_kind::S_comparison_expression: // comparison_expression
      case symbol_kind::S_not_expression: // not_expression
      case symbol_kind::S_predicate_expression: // predicate_expression
      case symbol_kind::S_and_or_operand: // and_or_operand
      case symbol_kind::S_and_lhs: // and_lhs
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_or_lhs: // or_lhs
      case symbol_kind::S_or_expression: // or_expression
      case symbol_kind::S_where_expression: // where_expression
      case symbol_kind::S_type_or_where_expression: // type_or_where_expression
      case symbol_kind::S_statement_expression: // statement_expression
      case symbol_kind::S_if_expression: // if_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_paren_expression: // paren_expression
      case symbol_kind::S_mixin_import: // mixin_import
      case symbol_kind::S_impl_type: // impl_type
        value.YY_MOVE_OR_COPY< Nonnull<Expression*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.YY_MOVE_OR_COPY< Nonnull<FunctionDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.YY_MOVE_OR_COPY< Nonnull<GenericBinding*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.YY_MOVE_OR_COPY< Nonnull<If*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.YY_MOVE_OR_COPY< Nonnull<MixDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.YY_MOVE_OR_COPY< Nonnull<Pattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.YY_MOVE_OR_COPY< Nonnull<Statement*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.YY_MOVE_OR_COPY< Nonnull<StructLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.YY_MOVE_OR_COPY< Nonnull<StructTypeLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple: // tuple
        value.YY_MOVE_OR_COPY< Nonnull<TupleLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.YY_MOVE_OR_COPY< Nonnull<TuplePattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.YY_MOVE_OR_COPY< Nonnull<WhereClause*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.YY_MOVE_OR_COPY< Operator > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.YY_MOVE_OR_COPY< ParenContents<Expression> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.YY_MOVE_OR_COPY< ParenContents<Pattern> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.YY_MOVE_OR_COPY< bool > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.YY_MOVE_OR_COPY< std::optional<Nonnull<Block*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.YY_MOVE_OR_COPY< std::optional<Nonnull<Expression*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_type_params: // type_params
        value.YY_MOVE_OR_COPY< std::optional<Nonnull<TuplePattern*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.YY_MOVE_OR_COPY< std::pair<LibraryName, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.YY_MOVE_OR_COPY< std::pair<Nonnull<Expression*>, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.YY_MOVE_OR_COPY< std::vector<FieldInitializer> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.YY_MOVE_OR_COPY< std::vector<LibraryName> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.YY_MOVE_OR_COPY< std::vector<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.YY_MOVE_OR_COPY< std::vector<Nonnull<AlternativeSignature*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.YY_MOVE_OR_COPY< std::vector<Nonnull<AstNode*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.YY_MOVE_OR_COPY< std::vector<Nonnull<Declaration*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.YY_MOVE_OR_COPY< std::vector<Nonnull<Statement*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.YY_MOVE_OR_COPY< std::vector<Nonnull<WhereClause*>> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

   Parser ::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_clause: // clause
        value.move< BisonWrap<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_term: // return_term
        value.move< BisonWrap<ReturnTerm> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.move< ClassExtensibility > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.move< ImplKind > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.move< IntrinsicExpression::Intrinsic > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.move< LibraryName > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.move< Nonnull<AliasDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative: // alternative
        value.move< Nonnull<AlternativeSignature*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.move< Nonnull<BindingPattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.move< Nonnull<Block*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< Nonnull<Declaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.move< Nonnull<DestructorDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_ref_deref_expression: // ref_deref_expression
      case symbol_kind::S_fn_type_expression: // fn_type_expression
      case symbol_kind::S_type_expression: // type_expression
      case symbol_kind::S_minus_expression: // minus_expression
      case symbol_kind::S_complement_expression: // complement_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_simple_binary_operand: // simple_binary_operand
      case symbol_kind::S_multiplicative_lhs: // multiplicative_lhs
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_additive_operand: // additive_operand
      case symbol_kind::S_additive_lhs: // additive_lhs
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_modulo_expression: // modulo_expression
      case symbol_kind::S_bitwise_and_lhs: // bitwise_and_lhs
      case symbol_kind::S_bitwise_and_expression: // bitwise_and_expression
      case symbol_kind::S_bitwise_or_lhs: // bitwise_or_lhs
      case symbol_kind::S_bitwise_or_expression: // bitwise_or_expression
      case symbol_kind::S_bitwise_xor_lhs: // bitwise_xor_lhs
      case symbol_kind::S_bitwise_xor_expression: // bitwise_xor_expression
      case symbol_kind::S_bitwise_expression: // bitwise_expression
      case symbol_kind::S_bit_shift_expression: // bit_shift_expression
      case symbol_kind::S_as_expression: // as_expression
      case symbol_kind::S_unimpl_expression: // unimpl_expression
      case symbol_kind::S_value_expression: // value_expression
      case symbol_kind::S_comparison_operand: // comparison_operand
      case symbol_kind::S_comparison_expression: // comparison_expression
      case symbol_kind::S_not_expression: // not_expression
      case symbol_kind::S_predicate_expression: // predicate_expression
      case symbol_kind::S_and_or_operand: // and_or_operand
      case symbol_kind::S_and_lhs: // and_lhs
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_or_lhs: // or_lhs
      case symbol_kind::S_or_expression: // or_expression
      case symbol_kind::S_where_expression: // where_expression
      case symbol_kind::S_type_or_where_expression: // type_or_where_expression
      case symbol_kind::S_statement_expression: // statement_expression
      case symbol_kind::S_if_expression: // if_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_paren_expression: // paren_expression
      case symbol_kind::S_mixin_import: // mixin_import
      case symbol_kind::S_impl_type: // impl_type
        value.move< Nonnull<Expression*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.move< Nonnull<FunctionDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.move< Nonnull<GenericBinding*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.move< Nonnull<If*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.move< Nonnull<MixDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.move< Nonnull<Pattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.move< Nonnull<Statement*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.move< Nonnull<StructLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.move< Nonnull<StructTypeLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple: // tuple
        value.move< Nonnull<TupleLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.move< Nonnull<TuplePattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.move< Nonnull<WhereClause*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.move< Operator > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.move< ParenContents<Expression> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.move< ParenContents<Pattern> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.move< bool > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.move< std::optional<Nonnull<Block*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.move< std::optional<Nonnull<Expression*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_type_params: // type_params
        value.move< std::optional<Nonnull<TuplePattern*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.move< std::pair<LibraryName, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.move< std::pair<Nonnull<Expression*>, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.move< std::vector<FieldInitializer> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.move< std::vector<LibraryName> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.move< std::vector<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.move< std::vector<Nonnull<AlternativeSignature*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.move< std::vector<Nonnull<AstNode*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.move< std::vector<Nonnull<Declaration*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< std::vector<Nonnull<Statement*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.move< std::vector<Nonnull<WhereClause*>> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_clause: // clause
        value.copy< BisonWrap<Match::Clause> > (that.value);
        break;

      case symbol_kind::S_return_term: // return_term
        value.copy< BisonWrap<ReturnTerm> > (that.value);
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.copy< ClassExtensibility > (that.value);
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.copy< ImplKind > (that.value);
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.copy< IntrinsicExpression::Intrinsic > (that.value);
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.copy< LibraryName > (that.value);
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.copy< Nonnull<AliasDeclaration*> > (that.value);
        break;

      case symbol_kind::S_alternative: // alternative
        value.copy< Nonnull<AlternativeSignature*> > (that.value);
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.copy< Nonnull<BindingPattern*> > (that.value);
        break;

      case symbol_kind::S_block: // block
        value.copy< Nonnull<Block*> > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.copy< Nonnull<Declaration*> > (that.value);
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.copy< Nonnull<DestructorDeclaration*> > (that.value);
        break;

      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_ref_deref_expression: // ref_deref_expression
      case symbol_kind::S_fn_type_expression: // fn_type_expression
      case symbol_kind::S_type_expression: // type_expression
      case symbol_kind::S_minus_expression: // minus_expression
      case symbol_kind::S_complement_expression: // complement_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_simple_binary_operand: // simple_binary_operand
      case symbol_kind::S_multiplicative_lhs: // multiplicative_lhs
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_additive_operand: // additive_operand
      case symbol_kind::S_additive_lhs: // additive_lhs
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_modulo_expression: // modulo_expression
      case symbol_kind::S_bitwise_and_lhs: // bitwise_and_lhs
      case symbol_kind::S_bitwise_and_expression: // bitwise_and_expression
      case symbol_kind::S_bitwise_or_lhs: // bitwise_or_lhs
      case symbol_kind::S_bitwise_or_expression: // bitwise_or_expression
      case symbol_kind::S_bitwise_xor_lhs: // bitwise_xor_lhs
      case symbol_kind::S_bitwise_xor_expression: // bitwise_xor_expression
      case symbol_kind::S_bitwise_expression: // bitwise_expression
      case symbol_kind::S_bit_shift_expression: // bit_shift_expression
      case symbol_kind::S_as_expression: // as_expression
      case symbol_kind::S_unimpl_expression: // unimpl_expression
      case symbol_kind::S_value_expression: // value_expression
      case symbol_kind::S_comparison_operand: // comparison_operand
      case symbol_kind::S_comparison_expression: // comparison_expression
      case symbol_kind::S_not_expression: // not_expression
      case symbol_kind::S_predicate_expression: // predicate_expression
      case symbol_kind::S_and_or_operand: // and_or_operand
      case symbol_kind::S_and_lhs: // and_lhs
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_or_lhs: // or_lhs
      case symbol_kind::S_or_expression: // or_expression
      case symbol_kind::S_where_expression: // where_expression
      case symbol_kind::S_type_or_where_expression: // type_or_where_expression
      case symbol_kind::S_statement_expression: // statement_expression
      case symbol_kind::S_if_expression: // if_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_paren_expression: // paren_expression
      case symbol_kind::S_mixin_import: // mixin_import
      case symbol_kind::S_impl_type: // impl_type
        value.copy< Nonnull<Expression*> > (that.value);
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.copy< Nonnull<FunctionDeclaration*> > (that.value);
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.copy< Nonnull<GenericBinding*> > (that.value);
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.copy< Nonnull<If*> > (that.value);
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.copy< Nonnull<MixDeclaration*> > (that.value);
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.copy< Nonnull<Pattern*> > (that.value);
        break;

      case symbol_kind::S_statement: // statement
        value.copy< Nonnull<Statement*> > (that.value);
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.copy< Nonnull<StructLiteral*> > (that.value);
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.copy< Nonnull<StructTypeLiteral*> > (that.value);
        break;

      case symbol_kind::S_tuple: // tuple
        value.copy< Nonnull<TupleLiteral*> > (that.value);
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.copy< Nonnull<TuplePattern*> > (that.value);
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.copy< Nonnull<WhereClause*> > (that.value);
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.copy< Operator > (that.value);
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.copy< ParenContents<Expression> > (that.value);
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.copy< ParenContents<Pattern> > (that.value);
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.copy< bool > (that.value);
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.copy< std::optional<Nonnull<Block*>> > (that.value);
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.copy< std::optional<Nonnull<Expression*>> > (that.value);
        break;

      case symbol_kind::S_type_params: // type_params
        value.copy< std::optional<Nonnull<TuplePattern*>> > (that.value);
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.copy< std::pair<LibraryName, bool> > (that.value);
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.copy< std::pair<Nonnull<Expression*>, bool> > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.copy< std::vector<FieldInitializer> > (that.value);
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.copy< std::vector<LibraryName> > (that.value);
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.copy< std::vector<Match::Clause> > (that.value);
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.copy< std::vector<Nonnull<AlternativeSignature*>> > (that.value);
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.copy< std::vector<Nonnull<AstNode*>> > (that.value);
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.copy< std::vector<Nonnull<Declaration*>> > (that.value);
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.copy< std::vector<Nonnull<Statement*>> > (that.value);
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.copy< std::vector<Nonnull<WhereClause*>> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_clause: // clause
        value.move< BisonWrap<Match::Clause> > (that.value);
        break;

      case symbol_kind::S_return_term: // return_term
        value.move< BisonWrap<ReturnTerm> > (that.value);
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.move< ClassExtensibility > (that.value);
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.move< ImplKind > (that.value);
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.move< IntrinsicExpression::Intrinsic > (that.value);
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.move< LibraryName > (that.value);
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.move< Nonnull<AliasDeclaration*> > (that.value);
        break;

      case symbol_kind::S_alternative: // alternative
        value.move< Nonnull<AlternativeSignature*> > (that.value);
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.move< Nonnull<BindingPattern*> > (that.value);
        break;

      case symbol_kind::S_block: // block
        value.move< Nonnull<Block*> > (that.value);
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< Nonnull<Declaration*> > (that.value);
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.move< Nonnull<DestructorDeclaration*> > (that.value);
        break;

      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_ref_deref_expression: // ref_deref_expression
      case symbol_kind::S_fn_type_expression: // fn_type_expression
      case symbol_kind::S_type_expression: // type_expression
      case symbol_kind::S_minus_expression: // minus_expression
      case symbol_kind::S_complement_expression: // complement_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_simple_binary_operand: // simple_binary_operand
      case symbol_kind::S_multiplicative_lhs: // multiplicative_lhs
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_additive_operand: // additive_operand
      case symbol_kind::S_additive_lhs: // additive_lhs
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_modulo_expression: // modulo_expression
      case symbol_kind::S_bitwise_and_lhs: // bitwise_and_lhs
      case symbol_kind::S_bitwise_and_expression: // bitwise_and_expression
      case symbol_kind::S_bitwise_or_lhs: // bitwise_or_lhs
      case symbol_kind::S_bitwise_or_expression: // bitwise_or_expression
      case symbol_kind::S_bitwise_xor_lhs: // bitwise_xor_lhs
      case symbol_kind::S_bitwise_xor_expression: // bitwise_xor_expression
      case symbol_kind::S_bitwise_expression: // bitwise_expression
      case symbol_kind::S_bit_shift_expression: // bit_shift_expression
      case symbol_kind::S_as_expression: // as_expression
      case symbol_kind::S_unimpl_expression: // unimpl_expression
      case symbol_kind::S_value_expression: // value_expression
      case symbol_kind::S_comparison_operand: // comparison_operand
      case symbol_kind::S_comparison_expression: // comparison_expression
      case symbol_kind::S_not_expression: // not_expression
      case symbol_kind::S_predicate_expression: // predicate_expression
      case symbol_kind::S_and_or_operand: // and_or_operand
      case symbol_kind::S_and_lhs: // and_lhs
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_or_lhs: // or_lhs
      case symbol_kind::S_or_expression: // or_expression
      case symbol_kind::S_where_expression: // where_expression
      case symbol_kind::S_type_or_where_expression: // type_or_where_expression
      case symbol_kind::S_statement_expression: // statement_expression
      case symbol_kind::S_if_expression: // if_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_paren_expression: // paren_expression
      case symbol_kind::S_mixin_import: // mixin_import
      case symbol_kind::S_impl_type: // impl_type
        value.move< Nonnull<Expression*> > (that.value);
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.move< Nonnull<FunctionDeclaration*> > (that.value);
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.move< Nonnull<GenericBinding*> > (that.value);
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.move< Nonnull<If*> > (that.value);
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.move< Nonnull<MixDeclaration*> > (that.value);
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.move< Nonnull<Pattern*> > (that.value);
        break;

      case symbol_kind::S_statement: // statement
        value.move< Nonnull<Statement*> > (that.value);
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.move< Nonnull<StructLiteral*> > (that.value);
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.move< Nonnull<StructTypeLiteral*> > (that.value);
        break;

      case symbol_kind::S_tuple: // tuple
        value.move< Nonnull<TupleLiteral*> > (that.value);
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.move< Nonnull<TuplePattern*> > (that.value);
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.move< Nonnull<WhereClause*> > (that.value);
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.move< Operator > (that.value);
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.move< ParenContents<Expression> > (that.value);
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.move< ParenContents<Pattern> > (that.value);
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.move< bool > (that.value);
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.move< int > (that.value);
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.move< std::optional<Nonnull<Block*>> > (that.value);
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.move< std::optional<Nonnull<Expression*>> > (that.value);
        break;

      case symbol_kind::S_type_params: // type_params
        value.move< std::optional<Nonnull<TuplePattern*>> > (that.value);
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.move< std::pair<LibraryName, bool> > (that.value);
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.move< std::pair<Nonnull<Expression*>, bool> > (that.value);
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.move< std::vector<FieldInitializer> > (that.value);
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.move< std::vector<LibraryName> > (that.value);
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.move< std::vector<Match::Clause> > (that.value);
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.move< std::vector<Nonnull<AlternativeSignature*>> > (that.value);
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.move< std::vector<Nonnull<AstNode*>> > (that.value);
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.move< std::vector<Nonnull<Declaration*>> > (that.value);
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< std::vector<Nonnull<Statement*>> > (that.value);
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.move< std::vector<Nonnull<WhereClause*>> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
   Parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   Parser ::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
   Parser ::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
   Parser ::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
   Parser ::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   Parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   Parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   Parser ::debug_level_type
   Parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   Parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

   Parser ::state_type
   Parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
   Parser ::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
   Parser ::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
   Parser ::operator() ()
  {
    return parse ();
  }

  int
   Parser ::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (arena, yyscanner, pl_context));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_clause: // clause
        yylhs.value.emplace< BisonWrap<Match::Clause> > ();
        break;

      case symbol_kind::S_return_term: // return_term
        yylhs.value.emplace< BisonWrap<ReturnTerm> > ();
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        yylhs.value.emplace< ClassExtensibility > ();
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        yylhs.value.emplace< ImplKind > ();
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        yylhs.value.emplace< IntrinsicExpression::Intrinsic > ();
        break;

      case symbol_kind::S_import_directive: // import_directive
        yylhs.value.emplace< LibraryName > ();
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        yylhs.value.emplace< Nonnull<AliasDeclaration*> > ();
        break;

      case symbol_kind::S_alternative: // alternative
        yylhs.value.emplace< Nonnull<AlternativeSignature*> > ();
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        yylhs.value.emplace< Nonnull<BindingPattern*> > ();
        break;

      case symbol_kind::S_block: // block
        yylhs.value.emplace< Nonnull<Block*> > ();
        break;

      case symbol_kind::S_declaration: // declaration
        yylhs.value.emplace< Nonnull<Declaration*> > ();
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        yylhs.value.emplace< Nonnull<DestructorDeclaration*> > ();
        break;

      case symbol_kind::S_primary_expression: // primary_expression
      case symbol_kind::S_postfix_expression: // postfix_expression
      case symbol_kind::S_ref_deref_expression: // ref_deref_expression
      case symbol_kind::S_fn_type_expression: // fn_type_expression
      case symbol_kind::S_type_expression: // type_expression
      case symbol_kind::S_minus_expression: // minus_expression
      case symbol_kind::S_complement_expression: // complement_expression
      case symbol_kind::S_unary_expression: // unary_expression
      case symbol_kind::S_simple_binary_operand: // simple_binary_operand
      case symbol_kind::S_multiplicative_lhs: // multiplicative_lhs
      case symbol_kind::S_multiplicative_expression: // multiplicative_expression
      case symbol_kind::S_additive_operand: // additive_operand
      case symbol_kind::S_additive_lhs: // additive_lhs
      case symbol_kind::S_additive_expression: // additive_expression
      case symbol_kind::S_modulo_expression: // modulo_expression
      case symbol_kind::S_bitwise_and_lhs: // bitwise_and_lhs
      case symbol_kind::S_bitwise_and_expression: // bitwise_and_expression
      case symbol_kind::S_bitwise_or_lhs: // bitwise_or_lhs
      case symbol_kind::S_bitwise_or_expression: // bitwise_or_expression
      case symbol_kind::S_bitwise_xor_lhs: // bitwise_xor_lhs
      case symbol_kind::S_bitwise_xor_expression: // bitwise_xor_expression
      case symbol_kind::S_bitwise_expression: // bitwise_expression
      case symbol_kind::S_bit_shift_expression: // bit_shift_expression
      case symbol_kind::S_as_expression: // as_expression
      case symbol_kind::S_unimpl_expression: // unimpl_expression
      case symbol_kind::S_value_expression: // value_expression
      case symbol_kind::S_comparison_operand: // comparison_operand
      case symbol_kind::S_comparison_expression: // comparison_expression
      case symbol_kind::S_not_expression: // not_expression
      case symbol_kind::S_predicate_expression: // predicate_expression
      case symbol_kind::S_and_or_operand: // and_or_operand
      case symbol_kind::S_and_lhs: // and_lhs
      case symbol_kind::S_and_expression: // and_expression
      case symbol_kind::S_or_lhs: // or_lhs
      case symbol_kind::S_or_expression: // or_expression
      case symbol_kind::S_where_expression: // where_expression
      case symbol_kind::S_type_or_where_expression: // type_or_where_expression
      case symbol_kind::S_statement_expression: // statement_expression
      case symbol_kind::S_if_expression: // if_expression
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_paren_expression: // paren_expression
      case symbol_kind::S_mixin_import: // mixin_import
      case symbol_kind::S_impl_type: // impl_type
        yylhs.value.emplace< Nonnull<Expression*> > ();
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        yylhs.value.emplace< Nonnull<FunctionDeclaration*> > ();
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        yylhs.value.emplace< Nonnull<GenericBinding*> > ();
        break;

      case symbol_kind::S_if_statement: // if_statement
        yylhs.value.emplace< Nonnull<If*> > ();
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        yylhs.value.emplace< Nonnull<MixDeclaration*> > ();
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        yylhs.value.emplace< Nonnull<Pattern*> > ();
        break;

      case symbol_kind::S_statement: // statement
        yylhs.value.emplace< Nonnull<Statement*> > ();
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        yylhs.value.emplace< Nonnull<StructLiteral*> > ();
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        yylhs.value.emplace< Nonnull<StructTypeLiteral*> > ();
        break;

      case symbol_kind::S_tuple: // tuple
        yylhs.value.emplace< Nonnull<TupleLiteral*> > ();
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        yylhs.value.emplace< Nonnull<TuplePattern*> > ();
        break;

      case symbol_kind::S_where_clause: // where_clause
        yylhs.value.emplace< Nonnull<WhereClause*> > ();
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        yylhs.value.emplace< Operator > ();
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        yylhs.value.emplace< ParenContents<Expression> > ();
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        yylhs.value.emplace< ParenContents<Pattern> > ();
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        yylhs.value.emplace< bool > ();
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_optional_else: // optional_else
        yylhs.value.emplace< std::optional<Nonnull<Block*>> > ();
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        yylhs.value.emplace< std::optional<Nonnull<Expression*>> > ();
        break;

      case symbol_kind::S_type_params: // type_params
        yylhs.value.emplace< std::optional<Nonnull<TuplePattern*>> > ();
        break;

      case symbol_kind::S_package_directive: // package_directive
        yylhs.value.emplace< std::pair<LibraryName, bool> > ();
        break;

      case symbol_kind::S_return_expression: // return_expression
        yylhs.value.emplace< std::pair<Nonnull<Expression*>, bool> > ();
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        yylhs.value.emplace< std::vector<FieldInitializer> > ();
        break;

      case symbol_kind::S_import_directives: // import_directives
        yylhs.value.emplace< std::vector<LibraryName> > ();
        break;

      case symbol_kind::S_clause_list: // clause_list
        yylhs.value.emplace< std::vector<Match::Clause> > ();
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        yylhs.value.emplace< std::vector<Nonnull<AlternativeSignature*>> > ();
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        yylhs.value.emplace< std::vector<Nonnull<AstNode*>> > ();
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        yylhs.value.emplace< std::vector<Nonnull<Declaration*>> > ();
        break;

      case symbol_kind::S_statement_list: // statement_list
        yylhs.value.emplace< std::vector<Nonnull<Statement*>> > ();
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        yylhs.value.emplace< std::vector<Nonnull<WhereClause*>> > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // input: package_directive import_directives declaration_list
#line 302 "parser.ypp"
    {
      *ast = AST({.package = yystack_[2].value.as < std::pair<LibraryName, bool> > ().first,
                  .is_api = yystack_[2].value.as < std::pair<LibraryName, bool> > ().second,
                  .imports = std::move(yystack_[1].value.as < std::vector<LibraryName> > ()),
                  .declarations = std::move(yystack_[0].value.as < std::vector<Nonnull<Declaration*>> > ())});
    }
#line 1727 "parser.cpp"
    break;

  case 3: // package_directive: PACKAGE identifier optional_library_path api_or_impl SEMICOLON
#line 311 "parser.ypp"
    { yylhs.value.as < std::pair<LibraryName, bool> > () = {LibraryName({.package = yystack_[3].value.as < std::string > (), .path = yystack_[2].value.as < std::string > ()}), yystack_[1].value.as < bool > ()}; }
#line 1733 "parser.cpp"
    break;

  case 4: // import_directive: IMPORT identifier optional_library_path SEMICOLON
#line 315 "parser.ypp"
    { yylhs.value.as < LibraryName > () = LibraryName({.package = yystack_[2].value.as < std::string > (), .path = yystack_[1].value.as < std::string > ()}); }
#line 1739 "parser.cpp"
    break;

  case 5: // import_directives: %empty
#line 319 "parser.ypp"
    { yylhs.value.as < std::vector<LibraryName> > () = std::vector<LibraryName>(); }
#line 1745 "parser.cpp"
    break;

  case 6: // import_directives: import_directives import_directive
#line 321 "parser.ypp"
    {
      yylhs.value.as < std::vector<LibraryName> > () = std::move(yystack_[1].value.as < std::vector<LibraryName> > ());
      yylhs.value.as < std::vector<LibraryName> > ().push_back(yystack_[0].value.as < LibraryName > ());
    }
#line 1754 "parser.cpp"
    break;

  case 7: // optional_library_path: %empty
#line 328 "parser.ypp"
    { yylhs.value.as < std::string > () = ""; }
#line 1760 "parser.cpp"
    break;

  case 8: // optional_library_path: LIBRARY string_literal
#line 330 "parser.ypp"
    { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1766 "parser.cpp"
    break;

  case 9: // api_or_impl: API
#line 334 "parser.ypp"
    { yylhs.value.as < bool > () = true; }
#line 1772 "parser.cpp"
    break;

  case 10: // api_or_impl: IMPL
#line 336 "parser.ypp"
    { yylhs.value.as < bool > () = false; }
#line 1778 "parser.cpp"
    break;

  case 11: // primary_expression: identifier
#line 340 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IdentifierExpression>(pl_context.source_loc(), yystack_[0].value.as < std::string > ()); }
#line 1784 "parser.cpp"
    break;

  case 12: // primary_expression: designator
#line 342 "parser.ypp"
    {
      // `.Foo` is rewritten to `.Self.Foo`.
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<SimpleMemberAccessExpression>(
          pl_context.source_loc(),
          arena->New<DotSelfExpression>(pl_context.source_loc()), yystack_[0].value.as < std::string > ());
    }
#line 1795 "parser.cpp"
    break;

  case 13: // primary_expression: PERIOD SELF
#line 349 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<DotSelfExpression>(pl_context.source_loc()); }
#line 1801 "parser.cpp"
    break;

  case 14: // primary_expression: integer_literal
#line 351 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IntLiteral>(pl_context.source_loc(), yystack_[0].value.as < int > ()); }
#line 1807 "parser.cpp"
    break;

  case 15: // primary_expression: string_literal
#line 353 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<StringLiteral>(pl_context.source_loc(), yystack_[0].value.as < std::string > ()); }
#line 1813 "parser.cpp"
    break;

  case 16: // primary_expression: TRUE
#line 355 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<BoolLiteral>(pl_context.source_loc(), true); }
#line 1819 "parser.cpp"
    break;

  case 17: // primary_expression: FALSE
#line 357 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<BoolLiteral>(pl_context.source_loc(), false); }
#line 1825 "parser.cpp"
    break;

  case 18: // primary_expression: sized_type_literal
#line 359 "parser.ypp"
    {
      int val = 0;
      if (!llvm::to_integer(llvm::StringRef(yystack_[0].value.as < std::string > ()).substr(1), val)) {
        pl_context.RecordSyntaxError(
            llvm::formatv("Invalid type literal: {0}", yystack_[0].value.as < std::string > ()));
        YYERROR;
      } else if (yystack_[0].value.as < std::string > ()[0] != 'i' || val != 32) {
        pl_context.RecordSyntaxError(
            llvm::formatv("Only i32 is supported for now: {0}", yystack_[0].value.as < std::string > ()));
        YYERROR;
      } else {
        yylhs.value.as < Nonnull<Expression*> > () = arena->New<IntTypeLiteral>(pl_context.source_loc());
      }
    }
#line 1844 "parser.cpp"
    break;

  case 19: // primary_expression: SELF
#line 375 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IdentifierExpression>(pl_context.source_loc(), "Self"); }
#line 1850 "parser.cpp"
    break;

  case 20: // primary_expression: STRING
#line 377 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<StringTypeLiteral>(pl_context.source_loc()); }
#line 1856 "parser.cpp"
    break;

  case 21: // primary_expression: BOOL
#line 379 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<BoolTypeLiteral>(pl_context.source_loc()); }
#line 1862 "parser.cpp"
    break;

  case 22: // primary_expression: TYPE
#line 381 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<TypeTypeLiteral>(pl_context.source_loc()); }
#line 1868 "parser.cpp"
    break;

  case 23: // primary_expression: CONTINUATION_TYPE
#line 383 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<ContinuationTypeLiteral>(pl_context.source_loc()); }
#line 1874 "parser.cpp"
    break;

  case 24: // primary_expression: paren_expression
#line 384 "parser.ypp"
                   { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 1880 "parser.cpp"
    break;

  case 25: // primary_expression: struct_literal
#line 385 "parser.ypp"
                 { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<StructLiteral*> > (); }
#line 1886 "parser.cpp"
    break;

  case 26: // primary_expression: struct_type_literal
#line 386 "parser.ypp"
                      { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<StructTypeLiteral*> > (); }
#line 1892 "parser.cpp"
    break;

  case 27: // primary_expression: LEFT_SQUARE_BRACKET expression SEMICOLON expression RIGHT_SQUARE_BRACKET
#line 388 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<ArrayTypeLiteral>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<Expression*> > (), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 1898 "parser.cpp"
    break;

  case 28: // postfix_expression: primary_expression
#line 391 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 1904 "parser.cpp"
    break;

  case 29: // postfix_expression: postfix_expression designator
#line 393 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<SimpleMemberAccessExpression>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > (),
                                                    yystack_[0].value.as < std::string > ());
    }
#line 1913 "parser.cpp"
    break;

  case 30: // postfix_expression: postfix_expression PERIOD LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
#line 398 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<CompoundMemberAccessExpression>(pl_context.source_loc(), yystack_[4].value.as < Nonnull<Expression*> > (),
                                                      yystack_[1].value.as < Nonnull<Expression*> > ());
    }
#line 1922 "parser.cpp"
    break;

  case 31: // postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET
#line 403 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IndexExpression>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<Expression*> > (), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 1928 "parser.cpp"
    break;

  case 32: // postfix_expression: intrinsic_identifier tuple
#line 405 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IntrinsicExpression>(yystack_[1].value.as < IntrinsicExpression::Intrinsic > (), yystack_[0].value.as < Nonnull<TupleLiteral*> > (), pl_context.source_loc()); }
#line 1934 "parser.cpp"
    break;

  case 33: // postfix_expression: postfix_expression tuple
#line 407 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<CallExpression>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<TupleLiteral*> > ()); }
#line 1940 "parser.cpp"
    break;

  case 34: // postfix_expression: postfix_expression "postfix *"
#line 409 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Ptr,
          std::vector<Nonnull<Expression*>>({yystack_[1].value.as < Nonnull<Expression*> > ()}));
    }
#line 1950 "parser.cpp"
    break;

  case 35: // postfix_expression: postfix_expression "unary *"
#line 415 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Ptr,
          std::vector<Nonnull<Expression*>>({yystack_[1].value.as < Nonnull<Expression*> > ()}));
    }
#line 1960 "parser.cpp"
    break;

  case 36: // ref_deref_expression: postfix_expression
#line 422 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 1966 "parser.cpp"
    break;

  case 37: // ref_deref_expression: "prefix *" ref_deref_expression
#line 424 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Deref,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 1976 "parser.cpp"
    break;

  case 38: // ref_deref_expression: "unary *" ref_deref_expression
#line 430 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Deref,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 1986 "parser.cpp"
    break;

  case 39: // ref_deref_expression: AMPERSAND ref_deref_expression
#line 436 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::AddressOf,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 1996 "parser.cpp"
    break;

  case 40: // fn_type_expression: FN_TYPE tuple ARROW type_expression
#line 444 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<FunctionTypeLiteral>(pl_context.source_loc(), yystack_[2].value.as < Nonnull<TupleLiteral*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2002 "parser.cpp"
    break;

  case 41: // type_expression: ref_deref_expression
#line 447 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2008 "parser.cpp"
    break;

  case 42: // type_expression: bitwise_and_expression
#line 448 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2014 "parser.cpp"
    break;

  case 43: // type_expression: fn_type_expression
#line 449 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2020 "parser.cpp"
    break;

  case 44: // minus_expression: MINUS ref_deref_expression
#line 454 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Neg,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2030 "parser.cpp"
    break;

  case 45: // complement_expression: CARET ref_deref_expression
#line 463 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Complement,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2040 "parser.cpp"
    break;

  case 46: // unary_expression: minus_expression
#line 471 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2046 "parser.cpp"
    break;

  case 47: // unary_expression: complement_expression
#line 472 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2052 "parser.cpp"
    break;

  case 48: // simple_binary_operand: ref_deref_expression
#line 477 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2058 "parser.cpp"
    break;

  case 49: // simple_binary_operand: unary_expression
#line 478 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2064 "parser.cpp"
    break;

  case 50: // multiplicative_lhs: simple_binary_operand
#line 481 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2070 "parser.cpp"
    break;

  case 51: // multiplicative_lhs: multiplicative_expression
#line 482 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2076 "parser.cpp"
    break;

  case 52: // multiplicative_expression: multiplicative_lhs "binary *" simple_binary_operand
#line 486 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Mul,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2086 "parser.cpp"
    break;

  case 53: // multiplicative_expression: multiplicative_lhs SLASH simple_binary_operand
#line 492 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Div,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2096 "parser.cpp"
    break;

  case 54: // additive_operand: simple_binary_operand
#line 499 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2102 "parser.cpp"
    break;

  case 55: // additive_operand: multiplicative_expression
#line 500 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2108 "parser.cpp"
    break;

  case 56: // additive_lhs: simple_binary_operand
#line 503 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2114 "parser.cpp"
    break;

  case 57: // additive_lhs: additive_expression
#line 504 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2120 "parser.cpp"
    break;

  case 58: // additive_expression: multiplicative_expression
#line 507 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2126 "parser.cpp"
    break;

  case 59: // additive_expression: additive_lhs PLUS additive_operand
#line 509 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Add,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2136 "parser.cpp"
    break;

  case 60: // additive_expression: additive_lhs MINUS additive_operand
#line 515 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Sub,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2146 "parser.cpp"
    break;

  case 61: // modulo_expression: simple_binary_operand PERCENT simple_binary_operand
#line 523 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Mod,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2156 "parser.cpp"
    break;

  case 62: // bitwise_and_lhs: simple_binary_operand
#line 530 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2162 "parser.cpp"
    break;

  case 63: // bitwise_and_lhs: bitwise_and_expression
#line 531 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2168 "parser.cpp"
    break;

  case 64: // bitwise_and_expression: bitwise_and_lhs AMPERSAND simple_binary_operand
#line 535 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::BitwiseAnd,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2178 "parser.cpp"
    break;

  case 65: // bitwise_or_lhs: simple_binary_operand
#line 542 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2184 "parser.cpp"
    break;

  case 66: // bitwise_or_lhs: bitwise_or_expression
#line 543 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2190 "parser.cpp"
    break;

  case 67: // bitwise_or_expression: bitwise_or_lhs PIPE simple_binary_operand
#line 547 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::BitwiseOr,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2200 "parser.cpp"
    break;

  case 68: // bitwise_xor_lhs: simple_binary_operand
#line 554 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2206 "parser.cpp"
    break;

  case 69: // bitwise_xor_lhs: bitwise_xor_expression
#line 555 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2212 "parser.cpp"
    break;

  case 70: // bitwise_xor_expression: bitwise_xor_lhs CARET simple_binary_operand
#line 559 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::BitwiseXor,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2222 "parser.cpp"
    break;

  case 71: // bitwise_expression: bitwise_and_expression
#line 566 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2228 "parser.cpp"
    break;

  case 72: // bitwise_expression: bitwise_or_expression
#line 567 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2234 "parser.cpp"
    break;

  case 73: // bitwise_expression: bitwise_xor_expression
#line 568 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2240 "parser.cpp"
    break;

  case 74: // bit_shift_expression: simple_binary_operand LESS_LESS simple_binary_operand
#line 572 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::BitShiftLeft,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2250 "parser.cpp"
    break;

  case 75: // bit_shift_expression: simple_binary_operand GREATER_GREATER simple_binary_operand
#line 578 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::BitShiftRight,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2260 "parser.cpp"
    break;

  case 76: // as_expression: simple_binary_operand AS simple_binary_operand
#line 586 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::As,
          std::vector<Nonnull<Expression*>>{yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()});
    }
#line 2270 "parser.cpp"
    break;

  case 77: // unimpl_expression: ref_deref_expression UNIMPL_EXAMPLE ref_deref_expression
#line 595 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<UnimplementedExpression>(pl_context.source_loc(),
                                               "ExampleInfix", yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ());
    }
#line 2279 "parser.cpp"
    break;

  case 78: // value_expression: additive_expression
#line 602 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2285 "parser.cpp"
    break;

  case 79: // value_expression: as_expression
#line 603 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2291 "parser.cpp"
    break;

  case 80: // value_expression: bitwise_expression
#line 604 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2297 "parser.cpp"
    break;

  case 81: // value_expression: bit_shift_expression
#line 605 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2303 "parser.cpp"
    break;

  case 82: // value_expression: fn_type_expression
#line 606 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2309 "parser.cpp"
    break;

  case 83: // value_expression: modulo_expression
#line 607 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2315 "parser.cpp"
    break;

  case 84: // value_expression: unary_expression
#line 608 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2321 "parser.cpp"
    break;

  case 85: // value_expression: unimpl_expression
#line 609 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2327 "parser.cpp"
    break;

  case 86: // comparison_operand: ref_deref_expression
#line 612 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2333 "parser.cpp"
    break;

  case 87: // comparison_operand: value_expression
#line 613 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2339 "parser.cpp"
    break;

  case 88: // comparison_operator: EQUAL_EQUAL
#line 617 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::Eq; }
#line 2345 "parser.cpp"
    break;

  case 89: // comparison_operator: LESS
#line 619 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::Less; }
#line 2351 "parser.cpp"
    break;

  case 90: // comparison_operator: LESS_EQUAL
#line 621 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::LessEq; }
#line 2357 "parser.cpp"
    break;

  case 91: // comparison_operator: GREATER
#line 623 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::Greater; }
#line 2363 "parser.cpp"
    break;

  case 92: // comparison_operator: GREATER_EQUAL
#line 625 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::GreaterEq; }
#line 2369 "parser.cpp"
    break;

  case 93: // comparison_operator: NOT_EQUAL
#line 627 "parser.ypp"
    { yylhs.value.as < Operator > () = Operator::NotEq; }
#line 2375 "parser.cpp"
    break;

  case 94: // comparison_expression: value_expression
#line 630 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2381 "parser.cpp"
    break;

  case 95: // comparison_expression: comparison_operand comparison_operator comparison_operand
#line 632 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), yystack_[1].value.as < Operator > (),
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2391 "parser.cpp"
    break;

  case 96: // not_expression: NOT ref_deref_expression
#line 640 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Not,
          std::vector<Nonnull<Expression*>>({yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2401 "parser.cpp"
    break;

  case 97: // predicate_expression: not_expression
#line 648 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2407 "parser.cpp"
    break;

  case 98: // predicate_expression: comparison_expression
#line 649 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2413 "parser.cpp"
    break;

  case 99: // and_or_operand: ref_deref_expression
#line 652 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2419 "parser.cpp"
    break;

  case 100: // and_or_operand: predicate_expression
#line 653 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2425 "parser.cpp"
    break;

  case 101: // and_lhs: and_or_operand
#line 656 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2431 "parser.cpp"
    break;

  case 102: // and_lhs: and_expression
#line 657 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2437 "parser.cpp"
    break;

  case 103: // and_expression: and_lhs AND and_or_operand
#line 662 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::And,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2447 "parser.cpp"
    break;

  case 104: // or_lhs: and_or_operand
#line 669 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2453 "parser.cpp"
    break;

  case 105: // or_lhs: or_expression
#line 670 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2459 "parser.cpp"
    break;

  case 106: // or_expression: or_lhs OR and_or_operand
#line 675 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<OperatorExpression>(
          pl_context.source_loc(), Operator::Or,
          std::vector<Nonnull<Expression*>>({yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()}));
    }
#line 2469 "parser.cpp"
    break;

  case 107: // where_clause: comparison_operand IS comparison_operand
#line 683 "parser.ypp"
    { yylhs.value.as < Nonnull<WhereClause*> > () = arena->New<IsWhereClause>(pl_context.source_loc(), yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2475 "parser.cpp"
    break;

  case 108: // where_clause: comparison_operand EQUAL_EQUAL comparison_operand
#line 685 "parser.ypp"
    { yylhs.value.as < Nonnull<WhereClause*> > () = arena->New<EqualsWhereClause>(pl_context.source_loc(), yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2481 "parser.cpp"
    break;

  case 109: // where_clause_list: where_clause
#line 689 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<WhereClause*>> > () = {yystack_[0].value.as < Nonnull<WhereClause*> > ()}; }
#line 2487 "parser.cpp"
    break;

  case 110: // where_clause_list: where_clause_list AND where_clause
#line 691 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<WhereClause*>> > () = std::move(yystack_[2].value.as < std::vector<Nonnull<WhereClause*>> > ());
      yylhs.value.as < std::vector<Nonnull<WhereClause*>> > ().push_back(yystack_[0].value.as < Nonnull<WhereClause*> > ());
    }
#line 2496 "parser.cpp"
    break;

  case 111: // where_expression: type_expression WHERE where_clause_list
#line 698 "parser.ypp"
    {
      auto* self =
          arena -> New<GenericBinding>(pl_context.source_loc(), ".Self", yystack_[2].value.as < Nonnull<Expression*> > ());
      yylhs.value.as < Nonnull<Expression*> > () = arena->New<WhereExpression>(pl_context.source_loc(), self, yystack_[0].value.as < std::vector<Nonnull<WhereClause*>> > ());
    }
#line 2506 "parser.cpp"
    break;

  case 112: // type_or_where_expression: type_expression
#line 705 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2512 "parser.cpp"
    break;

  case 113: // type_or_where_expression: where_expression
#line 706 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2518 "parser.cpp"
    break;

  case 114: // statement_expression: ref_deref_expression
#line 709 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2524 "parser.cpp"
    break;

  case 115: // statement_expression: predicate_expression
#line 710 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2530 "parser.cpp"
    break;

  case 116: // statement_expression: and_expression
#line 711 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2536 "parser.cpp"
    break;

  case 117: // statement_expression: or_expression
#line 712 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2542 "parser.cpp"
    break;

  case 118: // statement_expression: where_expression
#line 713 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2548 "parser.cpp"
    break;

  case 119: // if_expression: statement_expression
#line 716 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2554 "parser.cpp"
    break;

  case 120: // if_expression: IF expression THEN if_expression ELSE if_expression
#line 718 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IfExpression>(pl_context.source_loc(), yystack_[4].value.as < Nonnull<Expression*> > (), yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2560 "parser.cpp"
    break;

  case 121: // expression: if_expression
#line 721 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 2566 "parser.cpp"
    break;

  case 122: // designator: PERIOD identifier
#line 723 "parser.ypp"
                              { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 2572 "parser.cpp"
    break;

  case 123: // paren_expression: paren_expression_base
#line 726 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = ExpressionFromParenContents(arena, pl_context.source_loc(), yystack_[0].value.as < ParenContents<Expression> > ()); }
#line 2578 "parser.cpp"
    break;

  case 124: // tuple: paren_expression_base
#line 729 "parser.ypp"
    { yylhs.value.as < Nonnull<TupleLiteral*> > () = TupleExpressionFromParenContents(arena, pl_context.source_loc(), yystack_[0].value.as < ParenContents<Expression> > ()); }
#line 2584 "parser.cpp"
    break;

  case 125: // paren_expression_base: LEFT_PARENTHESIS RIGHT_PARENTHESIS
#line 733 "parser.ypp"
    { yylhs.value.as < ParenContents<Expression> > () = {.elements = {}, .has_trailing_comma = false}; }
#line 2590 "parser.cpp"
    break;

  case 126: // paren_expression_base: LEFT_PARENTHESIS paren_expression_contents RIGHT_PARENTHESIS
#line 735 "parser.ypp"
    { yylhs.value.as < ParenContents<Expression> > () = yystack_[1].value.as < ParenContents<Expression> > (); }
#line 2596 "parser.cpp"
    break;

  case 127: // paren_expression_base: LEFT_PARENTHESIS paren_expression_contents COMMA RIGHT_PARENTHESIS
#line 737 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Expression> > () = yystack_[2].value.as < ParenContents<Expression> > ();
      yylhs.value.as < ParenContents<Expression> > ().has_trailing_comma = true;
    }
#line 2605 "parser.cpp"
    break;

  case 128: // paren_expression_contents: expression
#line 744 "parser.ypp"
    { yylhs.value.as < ParenContents<Expression> > () = {.elements = {yystack_[0].value.as < Nonnull<Expression*> > ()}, .has_trailing_comma = false}; }
#line 2611 "parser.cpp"
    break;

  case 129: // paren_expression_contents: paren_expression_contents COMMA expression
#line 746 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Expression> > () = yystack_[2].value.as < ParenContents<Expression> > ();
      yylhs.value.as < ParenContents<Expression> > ().elements.push_back(yystack_[0].value.as < Nonnull<Expression*> > ());
    }
#line 2620 "parser.cpp"
    break;

  case 130: // struct_literal: LEFT_CURLY_BRACE struct_literal_contents RIGHT_CURLY_BRACE
#line 754 "parser.ypp"
    { yylhs.value.as < Nonnull<StructLiteral*> > () = arena->New<StructLiteral>(pl_context.source_loc(), yystack_[1].value.as < std::vector<FieldInitializer> > ()); }
#line 2626 "parser.cpp"
    break;

  case 131: // struct_literal: LEFT_CURLY_BRACE struct_literal_contents COMMA RIGHT_CURLY_BRACE
#line 756 "parser.ypp"
    { yylhs.value.as < Nonnull<StructLiteral*> > () = arena->New<StructLiteral>(pl_context.source_loc(), yystack_[2].value.as < std::vector<FieldInitializer> > ()); }
#line 2632 "parser.cpp"
    break;

  case 132: // struct_literal_contents: designator EQUAL expression
#line 760 "parser.ypp"
    { yylhs.value.as < std::vector<FieldInitializer> > () = {FieldInitializer(yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Expression*> > ())}; }
#line 2638 "parser.cpp"
    break;

  case 133: // struct_literal_contents: struct_literal_contents COMMA designator EQUAL expression
#line 762 "parser.ypp"
    {
      yylhs.value.as < std::vector<FieldInitializer> > () = std::move(yystack_[4].value.as < std::vector<FieldInitializer> > ());
      yylhs.value.as < std::vector<FieldInitializer> > ().push_back(FieldInitializer(yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Expression*> > ()));
    }
#line 2647 "parser.cpp"
    break;

  case 134: // struct_type_literal: LEFT_CURLY_BRACE RIGHT_CURLY_BRACE
#line 770 "parser.ypp"
    { yylhs.value.as < Nonnull<StructTypeLiteral*> > () = arena->New<StructTypeLiteral>(pl_context.source_loc()); }
#line 2653 "parser.cpp"
    break;

  case 135: // struct_type_literal: LEFT_CURLY_BRACE struct_type_literal_contents RIGHT_CURLY_BRACE
#line 772 "parser.ypp"
    { yylhs.value.as < Nonnull<StructTypeLiteral*> > () = arena->New<StructTypeLiteral>(pl_context.source_loc(), yystack_[1].value.as < std::vector<FieldInitializer> > ()); }
#line 2659 "parser.cpp"
    break;

  case 136: // struct_type_literal: LEFT_CURLY_BRACE struct_type_literal_contents COMMA RIGHT_CURLY_BRACE
#line 774 "parser.ypp"
    { yylhs.value.as < Nonnull<StructTypeLiteral*> > () = arena->New<StructTypeLiteral>(pl_context.source_loc(), yystack_[2].value.as < std::vector<FieldInitializer> > ()); }
#line 2665 "parser.cpp"
    break;

  case 137: // struct_type_literal_contents: designator COLON expression
#line 778 "parser.ypp"
    { yylhs.value.as < std::vector<FieldInitializer> > () = {FieldInitializer(yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Expression*> > ())}; }
#line 2671 "parser.cpp"
    break;

  case 138: // struct_type_literal_contents: struct_type_literal_contents COMMA designator COLON expression
#line 780 "parser.ypp"
  {
    yylhs.value.as < std::vector<FieldInitializer> > () = std::move(yystack_[4].value.as < std::vector<FieldInitializer> > ());
    yylhs.value.as < std::vector<FieldInitializer> > ().push_back(FieldInitializer(yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Expression*> > ()));
  }
#line 2680 "parser.cpp"
    break;

  case 139: // pattern: non_expression_pattern
#line 794 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = yystack_[0].value.as < Nonnull<Pattern*> > (); }
#line 2686 "parser.cpp"
    break;

  case 140: // pattern: expression
#line 796 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = arena->New<ExpressionPattern>(yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2692 "parser.cpp"
    break;

  case 141: // non_expression_pattern: AUTO
#line 800 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = arena->New<AutoPattern>(pl_context.source_loc()); }
#line 2698 "parser.cpp"
    break;

  case 142: // non_expression_pattern: binding_lhs COLON pattern
#line 802 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Pattern*> > () = arena->New<BindingPattern>(pl_context.source_loc(), yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Pattern*> > (),
                                      std::nullopt);
    }
#line 2707 "parser.cpp"
    break;

  case 143: // non_expression_pattern: binding_lhs COLON_BANG expression
#line 807 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = arena->New<GenericBinding>(pl_context.source_loc(), yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 2713 "parser.cpp"
    break;

  case 144: // non_expression_pattern: paren_pattern
#line 809 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = yystack_[0].value.as < Nonnull<Pattern*> > (); }
#line 2719 "parser.cpp"
    break;

  case 145: // non_expression_pattern: postfix_expression tuple_pattern
#line 811 "parser.ypp"
    {
      ErrorOr<Nonnull<AlternativePattern*>> alternative_pattern =
          AlternativePattern::Create(arena, pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<TuplePattern*> > ());
      if (alternative_pattern.ok()) {
        yylhs.value.as < Nonnull<Pattern*> > () = *alternative_pattern;
      } else {
        pl_context.RecordSyntaxError(std::move(alternative_pattern).error());
        YYERROR;
      }
    }
#line 2734 "parser.cpp"
    break;

  case 146: // non_expression_pattern: VAR non_expression_pattern
#line 822 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = arena->New<VarPattern>(pl_context.source_loc(), yystack_[0].value.as < Nonnull<Pattern*> > ()); }
#line 2740 "parser.cpp"
    break;

  case 147: // binding_lhs: identifier
#line 825 "parser.ypp"
             { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 2746 "parser.cpp"
    break;

  case 148: // binding_lhs: UNDERSCORE
#line 826 "parser.ypp"
             { yylhs.value.as < std::string > () = AnonymousName; }
#line 2752 "parser.cpp"
    break;

  case 149: // paren_pattern: paren_pattern_base
#line 829 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = PatternFromParenContents(arena, pl_context.source_loc(), yystack_[0].value.as < ParenContents<Pattern> > ()); }
#line 2758 "parser.cpp"
    break;

  case 150: // paren_pattern_base: LEFT_PARENTHESIS paren_pattern_contents RIGHT_PARENTHESIS
#line 833 "parser.ypp"
    { yylhs.value.as < ParenContents<Pattern> > () = yystack_[1].value.as < ParenContents<Pattern> > (); }
#line 2764 "parser.cpp"
    break;

  case 151: // paren_pattern_base: LEFT_PARENTHESIS paren_pattern_contents COMMA RIGHT_PARENTHESIS
#line 835 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Pattern> > () = yystack_[2].value.as < ParenContents<Pattern> > ();
      yylhs.value.as < ParenContents<Pattern> > ().has_trailing_comma = true;
    }
#line 2773 "parser.cpp"
    break;

  case 152: // paren_pattern_contents: non_expression_pattern
#line 847 "parser.ypp"
    { yylhs.value.as < ParenContents<Pattern> > () = {.elements = {yystack_[0].value.as < Nonnull<Pattern*> > ()}, .has_trailing_comma = false}; }
#line 2779 "parser.cpp"
    break;

  case 153: // paren_pattern_contents: paren_expression_contents COMMA non_expression_pattern
#line 849 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Pattern> > () = ParenExpressionToParenPattern(arena, yystack_[2].value.as < ParenContents<Expression> > ());
      yylhs.value.as < ParenContents<Pattern> > ().elements.push_back(yystack_[0].value.as < Nonnull<Pattern*> > ());
    }
#line 2788 "parser.cpp"
    break;

  case 154: // paren_pattern_contents: paren_pattern_contents COMMA expression
#line 854 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Pattern> > () = yystack_[2].value.as < ParenContents<Pattern> > ();
      yylhs.value.as < ParenContents<Pattern> > ().elements.push_back(arena->New<ExpressionPattern>(yystack_[0].value.as < Nonnull<Expression*> > ()));
    }
#line 2797 "parser.cpp"
    break;

  case 155: // paren_pattern_contents: paren_pattern_contents COMMA non_expression_pattern
#line 859 "parser.ypp"
    {
      yylhs.value.as < ParenContents<Pattern> > () = yystack_[2].value.as < ParenContents<Pattern> > ();
      yylhs.value.as < ParenContents<Pattern> > ().elements.push_back(yystack_[0].value.as < Nonnull<Pattern*> > ());
    }
#line 2806 "parser.cpp"
    break;

  case 156: // tuple_pattern: paren_pattern_base
#line 865 "parser.ypp"
    { yylhs.value.as < Nonnull<TuplePattern*> > () = TuplePatternFromParenContents(arena, pl_context.source_loc(), yystack_[0].value.as < ParenContents<Pattern> > ()); }
#line 2812 "parser.cpp"
    break;

  case 157: // maybe_empty_tuple_pattern: LEFT_PARENTHESIS RIGHT_PARENTHESIS
#line 872 "parser.ypp"
    {
      yylhs.value.as < Nonnull<TuplePattern*> > () = arena->New<TuplePattern>(pl_context.source_loc(),
                                    std::vector<Nonnull<Pattern*>>());
    }
#line 2821 "parser.cpp"
    break;

  case 158: // maybe_empty_tuple_pattern: tuple_pattern
#line 877 "parser.ypp"
    { yylhs.value.as < Nonnull<TuplePattern*> > () = yystack_[0].value.as < Nonnull<TuplePattern*> > (); }
#line 2827 "parser.cpp"
    break;

  case 159: // clause: CASE pattern DOUBLE_ARROW block
#line 882 "parser.ypp"
    { yylhs.value.as < BisonWrap<Match::Clause> > () = Match::Clause(yystack_[2].value.as < Nonnull<Pattern*> > (), yystack_[0].value.as < Nonnull<Block*> > ()); }
#line 2833 "parser.cpp"
    break;

  case 160: // clause: DEFAULT DOUBLE_ARROW block
#line 884 "parser.ypp"
    {
      yylhs.value.as < BisonWrap<Match::Clause> > () = Match::Clause(arena->New<BindingPattern>(
                             pl_context.source_loc(), std::string(AnonymousName),
                             arena->New<AutoPattern>(pl_context.source_loc()),
                             ValueCategory::Let),
                         yystack_[0].value.as < Nonnull<Block*> > ());
    }
#line 2845 "parser.cpp"
    break;

  case 161: // clause_list: %empty
#line 895 "parser.ypp"
    { yylhs.value.as < std::vector<Match::Clause> > () = {}; }
#line 2851 "parser.cpp"
    break;

  case 162: // clause_list: clause_list clause
#line 897 "parser.ypp"
    {
      yylhs.value.as < std::vector<Match::Clause> > () = std::move(yystack_[1].value.as < std::vector<Match::Clause> > ());
      yylhs.value.as < std::vector<Match::Clause> > ().push_back(yystack_[0].value.as < BisonWrap<Match::Clause> > ());
    }
#line 2860 "parser.cpp"
    break;

  case 163: // statement: statement_expression EQUAL expression SEMICOLON
#line 905 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Assign>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<Expression*> > (), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 2866 "parser.cpp"
    break;

  case 164: // statement: VAR pattern SEMICOLON
#line 907 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<VariableDefinition>(
          pl_context.source_loc(), yystack_[1].value.as < Nonnull<Pattern*> > (), std::nullopt, ValueCategory::Var,
          VariableDefinition::DefinitionType::Var);
    }
#line 2876 "parser.cpp"
    break;

  case 165: // statement: VAR pattern EQUAL expression SEMICOLON
#line 913 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<VariableDefinition>(
          pl_context.source_loc(), yystack_[3].value.as < Nonnull<Pattern*> > (), yystack_[1].value.as < Nonnull<Expression*> > (), ValueCategory::Var,
          VariableDefinition::DefinitionType::Var);
    }
#line 2886 "parser.cpp"
    break;

  case 166: // statement: RETURNED VAR variable_declaration SEMICOLON
#line 919 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<VariableDefinition>(
          pl_context.source_loc(), yystack_[1].value.as < Nonnull<BindingPattern*> > (), std::nullopt, ValueCategory::Var,
          VariableDefinition::DefinitionType::Returned);
    }
#line 2896 "parser.cpp"
    break;

  case 167: // statement: RETURNED VAR variable_declaration EQUAL expression SEMICOLON
#line 925 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<VariableDefinition>(
          pl_context.source_loc(), yystack_[3].value.as < Nonnull<BindingPattern*> > (), yystack_[1].value.as < Nonnull<Expression*> > (), ValueCategory::Var,
          VariableDefinition::DefinitionType::Returned);
    }
#line 2906 "parser.cpp"
    break;

  case 168: // statement: LET pattern EQUAL expression SEMICOLON
#line 931 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<VariableDefinition>(
          pl_context.source_loc(), yystack_[3].value.as < Nonnull<Pattern*> > (), yystack_[1].value.as < Nonnull<Expression*> > (), ValueCategory::Let,
          VariableDefinition::DefinitionType::Var);
    }
#line 2916 "parser.cpp"
    break;

  case 169: // statement: statement_expression SEMICOLON
#line 937 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<ExpressionStatement>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 2922 "parser.cpp"
    break;

  case 170: // statement: if_statement
#line 939 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = yystack_[0].value.as < Nonnull<If*> > (); }
#line 2928 "parser.cpp"
    break;

  case 171: // statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS block
#line 941 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<While>(pl_context.source_loc(), yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Block*> > ()); }
#line 2934 "parser.cpp"
    break;

  case 172: // statement: BREAK SEMICOLON
#line 943 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Break>(pl_context.source_loc()); }
#line 2940 "parser.cpp"
    break;

  case 173: // statement: CONTINUE SEMICOLON
#line 945 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Continue>(pl_context.source_loc()); }
#line 2946 "parser.cpp"
    break;

  case 174: // statement: RETURN return_expression SEMICOLON
#line 947 "parser.ypp"
    {
      auto [return_exp, is_omitted_exp] = yystack_[1].value.as < std::pair<Nonnull<Expression*>, bool> > ();
      yylhs.value.as < Nonnull<Statement*> > () = arena->New<ReturnExpression>(pl_context.source_loc(), return_exp,
                                        is_omitted_exp);
    }
#line 2956 "parser.cpp"
    break;

  case 175: // statement: RETURN VAR SEMICOLON
#line 953 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<ReturnVar>(pl_context.source_loc()); }
#line 2962 "parser.cpp"
    break;

  case 176: // statement: MATCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_CURLY_BRACE clause_list RIGHT_CURLY_BRACE
#line 956 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Match>(pl_context.source_loc(), yystack_[4].value.as < Nonnull<Expression*> > (), yystack_[1].value.as < std::vector<Match::Clause> > ()); }
#line 2968 "parser.cpp"
    break;

  case 177: // statement: CONTINUATION identifier block
#line 958 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Continuation>(pl_context.source_loc(), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Nonnull<Block*> > ()); }
#line 2974 "parser.cpp"
    break;

  case 178: // statement: RUN expression SEMICOLON
#line 960 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Run>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 2980 "parser.cpp"
    break;

  case 179: // statement: AWAIT SEMICOLON
#line 962 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<Await>(pl_context.source_loc()); }
#line 2986 "parser.cpp"
    break;

  case 180: // statement: FOR LEFT_PARENTHESIS variable_declaration IN type_expression RIGHT_PARENTHESIS block
#line 964 "parser.ypp"
    { yylhs.value.as < Nonnull<Statement*> > () = arena->New<For>(pl_context.source_loc(), yystack_[4].value.as < Nonnull<BindingPattern*> > (), yystack_[2].value.as < Nonnull<Expression*> > (), yystack_[0].value.as < Nonnull<Block*> > ()); }
#line 2992 "parser.cpp"
    break;

  case 181: // if_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS block optional_else
#line 968 "parser.ypp"
    { yylhs.value.as < Nonnull<If*> > () = arena->New<If>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<Expression*> > (), yystack_[1].value.as < Nonnull<Block*> > (), yystack_[0].value.as < std::optional<Nonnull<Block*>> > ()); }
#line 2998 "parser.cpp"
    break;

  case 182: // optional_else: %empty
#line 972 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<Block*>> > () = std::nullopt; }
#line 3004 "parser.cpp"
    break;

  case 183: // optional_else: ELSE if_statement
#line 974 "parser.ypp"
    {
      yylhs.value.as < std::optional<Nonnull<Block*>> > () = arena->New<Block>(pl_context.source_loc(),
                             std::vector<Nonnull<Statement*>>({yystack_[0].value.as < Nonnull<If*> > ()}));
    }
#line 3013 "parser.cpp"
    break;

  case 184: // optional_else: ELSE block
#line 979 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<Block*>> > () = yystack_[0].value.as < Nonnull<Block*> > (); }
#line 3019 "parser.cpp"
    break;

  case 185: // return_expression: %empty
#line 983 "parser.ypp"
    { yylhs.value.as < std::pair<Nonnull<Expression*>, bool> > () = {arena->New<TupleLiteral>(pl_context.source_loc()), true}; }
#line 3025 "parser.cpp"
    break;

  case 186: // return_expression: expression
#line 985 "parser.ypp"
    { yylhs.value.as < std::pair<Nonnull<Expression*>, bool> > () = {yystack_[0].value.as < Nonnull<Expression*> > (), false}; }
#line 3031 "parser.cpp"
    break;

  case 187: // statement_list: %empty
#line 989 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Statement*>> > () = {}; }
#line 3037 "parser.cpp"
    break;

  case 188: // statement_list: statement_list statement
#line 991 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Statement*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Statement*>> > ());
      yylhs.value.as < std::vector<Nonnull<Statement*>> > ().push_back(yystack_[0].value.as < Nonnull<Statement*> > ());
    }
#line 3046 "parser.cpp"
    break;

  case 189: // block: LEFT_CURLY_BRACE statement_list RIGHT_CURLY_BRACE
#line 998 "parser.ypp"
    { yylhs.value.as < Nonnull<Block*> > () = arena->New<Block>(pl_context.source_loc(), std::move(yystack_[1].value.as < std::vector<Nonnull<Statement*>> > ())); }
#line 3052 "parser.cpp"
    break;

  case 190: // return_term: %empty
#line 1003 "parser.ypp"
    { yylhs.value.as < BisonWrap<ReturnTerm> > () = ReturnTerm::Omitted(pl_context.source_loc()); }
#line 3058 "parser.cpp"
    break;

  case 191: // return_term: ARROW AUTO
#line 1005 "parser.ypp"
    { yylhs.value.as < BisonWrap<ReturnTerm> > () = ReturnTerm::Auto(pl_context.source_loc()); }
#line 3064 "parser.cpp"
    break;

  case 192: // return_term: ARROW expression
#line 1007 "parser.ypp"
    { yylhs.value.as < BisonWrap<ReturnTerm> > () = ReturnTerm::Explicit(yystack_[0].value.as < Nonnull<Expression*> > ()); }
#line 3070 "parser.cpp"
    break;

  case 193: // generic_binding: identifier COLON_BANG expression
#line 1012 "parser.ypp"
    {
      yylhs.value.as < Nonnull<GenericBinding*> > () = arena->New<GenericBinding>(pl_context.source_loc(), std::move(yystack_[2].value.as < std::string > ()), yystack_[0].value.as < Nonnull<Expression*> > ());
    }
#line 3078 "parser.cpp"
    break;

  case 194: // deduced_param: generic_binding
#line 1019 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = yystack_[0].value.as < Nonnull<GenericBinding*> > (); }
#line 3084 "parser.cpp"
    break;

  case 195: // deduced_param: variable_declaration
#line 1021 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = yystack_[0].value.as < Nonnull<BindingPattern*> > (); }
#line 3090 "parser.cpp"
    break;

  case 196: // deduced_param: ADDR variable_declaration
#line 1023 "parser.ypp"
    { yylhs.value.as < Nonnull<Pattern*> > () = arena->New<AddrPattern>(pl_context.source_loc(), yystack_[0].value.as < Nonnull<BindingPattern*> > ()); }
#line 3096 "parser.cpp"
    break;

  case 197: // deduced_param_list: %empty
#line 1028 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = {}; }
#line 3102 "parser.cpp"
    break;

  case 198: // deduced_param_list: deduced_param
#line 1030 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = {yystack_[0].value.as < Nonnull<Pattern*> > ()}; }
#line 3108 "parser.cpp"
    break;

  case 199: // deduced_param_list: deduced_param_list COMMA deduced_param
#line 1032 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = std::move(yystack_[2].value.as < std::vector<Nonnull<AstNode*>> > ());
      yylhs.value.as < std::vector<Nonnull<AstNode*>> > ().push_back(yystack_[0].value.as < Nonnull<Pattern*> > ());
    }
#line 3117 "parser.cpp"
    break;

  case 200: // deduced_params: %empty
#line 1040 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = std::vector<Nonnull<AstNode*>>(); }
#line 3123 "parser.cpp"
    break;

  case 201: // deduced_params: LEFT_SQUARE_BRACKET deduced_param_list RIGHT_SQUARE_BRACKET
#line 1042 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = yystack_[1].value.as < std::vector<Nonnull<AstNode*>> > (); }
#line 3129 "parser.cpp"
    break;

  case 202: // impl_deduced_params: %empty
#line 1047 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = std::vector<Nonnull<AstNode*>>(); }
#line 3135 "parser.cpp"
    break;

  case 203: // impl_deduced_params: FORALL LEFT_SQUARE_BRACKET deduced_param_list RIGHT_SQUARE_BRACKET
#line 1049 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AstNode*>> > () = yystack_[1].value.as < std::vector<Nonnull<AstNode*>> > (); }
#line 3141 "parser.cpp"
    break;

  case 204: // function_declaration: FN identifier deduced_params maybe_empty_tuple_pattern return_term block
#line 1054 "parser.ypp"
    {
      ErrorOr<FunctionDeclaration*> fn = FunctionDeclaration::Create(
          arena, pl_context.source_loc(), yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::vector<Nonnull<AstNode*>> > (), yystack_[2].value.as < Nonnull<TuplePattern*> > (), yystack_[1].value.as < BisonWrap<ReturnTerm> > (), yystack_[0].value.as < Nonnull<Block*> > ());
      if (fn.ok()) {
        yylhs.value.as < Nonnull<FunctionDeclaration*> > () = *fn;
      } else {
        pl_context.RecordSyntaxError(std::move(fn).error());
        YYERROR;
      }
    }
#line 3156 "parser.cpp"
    break;

  case 205: // function_declaration: FN identifier deduced_params maybe_empty_tuple_pattern return_term SEMICOLON
#line 1065 "parser.ypp"
    {
      ErrorOr<FunctionDeclaration*> fn = FunctionDeclaration::Create(
          arena, pl_context.source_loc(), yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::vector<Nonnull<AstNode*>> > (), yystack_[2].value.as < Nonnull<TuplePattern*> > (), yystack_[1].value.as < BisonWrap<ReturnTerm> > (), std::nullopt);
      if (fn.ok()) {
        yylhs.value.as < Nonnull<FunctionDeclaration*> > () = *fn;
      } else {
        pl_context.RecordSyntaxError(std::move(fn).error());
        YYERROR;
      }
    }
#line 3171 "parser.cpp"
    break;

  case 206: // variable_declaration: identifier COLON pattern
#line 1077 "parser.ypp"
    {
      yylhs.value.as < Nonnull<BindingPattern*> > () = arena->New<BindingPattern>(pl_context.source_loc(), yystack_[2].value.as < std::string > (), yystack_[0].value.as < Nonnull<Pattern*> > (),
                                      std::nullopt);
    }
#line 3180 "parser.cpp"
    break;

  case 207: // alias_declaration: ALIAS identifier EQUAL expression SEMICOLON
#line 1083 "parser.ypp"
    { yylhs.value.as < Nonnull<AliasDeclaration*> > () = arena->New<AliasDeclaration>(pl_context.source_loc(), yystack_[3].value.as < std::string > (), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 3186 "parser.cpp"
    break;

  case 208: // mix_declaration: MIX expression SEMICOLON
#line 1087 "parser.ypp"
    { yylhs.value.as < Nonnull<MixDeclaration*> > () = arena->New<MixDeclaration>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<Expression*> > ()); }
#line 3192 "parser.cpp"
    break;

  case 209: // alternative: identifier tuple
#line 1091 "parser.ypp"
    { yylhs.value.as < Nonnull<AlternativeSignature*> > () = arena->New<AlternativeSignature>(pl_context.source_loc(), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Nonnull<TupleLiteral*> > ()); }
#line 3198 "parser.cpp"
    break;

  case 210: // alternative: identifier
#line 1093 "parser.ypp"
    {
      yylhs.value.as < Nonnull<AlternativeSignature*> > () = arena->New<AlternativeSignature>(
          pl_context.source_loc(), yystack_[0].value.as < std::string > (),
          arena->New<TupleLiteral>(pl_context.source_loc()));
    }
#line 3208 "parser.cpp"
    break;

  case 211: // alternative_list: %empty
#line 1101 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > () = {}; }
#line 3214 "parser.cpp"
    break;

  case 212: // alternative_list: alternative_list_contents
#line 1103 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > () = yystack_[0].value.as < std::vector<Nonnull<AlternativeSignature*>> > (); }
#line 3220 "parser.cpp"
    break;

  case 213: // alternative_list: alternative_list_contents COMMA
#line 1105 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > () = yystack_[1].value.as < std::vector<Nonnull<AlternativeSignature*>> > (); }
#line 3226 "parser.cpp"
    break;

  case 214: // alternative_list_contents: alternative
#line 1109 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > () = {std::move(yystack_[0].value.as < Nonnull<AlternativeSignature*> > ())}; }
#line 3232 "parser.cpp"
    break;

  case 215: // alternative_list_contents: alternative_list_contents COMMA alternative
#line 1111 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > () = std::move(yystack_[2].value.as < std::vector<Nonnull<AlternativeSignature*>> > ());
      yylhs.value.as < std::vector<Nonnull<AlternativeSignature*>> > ().push_back(std::move(yystack_[0].value.as < Nonnull<AlternativeSignature*> > ()));
    }
#line 3241 "parser.cpp"
    break;

  case 216: // type_params: %empty
#line 1118 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<TuplePattern*>> > () = std::nullopt; }
#line 3247 "parser.cpp"
    break;

  case 217: // type_params: tuple_pattern
#line 1120 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<TuplePattern*>> > () = yystack_[0].value.as < Nonnull<TuplePattern*> > (); }
#line 3253 "parser.cpp"
    break;

  case 218: // mixin_import: %empty
#line 1125 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<TypeTypeLiteral>(pl_context.source_loc()); }
#line 3259 "parser.cpp"
    break;

  case 219: // mixin_import: FOR expression
#line 1127 "parser.ypp"
    {
      pl_context.RecordSyntaxError("'for' not supported currently");
      YYERROR;
      // $mixin_import = $expression;
    }
#line 3269 "parser.cpp"
    break;

  case 220: // class_declaration_extensibility: %empty
#line 1135 "parser.ypp"
    { yylhs.value.as < ClassExtensibility > () = Carbon::ClassExtensibility::None; }
#line 3275 "parser.cpp"
    break;

  case 221: // class_declaration_extensibility: ABSTRACT
#line 1137 "parser.ypp"
    { yylhs.value.as < ClassExtensibility > () = Carbon::ClassExtensibility::Abstract; }
#line 3281 "parser.cpp"
    break;

  case 222: // class_declaration_extensibility: BASE
#line 1139 "parser.ypp"
    { yylhs.value.as < ClassExtensibility > () = Carbon::ClassExtensibility::Base; }
#line 3287 "parser.cpp"
    break;

  case 223: // class_declaration_extends: %empty
#line 1143 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<Expression*>> > () = std::nullopt; }
#line 3293 "parser.cpp"
    break;

  case 224: // class_declaration_extends: EXTENDS expression
#line 1145 "parser.ypp"
    { yylhs.value.as < std::optional<Nonnull<Expression*>> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 3299 "parser.cpp"
    break;

  case 225: // declaration: function_declaration
#line 1149 "parser.ypp"
    { yylhs.value.as < Nonnull<Declaration*> > () = yystack_[0].value.as < Nonnull<FunctionDeclaration*> > (); }
#line 3305 "parser.cpp"
    break;

  case 226: // declaration: destructor_declaration
#line 1151 "parser.ypp"
    { yylhs.value.as < Nonnull<Declaration*> > () = yystack_[0].value.as < Nonnull<DestructorDeclaration*> > (); }
#line 3311 "parser.cpp"
    break;

  case 227: // declaration: class_declaration_extensibility CLASS identifier type_params class_declaration_extends LEFT_CURLY_BRACE class_body RIGHT_CURLY_BRACE
#line 1153 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<ClassDeclaration>(
          pl_context.source_loc(), yystack_[5].value.as < std::string > (),
          arena->New<SelfDeclaration>(pl_context.source_loc()), yystack_[7].value.as < ClassExtensibility > (), yystack_[4].value.as < std::optional<Nonnull<TuplePattern*>> > (), yystack_[3].value.as < std::optional<Nonnull<Expression*>> > (), yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
    }
#line 3321 "parser.cpp"
    break;

  case 228: // declaration: MIXIN identifier type_params mixin_import LEFT_CURLY_BRACE mixin_body RIGHT_CURLY_BRACE
#line 1159 "parser.ypp"
    {
      // EXPERIMENTAL MIXN FEATURE
      auto self =
          arena -> New<GenericBinding>(pl_context.source_loc(), "Self", yystack_[3].value.as < Nonnull<Expression*> > ());
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<MixinDeclaration>(pl_context.source_loc(), yystack_[5].value.as < std::string > (), yystack_[4].value.as < std::optional<Nonnull<TuplePattern*>> > (), self, yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
    }
#line 3332 "parser.cpp"
    break;

  case 229: // declaration: CHOICE identifier type_params LEFT_CURLY_BRACE alternative_list RIGHT_CURLY_BRACE
#line 1166 "parser.ypp"
    { yylhs.value.as < Nonnull<Declaration*> > () = arena->New<ChoiceDeclaration>(pl_context.source_loc(), yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::optional<Nonnull<TuplePattern*>> > (), yystack_[1].value.as < std::vector<Nonnull<AlternativeSignature*>> > ()); }
#line 3338 "parser.cpp"
    break;

  case 230: // declaration: VAR variable_declaration SEMICOLON
#line 1168 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<VariableDeclaration>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<BindingPattern*> > (),
                                           std::nullopt, ValueCategory::Var);
    }
#line 3347 "parser.cpp"
    break;

  case 231: // declaration: VAR variable_declaration EQUAL expression SEMICOLON
#line 1173 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<VariableDeclaration>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<BindingPattern*> > (), yystack_[1].value.as < Nonnull<Expression*> > (),
                                           ValueCategory::Var);
    }
#line 3356 "parser.cpp"
    break;

  case 232: // declaration: LET variable_declaration EQUAL expression SEMICOLON
#line 1178 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<VariableDeclaration>(pl_context.source_loc(), yystack_[3].value.as < Nonnull<BindingPattern*> > (), yystack_[1].value.as < Nonnull<Expression*> > (),
                                           ValueCategory::Let);
    }
#line 3365 "parser.cpp"
    break;

  case 233: // declaration: INTERFACE identifier type_params LEFT_CURLY_BRACE interface_body RIGHT_CURLY_BRACE
#line 1183 "parser.ypp"
    {
      yylhs.value.as < Nonnull<Declaration*> > () = arena->New<InterfaceDeclaration>(arena, pl_context.source_loc(), yystack_[4].value.as < std::string > (), yystack_[3].value.as < std::optional<Nonnull<TuplePattern*>> > (),
                                            yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
    }
#line 3374 "parser.cpp"
    break;

  case 234: // declaration: impl_kind IMPL impl_deduced_params impl_type AS type_or_where_expression LEFT_CURLY_BRACE impl_body RIGHT_CURLY_BRACE
#line 1188 "parser.ypp"
    {
      ErrorOr<ImplDeclaration*> impl = ImplDeclaration::Create(
          arena, pl_context.source_loc(), yystack_[8].value.as < ImplKind > (), yystack_[5].value.as < Nonnull<Expression*> > (), yystack_[3].value.as < Nonnull<Expression*> > (), yystack_[6].value.as < std::vector<Nonnull<AstNode*>> > (), yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      if (impl.ok()) {
        yylhs.value.as < Nonnull<Declaration*> > () = *impl;
      } else {
        pl_context.RecordSyntaxError(std::move(impl).error());
        YYERROR;
      }
    }
#line 3389 "parser.cpp"
    break;

  case 235: // declaration: alias_declaration
#line 1199 "parser.ypp"
    { yylhs.value.as < Nonnull<Declaration*> > () = yystack_[0].value.as < Nonnull<AliasDeclaration*> > (); }
#line 3395 "parser.cpp"
    break;

  case 236: // impl_kind: %empty
#line 1203 "parser.ypp"
    { yylhs.value.as < ImplKind > () = Carbon::ImplKind::InternalImpl; }
#line 3401 "parser.cpp"
    break;

  case 237: // impl_kind: EXTERNAL
#line 1205 "parser.ypp"
    { yylhs.value.as < ImplKind > () = Carbon::ImplKind::ExternalImpl; }
#line 3407 "parser.cpp"
    break;

  case 238: // impl_type: %empty
#line 1209 "parser.ypp"
    { yylhs.value.as < Nonnull<Expression*> > () = arena->New<IdentifierExpression>(pl_context.source_loc(), "Self"); }
#line 3413 "parser.cpp"
    break;

  case 239: // impl_type: type_expression
#line 1210 "parser.ypp"
  { yylhs.value.as < Nonnull<Expression*> > () = yystack_[0].value.as < Nonnull<Expression*> > (); }
#line 3419 "parser.cpp"
    break;

  case 240: // destructor_declaration: DESTRUCTOR deduced_params block
#line 1214 "parser.ypp"
  {
    ErrorOr<DestructorDeclaration*> fn =
        DestructorDeclaration::CreateDestructor(
            arena, pl_context.source_loc(), yystack_[1].value.as < std::vector<Nonnull<AstNode*>> > (),
            arena->New<TuplePattern>(pl_context.source_loc(),
                                     std::vector<Nonnull<Pattern*>>()),
            ReturnTerm::Omitted(pl_context.source_loc()), yystack_[0].value.as < Nonnull<Block*> > ());
    if (fn.ok()) {
      yylhs.value.as < Nonnull<DestructorDeclaration*> > () = *fn;
    } else {
      pl_context.RecordSyntaxError(std::move(fn).error());
      YYERROR;
    }
  }
#line 3438 "parser.cpp"
    break;

  case 241: // declaration_list: %empty
#line 1231 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = {}; }
#line 3444 "parser.cpp"
    break;

  case 242: // declaration_list: declaration_list declaration
#line 1233 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(Nonnull<Declaration*>(yystack_[0].value.as < Nonnull<Declaration*> > ()));
    }
#line 3453 "parser.cpp"
    break;

  case 243: // class_body: %empty
#line 1240 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = {}; }
#line 3459 "parser.cpp"
    break;

  case 244: // class_body: class_body declaration
#line 1242 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(Nonnull<Declaration*>(yystack_[0].value.as < Nonnull<Declaration*> > ()));
    }
#line 3468 "parser.cpp"
    break;

  case 245: // class_body: class_body mix_declaration
#line 1247 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(Nonnull<Declaration*>(yystack_[0].value.as < Nonnull<MixDeclaration*> > ()));
    }
#line 3477 "parser.cpp"
    break;

  case 246: // mixin_body: %empty
#line 1255 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = {}; }
#line 3483 "parser.cpp"
    break;

  case 247: // mixin_body: mixin_body function_declaration
#line 1257 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(Nonnull<Declaration*>(yystack_[0].value.as < Nonnull<FunctionDeclaration*> > ()));
    }
#line 3492 "parser.cpp"
    break;

  case 248: // mixin_body: mixin_body mix_declaration
#line 1262 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(Nonnull<Declaration*>(yystack_[0].value.as < Nonnull<MixDeclaration*> > ()));
    }
#line 3501 "parser.cpp"
    break;

  case 249: // interface_body: %empty
#line 1269 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = {}; }
#line 3507 "parser.cpp"
    break;

  case 250: // interface_body: interface_body function_declaration
#line 1271 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(yystack_[0].value.as < Nonnull<FunctionDeclaration*> > ());
    }
#line 3516 "parser.cpp"
    break;

  case 251: // interface_body: interface_body LET generic_binding SEMICOLON
#line 1276 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[3].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(
          arena->New<AssociatedConstantDeclaration>(pl_context.source_loc(), yystack_[1].value.as < Nonnull<GenericBinding*> > ()));
    }
#line 3526 "parser.cpp"
    break;

  case 252: // impl_body: %empty
#line 1284 "parser.ypp"
    { yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = {}; }
#line 3532 "parser.cpp"
    break;

  case 253: // impl_body: impl_body function_declaration
#line 1286 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(yystack_[0].value.as < Nonnull<FunctionDeclaration*> > ());
    }
#line 3541 "parser.cpp"
    break;

  case 254: // impl_body: impl_body alias_declaration
#line 1291 "parser.ypp"
    {
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > () = std::move(yystack_[1].value.as < std::vector<Nonnull<Declaration*>> > ());
      yylhs.value.as < std::vector<Nonnull<Declaration*>> > ().push_back(yystack_[0].value.as < Nonnull<AliasDeclaration*> > ());
    }
#line 3550 "parser.cpp"
    break;


#line 3554 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
   Parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   Parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
   Parser ::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  //  Parser ::context.
   Parser ::context::context (const  Parser & yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
   Parser ::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
   Parser ::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
   Parser ::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short  Parser ::yypact_ninf_ = -262;

  const short  Parser ::yytable_ninf_ = -237;

  const short
   Parser ::yypact_[] =
  {
     -19,    57,    64,  -262,    17,  -262,    62,   142,   110,   127,
    -262,  1149,  -262,  -262,  -262,    72,    17,  -262,   176,  -262,
     179,   137,  -262,   190,   206,   210,   247,   210,  -262,  -262,
     233,  -262,   214,  -262,  -262,   183,   231,   217,   168,   220,
     137,   217,   249,   241,   217,     2,   273,   238,  -262,  1222,
     847,  -262,  -262,   229,   104,   210,  -262,  -262,    11,  -262,
    -262,  -262,   230,   235,   847,  1222,   248,  1222,  -262,   217,
     234,  1360,  -262,  -262,   237,  -262,  -262,  1443,  -262,  1443,
    -262,  -262,   237,  1222,   157,   917,  1222,  1443,  1443,    25,
    -262,  -262,  -262,  -262,  1443,  1443,  -262,   225,  1549,   205,
     207,  -262,  -262,   310,    55,   -26,    40,    48,   124,  -262,
     295,     7,   236,   240,   287,   288,  -262,  -262,  -262,  -262,
     321,   344,  -262,  -262,     5,   245,   303,   304,   251,   253,
    -262,  -262,  -262,   243,  -262,  -262,  -262,  -262,  -262,   175,
    -262,   483,  -262,  1464,   232,  -262,   300,  -262,   228,  -262,
    -262,    26,   325,  1222,  -262,   168,  -262,   392,   574,  -262,
     318,  -262,  -262,  -262,  -262,   256,  1222,   280,   257,   301,
     168,   328,  -262,  -262,  -262,  -262,   330,   327,  -262,  -262,
    -262,  -262,   329,   261,   341,  -262,   170,    19,    24,  -262,
      27,   266,  -262,  -262,  -262,  -262,  -262,  -262,  1222,    29,
    -262,  -262,  -262,  -262,  1443,  1360,  1422,  1422,  1422,  1422,
    1422,  1422,  1422,  1422,  1422,  1422,  1422,  -262,  -262,  -262,
    -262,  -262,  -262,  1360,  1291,  1291,  -262,    30,   232,  -262,
    -262,   847,   847,  1222,   665,  -262,   237,  -262,   274,   323,
    -262,  -262,   271,   282,   359,   284,   313,   315,   847,   316,
    1000,   283,  -262,  1222,   847,   319,    32,  -262,  -262,  -262,
    1070,    79,     4,  -262,  -262,  -262,  -262,  1222,   322,    13,
    1360,  1360,  1222,  1222,  1222,   161,  -262,   163,  -262,  1139,
    -262,  1222,   297,  1222,  -262,   536,  -262,   330,  -262,    22,
    -262,   364,  -262,  -262,  -262,  -262,  -262,  -262,  -262,    90,
      40,  -262,  -262,  -262,  -262,  -262,  -262,  1509,  -262,  -262,
    -262,   756,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,   325,  -262,  -262,   220,  -262,   210,  1222,   348,  1222,
     314,  -262,   324,   210,   335,    36,  1222,  1222,  -262,  -262,
    -262,  -262,  -262,   380,  -262,  -262,    44,  -262,  -262,  -262,
     207,  -262,   337,  -262,   368,  -262,  -262,  -262,   358,  -262,
     382,  -262,   331,  -262,   340,  1360,  1360,  1360,  -262,  -262,
     367,   342,  1222,   343,  -262,  -262,    38,  -262,  1222,  -262,
     347,   345,   398,   346,  1222,  -262,  -262,  -262,  1008,  -262,
    1222,  1222,  1222,  -262,  -262,  -262,  -262,  -262,  1360,   220,
     349,   374,  1222,  -262,   350,   220,  -262,  -262,   355,  -262,
    -262,  -262,    12,  -262,  -262,  -262,   352,   402,  -262,  -262,
     357,  -262,  -262,  -262,  -262,  -262,  -262,   220,     9,  -262,
      14,  -262,  -262,  -262,  -262,   847,   405,  -262,  -262,   407,
     220,   220,  -262,  -262
  };

  const unsigned char
   Parser ::yydefact_[] =
  {
       0,     0,     0,     5,     7,     1,   241,     0,     0,     0,
       6,     2,     8,     9,    10,     0,     7,   221,     0,   222,
       0,   200,   237,     0,     0,     0,     0,     0,   225,   235,
       0,   242,     0,   226,     3,     0,     0,   216,   197,     0,
     200,   216,     0,     0,   216,     0,     0,   202,     4,     0,
       0,   156,   217,     0,     0,     0,   194,   198,     0,   195,
     187,   240,     0,     0,     0,     0,   218,     0,   230,   216,
       0,   238,    14,    11,     0,    18,    15,     0,    21,     0,
      23,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    16,    22,     0,     0,    28,    36,    48,    82,
       0,    46,    47,    84,    50,     0,    58,     0,    78,    83,
       0,    71,     0,    72,     0,    73,    80,    81,    79,    85,
      94,     0,    98,    97,   115,   101,     0,   116,     0,   117,
     118,   119,   121,     0,    12,    24,   123,    25,    26,    11,
     141,     0,   148,     0,    36,   128,     0,   152,     0,   144,
     149,     0,   211,     0,   196,     0,   201,     0,     0,   158,
     190,   249,   140,   206,   139,     0,     0,     0,     0,   223,
     197,    41,    43,   239,    49,    62,    42,     0,    32,   124,
      39,    45,     0,     0,     0,   134,     0,     0,     0,   125,
       0,     0,    44,    96,   122,    13,    38,    37,     0,     0,
      35,    34,    29,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    91,    92,
      89,    90,    93,     0,     0,     0,   207,     0,     0,   146,
     145,     0,     0,     0,     0,   150,   210,   214,     0,   212,
     193,   199,     0,     0,     0,     0,     0,     0,     0,     0,
     185,     0,   189,     0,     0,     0,     0,   188,   170,   157,
       0,     0,     0,   232,   219,   246,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,   135,     0,
     126,     0,     0,     0,    77,    86,    82,    71,    87,     0,
     109,   111,    48,    76,    75,    74,    61,    53,    52,    54,
      55,    60,    59,    64,    67,    70,    95,    99,   100,   103,
     106,     0,   129,   153,   142,   143,   151,   154,   155,   209,
     229,   213,   179,   172,     0,   173,     0,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,   169,   191,
     192,   205,   204,     0,   233,   250,     0,   224,   243,   203,
     112,   113,     0,    40,     0,   137,   132,   131,     0,   136,
       0,   127,     0,    31,     0,     0,     0,     0,   215,   177,
       0,     0,     0,     0,   175,   174,     0,   178,     0,   164,
       0,     0,     0,     0,     0,   228,   247,   248,   220,   252,
       0,     0,     0,    27,    30,   108,   107,   110,     0,     0,
       0,     0,     0,   166,     0,     0,   163,   251,     0,   227,
     245,   244,     0,   120,   133,   138,     0,   182,   168,   161,
       0,   165,   171,   208,   234,   253,   254,     0,     0,   181,
       0,   167,   180,   183,   184,     0,     0,   176,   162,     0,
       0,     0,   160,   159
  };

  const short
   Parser ::yypgoto_[] =
  {
    -262,  -262,  -262,  -262,  -262,   425,  -262,  -262,   -50,   -68,
     -12,   -63,  -262,  -262,   -46,    34,  -262,  -132,   239,  -262,
    -262,  -262,  -262,    -6,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -192,  -145,  -262,  -262,  -262,    31,    45,  -262,
    -262,  -262,  -262,    75,  -262,   173,  -262,   291,  -257,   -44,
     -49,  -262,   -58,   178,   -55,  -262,  -262,  -262,  -262,  -220,
     -43,  -262,  -262,     6,  -262,   -52,  -262,  -262,  -262,  -262,
      16,  -262,  -262,  -262,  -127,  -262,   106,   305,   285,   410,
    -262,  -261,   -23,    46,    68,   138,  -262,  -262,    84,  -262,
    -262,  -262,    73,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    -262
  };

  const short
   Parser ::yydefgoto_[] =
  {
       0,     2,     3,    10,     6,     8,    15,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   301,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   223,   122,   123,   124,   125,   126,
     127,   128,   129,   290,   291,   130,   352,   131,   132,   162,
     134,   135,   203,   136,   146,   137,   187,   138,   188,   163,
     164,   148,   149,   150,   151,    52,   160,   438,   430,   257,
     258,   429,   332,   157,    61,   261,    56,    57,    58,    39,
      71,    28,    59,    29,   387,   237,   238,   239,    53,   167,
      30,   268,    31,    32,   177,    33,    11,   388,   346,   262,
     412
  };

  const short
   Parser ::yytable_[] =
  {
     144,   345,    43,   171,    45,   133,   145,   147,   173,   180,
     159,   181,   314,   288,   144,   354,   178,  -100,   -63,   192,
     193,   165,    18,   168,   182,   174,   196,   197,   328,   194,
     190,   288,   154,   194,   335,   186,   435,    67,   155,   183,
     155,   145,   191,    51,    23,   436,   275,    51,   202,     1,
      51,   277,    23,   234,   279,   210,   247,   311,   365,   172,
     289,     4,    60,   343,     5,   176,   -62,   337,    51,   211,
     206,   378,  -100,   402,   366,    51,   -68,     7,   306,   344,
     300,   300,    68,   283,    23,   386,   227,   424,   156,   437,
     349,   144,   230,   228,   276,   202,   -42,   145,   147,   278,
     229,   207,   235,   280,   195,   175,   280,   384,   144,   240,
     212,     9,   338,   208,   145,   147,   379,   -56,   403,   385,
     213,   -51,   264,    13,   209,    63,   -65,   -56,    66,    64,
     153,    16,    60,   413,   342,   -51,   284,   285,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,    12,
      51,   425,    34,   169,   282,   285,   307,   307,    14,   341,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   -50,    54,   288,   288,   288,   230,    55,   319,   202,
      36,   144,   144,    37,   144,   -50,   -57,   312,   313,   315,
     317,   318,    38,   286,    40,   273,   -57,   369,   144,   287,
    -147,  -147,   171,   171,   144,   274,   331,   350,   353,   334,
      41,   286,   286,   286,    42,   439,   340,   287,   287,   287,
     395,   396,   289,   347,   174,   174,   358,   184,   360,   355,
     356,   184,   185,   184,    51,   312,   357,   362,   359,   364,
     293,   294,   295,   296,   297,   298,   299,   299,   303,   304,
     305,    44,   179,   232,   233,   308,   308,    46,   172,   172,
     179,   144,    47,    48,   176,   176,    49,   312,   313,   309,
     310,    50,   417,    60,    64,   179,    65,    69,   422,    85,
     198,    70,   152,   371,   158,   373,   141,   198,   161,   170,
     166,    85,   380,   381,   -43,   199,   205,   285,   285,   285,
     432,   434,   199,   370,   175,   175,   214,   215,   216,   -69,
     376,   -66,  -104,   442,   443,   224,  -102,   200,   225,   201,
    -105,   -49,   179,   226,   200,   -49,   201,   231,   400,   236,
     171,   -49,   260,   265,   404,   416,   263,   266,   267,   -48,
     408,   -63,   270,   271,   272,   194,   281,   414,   415,   320,
     321,   322,   174,   286,   286,   286,   -49,   -87,   420,   287,
     287,   287,   323,   324,   325,   -87,   -87,   326,   -49,   327,
     329,   333,   -49,   336,   363,   348,   367,   -87,   -87,   -49,
     217,   -49,   -49,   372,   382,   144,   172,   -87,   218,   219,
     389,   -49,   176,   391,   374,    72,    73,    74,    75,    76,
     220,   221,   390,    77,   375,   -49,   179,   392,   393,   242,
     222,    78,   243,    79,   179,   377,   394,   398,   399,   401,
     244,    80,   245,   405,   153,   406,   407,   419,   427,   418,
     421,    81,   175,    82,   246,   423,   428,   431,   440,   247,
     441,    35,   397,   351,   433,    84,    85,    86,   256,   383,
      62,   248,   302,   249,    87,   269,   410,    88,   426,   368,
     241,   411,    89,     0,     0,   250,   251,   252,     0,     0,
     253,    90,     0,     0,    91,     0,    92,    93,     0,     0,
     254,     0,   255,     0,    94,    95,    72,   139,    74,    75,
      76,     0,     0,     0,    77,     0,     0,     0,     0,   140,
       0,     0,    78,     0,    79,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,    84,   141,    86,     0,
       0,     0,     0,     0,     0,    87,     0,   -48,    88,     0,
       0,   -48,     0,    89,     0,     0,     0,   -48,     0,   189,
       0,     0,    90,     0,     0,    91,     0,    92,    93,   142,
       0,   143,     0,     0,     0,    94,    95,    72,   139,    74,
      75,    76,   -48,     0,     0,    77,     0,     0,     0,     0,
     140,     0,     0,    78,   -48,    79,     0,     0,   -48,     0,
       0,     0,     0,    80,     0,   -48,     0,   -48,   -48,     0,
       0,     0,     0,    81,     0,    82,     0,   -48,     0,     0,
       0,    83,     0,   204,     0,     0,     0,    84,   141,    86,
       0,   -48,     0,     0,     0,     0,    87,     0,     0,    88,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
     259,     0,     0,    90,     0,     0,    91,     0,    92,    93,
     142,     0,   143,     0,     0,     0,    94,    95,    72,   139,
      74,    75,    76,     0,     0,     0,    77,     0,     0,     0,
       0,   140,     0,     0,    78,     0,    79,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    84,   141,
      86,     0,     0,     0,     0,     0,     0,    87,     0,     0,
      88,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,   316,     0,     0,    90,     0,     0,    91,     0,    92,
      93,   142,     0,   143,     0,     0,     0,    94,    95,    72,
     139,    74,    75,    76,     0,     0,     0,    77,     0,     0,
       0,     0,   140,     0,     0,    78,     0,    79,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,    84,
     141,    86,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    88,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,   361,     0,     0,    90,     0,     0,    91,     0,
      92,    93,   142,     0,   143,     0,     0,     0,    94,    95,
      72,   139,    74,    75,    76,     0,     0,     0,    77,     0,
       0,     0,     0,   140,     0,     0,    78,     0,    79,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
      84,   141,    86,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,     0,     0,     0,    89,     0,     0,
      72,    73,    74,    75,    76,     0,    90,     0,    77,    91,
       0,    92,    93,   142,     0,   143,    78,     0,    79,    94,
      95,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
      84,    85,    86,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    88,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,   189,     0,     0,    90,     0,     0,    91,
       0,    92,    93,    72,    73,    74,    75,    76,     0,    94,
      95,    77,     0,     0,     0,     0,    17,     0,    18,    78,
       0,    79,     0,     0,     0,     0,    19,     0,     0,    80,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    81,
      21,    82,     0,     0,     0,     0,    22,    83,    23,     0,
       0,     0,     0,    84,    85,    86,  -236,     0,     0,    24,
       0,     0,    87,     0,     0,    88,     0,    25,     0,     0,
      89,   384,    26,    72,    73,    74,    75,    76,     0,    90,
       0,    77,    91,   409,    92,    93,   339,     0,   330,    78,
       0,    79,    94,    95,     0,     0,    27,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,     0,     0,     0,     0,
      89,     0,    72,    73,    74,    75,    76,     0,     0,    90,
      77,     0,    91,     0,    92,    93,     0,    17,    78,    18,
      79,     0,    94,    95,     0,     0,     0,    19,    80,     0,
       0,     0,    20,  -220,     0,     0,     0,     0,    81,     0,
      82,    21,     0,     0,     0,     0,    83,    22,     0,    23,
       0,     0,    84,    85,    86,     0,     0,  -236,     0,     0,
      24,    87,     0,     0,    88,     0,     0,     0,    25,    89,
       0,     0,     0,    26,     0,   361,     0,     0,    90,     0,
       0,    91,     0,    92,    93,    72,    73,    74,    75,    76,
       0,    94,    95,    77,     0,     0,     0,    27,     0,     0,
       0,    78,     0,    79,     0,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,    84,    85,    86,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    88,     0,     0,
       0,     0,    89,     0,    72,    73,    74,    75,    76,     0,
       0,    90,    77,     0,    91,     0,    92,    93,     0,     0,
      78,     0,    79,     0,    94,    95,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    88,     0,     0,     0,
       0,    89,     0,    72,    73,    74,    75,    76,     0,     0,
      90,    77,     0,    91,     0,    92,    93,     0,     0,    78,
       0,    79,     0,    94,    95,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    72,    73,    74,    75,    76,
      89,     0,     0,    77,     0,     0,     0,     0,     0,    90,
       0,    78,    91,    79,    92,    93,    72,    73,    74,    75,
      76,    80,    94,    95,    77,     0,     0,     0,     0,     0,
       0,    81,    78,     0,     0,     0,     0,    72,   139,    74,
      75,    76,    80,     0,     0,    84,    85,    86,     0,     0,
     140,     0,    81,    78,    87,     0,     0,     0,     0,     0,
       0,     0,    89,    80,     0,     0,    84,    85,    86,     0,
       0,    90,     0,    81,    91,     0,    92,    93,     0,     0,
       0,     0,     0,    89,    94,    95,     0,    84,   141,    86,
     -48,     0,    90,     0,   -48,    91,     0,    92,    93,     0,
     -48,     0,     0,     0,    89,    94,    95,     0,     0,     0,
       0,     0,     0,    90,     0,   -86,    91,     0,    92,    93,
     142,     0,   143,   -86,   -86,   -48,     0,     0,     0,     0,
       0,   -99,     0,     0,     0,   -86,   -86,   -48,     0,     0,
       0,   -48,     0,     0,     0,   -86,  -114,     0,   -48,     0,
     -48,   -48,  -114,  -114,  -114,   -86,     0,     0,     0,     0,
     -48,     0,     0,   -86,   -86,     0,   204,     0,     0,  -114,
       0,     0,  -114,     0,   -48,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -99,     0,     0,     0,
       0,     0,     0,     0,  -114,  -114,  -114,     0,     0,  -114,
       0,     0,  -114,     0,     0,     0,   204,     0,   -41
  };

  const short
   Parser ::yycheck_[] =
  {
      50,   262,    25,    71,    27,    49,    50,    50,    71,    77,
      62,    79,   232,   205,    64,   272,    74,    12,    11,    87,
      88,    65,    10,    67,    82,    71,    94,    95,   248,     4,
      85,   223,    55,     4,   254,    84,    22,    35,    27,    83,
      27,    85,    86,    37,    40,    31,    27,    41,    97,    68,
      44,    27,    40,    27,    27,    81,    47,    27,    36,    71,
     205,     4,    53,    59,     0,    71,    11,    35,    62,    95,
      15,    35,    67,    35,    52,    69,    21,    60,   223,    75,
     212,   213,    80,    54,    40,   346,   141,    75,    77,    75,
      77,   141,   144,   143,    75,   144,    89,   141,   141,    75,
     143,    46,    76,    76,    79,    71,    76,    63,   158,   153,
      62,    49,    80,    58,   158,   158,    80,    62,    80,    75,
      72,    81,   166,    13,    69,    41,    71,    72,    44,    25,
      26,     4,    53,   390,   261,    95,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,     7,
     144,   412,    80,    69,   198,   223,   224,   225,    48,    80,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,    81,     4,   365,   366,   367,   228,     9,   236,   228,
       4,   231,   232,     4,   234,    95,    62,   231,   231,   233,
     234,   234,    55,   205,     4,    25,    72,   324,   248,   205,
      25,    26,   270,   271,   254,    35,   250,   270,   271,   253,
       4,   223,   224,   225,     4,   435,   260,   223,   224,   225,
     365,   366,   367,   267,   270,   271,   275,    70,   277,   273,
     274,    70,    75,    70,   228,   279,    75,   281,    75,   283,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,     4,    74,    25,    26,   224,   225,    24,   270,   271,
      82,   311,    48,    80,   270,   271,    35,   311,   311,   224,
     225,    54,   399,    53,    25,    97,    35,     4,   405,    54,
      55,    43,    53,   327,    54,   329,    54,    55,    53,    55,
      42,    54,   336,   337,    89,    70,    89,   365,   366,   367,
     427,   428,    70,   326,   270,   271,    11,    71,    21,    21,
     333,    71,    67,   440,   441,    12,    12,    92,    67,    94,
      67,    11,   144,    80,    92,    15,    94,    27,   372,     4,
     398,    21,    14,    53,   378,   398,    80,    80,    37,    11,
     384,    11,    15,    14,    83,     4,    80,   391,   392,    75,
      27,    80,   398,   365,   366,   367,    46,    36,   402,   365,
     366,   367,    80,     4,    80,    44,    45,    54,    58,    54,
      54,    88,    62,    54,    77,    53,    12,    56,    57,    69,
      36,    71,    72,    35,     4,   435,   398,    66,    44,    45,
      53,    81,   398,    35,    80,     3,     4,     5,     6,     7,
      56,    57,    34,    11,    80,    95,   228,    25,    77,    17,
      66,    19,    20,    21,   236,    80,    76,    50,    76,    76,
      28,    29,    30,    76,    26,    80,    80,    53,    76,    80,
      80,    39,   398,    41,    42,    80,    34,    80,    33,    47,
      33,    16,   367,   270,   428,    53,    54,    55,   157,   343,
      40,    59,   213,    61,    62,   170,   388,    65,   412,   321,
     155,   388,    70,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    -1,    84,    85,    -1,    -1,
      88,    -1,    90,    -1,    92,    93,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    11,    65,    -1,
      -1,    15,    -1,    70,    -1,    -1,    -1,    21,    -1,    76,
      -1,    -1,    79,    -1,    -1,    82,    -1,    84,    85,    86,
      -1,    88,    -1,    -1,    -1,    92,    93,     3,     4,     5,
       6,     7,    46,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    19,    58,    21,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    29,    -1,    69,    -1,    71,    72,    -1,
      -1,    -1,    -1,    39,    -1,    41,    -1,    81,    -1,    -1,
      -1,    47,    -1,    87,    -1,    -1,    -1,    53,    54,    55,
      -1,    95,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    79,    -1,    -1,    82,    -1,    84,    85,
      86,    -1,    88,    -1,    -1,    -1,    92,    93,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,    84,
      85,    86,    -1,    88,    -1,    -1,    -1,    92,    93,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84,    85,    86,    -1,    88,    -1,    -1,    -1,    92,    93,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    79,    -1,    11,    82,
      -1,    84,    85,    86,    -1,    88,    19,    -1,    21,    92,
      93,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    84,    85,     3,     4,     5,     6,     7,    -1,    92,
      93,    11,    -1,    -1,    -1,    -1,     8,    -1,    10,    19,
      -1,    21,    -1,    -1,    -1,    -1,    18,    -1,    -1,    29,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      32,    41,    -1,    -1,    -1,    -1,    38,    47,    40,    -1,
      -1,    -1,    -1,    53,    54,    55,    48,    -1,    -1,    51,
      -1,    -1,    62,    -1,    -1,    65,    -1,    59,    -1,    -1,
      70,    63,    64,     3,     4,     5,     6,     7,    -1,    79,
      -1,    11,    82,    75,    84,    85,    16,    -1,    88,    19,
      -1,    21,    92,    93,    -1,    -1,    88,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    -1,     3,     4,     5,     6,     7,    -1,    -1,    79,
      11,    -1,    82,    -1,    84,    85,    -1,     8,    19,    10,
      21,    -1,    92,    93,    -1,    -1,    -1,    18,    29,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    39,    -1,
      41,    32,    -1,    -1,    -1,    -1,    47,    38,    -1,    40,
      -1,    -1,    53,    54,    55,    -1,    -1,    48,    -1,    -1,
      51,    62,    -1,    -1,    65,    -1,    -1,    -1,    59,    70,
      -1,    -1,    -1,    64,    -1,    76,    -1,    -1,    79,    -1,
      -1,    82,    -1,    84,    85,     3,     4,     5,     6,     7,
      -1,    92,    93,    11,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    70,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    79,    11,    -1,    82,    -1,    84,    85,    -1,    -1,
      19,    -1,    21,    -1,    92,    93,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      79,    11,    -1,    82,    -1,    84,    85,    -1,    -1,    19,
      -1,    21,    -1,    92,    93,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     3,     4,     5,     6,     7,
      70,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    19,    82,    21,    84,    85,     3,     4,     5,     6,
       7,    29,    92,    93,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    19,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    29,    -1,    -1,    53,    54,    55,    -1,    -1,
      16,    -1,    39,    19,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    29,    -1,    -1,    53,    54,    55,    -1,
      -1,    79,    -1,    39,    82,    -1,    84,    85,    -1,    -1,
      -1,    -1,    -1,    70,    92,    93,    -1,    53,    54,    55,
      11,    -1,    79,    -1,    15,    82,    -1,    84,    85,    -1,
      21,    -1,    -1,    -1,    70,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    36,    82,    -1,    84,    85,
      86,    -1,    88,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    27,    -1,    69,    -1,
      71,    72,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    44,    45,    -1,    87,    -1,    -1,    50,
      -1,    -1,    53,    -1,    95,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    89
  };

  const unsigned char
   Parser ::yystos_[] =
  {
       0,    68,    97,    98,     4,     0,   100,    60,   101,    49,
      99,   192,     7,    13,    48,   102,     4,     8,    10,    18,
      23,    32,    38,    40,    51,    59,    64,    88,   177,   179,
     186,   188,   189,   191,    80,   101,     4,     4,    55,   175,
       4,     4,     4,   178,     4,   178,    24,    48,    80,    35,
      54,   159,   161,   184,     4,     9,   172,   173,   174,   178,
      53,   170,   175,   184,    25,    35,   184,    35,    80,     4,
      43,   176,     3,     4,     5,     6,     7,    11,    19,    21,
      29,    39,    41,    47,    53,    54,    55,    62,    65,    70,
      79,    82,    84,    85,    92,    93,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     141,   143,   144,   145,   146,   147,   149,   151,   153,     4,
      16,    54,    86,    88,   104,   145,   150,   156,   157,   158,
     159,   160,    53,    26,   178,    27,    77,   169,    54,   161,
     162,    53,   145,   155,   156,   145,    42,   185,   145,   184,
      55,   105,   106,   107,   110,   111,   119,   190,   148,   149,
     105,   105,   148,   145,    70,    75,   146,   152,   154,    76,
     150,   145,   105,   105,     4,    79,   105,   105,    55,    70,
      92,    94,   146,   148,    87,    89,    15,    46,    58,    69,
      81,    95,    62,    72,    11,    71,    21,    36,    44,    45,
      56,    57,    66,   130,    12,    67,    80,   150,   104,   156,
     161,    27,    25,    26,    27,    76,     4,   181,   182,   183,
     145,   173,    17,    20,    28,    30,    42,    47,    59,    61,
      73,    74,    75,    78,    88,    90,   143,   165,   166,    76,
      14,   171,   195,    80,   145,    53,    80,    37,   187,   174,
      15,    14,    83,    25,    35,    27,    75,    27,    75,    27,
      76,    80,   145,    54,   105,   105,   106,   119,   128,   129,
     139,   140,   105,   111,   111,   111,   111,   111,   111,   111,
     113,   114,   114,   111,   111,   111,   129,   105,   133,   134,
     134,    27,   145,   156,   155,   145,    76,   145,   156,   148,
      75,    27,    80,    80,     4,    80,    54,    54,   155,    54,
      88,   145,   168,    88,   145,   155,    54,    35,    80,    16,
     145,    80,   170,    59,    75,   177,   194,   145,    53,    77,
     107,   141,   142,   107,   144,   145,   145,    75,   146,    75,
     146,    76,   145,    77,   145,    36,    52,    12,   181,   170,
     178,   145,    35,   145,    80,    80,   178,    80,    35,    80,
     145,   145,     4,   172,    63,    75,   177,   180,   193,    53,
      34,    35,    25,    77,    76,   129,   129,   139,    50,    76,
     145,    76,    35,    80,   145,    76,    80,    80,   145,    75,
     180,   188,   196,   144,   145,   145,   107,   170,    80,    53,
     145,    80,   170,    80,    75,   177,   179,    76,    34,   167,
     164,    80,   170,   166,   170,    22,    31,    75,   163,   155,
      33,    33,   170,   170
  };

  const unsigned char
   Parser ::yyr1_[] =
  {
       0,    96,    97,    98,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     106,   107,   107,   107,   108,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   118,   118,   119,   120,   120,   121,   122,   122,
     123,   124,   124,   124,   125,   125,   126,   127,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   132,   133,   133,   134,
     134,   135,   135,   136,   137,   137,   138,   139,   139,   140,
     140,   141,   142,   142,   143,   143,   143,   143,   143,   144,
     144,   145,   146,   147,   148,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     159,   159,   160,   160,   160,   160,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   166,   167,   167,   167,   168,   168,   169,   169,   170,
     171,   171,   171,   172,   173,   173,   173,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   179,   180,   181,
     181,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   186,   187,   187,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   190,   190,
     191,   192,   192,   193,   193,   193,   194,   194,   194,   195,
     195,   195,   196,   196,   196
  };

  const signed char
   Parser ::yyr2_[] =
  {
       0,     2,     3,     5,     4,     0,     2,     0,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     2,
       5,     4,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     3,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     1,     2,     1,     1,     2,     3,     4,     1,     3,
       3,     4,     3,     5,     2,     3,     4,     3,     5,     1,
       1,     1,     3,     3,     1,     2,     2,     1,     1,     1,
       3,     4,     1,     3,     3,     3,     1,     2,     1,     4,
       3,     0,     2,     4,     3,     5,     4,     6,     5,     2,
       1,     5,     2,     2,     3,     3,     7,     3,     3,     2,
       7,     6,     0,     2,     2,     0,     1,     0,     2,     3,
       0,     2,     2,     3,     1,     1,     2,     0,     1,     3,
       0,     3,     0,     4,     6,     6,     3,     5,     3,     2,
       1,     0,     1,     2,     1,     3,     0,     1,     0,     2,
       0,     1,     1,     0,     2,     1,     1,     8,     7,     6,
       3,     5,     5,     6,     9,     1,     0,     1,     0,     1,
       3,     0,     2,     0,     2,     2,     0,     2,     2,     0,
       2,     4,     0,     2,     2
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const  Parser ::yytname_[] =
  {
  "END_OF_FILE", "error", "\"invalid token\"", "integer_literal",
  "identifier", "intrinsic_identifier", "sized_type_literal",
  "string_literal", "ABSTRACT", "ADDR", "ALIAS", "AMPERSAND", "AND", "API",
  "ARROW", "AS", "AUTO", "AWAIT", "BASE", "BOOL", "BREAK", "CARET", "CASE",
  "CHOICE", "CLASS", "COLON", "COLON_BANG", "COMMA", "CONTINUATION",
  "CONTINUATION_TYPE", "CONTINUE", "DEFAULT", "DESTRUCTOR", "DOUBLE_ARROW",
  "ELSE", "EQUAL", "EQUAL_EQUAL", "EXTENDS", "EXTERNAL", "FALSE", "FN",
  "FN_TYPE", "FOR", "FORALL", "GREATER", "GREATER_EQUAL",
  "GREATER_GREATER", "IF", "IMPL", "IMPORT", "IN", "INTERFACE", "IS",
  "LEFT_CURLY_BRACE", "LEFT_PARENTHESIS", "LEFT_SQUARE_BRACKET", "LESS",
  "LESS_EQUAL", "LESS_LESS", "LET", "LIBRARY", "MATCH", "MINUS", "MIX",
  "MIXIN", "NOT", "NOT_EQUAL", "OR", "PACKAGE", "PERCENT", "PERIOD",
  "PIPE", "PLUS", "RETURN", "RETURNED", "RIGHT_CURLY_BRACE",
  "RIGHT_PARENTHESIS", "RIGHT_SQUARE_BRACKET", "RUN", "SELF", "SEMICOLON",
  "SLASH", "STRING", "THEN", "TRUE", "TYPE", "UNDERSCORE",
  "UNIMPL_EXAMPLE", "VAR", "WHERE", "WHILE", "\"-> in return type\"",
  "\"unary *\"", "\"prefix *\"", "\"postfix *\"", "\"binary *\"",
  "$accept", "input", "package_directive", "import_directive",
  "import_directives", "optional_library_path", "api_or_impl",
  "primary_expression", "postfix_expression", "ref_deref_expression",
  "fn_type_expression", "type_expression", "minus_expression",
  "complement_expression", "unary_expression", "simple_binary_operand",
  "multiplicative_lhs", "multiplicative_expression", "additive_operand",
  "additive_lhs", "additive_expression", "modulo_expression",
  "bitwise_and_lhs", "bitwise_and_expression", "bitwise_or_lhs",
  "bitwise_or_expression", "bitwise_xor_lhs", "bitwise_xor_expression",
  "bitwise_expression", "bit_shift_expression", "as_expression",
  "unimpl_expression", "value_expression", "comparison_operand",
  "comparison_operator", "comparison_expression", "not_expression",
  "predicate_expression", "and_or_operand", "and_lhs", "and_expression",
  "or_lhs", "or_expression", "where_clause", "where_clause_list",
  "where_expression", "type_or_where_expression", "statement_expression",
  "if_expression", "expression", "designator", "paren_expression", "tuple",
  "paren_expression_base", "paren_expression_contents", "struct_literal",
  "struct_literal_contents", "struct_type_literal",
  "struct_type_literal_contents", "pattern", "non_expression_pattern",
  "binding_lhs", "paren_pattern", "paren_pattern_base",
  "paren_pattern_contents", "tuple_pattern", "maybe_empty_tuple_pattern",
  "clause", "clause_list", "statement", "if_statement", "optional_else",
  "return_expression", "statement_list", "block", "return_term",
  "generic_binding", "deduced_param", "deduced_param_list",
  "deduced_params", "impl_deduced_params", "function_declaration",
  "variable_declaration", "alias_declaration", "mix_declaration",
  "alternative", "alternative_list", "alternative_list_contents",
  "type_params", "mixin_import", "class_declaration_extensibility",
  "class_declaration_extends", "declaration", "impl_kind", "impl_type",
  "destructor_declaration", "declaration_list", "class_body", "mixin_body",
  "interface_body", "impl_body", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
   Parser ::yyrline_[] =
  {
       0,   301,   301,   310,   314,   319,   320,   328,   329,   333,
     335,   339,   341,   348,   350,   352,   354,   356,   358,   373,
     376,   378,   380,   382,   384,   385,   386,   387,   391,   392,
     397,   402,   404,   406,   408,   414,   422,   423,   429,   435,
     443,   447,   448,   449,   453,   462,   471,   472,   477,   478,
     481,   482,   485,   491,   499,   500,   503,   504,   507,   508,
     514,   522,   530,   531,   534,   542,   543,   546,   554,   555,
     558,   566,   567,   568,   571,   577,   585,   594,   602,   603,
     604,   605,   606,   607,   608,   609,   612,   613,   616,   618,
     620,   622,   624,   626,   630,   631,   639,   648,   649,   652,
     653,   656,   657,   661,   669,   670,   674,   682,   684,   688,
     690,   697,   705,   706,   709,   710,   711,   712,   713,   716,
     717,   721,   723,   725,   728,   732,   734,   736,   743,   745,
     753,   755,   759,   761,   769,   771,   773,   777,   779,   793,
     795,   799,   801,   806,   808,   810,   821,   825,   826,   828,
     832,   834,   846,   848,   853,   858,   864,   871,   876,   881,
     883,   895,   896,   904,   906,   912,   918,   924,   930,   936,
     938,   940,   942,   944,   946,   952,   954,   957,   959,   961,
     963,   967,   972,   973,   978,   983,   984,   989,   990,   997,
    1003,  1004,  1006,  1011,  1018,  1020,  1022,  1028,  1029,  1031,
    1040,  1041,  1047,  1048,  1053,  1064,  1076,  1082,  1086,  1090,
    1092,  1101,  1102,  1104,  1108,  1110,  1118,  1119,  1125,  1126,
    1135,  1136,  1138,  1143,  1144,  1148,  1150,  1152,  1158,  1165,
    1167,  1172,  1177,  1182,  1187,  1198,  1203,  1204,  1209,  1210,
    1213,  1231,  1232,  1240,  1241,  1246,  1255,  1256,  1261,  1269,
    1270,  1275,  1284,  1285,  1290
  };

  void
   Parser ::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
   Parser ::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 23 "parser.ypp"
} //  Carbon 
#line 4613 "parser.cpp"

#line 1296 "parser.ypp"

