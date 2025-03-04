__int64 __fastcall uu_ls::parse_width(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // zf
  char v10; // cl
  __int16 v11; // dx
  _BYTE v12[36]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+24h] [rbp-34h]
  int v14; // [rsp+34h] [rbp-24h]
  __int128 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]

  if ( a2 )
  {
    uu_ls::parse_width::{{closure}}(v12, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    result = v12[0];
    if ( v12[0] != 7 )
    {
      v10 = v12[1];
      v11 = *(_WORD *)&v12[2];
      *(_DWORD *)(a1 + 52) = v14;
      *(_OWORD *)(a1 + 36) = v13;
      *(_OWORD *)(a1 + 20) = *(_OWORD *)&v12[20];
      *(_OWORD *)(a1 + 4) = *(_OWORD *)&v12[4];
      *(_BYTE *)a1 = result;
      *(_BYTE *)(a1 + 1) = v10;
      *(_WORD *)(a1 + 2) = v11;
      return result;
    }
    result = *(unsigned __int16 *)&v12[2];
  }
  else
  {
    std::env::var_os(&v15, aColumns_0, 7LL);
    if ( (_QWORD)v15 == 0x8000000000000000LL )
    {
      v7 = terminal_size::unix::terminal_size();
      v8 = HIWORD(v7);
      v9 = (_WORD)v7 == 0;
      result = 80LL;
      if ( !v9 )
        result = v8;
    }
    else
    {
      *(_QWORD *)&v12[16] = v16;
      *(_OWORD *)v12 = v15;
      result = ((__int64 (__fastcall *)(_BYTE *, const char *, __int64, __int64, __int64, __int64))uu_ls::parse_width::{{closure}})(
                 v12,
                 aColumns_0,
                 v3,
                 v4,
                 v5,
                 v6);
    }
  }
  *(_WORD *)(a1 + 2) = result;
  *(_BYTE *)a1 = 7;
  return result;
}
