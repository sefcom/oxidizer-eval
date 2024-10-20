__int64 __fastcall uu_head::uumain(__int128 a1)
{
  __int64 v1; // rax
  _OWORD *v2; // rax
  _OWORD *v3; // r14
  __int128 v4; // xmm0
  __int64 (__fastcall **v5)(); // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  char v11; // bp
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(); // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int128 v24; // rax
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rax
  __int128 v30; // rax
  _OWORD *v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  _OWORD *v34; // rax
  __int128 v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // r9
  __int128 v38; // rax
  __int128 v39; // rax
  unsigned int v40; // ebx
  _OWORD *v41; // r14
  __int64 v42; // r15
  __int64 v43; // rsi
  __int64 (__fastcall **v44)(); // rdx
  __int64 v46; // rax
  __int128 v47; // [rsp+0h] [rbp-4D8h] BYREF
  _BYTE v48[72]; // [rsp+10h] [rbp-4C8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-478h] BYREF
  __int64 v50; // [rsp+70h] [rbp-468h]
  _OWORD *v51; // [rsp+78h] [rbp-460h] BYREF
  __int128 v52; // [rsp+80h] [rbp-458h]
  __int128 v53; // [rsp+90h] [rbp-448h]
  __int128 v54; // [rsp+A0h] [rbp-438h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-428h]
  __int128 v56; // [rsp+C8h] [rbp-410h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-400h]
  __int128 v58; // [rsp+E0h] [rbp-3F8h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-3E8h] BYREF
  __int64 v60; // [rsp+100h] [rbp-3D8h]
  __int128 *v61; // [rsp+110h] [rbp-3C8h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+118h] [rbp-3C0h]
  __int128 v63; // [rsp+120h] [rbp-3B8h] BYREF
  __int128 v64; // [rsp+130h] [rbp-3A8h]
  __int128 v65; // [rsp+140h] [rbp-398h]
  __int64 v66; // [rsp+150h] [rbp-388h]
  _OWORD v67[3]; // [rsp+160h] [rbp-378h] BYREF
  __int64 v68; // [rsp+190h] [rbp-348h]
  __int64 v69; // [rsp+198h] [rbp-340h] BYREF
  __int64 v70; // [rsp+1A0h] [rbp-338h]
  __int64 v71; // [rsp+1A8h] [rbp-330h]
  __int128 v72; // [rsp+1B0h] [rbp-328h] BYREF
  __int64 v73; // [rsp+1C0h] [rbp-318h]
  __int128 v74; // [rsp+1C8h] [rbp-310h] BYREF
  __int64 v75; // [rsp+1D8h] [rbp-300h]
  __m256i v76; // [rsp+1E0h] [rbp-2F8h] BYREF
  __int128 v77; // [rsp+200h] [rbp-2D8h]

  uu_head::uu_app(&v76);
  v58 = a1;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v47, &v58);
  if ( (_QWORD)v47 == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_ED3A0);
  v50 = *(_QWORD *)v48;
  v49 = v47;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v56, &v58);
  if ( (_QWORD)v56 == 0x8000000000000000LL )
  {
    v1 = _rust_alloc(24LL, 8LL);
    if ( !v1 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    *(_QWORD *)(v1 + 16) = v50;
    *(_OWORD *)v1 = v49;
    alloc::slice::hack::into_vec(&v51, v1, 1LL);
    *(_QWORD *)&v47 = v52;
    *(_QWORD *)v48 = v51;
    *((_QWORD *)&v47 + 1) = v52;
    *(_QWORD *)&v48[8] = v52 + 24LL * *((_QWORD *)&v52 + 1);
    v2 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v2 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v3 = v2;
    v4 = v47;
    v2[1] = *(_OWORD *)v48;
    *v2 = v4;
    if ( (_QWORD)v56 != 0x8000000000000000LL )
    {
      <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v56);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v56);
    }
    v5 = &off_ED500;
    goto LABEL_25;
  }
  v59 = v56;
  v60 = v57;
  std::sys::os_str::bytes::Slice::to_str(&v47, *((_QWORD *)&v56 + 1));
  if ( (_QWORD)v47 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, 21LL, 0LL);
    v6 = *((_QWORD *)&v47 + 1);
    if ( (_QWORD)v47 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v47 + 1), *(_QWORD *)v48);
    v7 = *(_QWORD *)v48;
    **(_OWORD **)v48 = unk_11056;
    *(_QWORD *)(v7 + 13) = 0x676E69646F636E65LL;
    *(_DWORD *)&v48[8] = 1;
    *(_QWORD *)&v47 = v6;
    *((_QWORD *)&v47 + 1) = v7;
    *(_QWORD *)v48 = 21LL;
    v8 = _rust_alloc(32LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v3 = (_OWORD *)v8;
    v9 = v47;
    v10 = *(_OWORD *)v48;
LABEL_12:
    v3[1] = v10;
    *v3 = v9;
    v11 = 1;
    v12 = 1LL;
    v5 = &off_ED470;
    goto LABEL_13;
  }
  v17 = *((_QWORD *)&v47 + 1);
  v18 = *(_QWORD *)v48;
  uu_head::parse::parse_obsolete(&v51, *((_QWORD *)&v47 + 1), *(_QWORD *)v48);
  if ( !v51 )
  {
    v29 = _rust_alloc(48LL, 8LL);
    if ( !v29 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    *(_QWORD *)(v29 + 16) = v50;
    *(_OWORD *)v29 = v49;
    *(_OWORD *)(v29 + 24) = v59;
    *(_QWORD *)(v29 + 40) = v60;
    alloc::slice::hack::into_vec(&v47, v29, 2LL);
    *(_QWORD *)&v30 = v47;
    *((_QWORD *)&v30 + 1) = *((_QWORD *)&v47 + 1) + 24LL * *(_QWORD *)v48;
    *(_QWORD *)&v47 = *((_QWORD *)&v47 + 1);
    *(_OWORD *)v48 = v30;
    *(_OWORD *)&v48[16] = v58;
    v31 = (_OWORD *)_rust_alloc(48LL, 8LL);
    if ( !v31 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v3 = v31;
    v32 = v47;
    v33 = *(_OWORD *)v48;
    v31[2] = *(_OWORD *)&v48[16];
    v31[1] = v33;
    *v31 = v32;
    v5 = &off_ED3B8;
    goto LABEL_25;
  }
  if ( !(_QWORD)v52 )
  {
    if ( BYTE8(v52) )
    {
      *(_QWORD *)&v54 = 0LL;
      *((_QWORD *)&v54 + 1) = v17;
      *(_QWORD *)&v55 = v18;
      BYTE8(v55) = 1;
      v61 = &v54;
      v62 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v47 = &off_ED4E0;
      *((_QWORD *)&v47 + 1) = 2LL;
      *(_QWORD *)&v48[16] = 0LL;
      *(_QWORD *)v48 = &v61;
      *(_QWORD *)&v48[8] = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
        &v74,
        &v47,
        v19,
        v20,
        v21,
        v22);
      *(_DWORD *)&v48[8] = 1;
      v47 = v74;
      *(_QWORD *)v48 = v75;
      v46 = _rust_alloc(32LL, 8LL);
      if ( !v46 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
    }
    else
    {
      *(_QWORD *)&v54 = 0LL;
      *((_QWORD *)&v54 + 1) = v17;
      *(_QWORD *)&v55 = v18;
      BYTE8(v55) = 1;
      v61 = &v54;
      v62 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v47 = &off_ED428;
      *((_QWORD *)&v47 + 1) = 1LL;
      *(_QWORD *)&v48[16] = 0LL;
      *(_QWORD *)v48 = &v61;
      *(_QWORD *)&v48[8] = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *))alloc::fmt::format::format_inner)(&v72, &v47);
      *(_DWORD *)&v48[8] = 1;
      v47 = v72;
      *(_QWORD *)v48 = v73;
      v46 = _rust_alloc(32LL, 8LL);
      if ( !v46 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
    }
    v3 = (_OWORD *)v46;
    v9 = v47;
    v10 = *(_OWORD *)v48;
    goto LABEL_12;
  }
  v55 = v53;
  v54 = v52;
  v23 = _rust_alloc(24LL, 8LL);
  if ( !v23 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  *(_QWORD *)(v23 + 16) = v50;
  *(_OWORD *)v23 = v49;
  alloc::slice::hack::into_vec(&v47, v23, 1LL);
  *(_QWORD *)&v24 = v47;
  *((_QWORD *)&v24 + 1) = *((_QWORD *)&v47 + 1) + 24LL * *(_QWORD *)v48;
  *(_OWORD *)&v48[24] = v54;
  *(_OWORD *)&v48[40] = v55;
  *(_QWORD *)&v47 = 1LL;
  *(_QWORD *)v48 = *((_QWORD *)&v47 + 1);
  *(_OWORD *)&v48[8] = v24;
  *(_OWORD *)&v48[56] = v58;
  v25 = _rust_alloc(88LL, 8LL);
  if ( !v25 )
    alloc::alloc::handle_alloc_error(8LL, 88LL);
  v3 = (_OWORD *)v25;
  *(_QWORD *)(v25 + 80) = *(_QWORD *)&v48[64];
  *(_OWORD *)(v25 + 64) = *(_OWORD *)&v48[48];
  v26 = v47;
  v27 = *(_OWORD *)v48;
  v28 = *(_OWORD *)&v48[16];
  *(_OWORD *)(v25 + 48) = *(_OWORD *)&v48[32];
  *(_OWORD *)(v25 + 32) = v28;
  *(_OWORD *)(v25 + 16) = v27;
  *(_OWORD *)v25 = v26;
  v5 = &off_ED3F0;
  v12 = 0LL;
  v11 = 0;
LABEL_13:
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v59);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v59);
  if ( v11 )
  {
    <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v49);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v49);
  }
  if ( v12 )
  {
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v76);
    goto LABEL_31;
  }
