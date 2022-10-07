// Generated from ast_rtti.txt by explorer/gen_rtti.py

#ifndef AST_RTTI_TXT_
#define AST_RTTI_TXT_

#include <string_view>

namespace Carbon {

enum class AstNodeKind {
  AutoPattern = 0,
  VarPattern = 1,
  AddrPattern = 2,
  BindingPattern = 3,
  GenericBinding = 4,
  TuplePattern = 5,
  AlternativePattern = 6,
  ExpressionPattern = 7,
  FunctionDeclaration = 8,
  DestructorDeclaration = 9,
  SelfDeclaration = 10,
  ClassDeclaration = 11,
  MixinDeclaration = 12,
  MixDeclaration = 13,
  ChoiceDeclaration = 14,
  VariableDeclaration = 15,
  InterfaceDeclaration = 16,
  AssociatedConstantDeclaration = 17,
  ImplDeclaration = 18,
  AliasDeclaration = 19,
  ImplBinding = 20,
  AlternativeSignature = 21,
  ExpressionStatement = 22,
  Assign = 23,
  VariableDefinition = 24,
  If = 25,
  ReturnVar = 26,
  ReturnExpression = 27,
  Block = 28,
  While = 29,
  Break = 30,
  Continue = 31,
  Match = 32,
  Continuation = 33,
  Run = 34,
  Await = 35,
  For = 36,
  BoolTypeLiteral = 37,
  BoolLiteral = 38,
  CallExpression = 39,
  FunctionTypeLiteral = 40,
  SimpleMemberAccessExpression = 41,
  CompoundMemberAccessExpression = 42,
  IndexExpression = 43,
  IntTypeLiteral = 44,
  ContinuationTypeLiteral = 45,
  IntLiteral = 46,
  OperatorExpression = 47,
  StringLiteral = 48,
  StringTypeLiteral = 49,
  TupleLiteral = 50,
  StructLiteral = 51,
  StructTypeLiteral = 52,
  TypeTypeLiteral = 53,
  ValueLiteral = 54,
  IdentifierExpression = 55,
  DotSelfExpression = 56,
  IntrinsicExpression = 57,
  IfExpression = 58,
  WhereExpression = 59,
  UnimplementedExpression = 60,
  ArrayTypeLiteral = 61,
  IsWhereClause = 62,
  EqualsWhereClause = 63,
};

std::string_view AstNodeKindName(AstNodeKind k);

enum class PatternKind {
  AutoPattern = 0,
  VarPattern = 1,
  AddrPattern = 2,
  BindingPattern = 3,
  GenericBinding = 4,
  TuplePattern = 5,
  AlternativePattern = 6,
  ExpressionPattern = 7,
};

std::string_view PatternKindName(PatternKind k);

inline bool InheritsFromPattern(AstNodeKind kind) {
  return kind >= AstNodeKind::AutoPattern
      && kind < AstNodeKind::FunctionDeclaration
      ;
}

inline bool InheritsFromAutoPattern(AstNodeKind kind) {
    return kind == AstNodeKind::AutoPattern;
}

inline bool InheritsFromVarPattern(AstNodeKind kind) {
    return kind == AstNodeKind::VarPattern;
}

inline bool InheritsFromAddrPattern(AstNodeKind kind) {
    return kind == AstNodeKind::AddrPattern;
}

inline bool InheritsFromBindingPattern(AstNodeKind kind) {
    return kind == AstNodeKind::BindingPattern;
}

inline bool InheritsFromGenericBinding(AstNodeKind kind) {
    return kind == AstNodeKind::GenericBinding;
}

inline bool InheritsFromTuplePattern(AstNodeKind kind) {
    return kind == AstNodeKind::TuplePattern;
}

inline bool InheritsFromAlternativePattern(AstNodeKind kind) {
    return kind == AstNodeKind::AlternativePattern;
}

inline bool InheritsFromExpressionPattern(AstNodeKind kind) {
    return kind == AstNodeKind::ExpressionPattern;
}

enum class DeclarationKind {
  FunctionDeclaration = 8,
  DestructorDeclaration = 9,
  SelfDeclaration = 10,
  ClassDeclaration = 11,
  MixinDeclaration = 12,
  MixDeclaration = 13,
  ChoiceDeclaration = 14,
  VariableDeclaration = 15,
  InterfaceDeclaration = 16,
  AssociatedConstantDeclaration = 17,
  ImplDeclaration = 18,
  AliasDeclaration = 19,
};

std::string_view DeclarationKindName(DeclarationKind k);

inline bool InheritsFromDeclaration(AstNodeKind kind) {
  return kind >= AstNodeKind::FunctionDeclaration
      && kind < AstNodeKind::ImplBinding
      ;
}

enum class CallableDeclarationKind {
  FunctionDeclaration = 8,
  DestructorDeclaration = 9,
};

std::string_view CallableDeclarationKindName(CallableDeclarationKind k);

inline bool InheritsFromCallableDeclaration(AstNodeKind kind) {
  return kind >= AstNodeKind::FunctionDeclaration
      && kind < AstNodeKind::SelfDeclaration
      ;
}

inline bool InheritsFromFunctionDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::FunctionDeclaration;
}

