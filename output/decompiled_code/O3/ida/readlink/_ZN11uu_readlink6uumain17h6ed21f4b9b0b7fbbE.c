__int64 __fastcall uu_readlink::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r12
  unsigned __int8 flag; // r12
  char v6; // r15
  char v7; // r13
  char v8; // bp
  unsigned __int8 v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // rax
  __int128 v15; // rax
  unsigned int v16; // ebx
  __int128 v17; // kr00_16
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned __int8 v21; // al
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 (__fastcall **v24)(); // rdx
  __int128 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v29; // r13
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int64 (__fastcall **v32)(); // rdx
  char v33; // [rsp+Bh] [rbp-40Dh]
  unsigned __int8 v34; // [rsp+Ch] [rbp-40Ch]
  unsigned int v35; // [rsp+Ch] [rbp-40Ch]
  __int128 v36; // [rsp+10h] [rbp-408h] BYREF
  __int64 v37; // [rsp+20h] [rbp-3F8h]
  _BYTE v38[24]; // [rsp+28h] [rbp-3F0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-3D8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-3D0h]
  __int64 v41; // [rsp+58h] [rbp-3C0h]
  __int64 v42; // [rsp+60h] [rbp-3B8h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-3ACh]
  __int128 v44; // [rsp+70h] [rbp-3A8h] BYREF
  __m256i v45; // [rsp+80h] [rbp-398h]
  __int128 v46; // [rsp+A0h] [rbp-378h]
  __int128 v47; // [rsp+B8h] [rbp-360h] BYREF
  __m256i v48; // [rsp+C8h] [rbp-350h]
  __int64 v49; // [rsp+E8h] [rbp-330h]
  __int128 v50; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v51; // [rsp+100h] [rbp-318h]
  __int128 v52; // [rsp+108h] [rbp-310h] BYREF
  __int64 v53; // [rsp+118h] [rbp-300h]
  __int128 v54; // [rsp+120h] [rbp-2F8h] BYREF
  __m256i v55; // [rsp+130h] [rbp-2E8h]
  __int128 v56; // [rsp+150h] [rbp-2C8h]

  uu_readlink::uu_app(&v54);
  clap_builder::builder::command::Command::try_get_matches_from(&v44, &v54, a1, a2);
  if ( (_QWORD)v44 != 0x8000000000000000LL )
  {
    v49 = v46;
    v48 = v45;
    v47 = v44;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aNoNewline, 10LL);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aZero, 4LL);
    v7 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aSilent, 6LL) )
      v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aQuiet, 5LL);
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aVerbose, 7LL);
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aCanonicalize, 12LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aCanonicalizeEx, 21LL)
      || (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aCanonicalizeMi, 20LL) )
    {
      v34 = 2;
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v34 = 0;
    }
    v9 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aCanonicalizeEx, 21LL) )
      v9 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v47, aCanonicalizeMi, 20LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v54, &v47, aFiles, 5LL);
    clap_builder::parser::error::MatchesError::unwrap(&v44, aFiles, 5LL, &v54);
    if ( !(_QWORD)v44
      || (v56 = v46,
          v55 = v45,
          v54 = v44,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v38, &v54),
          v36 = *(_OWORD *)&v38[8],
          *(_QWORD *)v38 == 0x8000000000000000LL) )
    {
      v39 = 0LL;
      v40 = 8uLL;
LABEL_15:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 15LL, 0LL);
      v10 = *((_QWORD *)&v54 + 1);
      if ( (_QWORD)v54 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v54 + 1), v55.m256i_i64[0]);
      v11 = (_QWORD *)v55.m256i_i64[0];
      *(_QWORD *)(v55.m256i_i64[0] + 7) = 0x646E617265706F20LL;
      *v11 = 0x20676E697373696DLL;
      v55.m256i_i32[2] = 1;
      *(_QWORD *)&v54 = v10;
      *((_QWORD *)&v54 + 1) = v11;
      v55.m256i_i64[0] = 15LL;
      v12 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = (__int64)v12;
      v13 = v54;
      v12[1] = *(_OWORD *)v55.m256i_i8;
      *v12 = v13;
      v4 = &off_E4510;
      goto LABEL_18;
    }
    v40 = v36;
    v39 = *(_QWORD *)v38;
    v19 = *((_QWORD *)&v36 + 1);
    if ( !*((_QWORD *)&v36 + 1) )
      goto LABEL_15;
    if ( (*((_QWORD *)&v36 + 1) == 1LL) | flag ^ 1 | (unsigned __int8)v7 )
    {
      if ( flag )
      {
        v20 = v40;
        v41 = v40 + 24LL * *((_QWORD *)&v36 + 1);
        v21 = 11;
        if ( !v8 )
          goto LABEL_31;
        goto LABEL_44;
      }
      v21 = 10;
      if ( v6 )
        v21 = 0;
    }
    else
    {
      *(_QWORD *)&v25 = uucore::util_name();
      v44 = v25;
      *(_QWORD *)v38 = &v44;
      *(_QWORD *)&v38[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v54 = &unk_E4490;
      *((_QWORD *)&v54 + 1) = 2LL;
      v55.m256i_i64[0] = (__int64)v38;
      *(_OWORD *)&v55.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&v54);
      *(_QWORD *)&v54 = &off_E4580;
      *((_QWORD *)&v54 + 1) = 1LL;
      v55.m256i_i64[0] = 8LL;
      *(_OWORD *)&v55.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(&v54);
      v19 = *((_QWORD *)&v40 + 1);
      v21 = 10;
      if ( v6 )
        v21 = 0;
      if ( !*((_QWORD *)&v40 + 1) )
      {
LABEL_48:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v39);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v47);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
    }
    v20 = v40;
    v41 = v40 + 24 * v19;
    if ( !v8 )
    {
LABEL_31:
      v43 = v9;
      v22 = v34;
      v35 = v21;
      while ( 1 )
      {
        std::sys::os_str::bytes::Slice::to_owned(&v54, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16));
        v50 = v54;
        v51 = v55.m256i_i64[0];
        uucore::features::fs::canonicalize(&v36, &v50, v43, v22);
        if ( (_QWORD)v36 == 0x8000000000000000LL )
          break;
        v54 = v36;
        v55.m256i_i64[0] = v37;
        v23 = uu_readlink::show(*((_QWORD *)&v36 + 1), v37, v35);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v23);
        if ( v2 )
          goto LABEL_55;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v54);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
        v20 += 24LL;
        if ( v20 == v41 )
          goto LABEL_48;
      }
