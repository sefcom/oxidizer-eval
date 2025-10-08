char __fastcall ruff_python_formatter::expression::binary_like::is_simple_power_expression(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( !(unsigned __int8)ruff_python_formatter::expression::binary_like::is_simple_power_operand(a1) )
    return 0;
  if ( !(unsigned __int8)ruff_python_formatter::expression::binary_like::is_simple_power_operand(a2) )
    return 0;
  v10 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1);
  if ( (unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                          v10,
                          v11,
                          a3,
                          a4,
                          a5,
                          a6) )
    return 0;
  v13 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a2);
  return ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v13, v14, a3, a4, a5, a6) ^ 1;
}