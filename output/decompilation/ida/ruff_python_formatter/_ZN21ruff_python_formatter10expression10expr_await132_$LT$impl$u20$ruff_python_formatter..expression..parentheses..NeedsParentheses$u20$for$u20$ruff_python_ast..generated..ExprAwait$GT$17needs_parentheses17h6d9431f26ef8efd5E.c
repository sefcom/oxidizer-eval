char __fastcall ruff_python_formatter::expression::expr_await::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprAwait>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char result; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  char is_expression_parenthesized; // cl

  result = 1;
  if ( a2 != 39 )
  {
    v6 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a1);
    is_expression_parenthesized = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                                    v6,
                                    v7,
                                    *(_QWORD *)(*(_QWORD *)(a4[2] + 96LL) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(a4[2] + 96LL) + 16LL),
                                    *a4,
                                    a4[1]);
    result = 3;
    if ( !is_expression_parenthesized )
      return ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(
               *a1,
               39LL,
               a1,
               a4);
  }
  return result;
}