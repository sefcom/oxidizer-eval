char __fastcall ruff_python_formatter::expression::expr_t_string::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprTString>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char result; // al
  char v6; // cl
  _QWORD v7[4]; // [rsp+0h] [rbp-20h] BYREF

  result = 0;
  if ( !__OFSUB__(0LL, *a1) )
  {
    v7[1] = a1;
    v7[0] = 3LL;
    if ( (unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                            v7,
                            a4) )
      return 3;
    v6 = ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(
           a1[1],
           a1[2],
           *a4,
           a4[1]);
    result = 2;
    if ( v6 )
      return 3;
  }
  return result;
}