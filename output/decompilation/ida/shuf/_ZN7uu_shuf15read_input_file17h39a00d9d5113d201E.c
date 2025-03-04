_QWORD *__fastcall uu_shuf::read_input_file(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+8h] [rbp-80h] BYREF
  __int64 v13; // [rsp+10h] [rbp-78h]
  __int128 v14; // [rsp+18h] [rbp-70h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  _BYTE v16[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1F2E6, 1LL) )
  {
    v4 = std::io::stdio::stdin();
    v5 = alloc::boxed::Box<T>::new(v4);
    v6 = (__int64 (__fastcall **)())&unk_137C80;
  }
  else
  {
    std::fs::File::open(&v14, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v12,
      &v14,
      a2,
      a3);
    if ( v12 )
    {
      v7 = v13;
      a1[1] = v12;
      a1[2] = v7;
      *a1 = 0x8000000000000000LL;
      return a1;
    }
    v5 = alloc::boxed::Box<T>::new((unsigned int)v13);
    v6 = &off_137C28;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v16, 0x2000LL, v5, v6);
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  v8 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(v16, &v14);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v12,
    v8,
    v9,
    a2,
    a3);
  if ( v12 )
  {
    v10 = v13;
    a1[1] = v12;
    a1[2] = v10;
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v14);
  }
  else
  {
    a1[2] = v15;
    *(_OWORD *)a1 = v14;
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v16);
  return a1;
}
