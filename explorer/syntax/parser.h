// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file parser.h
 ** Define the  Carbon ::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
// "%code requires" blocks.
#line 68 "parser.ypp"

  #include <optional>

  #include "explorer/ast/ast.h"
  #include "explorer/ast/declaration.h"
  #include "explorer/ast/expression.h"
  #include "explorer/ast/paren_contents.h"
  #include "explorer/ast/pattern.h"
  #include "explorer/ast/value_category.h"
  #include "explorer/common/arena.h"
  #include "explorer/common/nonnull.h"
  #include "explorer/syntax/bison_wrap.h"

  namespace Carbon {
  class ParseAndLexContext;
  }  // namespace Carbon

  typedef void* yyscan_t;

#line 69 "parser.h"


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 23 "parser.ypp"
namespace  Carbon  {
#line 205 "parser.h"


  /// A point in a source file.
  class position
  {
  public:
    /// Type for file name.
    typedef const std::string filename_type;
    /// Type for line and column numbers.
    typedef int counter_type;

    /// Construct a position.
    explicit position (filename_type* f = YY_NULLPTR,
                       counter_type l = 1,
                       counter_type c = 1)
      : filename (f)
      , line (l)
      , column (c)
    {}


    /// Initialization.
    void initialize (filename_type* fn = YY_NULLPTR,
                     counter_type l = 1,
                     counter_type c = 1)
    {
      filename = fn;
      line = l;
      column = c;
    }

    /** \name Line and Column related manipulators
     ** \{ */
    /// (line related) Advance to the COUNT next lines.
    void lines (counter_type count = 1)
    {
      if (count)
        {
          column = 1;
          line = add_ (line, count, 1);
        }
    }

    /// (column related) Advance to the COUNT next columns.
    void columns (counter_type count = 1)
    {
      column = add_ (column, count, 1);
    }
    /** \} */

    /// File name to which this position refers.
    filename_type* filename;
    /// Current line number.
    counter_type line;
    /// Current column number.
    counter_type column;

  private:
    /// Compute max (min, lhs+rhs).
    static counter_type add_ (counter_type lhs, counter_type rhs, counter_type min)
    {
      return lhs + rhs < min ? min : lhs + rhs;
    }
  };

  /// Add \a width columns, in place.
  inline position&
  operator+= (position& res, position::counter_type width)
  {
    res.columns (width);
    return res;
  }

  /// Add \a width columns.
  inline position
  operator+ (position res, position::counter_type width)
  {
    return res += width;
  }

  /// Subtract \a width columns, in place.
  inline position&
  operator-= (position& res, position::counter_type width)
  {
    return res += -width;
  }

  /// Subtract \a width columns.
  inline position
  operator- (position res, position::counter_type width)
  {
    return res -= width;
  }

  /** \brief Intercept output stream redirection.
   ** \param ostr the destination output stream
   ** \param pos a reference to the position to redirect
   */
  template <typename YYChar>
  std::basic_ostream<YYChar>&
  operator<< (std::basic_ostream<YYChar>& ostr, const position& pos)
  {
    if (pos.filename)
      ostr << *pos.filename << ':';
    return ostr << pos.line << '.' << pos.column;
  }

  /// Two points in a source file.
  class location
  {
  public:
    /// Type for file name.
    typedef position::filename_type filename_type;
    /// Type for line and column numbers.
    typedef position::counter_type counter_type;

    /// Construct a location from \a b to \a e.
    location (const position& b, const position& e)
      : begin (b)
      , end (e)
    {}

    /// Construct a 0-width location in \a p.
    explicit location (const position& p = position ())
      : begin (p)
      , end (p)
    {}

    /// Construct a 0-width location in \a f, \a l, \a c.
    explicit location (filename_type* f,
                       counter_type l = 1,
                       counter_type c = 1)
      : begin (f, l, c)
      , end (f, l, c)
    {}


    /// Initialization.
    void initialize (filename_type* f = YY_NULLPTR,
                     counter_type l = 1,
                     counter_type c = 1)
    {
      begin.initialize (f, l, c);
      end = begin;
    }

    /** \name Line and Column related manipulators
     ** \{ */
  public:
    /// Reset initial location to final location.
    void step ()
    {
      begin = end;
    }

    /// Extend the current location to the COUNT next columns.
    void columns (counter_type count = 1)
    {
      end += count;
    }

    /// Extend the current location to the COUNT next lines.
    void lines (counter_type count = 1)
    {
      end.lines (count);
    }
    /** \} */


  public:
    /// Beginning of the located region.
    position begin;
    /// End of the located region.
    position end;
  };

  /// Join two locations, in place.
  inline location&
  operator+= (location& res, const location& end)
  {
    res.end = end.end;
    return res;
  }

  /// Join two locations.
  inline location
  operator+ (location res, const location& end)
  {
    return res += end;
  }

  /// Add \a width columns to the end position, in place.
  inline location&
  operator+= (location& res, location::counter_type width)
  {
    res.columns (width);
    return res;
  }

  /// Add \a width columns to the end position.
  inline location
  operator+ (location res, location::counter_type width)
  {
    return res += width;
  }

  /// Subtract \a width columns to the end position, in place.
  inline location&
  operator-= (location& res, location::counter_type width)
  {
    return res += -width;
  }

  /// Subtract \a width columns to the end position.
  inline location
  operator- (location res, location::counter_type width)
  {
    return res -= width;
  }

  /** \brief Intercept output stream redirection.
   ** \param ostr the destination output stream
   ** \param loc a reference to the location to redirect
   **
   ** Avoid duplicate information.
   */
  template <typename YYChar>
  std::basic_ostream<YYChar>&
  operator<< (std::basic_ostream<YYChar>& ostr, const location& loc)
  {
    location::counter_type end_col
      = 0 < loc.end.column ? loc.end.column - 1 : 0;
    ostr << loc.begin;
    if (loc.end.filename
        && (!loc.begin.filename
            || *loc.begin.filename != *loc.end.filename))
      ostr << '-' << loc.end.filename << ':' << loc.end.line << '.' << end_col;
    else if (loc.begin.line < loc.end.line)
      ostr << '-' << loc.end.line << '.' << end_col;
    else if (loc.begin.column < end_col)
      ostr << '-' << end_col;
    return ostr;
  }


