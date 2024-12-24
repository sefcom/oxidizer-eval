__int64 *__fastcall uu_uniq::open_output_file(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-48h]
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a2 && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1F6C4, 1LL) )
  {
    std::fs::File::create(v11, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v9,
      v11,
      a2,
      a3);
    v5 = v9;
    if ( v9 )
    {
      v6 = v10;
      v7 = 1LL;
      goto LABEL_5;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v11, 0x2000LL, (unsigned int)v10);
    v5 = alloc::boxed::Box<T>::new(v11);
    v6 = &off_131250;
  }
  else
  {
    v11[0] = std::io::stdio::stdout();
    v4 = std::io::stdio::Stdout::lock(v11);
    v5 = alloc::boxed::Box<T>::new(v4);
    v6 = &off_1312A0;
  }
  v7 = 0LL;
LABEL_5:
  a1[1] = v5;
  a1[2] = (__int64)v6;
  *a1 = v7;
  return a1;
}
