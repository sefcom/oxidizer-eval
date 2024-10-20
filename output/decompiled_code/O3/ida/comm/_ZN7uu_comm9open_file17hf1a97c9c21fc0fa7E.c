__int64 __fastcall uu_comm::open_file(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  int v6; // r14d
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  __int16 v11; // [rsp+Ch] [rbp-2Ch]
  _DWORD v12[2]; // [rsp+10h] [rbp-28h] BYREF
  __int64 v13; // [rsp+18h] [rbp-20h]

  if ( a3 == 1 && *a2 == 45 )
  {
    v5 = std::io::stdio::stdin(a1, a2, a2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = v5;
  }
  else
  {
    v9 = 0x1B600000000LL;
    v10 = 1;
    v11 = 0;
    std::fs::OpenOptions::_open(v12, &v9, a2);
    if ( v12[0] )
    {
      *(_QWORD *)a1 = v13;
      a4 = 11;
    }
    else
    {
      v6 = v12[1];
      v7 = _rust_alloc(0x2000LL, 1LL);
      if ( !v7 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = 0x2000LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_DWORD *)(a1 + 40) = v6;
    }
  }
  *(_BYTE *)(a1 + 48) = a4;
  return a1;
}
