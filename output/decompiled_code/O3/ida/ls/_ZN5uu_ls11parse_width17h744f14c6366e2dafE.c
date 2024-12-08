__int64 __fastcall uu_ls::parse_width(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  unsigned int v4; // ecx
  bool v5; // zf
  char v6; // cl
  __int16 v7; // dx
  _BYTE v8[36]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+24h] [rbp-34h]
  int v10; // [rsp+34h] [rbp-24h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  if ( a2 )
  {
    uu_ls::parse_width::{{closure}}(v8, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    result = v8[0];
    if ( v8[0] != 7 )
    {
      v6 = v8[1];
      v7 = *(_WORD *)&v8[2];
      *(_DWORD *)(a1 + 52) = v10;
      *(_OWORD *)(a1 + 36) = v9;
      *(_OWORD *)(a1 + 20) = *(_OWORD *)&v8[20];
      *(_OWORD *)(a1 + 4) = *(_OWORD *)&v8[4];
      *(_BYTE *)a1 = result;
      *(_BYTE *)(a1 + 1) = v6;
      *(_WORD *)(a1 + 2) = v7;
      return result;
    }
    result = *(unsigned __int16 *)&v8[2];
  }
  else
  {
    std::env::var_os(&v11, aColumns_0, 7LL);
    if ( (_QWORD)v11 == 0x8000000000000000LL )
    {
      v3 = terminal_size::unix::terminal_size();
      v4 = HIWORD(v3);
      v5 = (_WORD)v3 == 0;
      result = 80LL;
      if ( !v5 )
        result = v4;
    }
    else
    {
      *(_QWORD *)&v8[16] = v12;
      *(_OWORD *)v8 = v11;
      result = ((__int64 (__fastcall *)(_BYTE *))uu_ls::parse_width::{{closure}})(v8);
    }
  }
  *(_WORD *)(a1 + 2) = result;
  *(_BYTE *)a1 = 7;
  return result;
}
