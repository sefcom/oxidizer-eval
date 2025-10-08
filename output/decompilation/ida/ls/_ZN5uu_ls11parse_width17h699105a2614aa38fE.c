__int64 __fastcall uu_ls::parse_width(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int128 v4; // xmm0
  unsigned int v5; // eax
  unsigned int v6; // ecx
  bool v7; // zf
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int16 v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+Ah] [rbp-4Eh]
  _BYTE v11[22]; // [rsp+1Ah] [rbp-3Eh]
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    uu_ls::parse_width::{{closure}}(&v8, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v2 = v8;
    result = v9;
    if ( v8 != 0x8000000000000006LL )
    {
      *(_QWORD *)(a1 + 40) = *(_QWORD *)&v11[14];
      v4 = v10;
      *(_OWORD *)(a1 + 26) = *(_OWORD *)v11;
      *(_OWORD *)(a1 + 10) = v4;
      *(_QWORD *)a1 = v2;
      *(_WORD *)(a1 + 8) = result;
      return result;
    }
  }
  else
  {
    std::env::var_os(v12, aColumns_0, 7LL);
    if ( v12[0] == 0x8000000000000000LL )
    {
      v5 = terminal_size::unix::terminal_size();
      v6 = HIWORD(v5);
      v7 = (v5 & 1) == 0;
      result = 80LL;
      if ( !v7 )
        result = v6;
    }
    else
    {
      result = uu_ls::parse_width::{{closure}}(v12);
    }
  }
  *(_WORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = 0x8000000000000006LL;
  return result;
}