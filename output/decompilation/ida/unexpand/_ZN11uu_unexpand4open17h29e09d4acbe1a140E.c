__int64 (__fastcall **__fastcall uu_unexpand::open(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int64 v8; // rcx
  __int64 (__fastcall **v9)(); // [rsp+8h] [rbp-90h] BYREF
  __int64 v10; // [rsp+10h] [rbp-88h]
  int v11; // [rsp+20h] [rbp-78h]
  _QWORD v12[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v14[10]; // [rsp+48h] [rbp-50h] BYREF

  if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
  {
    v13[0] = a2;
    v13[1] = a3;
    v12[0] = v13;
    v12[1] = <std::path::Display as core::fmt::Display>::fmt;
    v14[0] = &unk_11CF70;
    v14[1] = 2LL;
    v14[4] = 0LL;
    v14[2] = v12;
    v14[3] = 1LL;
    core::option::Option<T>::map_or_else(&v9, v14);
    v11 = 1;
    a1[1] = alloc::boxed::Box<T>::new(&v9);
    result = &off_11D078;
    a1[2] = &off_11D078;
LABEL_7:
    *a1 = 0LL;
    return result;
  }
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1D367, 1LL) )
  {
    v5 = std::io::stdio::stdin();
    v6 = alloc::boxed::Box<T>::new(v5);
    v7 = (__int64 (__fastcall **)())&unk_11CFE8;
  }
  else
  {
    std::fs::File::open(v14, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v9,
      v14,
      a2,
      a3);
    result = v9;
    if ( v9 )
    {
      v8 = v10;
      a1[1] = v9;
      a1[2] = v8;
      goto LABEL_7;
    }
    v6 = alloc::boxed::Box<T>::new((unsigned int)v10);
    v7 = &off_11CF90;
  }
  return (__int64 (__fastcall **)())std::io::buffered::bufreader::BufReader<R>::with_capacity(a1, 0x2000LL, v6, v7);
}
