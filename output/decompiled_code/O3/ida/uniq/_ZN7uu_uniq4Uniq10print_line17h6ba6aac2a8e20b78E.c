        char a7)
{
  char v10; // bp
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD v17[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+20h] [rbp-C8h]
  __int64 v21; // [rsp+28h] [rbp-C0h]
  char v22; // [rsp+30h] [rbp-B8h]
  __int64 v23; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-98h]
  _QWORD v27[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v28[6]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v29[80]; // [rsp+98h] [rbp-50h] BYREF

  v23 = a6;
  v10 = 10;
  if ( a1[53] )
    v10 = 0;
  if ( a6 != 1
    || (v11 = a1[54], v11 == 4)
    || !a7 && (v11 | 2) != 3
    || (LOBYTE(v17[0]) = v10,
        v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, v17, 1LL),
        (result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12)) == 0) )
  {
    if ( a1[51] )
    {
      v27[0] = &v23;
      v27[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v17[0] = 2LL;
      v18 = 0LL;
      v19 = 7LL;
      v20 = 0LL;
      v21 = 32LL;
      v22 = 3;
      v28[0] = &unk_12E4E8;
      v28[1] = 2LL;
      v28[4] = v17;
      v28[5] = 1LL;
      v28[2] = v27;
      v28[3] = 1LL;
      core::option::Option<T>::map_or_else(v24, v28);
      core::iter::traits::iterator::Iterator::chain(v29, v25, v25 + v26, a4, a4 + a5);
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v17, v29);
      v14 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, v17[1], v18);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17);
      core::ptr::drop_in_place<alloc::string::String>(v24);
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v14);
      if ( result )
        return result;
      goto LABEL_10;
    }
    v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, a4, a5);
    result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
    if ( !result )
    {
LABEL_10:
      LOBYTE(v17[0]) = v10;
      v15 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, v17, 1LL);
      return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
    }
  }
  return result;
}
