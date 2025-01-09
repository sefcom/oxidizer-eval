unsigned __int64 __fastcall uu_fmt::linebreak::BreakArgs::compute_width(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  if ( a4 )
    return 0LL;
  result = a2[6];
  if ( *a2 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( !v5 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_126810);
    v6 = a3 + a2[1];
    if ( (v5 | v6) >> 32 )
      v7 = v6 / v5;
    else
      v7 = (unsigned int)v6 / (unsigned int)v5;
    return v5 * (v7 + 1) + a2[6] - a3;
  }
  return result;
}
