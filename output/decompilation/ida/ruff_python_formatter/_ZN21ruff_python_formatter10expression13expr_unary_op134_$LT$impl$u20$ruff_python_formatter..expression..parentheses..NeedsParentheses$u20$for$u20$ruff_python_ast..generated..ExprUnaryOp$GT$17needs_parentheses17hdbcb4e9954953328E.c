char __fastcall ruff_python_formatter::expression::expr_unary_op::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprUnaryOp>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char result; // al
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  char is_expression_parenthesized; // cl
  __int64 inner; // rcx

  result = 1;
  if ( a2 != 39 )
  {
    v6 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a1);
    v7 = a4[2];
    is_expression_parenthesized = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                                    v6,
                                    v8,
                                    *(_QWORD *)(*(_QWORD *)(v7 + 96) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(v7 + 96) + 16LL),
                                    *a4,
                                    a4[1]);
    result = 3;
    if ( !is_expression_parenthesized )
    {
      <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a1);
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v7 + 64);
      result = 1;
      if ( !inner )
        return ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(
                 *a1,
                 30LL,
                 a1,
                 a4);
    }
  }
  return result;
}