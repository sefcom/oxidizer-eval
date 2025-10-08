__int64 __fastcall ruff_python_formatter::statement::stmt_assign::format_interpolated_string_assignment(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  char v6; // cl
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[0] = a1;
  v7[1] = a2;
  result = 2LL;
  if ( a1 == 3 )
  {
    v4 = 1LL;
    if ( __OFSUB__(0LL, *a2) )
      return result;
  }
  else
  {
    if ( a1 != 2 || *a2 < (signed __int64)0x8000000000000002LL )
      return result;
    v4 = 0LL;
  }
  v6 = ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(
         a2[1],
         a2[2],
         *a3,
         a3[1]);
  result = 2LL;
  if ( v6 )
  {
    if ( (unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                            v7,
                            a3) )
      return 2LL;
    return v4;
  }
  return result;
}