__int64 __fastcall uu_mktemp::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  char v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 (__fastcall **v14)(); // rdx
  __int64 (__fastcall **v15)(); // r15
  char v16; // r14
  char v17; // bp
  char v18; // bl
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // rax
  __int128 v23; // rax
  unsigned int v24; // ebx
  __int128 v25; // kr00_16
  __int64 v26; // rsi
  unsigned int v28; // eax
  __int64 v29; // r12
  __int64 (__fastcall **v30)(); // rdx
  __int64 (__fastcall **v31)(); // r13
  __int64 (__fastcall *v32)(); // rsi
  __int64 v33; // rax
  __int64 (__fastcall **v34)(); // rdx
  _OWORD *v35; // rax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  _OWORD *v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v42; // [rsp+8h] [rbp-4A0h]
  __int64 v43; // [rsp+10h] [rbp-498h]
  __int64 v44; // [rsp+18h] [rbp-490h] BYREF
  __int128 v45; // [rsp+20h] [rbp-488h]
  __int128 v46; // [rsp+30h] [rbp-478h] BYREF
  __int64 v47; // [rsp+40h] [rbp-468h]
  __int128 v48; // [rsp+50h] [rbp-458h] BYREF
  __int64 v49; // [rsp+60h] [rbp-448h]
  _OWORD v50[3]; // [rsp+70h] [rbp-438h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-408h]
  __int128 *v52; // [rsp+A8h] [rbp-400h]
  _BYTE v53[72]; // [rsp+B0h] [rbp-3F8h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-3B0h]
  __int128 v55; // [rsp+100h] [rbp-3A8h] BYREF
  __int128 v56; // [rsp+110h] [rbp-398h]
  __int128 v57; // [rsp+120h] [rbp-388h]
  __int128 v58; // [rsp+130h] [rbp-378h]
  __int128 v59; // [rsp+140h] [rbp-368h]
  __int128 v60; // [rsp+150h] [rbp-358h] BYREF
  __int128 v61; // [rsp+160h] [rbp-348h] BYREF
  __m256i v62; // [rsp+170h] [rbp-338h]
  __int128 v63; // [rsp+198h] [rbp-310h] BYREF
  __int64 v64; // [rsp+1A8h] [rbp-300h]
  __int128 v65; // [rsp+1B0h] [rbp-2F8h] BYREF
  __int128 v66; // [rsp+1C0h] [rbp-2E8h] BYREF
  __int128 v67; // [rsp+1D0h] [rbp-2D8h]
  __int128 v68; // [rsp+1E0h] [rbp-2C8h]
  __int128 v69; // [rsp+1F0h] [rbp-2B8h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v41, a1, a2);
  uu_mktemp::uu_app(&v65);
  clap_builder::builder::command::Command::try_get_matches_from(v53, &v65, &v41);
  if ( *(_QWORD *)v53 != 0x8000000000000000LL )
  {
    v51 = *(_QWORD *)&v53[48];
    v50[2] = *(_OWORD *)&v53[32];
    v50[1] = *(_OWORD *)&v53[16];
    v50[0] = *(_OWORD *)v53;
    uu_mktemp::Options::from(&v55, v50);
    std::env::var(&v65, aPosixlyCorrect, 15LL);
    if ( (_QWORD)v65 )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v65);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v65);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                              v50,
                              &unk_11E40,
                              *(&uu_mktemp::ARG_TEMPLATE + 1)) )
      {
        if ( !v43 )
          core::option::unwrap_failed(&off_ED7C0);
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 *(_QWORD *)(v42 + 24 * v43 - 16),
                                 *(_QWORD *)(v42 + 24 * v43 - 8),
                                 *((_QWORD *)&v55 + 1),
                                 v56) )
        {
          *((_QWORD *)&v66 + 1) = 0x8000000000000006LL;
          v35 = (_OWORD *)_rust_alloc(48LL, 8LL);
          if ( !v35 )
            alloc::alloc::handle_alloc_error(8LL, 48LL);
          v13 = (__int64)v35;
          v36 = v65;
          v37 = v66;
          v35[2] = v67;
          v35[1] = v37;
          *v35 = v36;
          core::ptr::drop_in_place<uu_mktemp::Options>(&v55);
          goto LABEL_21;
        }
      }
    }
    v16 = BYTE9(v59);
    v17 = BYTE10(v59);
    v18 = BYTE8(v59);
    v69 = v59;
    v68 = v58;
    v67 = v57;
    v66 = v56;
    v65 = v55;
    uu_mktemp::Params::from(v53, &v65);
    if ( *(_QWORD *)v53 == 0x8000000000000000LL )
    {
      *(_OWORD *)v62.m256i_i8 = *(_OWORD *)&v53[40];
      v61 = *(_OWORD *)&v53[24];
      v60 = *(_OWORD *)&v53[8];
      v67 = *(_OWORD *)&v53[40];
      v66 = *(_OWORD *)&v53[24];
      v65 = *(_OWORD *)&v53[8];
      v19 = (_OWORD *)_rust_alloc(48LL, 8LL);
      if ( !v19 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v13 = (__int64)v19;
      v20 = v65;
      v21 = v66;
      v19[2] = v67;
      v19[1] = v21;
      *v19 = v20;
LABEL_21:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v50);
      v15 = &off_ED810;
      goto LABEL_22;
    }
    v62 = *(__m256i *)&v53[40];
    v61 = *(_OWORD *)&v53[24];
    v60 = *(_OWORD *)&v53[8];
    v45 = *(_OWORD *)&v53[8];
    v47 = *(_QWORD *)&v53[40];
    v46 = *(_OWORD *)&v53[24];
    v49 = *(_QWORD *)&v53[64];
    v48 = *(_OWORD *)&v53[48];
    v44 = *(_QWORD *)v53;
    if ( v16 )
      uu_mktemp::dry_exec(
        v53,
        *(_QWORD *)&v53[8],
        *(_QWORD *)&v53[16],
        *(_QWORD *)&v53[32],
        *(_QWORD *)&v53[40],
        v54,
        v62.m256i_i64[2],
        *(_QWORD *)&v53[64]);
    else
      uu_mktemp::exec(
        (unsigned int)v53,
        *(_DWORD *)&v53[8],
        *(_DWORD *)&v53[16],
        *(_DWORD *)&v53[32],
        *(_DWORD *)&v53[40],
        v54,
        v62.m256i_i64[2],
        *(__int64 *)&v53[64],
        v18);
    v13 = *(_QWORD *)&v53[8];
    v15 = *(__int64 (__fastcall ***)())&v53[16];
    if ( v17 )
    {
      if ( *(_QWORD *)v53 == 0x8000000000000000LL )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&v53[16] + 96LL))(*(_QWORD *)&v53[8]);
        v29 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
        v31 = v30;
        if ( *v15 )
          ((void (__fastcall *)(__int64))*v15)(v13);
        v32 = v15[1];
        if ( v32 )
          _rust_dealloc(v13, v32, v15[2]);
        v13 = v29;
        v15 = v31;
        goto LABEL_45;
      }
    }
    else if ( *(_QWORD *)v53 == 0x8000000000000000LL )
    {
LABEL_45:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v50);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v41);
      goto LABEL_23;
    }
    v65 = *(_OWORD *)v53;
    *(_QWORD *)&v66 = *(_QWORD *)&v53[16];
    v33 = uucore::mods::display::println_verbatim(&v65);
    v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v33);
    v15 = v34;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v44);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v44);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v50);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v41);
    goto LABEL_23;
  }
  v2 = *(_QWORD *)&v53[8];
  if ( *(_BYTE *)(*(_QWORD *)&v53[8] + 213LL) != 5 )
    goto LABEL_12;
  v3 = *(_QWORD *)(*(_QWORD *)&v53[8] + 64LL);
  v4 = *(_QWORD *)(*(_QWORD *)&v53[8] + 40LL) + *(_QWORD *)(*(_QWORD *)&v53[8] + 48LL);
  v5 = v3 + 32LL * *(_QWORD *)(*(_QWORD *)&v53[8] + 72LL);
  *(_QWORD *)&v55 = *(_QWORD *)(*(_QWORD *)&v53[8] + 40LL);
  *((_QWORD *)&v55 + 1) = v4;
  *(_QWORD *)&v56 = v3;
  *((_QWORD *)&v56 + 1) = v5;
  v6 = (_BYTE *)<clap_builder::util::flat_map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v55);
  if ( !v6 )
  {
LABEL_12:
    v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    v15 = v14;
    goto LABEL_22;
  }
  v8 = v7;
  v52 = &v61;
  while ( 1 )
  {
    if ( *v6 == 1 )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v60, 10LL, 0LL);
      v9 = *((_QWORD *)&v60 + 1);
      if ( (_QWORD)v60 )
        goto LABEL_56;
      v10 = v61;
      *(_QWORD *)v61 = 0x74616C706D65745BLL;
      *(_WORD *)(v10 + 8) = 23909;
      *((_QWORD *)&v65 + 1) = v9;
      *(_QWORD *)&v66 = v10;
      *((_QWORD *)&v66 + 1) = 10LL;
      LOBYTE(v65) = 2;
      if ( *(_BYTE *)v8 != 2 )
      {
        core::ptr::drop_in_place<clap_builder::error::context::ContextValue>(&v65);
        goto LABEL_11;
      }
      v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), v10, 10LL);
      core::ptr::drop_in_place<clap_builder::error::context::ContextValue>(&v65);
      if ( v11 )
        break;
    }
