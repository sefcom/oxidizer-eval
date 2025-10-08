_DWORD *__fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::first_operand(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v3; // [rsp-8h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v5; // [rsp+18h] [rbp-18h]

  if ( !a2 || *a1 == 3 )
  {
    v4[0] = &off_57D630;
    v4[1] = 1LL;
    v4[2] = &v3;
    v5 = 0LL;
    core::panicking::panic_fmt(v4, &off_57D640);
  }
  return a1;
}