        char a7)
{
  char v10; // bp
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 result; // rax
  __int64 (__fastcall *v14)(__int64, _QWORD *, __int64); // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD v18[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-D8h]
  __int64 v20; // [rsp+18h] [rbp-D0h]
  __int64 v21; // [rsp+20h] [rbp-C8h]
  __int64 v22; // [rsp+28h] [rbp-C0h]
  char v23; // [rsp+30h] [rbp-B8h]
  _BYTE v24[8]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h]
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v29[4]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v30[12]; // [rsp+88h] [rbp-60h] BYREF

  v27 = a6;
  v10 = 10;
  if ( a1[53] )
    v10 = 0;
  if ( a6 != 1
    || (v11 = a1[54], v11 == 4)
    || !a7 && (v11 | 2) != 3
    || (LOBYTE(v18[0]) = v10,
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 56))(a2, v18, 1LL),
        (result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12)) == 0) )
  {
    if ( a1[51] )
    {
      v28[0] = &v27;
      v28[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v18[0] = 2LL;
      v19 = 0LL;
      v20 = 7LL;
      v21 = 0LL;
      v22 = 32LL;
      v23 = 3;
      v30[0] = &unk_F01E8;
      v30[1] = 2LL;
      v30[4] = v18;
      v30[5] = 1LL;
      v30[2] = v28;
      v30[3] = 1LL;
      alloc::fmt::format::format_inner(v24, v30);
      v29[0] = v25;
      v29[1] = v25 + v26;
      v29[2] = a4;
      v29[3] = (char *)a4 + a5;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v18, v29);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 56);
      v15 = v14(a2, (_QWORD *)v18[1], v19);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v18);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v18);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v24);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v24);
      result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15);
      if ( result )
        return result;
      goto LABEL_10;
    }
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 56);
    v17 = v14(a2, a4, a5);
    result = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v17);
    if ( !result )
    {
LABEL_10:
      LOBYTE(v18[0]) = v10;
      v16 = v14(a2, v18, 1LL);
      return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v16);
    }
  }
  return result;
}