  /// A Bison parser.
  class  Parser 
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
    {
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {}

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // clause
      char dummy1[sizeof (BisonWrap<Match::Clause>)];

      // return_term
      char dummy2[sizeof (BisonWrap<ReturnTerm>)];

      // class_declaration_extensibility
      char dummy3[sizeof (ClassExtensibility)];

      // impl_kind
      char dummy4[sizeof (ImplKind)];

      // intrinsic_identifier
      char dummy5[sizeof (IntrinsicExpression::Intrinsic)];

      // import_directive
      char dummy6[sizeof (LibraryName)];

      // alias_declaration
      char dummy7[sizeof (Nonnull<AliasDeclaration*>)];

      // alternative
      char dummy8[sizeof (Nonnull<AlternativeSignature*>)];

      // variable_declaration
      char dummy9[sizeof (Nonnull<BindingPattern*>)];

      // block
      char dummy10[sizeof (Nonnull<Block*>)];

      // declaration
      char dummy11[sizeof (Nonnull<Declaration*>)];

      // destructor_declaration
      char dummy12[sizeof (Nonnull<DestructorDeclaration*>)];

      // primary_expression
      // postfix_expression
      // ref_deref_expression
      // fn_type_expression
      // type_expression
      // minus_expression
      // complement_expression
      // unary_expression
      // simple_binary_operand
      // multiplicative_lhs
      // multiplicative_expression
      // additive_operand
      // additive_lhs
      // additive_expression
      // modulo_expression
      // bitwise_and_lhs
      // bitwise_and_expression
      // bitwise_or_lhs
      // bitwise_or_expression
      // bitwise_xor_lhs
      // bitwise_xor_expression
      // bitwise_expression
      // bit_shift_expression
      // as_expression
      // unimpl_expression
      // value_expression
      // comparison_operand
      // comparison_expression
      // not_expression
      // predicate_expression
      // and_or_operand
      // and_lhs
      // and_expression
      // or_lhs
      // or_expression
      // where_expression
      // type_or_where_expression
      // statement_expression
      // if_expression
      // expression
      // paren_expression
      // mixin_import
      // impl_type
      char dummy13[sizeof (Nonnull<Expression*>)];

      // function_declaration
      char dummy14[sizeof (Nonnull<FunctionDeclaration*>)];

      // generic_binding
      char dummy15[sizeof (Nonnull<GenericBinding*>)];

      // if_statement
      char dummy16[sizeof (Nonnull<If*>)];

      // mix_declaration
      char dummy17[sizeof (Nonnull<MixDeclaration*>)];

      // pattern
      // non_expression_pattern
      // paren_pattern
      // deduced_param
      char dummy18[sizeof (Nonnull<Pattern*>)];

      // statement
      char dummy19[sizeof (Nonnull<Statement*>)];

      // struct_literal
      char dummy20[sizeof (Nonnull<StructLiteral*>)];

      // struct_type_literal
      char dummy21[sizeof (Nonnull<StructTypeLiteral*>)];

      // tuple
      char dummy22[sizeof (Nonnull<TupleLiteral*>)];

      // tuple_pattern
      // maybe_empty_tuple_pattern
      char dummy23[sizeof (Nonnull<TuplePattern*>)];

      // where_clause
      char dummy24[sizeof (Nonnull<WhereClause*>)];

      // comparison_operator
      char dummy25[sizeof (Operator)];

      // paren_expression_base
      // paren_expression_contents
      char dummy26[sizeof (ParenContents<Expression>)];

      // paren_pattern_base
      // paren_pattern_contents
      char dummy27[sizeof (ParenContents<Pattern>)];

      // api_or_impl
      char dummy28[sizeof (bool)];

      // integer_literal
      char dummy29[sizeof (int)];

      // optional_else
      char dummy30[sizeof (std::optional<Nonnull<Block*>>)];

      // class_declaration_extends
      char dummy31[sizeof (std::optional<Nonnull<Expression*>>)];

      // type_params
      char dummy32[sizeof (std::optional<Nonnull<TuplePattern*>>)];

      // package_directive
      char dummy33[sizeof (std::pair<LibraryName, bool>)];

      // return_expression
      char dummy34[sizeof (std::pair<Nonnull<Expression*>, bool>)];

      // identifier
      // sized_type_literal
      // string_literal
      // optional_library_path
      // designator
      // binding_lhs
      char dummy35[sizeof (std::string)];

      // struct_literal_contents
      // struct_type_literal_contents
      char dummy36[sizeof (std::vector<FieldInitializer>)];

      // import_directives
      char dummy37[sizeof (std::vector<LibraryName>)];

      // clause_list
      char dummy38[sizeof (std::vector<Match::Clause>)];

      // alternative_list
      // alternative_list_contents
      char dummy39[sizeof (std::vector<Nonnull<AlternativeSignature*>>)];

      // deduced_param_list
      // deduced_params
      // impl_deduced_params
      char dummy40[sizeof (std::vector<Nonnull<AstNode*>>)];

      // declaration_list
      // class_body
      // mixin_body
      // interface_body
      // impl_body
      char dummy41[sizeof (std::vector<Nonnull<Declaration*>>)];

      // statement_list
      char dummy42[sizeof (std::vector<Nonnull<Statement*>>)];

      // where_clause_list
      char dummy43[sizeof (std::vector<Nonnull<WhereClause*>>)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    END_OF_FILE = 0,               // END_OF_FILE
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    integer_literal = 258,         // integer_literal
    identifier = 259,              // identifier
    intrinsic_identifier = 260,    // intrinsic_identifier
    sized_type_literal = 261,      // sized_type_literal
    string_literal = 262,          // string_literal
    ABSTRACT = 263,                // ABSTRACT
    ADDR = 264,                    // ADDR
    ALIAS = 265,                   // ALIAS
    AMPERSAND = 266,               // AMPERSAND
    AND = 267,                     // AND
    API = 268,                     // API
    ARROW = 269,                   // ARROW
    AS = 270,                      // AS
    AUTO = 271,                    // AUTO
    AWAIT = 272,                   // AWAIT
    BASE = 273,                    // BASE
    BOOL = 274,                    // BOOL
    BREAK = 275,                   // BREAK
    CARET = 276,                   // CARET
    CASE = 277,                    // CASE
    CHOICE = 278,                  // CHOICE
    CLASS = 279,                   // CLASS
    COLON = 280,                   // COLON
    COLON_BANG = 281,              // COLON_BANG
    COMMA = 282,                   // COMMA
    CONTINUATION = 283,            // CONTINUATION
    CONTINUATION_TYPE = 284,       // CONTINUATION_TYPE
    CONTINUE = 285,                // CONTINUE
    DEFAULT = 286,                 // DEFAULT
    DESTRUCTOR = 287,              // DESTRUCTOR
    DOUBLE_ARROW = 288,            // DOUBLE_ARROW
    ELSE = 289,                    // ELSE
    EQUAL = 290,                   // EQUAL
    EQUAL_EQUAL = 291,             // EQUAL_EQUAL
    EXTENDS = 292,                 // EXTENDS
    EXTERNAL = 293,                // EXTERNAL
    FALSE = 294,                   // FALSE
    FN = 295,                      // FN
    FN_TYPE = 296,                 // FN_TYPE
    FOR = 297,                     // FOR
    FORALL = 298,                  // FORALL
    GREATER = 299,                 // GREATER
    GREATER_EQUAL = 300,           // GREATER_EQUAL
    GREATER_GREATER = 301,         // GREATER_GREATER
    IF = 302,                      // IF
    IMPL = 303,                    // IMPL
    IMPORT = 304,                  // IMPORT
    IN = 305,                      // IN
    INTERFACE = 306,               // INTERFACE
    IS = 307,                      // IS
    LEFT_CURLY_BRACE = 308,        // LEFT_CURLY_BRACE
    LEFT_PARENTHESIS = 309,        // LEFT_PARENTHESIS
    LEFT_SQUARE_BRACKET = 310,     // LEFT_SQUARE_BRACKET
    LESS = 311,                    // LESS
    LESS_EQUAL = 312,              // LESS_EQUAL
    LESS_LESS = 313,               // LESS_LESS
    LET = 314,                     // LET
    LIBRARY = 315,                 // LIBRARY
    MATCH = 316,                   // MATCH
    MINUS = 317,                   // MINUS
    MIX = 318,                     // MIX
    MIXIN = 319,                   // MIXIN
    NOT = 320,                     // NOT
    NOT_EQUAL = 321,               // NOT_EQUAL
    OR = 322,                      // OR
    PACKAGE = 323,                 // PACKAGE
    PERCENT = 324,                 // PERCENT
    PERIOD = 325,                  // PERIOD
    PIPE = 326,                    // PIPE
    PLUS = 327,                    // PLUS
    RETURN = 328,                  // RETURN
    RETURNED = 329,                // RETURNED
    RIGHT_CURLY_BRACE = 330,       // RIGHT_CURLY_BRACE
    RIGHT_PARENTHESIS = 331,       // RIGHT_PARENTHESIS
    RIGHT_SQUARE_BRACKET = 332,    // RIGHT_SQUARE_BRACKET
    RUN = 333,                     // RUN
    SELF = 334,                    // SELF
    SEMICOLON = 335,               // SEMICOLON
    SLASH = 336,                   // SLASH
    STRING = 337,                  // STRING
    THEN = 338,                    // THEN
    TRUE = 339,                    // TRUE
    TYPE = 340,                    // TYPE
    UNDERSCORE = 341,              // UNDERSCORE
    UNIMPL_EXAMPLE = 342,          // UNIMPL_EXAMPLE
    VAR = 343,                     // VAR
    WHERE = 344,                   // WHERE
    WHILE = 345,                   // WHILE
    FNARROW = 346,                 // "-> in return type"
    UNARY_STAR = 347,              // "unary *"
    PREFIX_STAR = 348,             // "prefix *"
    POSTFIX_STAR = 349,            // "postfix *"
    BINARY_STAR = 350              // "binary *"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 96, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // END_OF_FILE
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_integer_literal = 3,                   // integer_literal
        S_identifier = 4,                        // identifier
        S_intrinsic_identifier = 5,              // intrinsic_identifier
        S_sized_type_literal = 6,                // sized_type_literal
        S_string_literal = 7,                    // string_literal
        S_ABSTRACT = 8,                          // ABSTRACT
        S_ADDR = 9,                              // ADDR
        S_ALIAS = 10,                            // ALIAS
        S_AMPERSAND = 11,                        // AMPERSAND
        S_AND = 12,                              // AND
        S_API = 13,                              // API
        S_ARROW = 14,                            // ARROW
        S_AS = 15,                               // AS
        S_AUTO = 16,                             // AUTO
        S_AWAIT = 17,                            // AWAIT
        S_BASE = 18,                             // BASE
        S_BOOL = 19,                             // BOOL
        S_BREAK = 20,                            // BREAK
        S_CARET = 21,                            // CARET
        S_CASE = 22,                             // CASE
        S_CHOICE = 23,                           // CHOICE
        S_CLASS = 24,                            // CLASS
        S_COLON = 25,                            // COLON
        S_COLON_BANG = 26,                       // COLON_BANG
        S_COMMA = 27,                            // COMMA
        S_CONTINUATION = 28,                     // CONTINUATION
        S_CONTINUATION_TYPE = 29,                // CONTINUATION_TYPE
        S_CONTINUE = 30,                         // CONTINUE
        S_DEFAULT = 31,                          // DEFAULT
        S_DESTRUCTOR = 32,                       // DESTRUCTOR
        S_DOUBLE_ARROW = 33,                     // DOUBLE_ARROW
        S_ELSE = 34,                             // ELSE
        S_EQUAL = 35,                            // EQUAL
        S_EQUAL_EQUAL = 36,                      // EQUAL_EQUAL
        S_EXTENDS = 37,                          // EXTENDS
        S_EXTERNAL = 38,                         // EXTERNAL
        S_FALSE = 39,                            // FALSE
        S_FN = 40,                               // FN
        S_FN_TYPE = 41,                          // FN_TYPE
        S_FOR = 42,                              // FOR
        S_FORALL = 43,                           // FORALL
        S_GREATER = 44,                          // GREATER
        S_GREATER_EQUAL = 45,                    // GREATER_EQUAL
        S_GREATER_GREATER = 46,                  // GREATER_GREATER
        S_IF = 47,                               // IF
        S_IMPL = 48,                             // IMPL
        S_IMPORT = 49,                           // IMPORT
        S_IN = 50,                               // IN
        S_INTERFACE = 51,                        // INTERFACE
        S_IS = 52,                               // IS
        S_LEFT_CURLY_BRACE = 53,                 // LEFT_CURLY_BRACE
        S_LEFT_PARENTHESIS = 54,                 // LEFT_PARENTHESIS
        S_LEFT_SQUARE_BRACKET = 55,              // LEFT_SQUARE_BRACKET
        S_LESS = 56,                             // LESS
        S_LESS_EQUAL = 57,                       // LESS_EQUAL
        S_LESS_LESS = 58,                        // LESS_LESS
        S_LET = 59,                              // LET
        S_LIBRARY = 60,                          // LIBRARY
        S_MATCH = 61,                            // MATCH
        S_MINUS = 62,                            // MINUS
        S_MIX = 63,                              // MIX
        S_MIXIN = 64,                            // MIXIN
        S_NOT = 65,                              // NOT
        S_NOT_EQUAL = 66,                        // NOT_EQUAL
        S_OR = 67,                               // OR
        S_PACKAGE = 68,                          // PACKAGE
        S_PERCENT = 69,                          // PERCENT
        S_PERIOD = 70,                           // PERIOD
        S_PIPE = 71,                             // PIPE
        S_PLUS = 72,                             // PLUS
        S_RETURN = 73,                           // RETURN
        S_RETURNED = 74,                         // RETURNED
        S_RIGHT_CURLY_BRACE = 75,                // RIGHT_CURLY_BRACE
        S_RIGHT_PARENTHESIS = 76,                // RIGHT_PARENTHESIS
        S_RIGHT_SQUARE_BRACKET = 77,             // RIGHT_SQUARE_BRACKET
        S_RUN = 78,                              // RUN
        S_SELF = 79,                             // SELF
        S_SEMICOLON = 80,                        // SEMICOLON
        S_SLASH = 81,                            // SLASH
        S_STRING = 82,                           // STRING
        S_THEN = 83,                             // THEN
        S_TRUE = 84,                             // TRUE
        S_TYPE = 85,                             // TYPE
        S_UNDERSCORE = 86,                       // UNDERSCORE
        S_UNIMPL_EXAMPLE = 87,                   // UNIMPL_EXAMPLE
        S_VAR = 88,                              // VAR
        S_WHERE = 89,                            // WHERE
        S_WHILE = 90,                            // WHILE
        S_FNARROW = 91,                          // "-> in return type"
        S_UNARY_STAR = 92,                       // "unary *"
        S_PREFIX_STAR = 93,                      // "prefix *"
        S_POSTFIX_STAR = 94,                     // "postfix *"
        S_BINARY_STAR = 95,                      // "binary *"
        S_YYACCEPT = 96,                         // $accept
        S_input = 97,                            // input
        S_package_directive = 98,                // package_directive
        S_import_directive = 99,                 // import_directive
        S_import_directives = 100,               // import_directives
        S_optional_library_path = 101,           // optional_library_path
        S_api_or_impl = 102,                     // api_or_impl
        S_primary_expression = 103,              // primary_expression
        S_postfix_expression = 104,              // postfix_expression
        S_ref_deref_expression = 105,            // ref_deref_expression
        S_fn_type_expression = 106,              // fn_type_expression
        S_type_expression = 107,                 // type_expression
        S_minus_expression = 108,                // minus_expression
        S_complement_expression = 109,           // complement_expression
        S_unary_expression = 110,                // unary_expression
        S_simple_binary_operand = 111,           // simple_binary_operand
        S_multiplicative_lhs = 112,              // multiplicative_lhs
        S_multiplicative_expression = 113,       // multiplicative_expression
        S_additive_operand = 114,                // additive_operand
        S_additive_lhs = 115,                    // additive_lhs
        S_additive_expression = 116,             // additive_expression
        S_modulo_expression = 117,               // modulo_expression
        S_bitwise_and_lhs = 118,                 // bitwise_and_lhs
        S_bitwise_and_expression = 119,          // bitwise_and_expression
        S_bitwise_or_lhs = 120,                  // bitwise_or_lhs
        S_bitwise_or_expression = 121,           // bitwise_or_expression
        S_bitwise_xor_lhs = 122,                 // bitwise_xor_lhs
        S_bitwise_xor_expression = 123,          // bitwise_xor_expression
        S_bitwise_expression = 124,              // bitwise_expression
        S_bit_shift_expression = 125,            // bit_shift_expression
        S_as_expression = 126,                   // as_expression
        S_unimpl_expression = 127,               // unimpl_expression
        S_value_expression = 128,                // value_expression
        S_comparison_operand = 129,              // comparison_operand
        S_comparison_operator = 130,             // comparison_operator
        S_comparison_expression = 131,           // comparison_expression
        S_not_expression = 132,                  // not_expression
        S_predicate_expression = 133,            // predicate_expression
        S_and_or_operand = 134,                  // and_or_operand
        S_and_lhs = 135,                         // and_lhs
        S_and_expression = 136,                  // and_expression
        S_or_lhs = 137,                          // or_lhs
        S_or_expression = 138,                   // or_expression
        S_where_clause = 139,                    // where_clause
        S_where_clause_list = 140,               // where_clause_list
        S_where_expression = 141,                // where_expression
        S_type_or_where_expression = 142,        // type_or_where_expression
        S_statement_expression = 143,            // statement_expression
        S_if_expression = 144,                   // if_expression
        S_expression = 145,                      // expression
        S_designator = 146,                      // designator
        S_paren_expression = 147,                // paren_expression
        S_tuple = 148,                           // tuple
        S_paren_expression_base = 149,           // paren_expression_base
        S_paren_expression_contents = 150,       // paren_expression_contents
        S_struct_literal = 151,                  // struct_literal
        S_struct_literal_contents = 152,         // struct_literal_contents
        S_struct_type_literal = 153,             // struct_type_literal
        S_struct_type_literal_contents = 154,    // struct_type_literal_contents
        S_pattern = 155,                         // pattern
        S_non_expression_pattern = 156,          // non_expression_pattern
        S_binding_lhs = 157,                     // binding_lhs
        S_paren_pattern = 158,                   // paren_pattern
        S_paren_pattern_base = 159,              // paren_pattern_base
        S_paren_pattern_contents = 160,          // paren_pattern_contents
        S_tuple_pattern = 161,                   // tuple_pattern
        S_maybe_empty_tuple_pattern = 162,       // maybe_empty_tuple_pattern
        S_clause = 163,                          // clause
        S_clause_list = 164,                     // clause_list
        S_statement = 165,                       // statement
        S_if_statement = 166,                    // if_statement
        S_optional_else = 167,                   // optional_else
        S_return_expression = 168,               // return_expression
        S_statement_list = 169,                  // statement_list
        S_block = 170,                           // block
        S_return_term = 171,                     // return_term
        S_generic_binding = 172,                 // generic_binding
        S_deduced_param = 173,                   // deduced_param
        S_deduced_param_list = 174,              // deduced_param_list
        S_deduced_params = 175,                  // deduced_params
        S_impl_deduced_params = 176,             // impl_deduced_params
        S_function_declaration = 177,            // function_declaration
        S_variable_declaration = 178,            // variable_declaration
        S_alias_declaration = 179,               // alias_declaration
        S_mix_declaration = 180,                 // mix_declaration
        S_alternative = 181,                     // alternative
        S_alternative_list = 182,                // alternative_list
        S_alternative_list_contents = 183,       // alternative_list_contents
        S_type_params = 184,                     // type_params
        S_mixin_import = 185,                    // mixin_import
        S_class_declaration_extensibility = 186, // class_declaration_extensibility
        S_class_declaration_extends = 187,       // class_declaration_extends
        S_declaration = 188,                     // declaration
        S_impl_kind = 189,                       // impl_kind
        S_impl_type = 190,                       // impl_type
        S_destructor_declaration = 191,          // destructor_declaration
        S_declaration_list = 192,                // declaration_list
        S_class_body = 193,                      // class_body
        S_mixin_body = 194,                      // mixin_body
        S_interface_body = 195,                  // interface_body
        S_impl_body = 196                        // impl_body
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_clause: // clause
        value.move< BisonWrap<Match::Clause> > (std::move (that.value));
        break;

      case symbol_kind::S_return_term: // return_term
        value.move< BisonWrap<ReturnTerm> > (std::move (that.value));
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.move< ClassExtensibility > (std::move (that.value));
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.move< ImplKind > (std::move (that.value));
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.move< IntrinsicExpression::Intrinsic > (std::move (that.value));
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.move< LibraryName > (std::move (that.value));
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.move< Nonnull<AliasDeclaration*> > (std::move (that.value));
        break;

      case symbol_kind::S_alternative: // alternative
        value.move< Nonnull<AlternativeSignature*> > (std::move (that.value));
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.move< Nonnull<BindingPattern*> > (std::move (that.value));
        break;

      case symbol_kind::S_block: // block
        value.move< Nonnull<Block*> > (std::move (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< Nonnull<Declaration*> > (std::move (that.value));
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.move< Nonnull<DestructorDeclaration*> > (std::move (that.value));
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
        value.move< Nonnull<Expression*> > (std::move (that.value));
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.move< Nonnull<FunctionDeclaration*> > (std::move (that.value));
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.move< Nonnull<GenericBinding*> > (std::move (that.value));
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.move< Nonnull<If*> > (std::move (that.value));
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.move< Nonnull<MixDeclaration*> > (std::move (that.value));
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.move< Nonnull<Pattern*> > (std::move (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.move< Nonnull<Statement*> > (std::move (that.value));
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.move< Nonnull<StructLiteral*> > (std::move (that.value));
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.move< Nonnull<StructTypeLiteral*> > (std::move (that.value));
        break;

      case symbol_kind::S_tuple: // tuple
        value.move< Nonnull<TupleLiteral*> > (std::move (that.value));
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.move< Nonnull<TuplePattern*> > (std::move (that.value));
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.move< Nonnull<WhereClause*> > (std::move (that.value));
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.move< Operator > (std::move (that.value));
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.move< ParenContents<Expression> > (std::move (that.value));
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.move< ParenContents<Pattern> > (std::move (that.value));
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.move< bool > (std::move (that.value));
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.move< int > (std::move (that.value));
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.move< std::optional<Nonnull<Block*>> > (std::move (that.value));
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.move< std::optional<Nonnull<Expression*>> > (std::move (that.value));
        break;

      case symbol_kind::S_type_params: // type_params
        value.move< std::optional<Nonnull<TuplePattern*>> > (std::move (that.value));
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.move< std::pair<LibraryName, bool> > (std::move (that.value));
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.move< std::pair<Nonnull<Expression*>, bool> > (std::move (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.move< std::string > (std::move (that.value));
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.move< std::vector<FieldInitializer> > (std::move (that.value));
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.move< std::vector<LibraryName> > (std::move (that.value));
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.move< std::vector<Match::Clause> > (std::move (that.value));
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.move< std::vector<Nonnull<AlternativeSignature*>> > (std::move (that.value));
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.move< std::vector<Nonnull<AstNode*>> > (std::move (that.value));
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.move< std::vector<Nonnull<Declaration*>> > (std::move (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< std::vector<Nonnull<Statement*>> > (std::move (that.value));
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.move< std::vector<Nonnull<WhereClause*>> > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, BisonWrap<Match::Clause>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const BisonWrap<Match::Clause>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, BisonWrap<ReturnTerm>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const BisonWrap<ReturnTerm>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ClassExtensibility&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ClassExtensibility& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ImplKind&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ImplKind& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, IntrinsicExpression::Intrinsic&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const IntrinsicExpression::Intrinsic& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, LibraryName&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const LibraryName& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<AliasDeclaration*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<AliasDeclaration*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<AlternativeSignature*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<AlternativeSignature*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<BindingPattern*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<BindingPattern*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<Block*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<Block*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<Declaration*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<Declaration*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<DestructorDeclaration*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<DestructorDeclaration*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<Expression*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<Expression*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<FunctionDeclaration*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<FunctionDeclaration*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<GenericBinding*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<GenericBinding*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<If*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<If*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<MixDeclaration*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<MixDeclaration*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<Pattern*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<Pattern*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<Statement*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<Statement*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<StructLiteral*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<StructLiteral*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<StructTypeLiteral*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<StructTypeLiteral*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<TupleLiteral*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<TupleLiteral*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<TuplePattern*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<TuplePattern*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Nonnull<WhereClause*>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Nonnull<WhereClause*>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Operator&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Operator& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ParenContents<Expression>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ParenContents<Expression>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ParenContents<Pattern>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ParenContents<Pattern>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, bool&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const bool& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::optional<Nonnull<Block*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::optional<Nonnull<Block*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::optional<Nonnull<Expression*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::optional<Nonnull<Expression*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::optional<Nonnull<TuplePattern*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::optional<Nonnull<TuplePattern*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::pair<LibraryName, bool>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::pair<LibraryName, bool>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::pair<Nonnull<Expression*>, bool>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::pair<Nonnull<Expression*>, bool>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<FieldInitializer>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<FieldInitializer>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<LibraryName>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<LibraryName>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Match::Clause>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Match::Clause>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Nonnull<AlternativeSignature*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Nonnull<AlternativeSignature*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Nonnull<AstNode*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Nonnull<AstNode*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Nonnull<Declaration*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Nonnull<Declaration*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Nonnull<Statement*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Nonnull<Statement*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<Nonnull<WhereClause*>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<Nonnull<WhereClause*>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_clause: // clause
        value.template destroy< BisonWrap<Match::Clause> > ();
        break;

      case symbol_kind::S_return_term: // return_term
        value.template destroy< BisonWrap<ReturnTerm> > ();
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.template destroy< ClassExtensibility > ();
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.template destroy< ImplKind > ();
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.template destroy< IntrinsicExpression::Intrinsic > ();
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.template destroy< LibraryName > ();
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.template destroy< Nonnull<AliasDeclaration*> > ();
        break;

      case symbol_kind::S_alternative: // alternative
        value.template destroy< Nonnull<AlternativeSignature*> > ();
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.template destroy< Nonnull<BindingPattern*> > ();
        break;

      case symbol_kind::S_block: // block
        value.template destroy< Nonnull<Block*> > ();
        break;

      case symbol_kind::S_declaration: // declaration
        value.template destroy< Nonnull<Declaration*> > ();
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.template destroy< Nonnull<DestructorDeclaration*> > ();
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
        value.template destroy< Nonnull<Expression*> > ();
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.template destroy< Nonnull<FunctionDeclaration*> > ();
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.template destroy< Nonnull<GenericBinding*> > ();
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.template destroy< Nonnull<If*> > ();
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.template destroy< Nonnull<MixDeclaration*> > ();
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.template destroy< Nonnull<Pattern*> > ();
        break;

      case symbol_kind::S_statement: // statement
        value.template destroy< Nonnull<Statement*> > ();
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.template destroy< Nonnull<StructLiteral*> > ();
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.template destroy< Nonnull<StructTypeLiteral*> > ();
        break;

      case symbol_kind::S_tuple: // tuple
        value.template destroy< Nonnull<TupleLiteral*> > ();
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.template destroy< Nonnull<TuplePattern*> > ();
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.template destroy< Nonnull<WhereClause*> > ();
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.template destroy< Operator > ();
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.template destroy< ParenContents<Expression> > ();
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.template destroy< ParenContents<Pattern> > ();
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.template destroy< bool > ();
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.template destroy< int > ();
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.template destroy< std::optional<Nonnull<Block*>> > ();
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.template destroy< std::optional<Nonnull<Expression*>> > ();
        break;

      case symbol_kind::S_type_params: // type_params
        value.template destroy< std::optional<Nonnull<TuplePattern*>> > ();
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.template destroy< std::pair<LibraryName, bool> > ();
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.template destroy< std::pair<Nonnull<Expression*>, bool> > ();
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.template destroy< std::string > ();
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.template destroy< std::vector<FieldInitializer> > ();
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.template destroy< std::vector<LibraryName> > ();
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.template destroy< std::vector<Match::Clause> > ();
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.template destroy< std::vector<Nonnull<AlternativeSignature*>> > ();
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.template destroy< std::vector<Nonnull<AstNode*>> > ();
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.template destroy< std::vector<Nonnull<Declaration*>> > ();
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.template destroy< std::vector<Nonnull<Statement*>> > ();
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.template destroy< std::vector<Nonnull<WhereClause*>> > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return  Parser ::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type (token_kind_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type (token_kind_type (tok), l)
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, IntrinsicExpression::Intrinsic v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const IntrinsicExpression::Intrinsic& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {}
    };

    /// Build a parser object.
     Parser  (Nonnull<Arena*> arena_yyarg, yyscan_t yyscanner_yyarg, ParseAndLexContext& pl_context_yyarg, std::optional<AST>* ast_yyarg);
    virtual ~ Parser  ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
     Parser  (const  Parser &) = delete;
    /// Non copyable.
     Parser & operator= (const  Parser &) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END_OF_FILE (location_type l)
      {
        return symbol_type (token::END_OF_FILE, std::move (l));
      }
#else
      static
      symbol_type
      make_END_OF_FILE (const location_type& l)
      {
        return symbol_type (token::END_OF_FILE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_integer_literal (int v, location_type l)
      {
        return symbol_type (token::integer_literal, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_integer_literal (const int& v, const location_type& l)
      {
        return symbol_type (token::integer_literal, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_identifier (std::string v, location_type l)
      {
        return symbol_type (token::identifier, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_identifier (const std::string& v, const location_type& l)
      {
        return symbol_type (token::identifier, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_intrinsic_identifier (IntrinsicExpression::Intrinsic v, location_type l)
      {
        return symbol_type (token::intrinsic_identifier, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_intrinsic_identifier (const IntrinsicExpression::Intrinsic& v, const location_type& l)
      {
        return symbol_type (token::intrinsic_identifier, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_sized_type_literal (std::string v, location_type l)
      {
        return symbol_type (token::sized_type_literal, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_sized_type_literal (const std::string& v, const location_type& l)
      {
        return symbol_type (token::sized_type_literal, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_string_literal (std::string v, location_type l)
      {
        return symbol_type (token::string_literal, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_string_literal (const std::string& v, const location_type& l)
      {
        return symbol_type (token::string_literal, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ABSTRACT (location_type l)
      {
        return symbol_type (token::ABSTRACT, std::move (l));
      }
#else
      static
      symbol_type
      make_ABSTRACT (const location_type& l)
      {
        return symbol_type (token::ABSTRACT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ADDR (location_type l)
      {
        return symbol_type (token::ADDR, std::move (l));
      }
#else
      static
      symbol_type
      make_ADDR (const location_type& l)
      {
        return symbol_type (token::ADDR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALIAS (location_type l)
      {
        return symbol_type (token::ALIAS, std::move (l));
      }
#else
      static
      symbol_type
      make_ALIAS (const location_type& l)
      {
        return symbol_type (token::ALIAS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AMPERSAND (location_type l)
      {
        return symbol_type (token::AMPERSAND, std::move (l));
      }
#else
      static
      symbol_type
      make_AMPERSAND (const location_type& l)
      {
        return symbol_type (token::AMPERSAND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (location_type l)
      {
        return symbol_type (token::AND, std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const location_type& l)
      {
        return symbol_type (token::AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_API (location_type l)
      {
        return symbol_type (token::API, std::move (l));
      }
#else
      static
      symbol_type
      make_API (const location_type& l)
      {
        return symbol_type (token::API, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARROW (location_type l)
      {
        return symbol_type (token::ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_ARROW (const location_type& l)
      {
        return symbol_type (token::ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AS (location_type l)
      {
        return symbol_type (token::AS, std::move (l));
      }
#else
      static
      symbol_type
      make_AS (const location_type& l)
      {
        return symbol_type (token::AS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AUTO (location_type l)
      {
        return symbol_type (token::AUTO, std::move (l));
      }
#else
      static
      symbol_type
      make_AUTO (const location_type& l)
      {
        return symbol_type (token::AUTO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AWAIT (location_type l)
      {
        return symbol_type (token::AWAIT, std::move (l));
      }
#else
      static
      symbol_type
      make_AWAIT (const location_type& l)
      {
        return symbol_type (token::AWAIT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BASE (location_type l)
      {
        return symbol_type (token::BASE, std::move (l));
      }
#else
      static
      symbol_type
      make_BASE (const location_type& l)
      {
        return symbol_type (token::BASE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BOOL (location_type l)
      {
        return symbol_type (token::BOOL, std::move (l));
      }
#else
      static
      symbol_type
      make_BOOL (const location_type& l)
      {
        return symbol_type (token::BOOL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK (location_type l)
      {
        return symbol_type (token::BREAK, std::move (l));
      }
#else
      static
      symbol_type
      make_BREAK (const location_type& l)
      {
        return symbol_type (token::BREAK, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARET (location_type l)
      {
        return symbol_type (token::CARET, std::move (l));
      }
#else
      static
      symbol_type
      make_CARET (const location_type& l)
      {
        return symbol_type (token::CARET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CASE (location_type l)
      {
        return symbol_type (token::CASE, std::move (l));
      }
#else
      static
      symbol_type
      make_CASE (const location_type& l)
      {
        return symbol_type (token::CASE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHOICE (location_type l)
      {
        return symbol_type (token::CHOICE, std::move (l));
      }
#else
      static
      symbol_type
      make_CHOICE (const location_type& l)
      {
        return symbol_type (token::CHOICE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLASS (location_type l)
      {
        return symbol_type (token::CLASS, std::move (l));
      }
#else
      static
      symbol_type
      make_CLASS (const location_type& l)
      {
        return symbol_type (token::CLASS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON (location_type l)
      {
        return symbol_type (token::COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON (const location_type& l)
      {
        return symbol_type (token::COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON_BANG (location_type l)
      {
        return symbol_type (token::COLON_BANG, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON_BANG (const location_type& l)
      {
        return symbol_type (token::COLON_BANG, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUATION (location_type l)
      {
        return symbol_type (token::CONTINUATION, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUATION (const location_type& l)
      {
        return symbol_type (token::CONTINUATION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUATION_TYPE (location_type l)
      {
        return symbol_type (token::CONTINUATION_TYPE, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUATION_TYPE (const location_type& l)
      {
        return symbol_type (token::CONTINUATION_TYPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE (location_type l)
      {
        return symbol_type (token::CONTINUE, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUE (const location_type& l)
      {
        return symbol_type (token::CONTINUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT (location_type l)
      {
        return symbol_type (token::DEFAULT, std::move (l));
      }
#else
      static
      symbol_type
      make_DEFAULT (const location_type& l)
      {
        return symbol_type (token::DEFAULT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DESTRUCTOR (location_type l)
      {
        return symbol_type (token::DESTRUCTOR, std::move (l));
      }
#else
      static
      symbol_type
      make_DESTRUCTOR (const location_type& l)
      {
        return symbol_type (token::DESTRUCTOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLE_ARROW (location_type l)
      {
        return symbol_type (token::DOUBLE_ARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLE_ARROW (const location_type& l)
      {
        return symbol_type (token::DOUBLE_ARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUAL (location_type l)
      {
        return symbol_type (token::EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_EQUAL (const location_type& l)
      {
        return symbol_type (token::EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUAL_EQUAL (location_type l)
      {
        return symbol_type (token::EQUAL_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_EQUAL_EQUAL (const location_type& l)
      {
        return symbol_type (token::EQUAL_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTENDS (location_type l)
      {
        return symbol_type (token::EXTENDS, std::move (l));
      }
#else
      static
      symbol_type
      make_EXTENDS (const location_type& l)
      {
        return symbol_type (token::EXTENDS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EXTERNAL (location_type l)
      {
        return symbol_type (token::EXTERNAL, std::move (l));
      }
#else
      static
      symbol_type
      make_EXTERNAL (const location_type& l)
      {
        return symbol_type (token::EXTERNAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FALSE (location_type l)
      {
        return symbol_type (token::FALSE, std::move (l));
      }
#else
      static
      symbol_type
      make_FALSE (const location_type& l)
      {
        return symbol_type (token::FALSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FN (location_type l)
      {
        return symbol_type (token::FN, std::move (l));
      }
#else
      static
      symbol_type
      make_FN (const location_type& l)
      {
        return symbol_type (token::FN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FN_TYPE (location_type l)
      {
        return symbol_type (token::FN_TYPE, std::move (l));
      }
#else
      static
      symbol_type
      make_FN_TYPE (const location_type& l)
      {
        return symbol_type (token::FN_TYPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR (location_type l)
      {
        return symbol_type (token::FOR, std::move (l));
      }
#else
      static
      symbol_type
      make_FOR (const location_type& l)
      {
        return symbol_type (token::FOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FORALL (location_type l)
      {
        return symbol_type (token::FORALL, std::move (l));
      }
#else
      static
      symbol_type
      make_FORALL (const location_type& l)
      {
        return symbol_type (token::FORALL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER (location_type l)
      {
        return symbol_type (token::GREATER, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER (const location_type& l)
      {
        return symbol_type (token::GREATER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER_EQUAL (location_type l)
      {
        return symbol_type (token::GREATER_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER_EQUAL (const location_type& l)
      {
        return symbol_type (token::GREATER_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER_GREATER (location_type l)
      {
        return symbol_type (token::GREATER_GREATER, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER_GREATER (const location_type& l)
      {
        return symbol_type (token::GREATER_GREATER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (location_type l)
      {
        return symbol_type (token::IF, std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const location_type& l)
      {
        return symbol_type (token::IF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPL (location_type l)
      {
        return symbol_type (token::IMPL, std::move (l));
      }
#else
      static
      symbol_type
      make_IMPL (const location_type& l)
      {
        return symbol_type (token::IMPL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IMPORT (location_type l)
      {
        return symbol_type (token::IMPORT, std::move (l));
      }
#else
      static
      symbol_type
      make_IMPORT (const location_type& l)
      {
        return symbol_type (token::IMPORT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IN (location_type l)
      {
        return symbol_type (token::IN, std::move (l));
      }
#else
      static
      symbol_type
      make_IN (const location_type& l)
      {
        return symbol_type (token::IN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTERFACE (location_type l)
      {
        return symbol_type (token::INTERFACE, std::move (l));
      }
#else
      static
      symbol_type
      make_INTERFACE (const location_type& l)
      {
        return symbol_type (token::INTERFACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IS (location_type l)
      {
        return symbol_type (token::IS, std::move (l));
      }
#else
      static
      symbol_type
      make_IS (const location_type& l)
      {
        return symbol_type (token::IS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_CURLY_BRACE (location_type l)
      {
        return symbol_type (token::LEFT_CURLY_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_CURLY_BRACE (const location_type& l)
      {
        return symbol_type (token::LEFT_CURLY_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_PARENTHESIS (location_type l)
      {
        return symbol_type (token::LEFT_PARENTHESIS, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_PARENTHESIS (const location_type& l)
      {
        return symbol_type (token::LEFT_PARENTHESIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEFT_SQUARE_BRACKET (location_type l)
      {
        return symbol_type (token::LEFT_SQUARE_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_LEFT_SQUARE_BRACKET (const location_type& l)
      {
        return symbol_type (token::LEFT_SQUARE_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS (location_type l)
      {
        return symbol_type (token::LESS, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS (const location_type& l)
      {
        return symbol_type (token::LESS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS_EQUAL (location_type l)
      {
        return symbol_type (token::LESS_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS_EQUAL (const location_type& l)
      {
        return symbol_type (token::LESS_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS_LESS (location_type l)
      {
        return symbol_type (token::LESS_LESS, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS_LESS (const location_type& l)
      {
        return symbol_type (token::LESS_LESS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LET (location_type l)
      {
        return symbol_type (token::LET, std::move (l));
      }
#else
      static
      symbol_type
      make_LET (const location_type& l)
      {
        return symbol_type (token::LET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LIBRARY (location_type l)
      {
        return symbol_type (token::LIBRARY, std::move (l));
      }
#else
      static
      symbol_type
      make_LIBRARY (const location_type& l)
      {
        return symbol_type (token::LIBRARY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MATCH (location_type l)
      {
        return symbol_type (token::MATCH, std::move (l));
      }
#else
      static
      symbol_type
      make_MATCH (const location_type& l)
      {
        return symbol_type (token::MATCH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (location_type l)
      {
        return symbol_type (token::MINUS, std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const location_type& l)
      {
        return symbol_type (token::MINUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MIX (location_type l)
      {
        return symbol_type (token::MIX, std::move (l));
      }
#else
      static
      symbol_type
      make_MIX (const location_type& l)
      {
        return symbol_type (token::MIX, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MIXIN (location_type l)
      {
        return symbol_type (token::MIXIN, std::move (l));
      }
#else
      static
      symbol_type
      make_MIXIN (const location_type& l)
      {
        return symbol_type (token::MIXIN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT_EQUAL (location_type l)
      {
        return symbol_type (token::NOT_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT_EQUAL (const location_type& l)
      {
        return symbol_type (token::NOT_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (location_type l)
      {
        return symbol_type (token::OR, std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const location_type& l)
      {
        return symbol_type (token::OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PACKAGE (location_type l)
      {
        return symbol_type (token::PACKAGE, std::move (l));
      }
#else
      static
      symbol_type
      make_PACKAGE (const location_type& l)
      {
        return symbol_type (token::PACKAGE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERCENT (location_type l)
      {
        return symbol_type (token::PERCENT, std::move (l));
      }
#else
      static
      symbol_type
      make_PERCENT (const location_type& l)
      {
        return symbol_type (token::PERCENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PERIOD (location_type l)
      {
        return symbol_type (token::PERIOD, std::move (l));
      }
#else
      static
      symbol_type
      make_PERIOD (const location_type& l)
      {
        return symbol_type (token::PERIOD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PIPE (location_type l)
      {
        return symbol_type (token::PIPE, std::move (l));
      }
#else
      static
      symbol_type
      make_PIPE (const location_type& l)
      {
        return symbol_type (token::PIPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (location_type l)
      {
        return symbol_type (token::PLUS, std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const location_type& l)
      {
        return symbol_type (token::PLUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (location_type l)
      {
        return symbol_type (token::RETURN, std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const location_type& l)
      {
        return symbol_type (token::RETURN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURNED (location_type l)
      {
        return symbol_type (token::RETURNED, std::move (l));
      }
#else
      static
      symbol_type
      make_RETURNED (const location_type& l)
      {
        return symbol_type (token::RETURNED, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_CURLY_BRACE (location_type l)
      {
        return symbol_type (token::RIGHT_CURLY_BRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_CURLY_BRACE (const location_type& l)
      {
        return symbol_type (token::RIGHT_CURLY_BRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_PARENTHESIS (location_type l)
      {
        return symbol_type (token::RIGHT_PARENTHESIS, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_PARENTHESIS (const location_type& l)
      {
        return symbol_type (token::RIGHT_PARENTHESIS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIGHT_SQUARE_BRACKET (location_type l)
      {
        return symbol_type (token::RIGHT_SQUARE_BRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_RIGHT_SQUARE_BRACKET (const location_type& l)
      {
        return symbol_type (token::RIGHT_SQUARE_BRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RUN (location_type l)
      {
        return symbol_type (token::RUN, std::move (l));
      }
#else
      static
      symbol_type
      make_RUN (const location_type& l)
      {
        return symbol_type (token::RUN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELF (location_type l)
      {
        return symbol_type (token::SELF, std::move (l));
      }
#else
      static
      symbol_type
      make_SELF (const location_type& l)
      {
        return symbol_type (token::SELF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (location_type l)
      {
        return symbol_type (token::SEMICOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const location_type& l)
      {
        return symbol_type (token::SEMICOLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SLASH (location_type l)
      {
        return symbol_type (token::SLASH, std::move (l));
      }
#else
      static
      symbol_type
      make_SLASH (const location_type& l)
      {
        return symbol_type (token::SLASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (location_type l)
      {
        return symbol_type (token::STRING, std::move (l));
      }
#else
      static
      symbol_type
      make_STRING (const location_type& l)
      {
        return symbol_type (token::STRING, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THEN (location_type l)
      {
        return symbol_type (token::THEN, std::move (l));
      }
#else
      static
      symbol_type
      make_THEN (const location_type& l)
      {
        return symbol_type (token::THEN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRUE (location_type l)
      {
        return symbol_type (token::TRUE, std::move (l));
      }
#else
      static
      symbol_type
      make_TRUE (const location_type& l)
      {
        return symbol_type (token::TRUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TYPE (location_type l)
      {
        return symbol_type (token::TYPE, std::move (l));
      }
#else
      static
      symbol_type
      make_TYPE (const location_type& l)
      {
        return symbol_type (token::TYPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNDERSCORE (location_type l)
      {
        return symbol_type (token::UNDERSCORE, std::move (l));
      }
#else
      static
      symbol_type
      make_UNDERSCORE (const location_type& l)
      {
        return symbol_type (token::UNDERSCORE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNIMPL_EXAMPLE (location_type l)
      {
        return symbol_type (token::UNIMPL_EXAMPLE, std::move (l));
      }
#else
      static
      symbol_type
      make_UNIMPL_EXAMPLE (const location_type& l)
      {
        return symbol_type (token::UNIMPL_EXAMPLE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VAR (location_type l)
      {
        return symbol_type (token::VAR, std::move (l));
      }
#else
      static
      symbol_type
      make_VAR (const location_type& l)
      {
        return symbol_type (token::VAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHERE (location_type l)
      {
        return symbol_type (token::WHERE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHERE (const location_type& l)
      {
        return symbol_type (token::WHERE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE (location_type l)
      {
        return symbol_type (token::WHILE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHILE (const location_type& l)
      {
        return symbol_type (token::WHILE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FNARROW (location_type l)
      {
        return symbol_type (token::FNARROW, std::move (l));
      }
#else
      static
      symbol_type
      make_FNARROW (const location_type& l)
      {
        return symbol_type (token::FNARROW, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNARY_STAR (location_type l)
      {
        return symbol_type (token::UNARY_STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_UNARY_STAR (const location_type& l)
      {
        return symbol_type (token::UNARY_STAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PREFIX_STAR (location_type l)
      {
        return symbol_type (token::PREFIX_STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_PREFIX_STAR (const location_type& l)
      {
        return symbol_type (token::PREFIX_STAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_POSTFIX_STAR (location_type l)
      {
        return symbol_type (token::POSTFIX_STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_POSTFIX_STAR (const location_type& l)
      {
        return symbol_type (token::POSTFIX_STAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BINARY_STAR (location_type l)
      {
        return symbol_type (token::BINARY_STAR, std::move (l));
      }
#else
      static
      symbol_type
      make_BINARY_STAR (const location_type& l)
      {
        return symbol_type (token::BINARY_STAR, l);
      }
#endif


    class context
    {
    public:
      context (const  Parser & yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const  Parser & yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
     Parser  (const  Parser &);
    /// Non copyable.
     Parser & operator= (const  Parser &);
#endif


    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const unsigned char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const unsigned char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 1638,     ///< Last index in yytable_.
      yynnts_ = 101,  ///< Number of nonterminal symbols.
      yyfinal_ = 5 ///< Termination state number.
    };


    // User arguments.
    Nonnull<Arena*> arena;
    yyscan_t yyscanner;
    ParseAndLexContext& pl_context;
    std::optional<AST>* ast;

  };

  inline
   Parser ::symbol_kind_type
   Parser ::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
    };
    // Last valid token kind.
    const int code_max = 350;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
   Parser ::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_clause: // clause
        value.copy< BisonWrap<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_term: // return_term
        value.copy< BisonWrap<ReturnTerm> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.copy< ClassExtensibility > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.copy< ImplKind > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.copy< IntrinsicExpression::Intrinsic > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.copy< LibraryName > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.copy< Nonnull<AliasDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative: // alternative
        value.copy< Nonnull<AlternativeSignature*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.copy< Nonnull<BindingPattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.copy< Nonnull<Block*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.copy< Nonnull<Declaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.copy< Nonnull<DestructorDeclaration*> > (YY_MOVE (that.value));
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
        value.copy< Nonnull<Expression*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.copy< Nonnull<FunctionDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.copy< Nonnull<GenericBinding*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.copy< Nonnull<If*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.copy< Nonnull<MixDeclaration*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.copy< Nonnull<Pattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.copy< Nonnull<Statement*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.copy< Nonnull<StructLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.copy< Nonnull<StructTypeLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple: // tuple
        value.copy< Nonnull<TupleLiteral*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.copy< Nonnull<TuplePattern*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.copy< Nonnull<WhereClause*> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.copy< Operator > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.copy< ParenContents<Expression> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.copy< ParenContents<Pattern> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.copy< bool > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.copy< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.copy< std::optional<Nonnull<Block*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.copy< std::optional<Nonnull<Expression*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_type_params: // type_params
        value.copy< std::optional<Nonnull<TuplePattern*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.copy< std::pair<LibraryName, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.copy< std::pair<Nonnull<Expression*>, bool> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.copy< std::vector<FieldInitializer> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.copy< std::vector<LibraryName> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.copy< std::vector<Match::Clause> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.copy< std::vector<Nonnull<AlternativeSignature*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.copy< std::vector<Nonnull<AstNode*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.copy< std::vector<Nonnull<Declaration*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.copy< std::vector<Nonnull<Statement*>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.copy< std::vector<Nonnull<WhereClause*>> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
   Parser ::symbol_kind_type
   Parser ::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
   Parser ::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
   Parser ::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_clause: // clause
        value.move< BisonWrap<Match::Clause> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_return_term: // return_term
        value.move< BisonWrap<ReturnTerm> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_class_declaration_extensibility: // class_declaration_extensibility
        value.move< ClassExtensibility > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_impl_kind: // impl_kind
        value.move< ImplKind > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_intrinsic_identifier: // intrinsic_identifier
        value.move< IntrinsicExpression::Intrinsic > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_import_directive: // import_directive
        value.move< LibraryName > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_alias_declaration: // alias_declaration
        value.move< Nonnull<AliasDeclaration*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_alternative: // alternative
        value.move< Nonnull<AlternativeSignature*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_variable_declaration: // variable_declaration
        value.move< Nonnull<BindingPattern*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_block: // block
        value.move< Nonnull<Block*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_declaration: // declaration
        value.move< Nonnull<Declaration*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_destructor_declaration: // destructor_declaration
        value.move< Nonnull<DestructorDeclaration*> > (YY_MOVE (s.value));
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
        value.move< Nonnull<Expression*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_function_declaration: // function_declaration
        value.move< Nonnull<FunctionDeclaration*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_generic_binding: // generic_binding
        value.move< Nonnull<GenericBinding*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_if_statement: // if_statement
        value.move< Nonnull<If*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_mix_declaration: // mix_declaration
        value.move< Nonnull<MixDeclaration*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_pattern: // pattern
      case symbol_kind::S_non_expression_pattern: // non_expression_pattern
      case symbol_kind::S_paren_pattern: // paren_pattern
      case symbol_kind::S_deduced_param: // deduced_param
        value.move< Nonnull<Pattern*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_statement: // statement
        value.move< Nonnull<Statement*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_struct_literal: // struct_literal
        value.move< Nonnull<StructLiteral*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_struct_type_literal: // struct_type_literal
        value.move< Nonnull<StructTypeLiteral*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_tuple: // tuple
        value.move< Nonnull<TupleLiteral*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_tuple_pattern: // tuple_pattern
      case symbol_kind::S_maybe_empty_tuple_pattern: // maybe_empty_tuple_pattern
        value.move< Nonnull<TuplePattern*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_where_clause: // where_clause
        value.move< Nonnull<WhereClause*> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_comparison_operator: // comparison_operator
        value.move< Operator > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_paren_expression_base: // paren_expression_base
      case symbol_kind::S_paren_expression_contents: // paren_expression_contents
        value.move< ParenContents<Expression> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_paren_pattern_base: // paren_pattern_base
      case symbol_kind::S_paren_pattern_contents: // paren_pattern_contents
        value.move< ParenContents<Pattern> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_api_or_impl: // api_or_impl
        value.move< bool > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_integer_literal: // integer_literal
        value.move< int > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_optional_else: // optional_else
        value.move< std::optional<Nonnull<Block*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_class_declaration_extends: // class_declaration_extends
        value.move< std::optional<Nonnull<Expression*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_type_params: // type_params
        value.move< std::optional<Nonnull<TuplePattern*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_package_directive: // package_directive
        value.move< std::pair<LibraryName, bool> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_return_expression: // return_expression
        value.move< std::pair<Nonnull<Expression*>, bool> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_identifier: // identifier
      case symbol_kind::S_sized_type_literal: // sized_type_literal
      case symbol_kind::S_string_literal: // string_literal
      case symbol_kind::S_optional_library_path: // optional_library_path
      case symbol_kind::S_designator: // designator
      case symbol_kind::S_binding_lhs: // binding_lhs
        value.move< std::string > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_struct_literal_contents: // struct_literal_contents
      case symbol_kind::S_struct_type_literal_contents: // struct_type_literal_contents
        value.move< std::vector<FieldInitializer> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_import_directives: // import_directives
        value.move< std::vector<LibraryName> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_clause_list: // clause_list
        value.move< std::vector<Match::Clause> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_alternative_list: // alternative_list
      case symbol_kind::S_alternative_list_contents: // alternative_list_contents
        value.move< std::vector<Nonnull<AlternativeSignature*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_deduced_param_list: // deduced_param_list
      case symbol_kind::S_deduced_params: // deduced_params
      case symbol_kind::S_impl_deduced_params: // impl_deduced_params
        value.move< std::vector<Nonnull<AstNode*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_declaration_list: // declaration_list
      case symbol_kind::S_class_body: // class_body
      case symbol_kind::S_mixin_body: // mixin_body
      case symbol_kind::S_interface_body: // interface_body
      case symbol_kind::S_impl_body: // impl_body
        value.move< std::vector<Nonnull<Declaration*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< std::vector<Nonnull<Statement*>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_where_clause_list: // where_clause_list
        value.move< std::vector<Nonnull<WhereClause*>> > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
   Parser ::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
   Parser ::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
   Parser ::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
   Parser ::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
   Parser ::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
   Parser ::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
   Parser ::symbol_kind_type
   Parser ::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
   Parser ::symbol_kind_type
   Parser ::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 23 "parser.ypp"
} //  Carbon 
#line 4922 "parser.h"




#endif // !YY_YY_PARSER_H_INCLUDED