inline bool InheritsFromDestructorDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::DestructorDeclaration;
}

inline bool InheritsFromSelfDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::SelfDeclaration;
}

inline bool InheritsFromClassDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::ClassDeclaration;
}

inline bool InheritsFromMixinDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::MixinDeclaration;
}

inline bool InheritsFromMixDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::MixDeclaration;
}

inline bool InheritsFromChoiceDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::ChoiceDeclaration;
}

inline bool InheritsFromVariableDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::VariableDeclaration;
}

inline bool InheritsFromInterfaceDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::InterfaceDeclaration;
}

inline bool InheritsFromAssociatedConstantDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::AssociatedConstantDeclaration;
}

inline bool InheritsFromImplDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::ImplDeclaration;
}

inline bool InheritsFromAliasDeclaration(AstNodeKind kind) {
    return kind == AstNodeKind::AliasDeclaration;
}

inline bool InheritsFromImplBinding(AstNodeKind kind) {
    return kind == AstNodeKind::ImplBinding;
}

inline bool InheritsFromAlternativeSignature(AstNodeKind kind) {
    return kind == AstNodeKind::AlternativeSignature;
}

enum class StatementKind {
  ExpressionStatement = 22,
  Assign = 23,
  VariableDefinition = 24,
  If = 25,
  ReturnVar = 26,
  ReturnExpression = 27,
  Block = 28,
  While = 29,
  Break = 30,
  Continue = 31,
  Match = 32,
  Continuation = 33,
  Run = 34,
  Await = 35,
  For = 36,
};

std::string_view StatementKindName(StatementKind k);

inline bool InheritsFromStatement(AstNodeKind kind) {
  return kind >= AstNodeKind::ExpressionStatement
      && kind < AstNodeKind::BoolTypeLiteral
      ;
}

inline bool InheritsFromExpressionStatement(AstNodeKind kind) {
    return kind == AstNodeKind::ExpressionStatement;
}

inline bool InheritsFromAssign(AstNodeKind kind) {
    return kind == AstNodeKind::Assign;
}

inline bool InheritsFromVariableDefinition(AstNodeKind kind) {
    return kind == AstNodeKind::VariableDefinition;
}

inline bool InheritsFromIf(AstNodeKind kind) {
    return kind == AstNodeKind::If;
}

enum class ReturnKind {
  ReturnVar = 26,
  ReturnExpression = 27,
};

std::string_view ReturnKindName(ReturnKind k);

inline bool InheritsFromReturn(AstNodeKind kind) {
  return kind >= AstNodeKind::ReturnVar
      && kind < AstNodeKind::Block
      ;
}

inline bool InheritsFromReturnVar(AstNodeKind kind) {
    return kind == AstNodeKind::ReturnVar;
}

inline bool InheritsFromReturnExpression(AstNodeKind kind) {
    return kind == AstNodeKind::ReturnExpression;
}

inline bool InheritsFromBlock(AstNodeKind kind) {
    return kind == AstNodeKind::Block;
}

inline bool InheritsFromWhile(AstNodeKind kind) {
    return kind == AstNodeKind::While;
}

inline bool InheritsFromBreak(AstNodeKind kind) {
    return kind == AstNodeKind::Break;
}

inline bool InheritsFromContinue(AstNodeKind kind) {
    return kind == AstNodeKind::Continue;
}

inline bool InheritsFromMatch(AstNodeKind kind) {
    return kind == AstNodeKind::Match;
}

inline bool InheritsFromContinuation(AstNodeKind kind) {
    return kind == AstNodeKind::Continuation;
}

inline bool InheritsFromRun(AstNodeKind kind) {
    return kind == AstNodeKind::Run;
}

inline bool InheritsFromAwait(AstNodeKind kind) {
    return kind == AstNodeKind::Await;
}

inline bool InheritsFromFor(AstNodeKind kind) {
    return kind == AstNodeKind::For;
}