LABEL_25:
  clap_builder::builder::command::Command::try_get_matches_from(&v63, &v76, v3, v5);
  if ( (_QWORD)v63 == 0x8000000000000000LL )
  {
    v3 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v63 + 1));
    v5 = v13;
    if ( !v3 )
      return (unsigned int)uucore::mods::error::get_exit_code();
  }
  else
  {
    v68 = v66;
    v67[2] = v65;
    v67[1] = v64;
    v67[0] = v63;
    uu_head::HeadOptions::get_from(&v76, v67);
    if ( v76.m256i_i32[0] == 4 )
    {
      *(_QWORD *)&v64 = v76.m256i_i64[3];
      v63 = *(_OWORD *)&v76.m256i_u64[1];
      DWORD2(v64) = 1;
      v34 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v34 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v3 = v34;
      v35 = v63;
      v34[1] = v64;
      *v34 = v35;
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v67);
      v5 = &off_ED470;
    }
    else
    {
      *(_OWORD *)&v48[16] = v77;
      *(_OWORD *)v48 = *(_OWORD *)&v76.m256i_u64[2];
      v47 = *(_OWORD *)v76.m256i_i8;
      v3 = (_OWORD *)((__int64 (__fastcall *)(__int128 *))uu_head::uu_head)(&v47);
      v5 = v44;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v48);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v48);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v67);
      if ( !v3 )
        return (unsigned int)uucore::mods::error::get_exit_code();
    }
  }
