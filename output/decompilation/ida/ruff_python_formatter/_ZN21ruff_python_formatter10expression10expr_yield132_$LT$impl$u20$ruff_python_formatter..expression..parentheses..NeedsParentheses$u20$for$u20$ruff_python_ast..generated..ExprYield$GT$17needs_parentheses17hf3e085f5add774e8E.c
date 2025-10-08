__int64 __fastcall ruff_python_formatter::expression::expr_yield::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprYield>::needs_parentheses(
        __int64 a1)
{
  _QWORD v2[2]; // [rsp+8h] [rbp-10h] BYREF

  v2[1] = a1;
  v2[0] = 0LL;
  return <ruff_python_formatter::expression::expr_yield::AnyExpressionYield as ruff_python_formatter::expression::parentheses::NeedsParentheses>::needs_parentheses(v2);
}