enum class ExpressionKind {
  BoolTypeLiteral = 37,
  BoolLiteral = 38,
  CallExpression = 39,
  FunctionTypeLiteral = 40,
  SimpleMemberAccessExpression = 41,
  CompoundMemberAccessExpression = 42,
  IndexExpression = 43,
  IntTypeLiteral = 44,
  ContinuationTypeLiteral = 45,
  IntLiteral = 46,
  OperatorExpression = 47,
  StringLiteral = 48,
  StringTypeLiteral = 49,
  TupleLiteral = 50,
  StructLiteral = 51,
  StructTypeLiteral = 52,
  TypeTypeLiteral = 53,
  ValueLiteral = 54,
  IdentifierExpression = 55,
  DotSelfExpression = 56,
  IntrinsicExpression = 57,
  IfExpression = 58,
  WhereExpression = 59,
  UnimplementedExpression = 60,
  ArrayTypeLiteral = 61,
};

std::string_view ExpressionKindName(ExpressionKind k);

inline bool InheritsFromExpression(AstNodeKind kind) {
  return kind >= AstNodeKind::BoolTypeLiteral
      && kind < AstNodeKind::IsWhereClause
      ;
}

inline bool InheritsFromBoolTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::BoolTypeLiteral;
}

inline bool InheritsFromBoolLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::BoolLiteral;
}

inline bool InheritsFromCallExpression(AstNodeKind kind) {
    return kind == AstNodeKind::CallExpression;
}

inline bool InheritsFromFunctionTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::FunctionTypeLiteral;
}

inline bool InheritsFromSimpleMemberAccessExpression(AstNodeKind kind) {
    return kind == AstNodeKind::SimpleMemberAccessExpression;
}

inline bool InheritsFromCompoundMemberAccessExpression(AstNodeKind kind) {
    return kind == AstNodeKind::CompoundMemberAccessExpression;
}

inline bool InheritsFromIndexExpression(AstNodeKind kind) {
    return kind == AstNodeKind::IndexExpression;
}

inline bool InheritsFromIntTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::IntTypeLiteral;
}

inline bool InheritsFromContinuationTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::ContinuationTypeLiteral;
}

inline bool InheritsFromIntLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::IntLiteral;
}

inline bool InheritsFromOperatorExpression(AstNodeKind kind) {
    return kind == AstNodeKind::OperatorExpression;
}

inline bool InheritsFromStringLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::StringLiteral;
}

inline bool InheritsFromStringTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::StringTypeLiteral;
}

inline bool InheritsFromTupleLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::TupleLiteral;
}

inline bool InheritsFromStructLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::StructLiteral;
}

inline bool InheritsFromStructTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::StructTypeLiteral;
}

inline bool InheritsFromTypeTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::TypeTypeLiteral;
}

inline bool InheritsFromValueLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::ValueLiteral;
}

inline bool InheritsFromIdentifierExpression(AstNodeKind kind) {
    return kind == AstNodeKind::IdentifierExpression;
}

inline bool InheritsFromDotSelfExpression(AstNodeKind kind) {
    return kind == AstNodeKind::DotSelfExpression;
}

inline bool InheritsFromIntrinsicExpression(AstNodeKind kind) {
    return kind == AstNodeKind::IntrinsicExpression;
}

inline bool InheritsFromIfExpression(AstNodeKind kind) {
    return kind == AstNodeKind::IfExpression;
}

inline bool InheritsFromWhereExpression(AstNodeKind kind) {
    return kind == AstNodeKind::WhereExpression;
}

inline bool InheritsFromUnimplementedExpression(AstNodeKind kind) {
    return kind == AstNodeKind::UnimplementedExpression;
}

inline bool InheritsFromArrayTypeLiteral(AstNodeKind kind) {
    return kind == AstNodeKind::ArrayTypeLiteral;
}

enum class WhereClauseKind {
  IsWhereClause = 62,
  EqualsWhereClause = 63,
};

std::string_view WhereClauseKindName(WhereClauseKind k);

inline bool InheritsFromWhereClause(AstNodeKind kind) {
  return kind >= AstNodeKind::IsWhereClause
      ;
}

inline bool InheritsFromIsWhereClause(AstNodeKind kind) {
    return kind == AstNodeKind::IsWhereClause;
}

inline bool InheritsFromEqualsWhereClause(AstNodeKind kind) {
    return kind == AstNodeKind::EqualsWhereClause;
}

}  // namespace Carbon

#endif  // AST_RTTI_TXT_
