__int64 __fastcall uu_uniq::Uniq::print_line(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rbp
  char v10; // bl
  int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h]
  __int64 v22; // [rsp+20h] [rbp-88h]
  __int64 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[6]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v26[8]; // [rsp+68h] [rbp-40h] BYREF

  v9 = a3;
  v24 = a6;
  v10 = 10;
  if ( a1[53] )
    v10 = 0;
  v11 = (unsigned __int8)a1[54];
  if ( v11 == 4
    || a6 != 1
    || !a7 && (v11 | 2) != 3
    || (LOBYTE(v25[0]) = v10,
        v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, a3, v25, 1LL),
        (result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12)) == 0) )
  {
    if ( a1[51] )
    {
      v23 = v9;
      v26[0] = &v24;
      v26[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v25[0] = &unk_F46E0;
      v25[1] = 2LL;
      v25[4] = &unk_19460;
      v25[5] = 1LL;
      v25[2] = v26;
      v25[3] = 1LL;
      core::option::Option<T>::map_or_else(&v20, v25);
      v19 = v20;
      v14 = v21;
      core::iter::traits::iterator::Iterator::chain(v25, v21, v21 + v22, a4, a4 + a5);
      core::iter::traits::iterator::Iterator::collect(&v20, v25);
      v15 = v21;
      v9 = v23;
      v16 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, v23, v21, v22);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v20, v15);
      core::ptr::drop_in_place<alloc::string::String>(v19, v14);
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
      if ( result )
        return result;
    }
    else
    {
      v17 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, v9, a4, a5);
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
      if ( result )
        return result;
    }
    LOBYTE(v25[0]) = v10;
    v18 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a2, v9, v25, 1LL);
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v18);
  }
  return result;
}