LABEL_31:
  v51 = v3;
  *(_QWORD *)&v52 = v5;
  v76.m256i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  v76.m256i_i64[1] = 1LL;
  *(_QWORD *)&v77 = 0LL;
  v76.m256i_i64[2] = (__int64)&v47;
  v76.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(
    &v69,
    &v76,
    v13,
    v14,
    v15,
    v16,
    &v51,
    <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt,
    *(_QWORD *)v48,
    *(_QWORD *)&v48[8],
    *(_QWORD *)&v48[16]);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v70,
                           v71,
                           1LL,
                           0LL,
                           v36,
                           v37,
                           v69,
                           v70,
                           v71) )
  {
    *(_QWORD *)&v38 = uucore::util_name();
    v63 = v38;
    *(_QWORD *)&v67[0] = &v63;
    *((_QWORD *)&v67[0] + 1) = <&T as core::fmt::Display>::fmt;
    v76.m256i_i64[0] = (__int64)&unk_ED538;
    v76.m256i_i64[1] = 2LL;
    *(_QWORD *)&v77 = 0LL;
    v76.m256i_i64[2] = (__int64)v67;
    v76.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v76);
    *(_QWORD *)&v63 = &v47;
    *((_QWORD *)&v63 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v76.m256i_i64[0] = (__int64)&unk_ED558;
    v76.m256i_i64[1] = 2LL;
    *(_QWORD *)&v77 = 0LL;
    v76.m256i_i64[2] = (__int64)&v63;
    v76.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v76);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_OWORD *))(v52 + 104))(v51) )
  {
    *(_QWORD *)&v39 = uucore::execution_phrase();
    v63 = v39;
    *(_QWORD *)&v67[0] = &v63;
    *((_QWORD *)&v67[0] + 1) = <&T as core::fmt::Display>::fmt;
    v76.m256i_i64[0] = (__int64)&off_ED578;
    v76.m256i_i64[1] = 2LL;
    *(_QWORD *)&v77 = 0LL;
    v76.m256i_i64[2] = (__int64)v67;
    v76.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v76);
  }
  v40 = (*(__int64 (__fastcall **)(_OWORD *))(v52 + 96))(v51);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v47);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
  v41 = v51;
  v42 = v52;
  if ( *(_QWORD *)v52 )
    (*(void (__fastcall **)(_OWORD *))v52)(v51);
  v43 = *(_QWORD *)(v42 + 8);
  if ( v43 )
    _rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16));
  return v40;
}
