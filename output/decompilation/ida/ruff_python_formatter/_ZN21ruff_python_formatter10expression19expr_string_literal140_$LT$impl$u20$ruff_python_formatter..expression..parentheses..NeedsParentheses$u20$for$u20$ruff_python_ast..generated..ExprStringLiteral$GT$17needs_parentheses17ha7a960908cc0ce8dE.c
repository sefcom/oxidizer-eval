char __fastcall ruff_python_formatter::expression::expr_string_literal::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprStringLiteral>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  _QWORD v5[2]; // [rsp+0h] [rbp-10h] BYREF

  result = 0;
  if ( __OFSUB__(0LL, *a1) )
  {
    v5[1] = a1;
    v5[0] = 0LL;
    return <ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
             v5,
             a4) | 2;
  }
  return result;
}