LABEL_11:
    v6 = (_BYTE *)<clap_builder::util::flat_map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v55);
    v8 = v12;
    if ( !v6 )
      goto LABEL_12;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v65, 18LL, 0LL);
  v9 = *((_QWORD *)&v65 + 1);
  if ( (_QWORD)v65 )
  {
    v52 = &v66;
LABEL_56:
    alloc::raw_vec::handle_error(v9, *(_QWORD *)v52);
  }
  v38 = v66;
  *(_OWORD *)v66 = unk_12523;
  *(_WORD *)(v38 + 16) = 29541;
  DWORD2(v66) = 1;
  *(_QWORD *)&v65 = v9;
  *((_QWORD *)&v65 + 1) = v38;
  *(_QWORD *)&v66 = 18LL;
  v39 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v39 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v13 = (__int64)v39;
  v40 = v65;
  v39[1] = v66;
  *v39 = v40;
  core::ptr::drop_in_place<clap_builder::error::Error>(v2);
  v15 = &off_ED8B8;
LABEL_22:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v41);
LABEL_23:
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v41);
  if ( v13 )
  {
    *(_QWORD *)&v50[0] = v13;
    *((_QWORD *)&v50[0] + 1) = v15;
    *(_QWORD *)v53 = v50;
    *(_QWORD *)&v53[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    *(_QWORD *)&v65 = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    *((_QWORD *)&v65 + 1) = 1LL;
    *(_QWORD *)&v67 = 0LL;
    *(_QWORD *)&v66 = v53;
    *((_QWORD *)&v66 + 1) = 1LL;
    alloc::fmt::format::format_inner(&v63, &v65);
    *(_OWORD *)v53 = v63;
    *(_QWORD *)&v53[16] = v64;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v63 + 1), v64, 1LL, 0LL) )
    {
      *(_QWORD *)&v22 = uucore::util_name();
      v55 = v22;
      *(_QWORD *)&v60 = &v55;
      *((_QWORD *)&v60 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &unk_ED760;
      *((_QWORD *)&v65 + 1) = 2LL;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v66 = &v60;
      *((_QWORD *)&v66 + 1) = 1LL;
      std::io::stdio::_eprint(&v65);
      *(_QWORD *)&v55 = v53;
      *((_QWORD *)&v55 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &unk_ED780;
      *((_QWORD *)&v65 + 1) = 2LL;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v66 = &v55;
      *((_QWORD *)&v66 + 1) = 1LL;
      std::io::stdio::_eprint(&v65);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v50[0] + 1) + 104LL))(*(_QWORD *)&v50[0]) )
    {
      *(_QWORD *)&v23 = uucore::execution_phrase();
      v55 = v23;
      *(_QWORD *)&v60 = &v55;
      *((_QWORD *)&v60 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v65 = &off_ED7A0;
      *((_QWORD *)&v65 + 1) = 2LL;
      *(_QWORD *)&v67 = 0LL;
      *(_QWORD *)&v66 = &v60;
      *((_QWORD *)&v66 + 1) = 1LL;
      std::io::stdio::_eprint(&v65);
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v50[0] + 1) + 96LL))(*(_QWORD *)&v50[0]);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v53);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v53);
    v25 = v50[0];
    if ( **((_QWORD **)&v50[0] + 1) )
      (**((void (__fastcall ***)(_QWORD))&v50[0] + 1))(*(_QWORD *)&v50[0]);
    v26 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
    if ( v26 )
      _rust_dealloc(v25, v26, *(_QWORD *)(*((_QWORD *)&v25 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v24;
}
