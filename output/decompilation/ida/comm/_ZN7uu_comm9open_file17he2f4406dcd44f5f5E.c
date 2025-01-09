__int64 __fastcall uu_comm::open_file(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  _DWORD v8[2]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1C4FB, 1LL) )
  {
    v6 = std::io::stdio::stdin();
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    std::fs::File::open(v8, a2, a3);
    if ( v8[0] )
    {
      *(_QWORD *)a1 = v9;
      a4 = 11;
    }
    else
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(a1, 0x2000LL, v8[1]);
    }
  }
  *(_BYTE *)(a1 + 48) = a4;
  return a1;
}