LABEL_51:
      v29 = *((_QWORD *)&v36 + 1);
      if ( v33 )
      {
        v42 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                *((_QWORD *)&v36 + 1),
                v20);
        *(_QWORD *)v38 = 0LL;
        *(_QWORD *)&v38[8] = 1LL;
        *(_QWORD *)&v38[16] = 0LL;
        *(_QWORD *)&v56 = 32LL;
        BYTE8(v56) = 3;
        *(_QWORD *)&v54 = 0LL;
        v55.m256i_i64[0] = 0LL;
        v55.m256i_i64[2] = (__int64)v38;
        v55.m256i_i64[3] = (__int64)&off_E4638;
        if ( (unsigned __int8)<alloc::boxed::Box<T,A> as core::fmt::Display>::fmt(&v42, &v54) )
          core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v44, &unk_E4680, &off_E4668);
        v45.m256i_i64[0] = *(_QWORD *)&v38[16];
        v44 = *(_OWORD *)v38;
        v45.m256i_i32[2] = 1;
        v30 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v30 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = (__int64)v30;
        v31 = v44;
        v30[1] = *(_OWORD *)v45.m256i_i8;
        *v30 = v31;
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v42);
        v4 = &off_E45C8;
      }
      else
      {
        v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        v4 = v32;
        core::ptr::drop_in_place<std::io::error::Error>(v29);
      }
LABEL_57:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
LABEL_18:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v39);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v47);
      if ( v2 )
        goto LABEL_19;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
LABEL_44:
    v26 = v21;
    while ( 1 )
    {
      std::sys::os_str::bytes::Slice::to_owned(&v54, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16));
      v50 = v54;
      v51 = v55.m256i_i64[0];
      std::fs::read_link(&v36, &v50);
      if ( (_QWORD)v36 == 0x8000000000000000LL )
        goto LABEL_51;
      v54 = v36;
      v55.m256i_i64[0] = v37;
      v27 = uu_readlink::show(*((_QWORD *)&v36 + 1), v37, v26);
      v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v27);
      if ( v2 )
      {
LABEL_55:
        v4 = v24;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v54);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54);
        goto LABEL_57;
      }
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v54);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
      v20 += 24LL;
      if ( v20 == v41 )
        goto LABEL_48;
    }
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v44 + 1));
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_19:
  *(_QWORD *)&v36 = v2;
  *((_QWORD *)&v36 + 1) = v4;
  *(_QWORD *)&v44 = &v36;
  *((_QWORD *)&v44 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v54 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v54 + 1) = 1LL;
  v55.m256i_i64[0] = (__int64)&v44;
  *(_OWORD *)&v55.m256i_u64[1] = 1uLL;
  alloc::fmt::format::format_inner(&v52, &v54);
  v44 = v52;
  v45.m256i_i64[0] = v53;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v52 + 1), v53, 1LL, 0LL) )
  {
    *(_QWORD *)&v14 = uucore::util_name();
    v47 = v14;
    *(_QWORD *)v38 = &v47;
    *(_QWORD *)&v38[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &unk_E4490;
    *((_QWORD *)&v54 + 1) = 2LL;
    v55.m256i_i64[0] = (__int64)v38;
    *(_OWORD *)&v55.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v54);
    *(_QWORD *)&v47 = &v44;
    *((_QWORD *)&v47 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &unk_E44B0;
    *((_QWORD *)&v54 + 1) = 2LL;
    v55.m256i_i64[0] = (__int64)&v47;
    *(_OWORD *)&v55.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v54);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v36 + 1) + 104LL))(v36) )
  {
    *(_QWORD *)&v15 = uucore::execution_phrase();
    v47 = v15;
    *(_QWORD *)v38 = &v47;
    *(_QWORD *)&v38[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = &off_E44D0;
    *((_QWORD *)&v54 + 1) = 2LL;
    v55.m256i_i64[0] = (__int64)v38;
    *(_OWORD *)&v55.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&v54);
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v36 + 1) + 96LL))(v36);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
  v17 = v36;
  if ( **((_QWORD **)&v36 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v36 + 1))(v36);
  v18 = *(_QWORD *)(*((_QWORD *)&v17 + 1) + 8LL);
  if ( v18 )
    _rust_dealloc(v17, v18, *(_QWORD *)(*((_QWORD *)&v17 + 1) + 16LL));
  return v16;
}
