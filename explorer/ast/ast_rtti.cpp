// Generated from ast_rtti.txt by explorer/gen_rtti.py

#include "ast_rtti.h"

namespace Carbon {

std::string_view AstNodeKindName(AstNodeKind k) {
  switch(k) {
    case AstNodeKind::AutoPattern: return "auto pattern";
    case AstNodeKind::VarPattern: return "var pattern";
    case AstNodeKind::AddrPattern: return "addr pattern";
    case AstNodeKind::BindingPattern: return "binding pattern";
    case AstNodeKind::GenericBinding: return "generic binding";
    case AstNodeKind::TuplePattern: return "tuple pattern";
    case AstNodeKind::AlternativePattern: return "alternative pattern";
    case AstNodeKind::ExpressionPattern: return "expression pattern";
    case AstNodeKind::FunctionDeclaration: return "function declaration";
    case AstNodeKind::DestructorDeclaration: return "destructor declaration";
    case AstNodeKind::SelfDeclaration: return "self declaration";
    case AstNodeKind::ClassDeclaration: return "class declaration";
    case AstNodeKind::MixinDeclaration: return "mixin declaration";
    case AstNodeKind::MixDeclaration: return "mix declaration";
    case AstNodeKind::ChoiceDeclaration: return "choice declaration";
    case AstNodeKind::VariableDeclaration: return "variable declaration";
    case AstNodeKind::InterfaceDeclaration: return "interface declaration";
    case AstNodeKind::AssociatedConstantDeclaration: return "associated constant declaration";
    case AstNodeKind::ImplDeclaration: return "impl declaration";
    case AstNodeKind::AliasDeclaration: return "alias declaration";
    case AstNodeKind::ImplBinding: return "impl binding";
    case AstNodeKind::AlternativeSignature: return "alternative signature";
    case AstNodeKind::ExpressionStatement: return "expression statement";
    case AstNodeKind::Assign: return "assign";
    case AstNodeKind::VariableDefinition: return "variable definition";
    case AstNodeKind::If: return "if";
    case AstNodeKind::ReturnVar: return "return var";
    case AstNodeKind::ReturnExpression: return "return expression";
    case AstNodeKind::Block: return "block";
    case AstNodeKind::While: return "while";
    case AstNodeKind::Break: return "break";
    case AstNodeKind::Continue: return "continue";
    case AstNodeKind::Match: return "match";
    case AstNodeKind::Continuation: return "continuation";
    case AstNodeKind::Run: return "run";
    case AstNodeKind::Await: return "await";
    case AstNodeKind::For: return "for";
    case AstNodeKind::BoolTypeLiteral: return "bool type literal";
    case AstNodeKind::BoolLiteral: return "bool literal";
    case AstNodeKind::CallExpression: return "call expression";
    case AstNodeKind::FunctionTypeLiteral: return "function type literal";
    case AstNodeKind::SimpleMemberAccessExpression: return "simple member access expression";
    case AstNodeKind::CompoundMemberAccessExpression: return "compound member access expression";
    case AstNodeKind::IndexExpression: return "index expression";
    case AstNodeKind::IntTypeLiteral: return "int type literal";
    case AstNodeKind::ContinuationTypeLiteral: return "continuation type literal";
    case AstNodeKind::IntLiteral: return "int literal";
    case AstNodeKind::OperatorExpression: return "operator expression";
    case AstNodeKind::StringLiteral: return "string literal";
    case AstNodeKind::StringTypeLiteral: return "string type literal";
    case AstNodeKind::TupleLiteral: return "tuple literal";
    case AstNodeKind::StructLiteral: return "struct literal";
    case AstNodeKind::StructTypeLiteral: return "struct type literal";
    case AstNodeKind::TypeTypeLiteral: return "type type literal";
    case AstNodeKind::ValueLiteral: return "value literal";
    case AstNodeKind::IdentifierExpression: return "identifier expression";
    case AstNodeKind::DotSelfExpression: return "dot self expression";
    case AstNodeKind::IntrinsicExpression: return "intrinsic expression";
    case AstNodeKind::IfExpression: return "if expression";
    case AstNodeKind::WhereExpression: return "where expression";
    case AstNodeKind::UnimplementedExpression: return "unimplemented expression";
    case AstNodeKind::ArrayTypeLiteral: return "array type literal";
    case AstNodeKind::IsWhereClause: return "is where clause";
    case AstNodeKind::EqualsWhereClause: return "equals where clause";
  }
}

std::string_view PatternKindName(PatternKind k) {
  switch(k) {
    case PatternKind::AutoPattern: return "auto pattern";
    case PatternKind::VarPattern: return "var pattern";
    case PatternKind::AddrPattern: return "addr pattern";
    case PatternKind::BindingPattern: return "binding pattern";
    case PatternKind::GenericBinding: return "generic binding";
    case PatternKind::TuplePattern: return "tuple pattern";
    case PatternKind::AlternativePattern: return "alternative pattern";
    case PatternKind::ExpressionPattern: return "expression pattern";
  }
}

std::string_view DeclarationKindName(DeclarationKind k) {
  switch(k) {
    case DeclarationKind::FunctionDeclaration: return "function declaration";
    case DeclarationKind::DestructorDeclaration: return "destructor declaration";
    case DeclarationKind::SelfDeclaration: return "self declaration";
    case DeclarationKind::ClassDeclaration: return "class declaration";
    case DeclarationKind::MixinDeclaration: return "mixin declaration";
    case DeclarationKind::MixDeclaration: return "mix declaration";
    case DeclarationKind::ChoiceDeclaration: return "choice declaration";
    case DeclarationKind::VariableDeclaration: return "variable declaration";
    case DeclarationKind::InterfaceDeclaration: return "interface declaration";
    case DeclarationKind::AssociatedConstantDeclaration: return "associated constant declaration";
    case DeclarationKind::ImplDeclaration: return "impl declaration";
    case DeclarationKind::AliasDeclaration: return "alias declaration";
  }
}

std::string_view CallableDeclarationKindName(CallableDeclarationKind k) {
  switch(k) {
    case CallableDeclarationKind::FunctionDeclaration: return "function declaration";
    case CallableDeclarationKind::DestructorDeclaration: return "destructor declaration";
  }
}

std::string_view StatementKindName(StatementKind k) {
  switch(k) {
    case StatementKind::ExpressionStatement: return "expression statement";
    case StatementKind::Assign: return "assign";
    case StatementKind::VariableDefinition: return "variable definition";
    case StatementKind::If: return "if";
    case StatementKind::ReturnVar: return "return var";
    case StatementKind::ReturnExpression: return "return expression";
    case StatementKind::Block: return "block";
    case StatementKind::While: return "while";
    case StatementKind::Break: return "break";
    case StatementKind::Continue: return "continue";
    case StatementKind::Match: return "match";
    case StatementKind::Continuation: return "continuation";
    case StatementKind::Run: return "run";
    case StatementKind::Await: return "await";
    case StatementKind::For: return "for";
  }
}

std::string_view ReturnKindName(ReturnKind k) {
  switch(k) {
    case ReturnKind::ReturnVar: return "return var";
    case ReturnKind::ReturnExpression: return "return expression";
  }
}

std::string_view ExpressionKindName(ExpressionKind k) {
  switch(k) {
    case ExpressionKind::BoolTypeLiteral: return "bool type literal";
    case ExpressionKind::BoolLiteral: return "bool literal";
    case ExpressionKind::CallExpression: return "call expression";
    case ExpressionKind::FunctionTypeLiteral: return "function type literal";
    case ExpressionKind::SimpleMemberAccessExpression: return "simple member access expression";
    case ExpressionKind::CompoundMemberAccessExpression: return "compound member access expression";
    case ExpressionKind::IndexExpression: return "index expression";
    case ExpressionKind::IntTypeLiteral: return "int type literal";
    case ExpressionKind::ContinuationTypeLiteral: return "continuation type literal";
    case ExpressionKind::IntLiteral: return "int literal";
    case ExpressionKind::OperatorExpression: return "operator expression";
    case ExpressionKind::StringLiteral: return "string literal";
    case ExpressionKind::StringTypeLiteral: return "string type literal";
    case ExpressionKind::TupleLiteral: return "tuple literal";
    case ExpressionKind::StructLiteral: return "struct literal";
    case ExpressionKind::StructTypeLiteral: return "struct type literal";
    case ExpressionKind::TypeTypeLiteral: return "type type literal";
    case ExpressionKind::ValueLiteral: return "value literal";
    case ExpressionKind::IdentifierExpression: return "identifier expression";
    case ExpressionKind::DotSelfExpression: return "dot self expression";
    case ExpressionKind::IntrinsicExpression: return "intrinsic expression";
    case ExpressionKind::IfExpression: return "if expression";
    case ExpressionKind::WhereExpression: return "where expression";
    case ExpressionKind::UnimplementedExpression: return "unimplemented expression";
    case ExpressionKind::ArrayTypeLiteral: return "array type literal";
  }
}

std::string_view WhereClauseKindName(WhereClauseKind k) {
  switch(k) {
    case WhereClauseKind::IsWhereClause: return "is where clause";
    case WhereClauseKind::EqualsWhereClause: return "equals where clause";
  }
}

}  // namespace Carbon

