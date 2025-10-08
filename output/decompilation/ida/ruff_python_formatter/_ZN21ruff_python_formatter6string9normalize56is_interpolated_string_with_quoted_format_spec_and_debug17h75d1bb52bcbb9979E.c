__int64 __fastcall ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  unsigned __int8 v4; // al
  char v6; // [rsp+7h] [rbp-11h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-10h] BYREF

  v6 = a3;
  v7[0] = a1;
  v7[1] = a1 + 80 * a2;
  v4 = core::iter::traits::iterator::Iterator::try_fold(v7, &v6, a4);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v4, 1LL);
}