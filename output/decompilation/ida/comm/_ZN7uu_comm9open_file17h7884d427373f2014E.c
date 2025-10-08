__int64 __fastcall uu_comm::open_file(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD dest[2]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-C8h]
  int v12; // [rsp+40h] [rbp-98h]

  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_193E6, 1LL) )
  {
    std::fs::metadata(dest);
    if ( dest[0] != 2 )
    {
      if ( (v12 & 0xF000) == 0x4000 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest);
        v8 = alloc::boxed::Box<T>::new(dest, aIsADirectory);
        v7 = std::io::error::Error::_new(40LL, v8, &off_E0DE8);
        goto LABEL_8;
      }
      std::fs::File::open(dest, a2, a3);
      if ( dest[0] != 1 )
      {
        std::io::buffered::bufreader::BufReader<R>::with_capacity(a1, dest[1]);
        goto LABEL_3;
      }
    }
    v7 = v11;
LABEL_8:
    *(_QWORD *)a1 = v7;
    *(_BYTE *)(a1 + 48) = 11;
    return a1;
  }
  v6 = std::io::stdio::stdin();
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v6;
LABEL_3:
  *(_BYTE *)(a1 + 48) = a4;
  return a1;
}