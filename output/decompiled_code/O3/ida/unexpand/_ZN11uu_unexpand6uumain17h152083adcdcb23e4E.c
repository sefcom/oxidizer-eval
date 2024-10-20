__int64 __fastcall uu_unexpand::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r13
  __int64 v5; // rax
  __int64 (__fastcall **v6)(); // rdx
  __int128 v7; // rax
  __int128 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 (__fastcall **v11)(); // r15
  __int64 (__fastcall *v12)(); // rsi
  __int64 v14; // [rsp+8h] [rbp-3C0h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-3B8h]
  __int64 v16; // [rsp+18h] [rbp-3B0h]
  __int128 v17; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-398h]
  __m256i v19; // [rsp+40h] [rbp-388h] BYREF
  __int128 v20; // [rsp+60h] [rbp-368h]
  __int64 v21; // [rsp+70h] [rbp-358h]
  __m256i v22; // [rsp+80h] [rbp-348h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-328h]
  __int64 v24; // [rsp+B0h] [rbp-318h]
  __int128 v25; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-300h]
  _BYTE v27[24]; // [rsp+D0h] [rbp-2F8h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-2E0h]
  __int128 v29; // [rsp+F0h] [rbp-2D8h]
  __int64 v30; // [rsp+100h] [rbp-2C8h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14, a1, a2);
  uu_unexpand::uu_app(v27);
  uu_unexpand::expand_shortcuts(&v17, v15, v16);
  clap_builder::builder::command::Command::try_get_matches_from(&v19, v27, &v17);
  if ( v19.m256i_i64[0] == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19.m256i_i64[1]);
    v4 = v3;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v14);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
    if ( !v2 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
  else
  {
    v24 = v21;
    v23 = v20;
    v22 = v19;
    uu_unexpand::Options::new(v27, &v22);
    v17 = *(_OWORD *)&v27[8];
    v18 = v28;
    if ( *(_QWORD *)v27 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v27[16] = v18;
      *(_OWORD *)v27 = v17;
      v5 = _rust_alloc(24LL, 8LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v2 = v5;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)&v27[16];
      *(_OWORD *)v5 = *(_OWORD *)v27;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v14);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
      v4 = &off_E42D8;
    }
    else
    {
      v21 = v30;
      v20 = v29;
      *(_OWORD *)&v19.m256i_u64[1] = v17;
      v19.m256i_i64[3] = v18;
      v19.m256i_i64[0] = *(_QWORD *)v27;
      v2 = uu_unexpand::unexpand(&v19);
      v4 = v6;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v14);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
      core::ptr::drop_in_place<uu_unexpand::Options>(&v19);
      if ( !v2 )
        return (unsigned int)uucore::mods::error::get_exit_code();
    }
  }
  v14 = v2;
  v15 = v4;
  v19.m256i_i64[0] = (__int64)&v14;
  v19.m256i_i64[1] = (__int64)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v27 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *(_QWORD *)&v27[8] = 1LL;
  *(_QWORD *)&v29 = 0LL;
  *(_QWORD *)&v27[16] = &v19;
  v28 = 1LL;
  alloc::fmt::format::format_inner(&v25, v27);
  *(_OWORD *)v19.m256i_i8 = v25;
  v19.m256i_i64[2] = v26;
  if ( v26 )
  {
    *(_QWORD *)&v7 = uucore::util_name();
    *(_OWORD *)v22.m256i_i8 = v7;
    *(_QWORD *)&v17 = &v22;
    *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v27 = &unk_E4240;
    *(_QWORD *)&v27[8] = 2LL;
    *(_QWORD *)&v29 = 0LL;
    *(_QWORD *)&v27[16] = &v17;
    v28 = 1LL;
    std::io::stdio::_eprint(v27);
    v22.m256i_i64[0] = (__int64)&v19;
    v22.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v27 = &unk_E4260;
    *(_QWORD *)&v27[8] = 2LL;
    *(_QWORD *)&v29 = 0LL;
    *(_QWORD *)&v27[16] = &v22;
    v28 = 1LL;
    std::io::stdio::_eprint(v27);
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64))v15[13])(v14) )
  {
    *(_QWORD *)&v8 = uucore::execution_phrase();
    *(_OWORD *)v22.m256i_i8 = v8;
    *(_QWORD *)&v17 = &v22;
    *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v27 = &off_E4280;
    *(_QWORD *)&v27[8] = 2LL;
    *(_QWORD *)&v29 = 0LL;
    *(_QWORD *)&v27[16] = &v17;
    v28 = 1LL;
    std::io::stdio::_eprint(v27);
  }
  v9 = ((__int64 (__fastcall *)(__int64))v15[12])(v14);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v19);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v19);
  v10 = v14;
  v11 = v15;
  if ( *v15 )
    ((void (__fastcall *)(__int64))*v15)(v14);
  v12 = v11[1];
  if ( v12 )
    _rust_dealloc(v10, v12, v11[2]);
  return v9;
}
