__int64 __fastcall uu_expand::open(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  _BYTE v11[48]; // [rsp+18h] [rbp-30h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1D32B, 1LL) )
  {
    v4 = std::io::stdio::stdin();
    v5 = alloc::boxed::Box<T>::new(v4);
    v6 = (__int64 (__fastcall **)())&unk_11ECF8;
  }
  else
  {
    std::fs::File::open(v11, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v9,
      v11,
      a2,
      a3);
    result = v9;
    if ( v9 )
    {
      v8 = v10;
      a1[1] = v9;
      a1[2] = v8;
      *a1 = 0LL;
      return result;
    }
    v5 = alloc::boxed::Box<T>::new((unsigned int)v10);
    v6 = &off_11ECA0;
  }
  return std::io::buffered::bufreader::BufReader<R>::with_capacity(a1, 0x2000LL, v5, v6);
}
