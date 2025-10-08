unsigned __int64 __fastcall rg::flags::parse::Parser::find_short(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  _BYTE v8[25]; // [rsp+Fh] [rbp-19h] BYREF

  if ( a3 < 0x80 && (v8[0] = a3, (rg::flags::parse::FlagMap::find(a2 + 24, v8, 1LL) & 1) != 0) )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v5 >= v6 )
      core::panicking::panic_bounds_check(v5, v6, &off_3EB5E0);
    a1[1] = *(_QWORD *)(a2 + 8) + 40 * v5;
    result = 0x8000000000000000LL;
  }
  else
  {
    result = 0x8000000000000001LL;
    *((_DWORD *)a1 + 2) = a3;
  }
  *a1 = result;
  return result;
}