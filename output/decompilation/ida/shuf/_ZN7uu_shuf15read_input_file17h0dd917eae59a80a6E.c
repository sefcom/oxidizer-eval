_QWORD *__fastcall uu_shuf::read_input_file(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_1AF6D, 1LL) )
  {
    *(_QWORD *)&v7 = 0LL;
    *((_QWORD *)&v7 + 1) = 1LL;
    v8 = 0LL;
    v9 = std::io::stdio::stdin();
    v4 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v9, &v7);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      v10,
      v4);
    if ( v10[0] )
    {
      v5 = v10[1];
      a1[1] = v10[0];
      a1[2] = v5;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, *((_QWORD *)&v7 + 1));
    }
    else
    {
      a1[2] = v8;
      *(_OWORD *)a1 = v7;
    }
  }
  else
  {
    std::fs::read(&v7, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      a1,
      &v7,
      a2,
      a3);
  }
  return a1;
}