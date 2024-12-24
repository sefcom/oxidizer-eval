__int64 *__fastcall uu_uniq::open_input_file(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-58h]
  _QWORD v12[10]; // [rsp+18h] [rbp-50h] BYREF

  if ( a2 && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1F6C4, 1LL) )
  {
    std::fs::File::open(v12, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v10,
      v12,
      a2,
      a3);
    v6 = v10;
    if ( v10 )
    {
      v7 = v11;
      v8 = 1LL;
      goto LABEL_5;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v12, 0x2000LL, (unsigned int)v11);
    v6 = alloc::boxed::Box<T>::new(v12);
    v7 = &off_131140;
  }
  else
  {
    v12[0] = std::io::stdio::stdin();
    v4 = std::io::stdio::Stdin::lock(v12);
    v6 = alloc::boxed::Box<T>::new(v4, v5 & 1);
    v7 = &off_1311C8;
  }
  v8 = 0LL;
LABEL_5:
  a1[1] = v6;
  a1[2] = (__int64)v7;
  *a1 = v8;
  return a1;
}
