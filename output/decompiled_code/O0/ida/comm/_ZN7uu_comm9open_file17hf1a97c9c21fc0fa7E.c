__int64 __fastcall uu_comm::open_file(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  int v11; // [rsp+10h] [rbp-68h]
  __int16 v12; // [rsp+14h] [rbp-64h]
  _DWORD v13[2]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h]
  _OWORD v15[5]; // [rsp+28h] [rbp-50h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1E1E7, 1LL) )
  {
    v6 = std::io::stdio::stdin();
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    v10 = 0x1B600000000LL;
    v11 = 1;
    v12 = 0;
    std::fs::OpenOptions::_open(v13, &v10, a2, a3);
    if ( v13[0] )
    {
      *(_QWORD *)a1 = v14;
      a4 = 11;
    }
    else
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v15, 0x2000LL, v13[1]);
      v7 = v15[0];
      v8 = v15[1];
      *(_OWORD *)(a1 + 32) = v15[2];
      *(_OWORD *)(a1 + 16) = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  *(_BYTE *)(a1 + 48) = a4;
  return a1;
}
