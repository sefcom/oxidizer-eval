__int64 __fastcall ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v4; // [rsp+18h] [rbp-18h]

  if ( *(_QWORD *)a2 )
  {
    v3[0] = &off_57F9B0;
    v3[1] = 1LL;
    v3[2] = 8LL;
    v4 = 0LL;
    core::panicking::panic_fmt(v3, &off_57F9C0);
  }
  result = *(_QWORD *)(a2 + 24);
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}