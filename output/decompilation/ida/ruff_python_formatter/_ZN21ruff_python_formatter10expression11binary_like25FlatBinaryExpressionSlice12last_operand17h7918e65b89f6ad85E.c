__int64 __fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::last_operand(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // [rsp-8h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v6; // [rsp+18h] [rbp-18h]

  if ( !a2 || (v2 = 32 * a2, *(_DWORD *)(a1 + v2 - 32) == 3) )
  {
    v5[0] = &off_57D630;
    v5[1] = 1LL;
    v5[2] = &v4;
    v6 = 0LL;
    core::panicking::panic_fmt(v5, &off_57D658);
  }
  return a1 + v2 - 32;
}