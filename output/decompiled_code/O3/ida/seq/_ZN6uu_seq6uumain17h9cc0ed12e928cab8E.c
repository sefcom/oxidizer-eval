__int64 __fastcall uu_seq::uumain(__int64 a1, __int64 a2)
{
  _OWORD *v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  __int128 v5; // rax
  __int128 v6; // rax
  unsigned int v7; // ebx
  __int128 v8; // kr00_16
  __int64 v9; // rsi
  __int64 v10; // rax
  const char *v11; // r15
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  size_t v14; // r12
  const char *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rax
  const char *v19; // rcx
  size_t v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  char flag; // bp
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // bl
  _OWORD *v27; // rax
  __int128 v28; // xmm0
  char v29; // bp
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  unsigned __int64 v37; // r14
  char v38; // bp
  __int64 v39; // rax
  unsigned __int64 v41; // r15
  int v42; // r14d
  unsigned __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // r14
  char **v47; // rdx
  _BYTE v48[8]; // [rsp+8h] [rbp-560h] BYREF
  _QWORD *v49; // [rsp+10h] [rbp-558h]
  unsigned __int64 v50; // [rsp+18h] [rbp-550h]
  _BYTE v51[56]; // [rsp+20h] [rbp-548h] BYREF
  __int128 v52; // [rsp+58h] [rbp-510h]
  __int128 v53; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v54; // [rsp+80h] [rbp-4E8h]
  __int128 v55; // [rsp+90h] [rbp-4D8h]
  __int64 v56; // [rsp+A0h] [rbp-4C8h]
  __int128 v57; // [rsp+B0h] [rbp-4B8h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-4A8h]
  __int128 v59; // [rsp+C8h] [rbp-4A0h]
  __int64 v60; // [rsp+D8h] [rbp-490h]
  __int64 v61; // [rsp+E0h] [rbp-488h]
  __int64 v62; // [rsp+E8h] [rbp-480h]
  char v63; // [rsp+F0h] [rbp-478h]
  __int128 v64; // [rsp+100h] [rbp-468h] BYREF
  __int128 v65; // [rsp+110h] [rbp-458h]
  __int128 v66; // [rsp+120h] [rbp-448h]
  unsigned __int64 v67; // [rsp+130h] [rbp-438h]
  __int128 v68; // [rsp+140h] [rbp-428h] BYREF
  __int128 v69; // [rsp+150h] [rbp-418h]
  __int128 v70; // [rsp+160h] [rbp-408h] BYREF
  __int128 v71; // [rsp+170h] [rbp-3F8h]
  __int128 v72; // [rsp+180h] [rbp-3E8h]
  unsigned __int64 v73; // [rsp+190h] [rbp-3D8h]
  _OWORD v74[4]; // [rsp+198h] [rbp-3D0h] BYREF
  _OWORD v75[3]; // [rsp+1D8h] [rbp-390h] BYREF
  __int64 v76; // [rsp+208h] [rbp-360h]
  _OWORD v77[4]; // [rsp+210h] [rbp-358h] BYREF
  _BYTE v78[56]; // [rsp+250h] [rbp-318h] BYREF
  __int128 v79; // [rsp+288h] [rbp-2E0h]
  __int64 v80; // [rsp+298h] [rbp-2D0h]
  __int128 v81; // [rsp+2A0h] [rbp-2C8h]
  __int128 v82; // [rsp+2B0h] [rbp-2B8h]
  __int64 v83; // [rsp+2C0h] [rbp-2A8h]
  __int128 v84; // [rsp+520h] [rbp-48h] BYREF
  __int64 v85; // [rsp+530h] [rbp-38h]

  uu_seq::uu_app(v78);
  clap_builder::builder::command::Command::try_get_matches_from(v51, v78, a1, a2);
  if ( *(_QWORD *)v51 != 0x8000000000000000LL )
  {
    v76 = *(_QWORD *)&v51[48];
    v75[2] = *(_OWORD *)&v51[32];
    v75[1] = *(_OWORD *)&v51[16];
    v75[0] = *(_OWORD *)v51;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v78, v75, aNumbers, 7LL);
    clap_builder::parser::error::MatchesError::unwrap(v74, aNumbers, 7LL, v78);
    if ( !*(_QWORD *)&v74[0] )
    {
      *(_QWORD *)v78 = 0x8000000000000001LL;
      v12 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = v12;
      v13 = *(_OWORD *)v78;
      v12[1] = *(_OWORD *)&v78[16];
      *v12 = v13;
      v4 = &off_104630;
LABEL_62:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v75);
      if ( v2 )
        goto LABEL_3;
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v77[0] = v74[0];
    v77[1] = v74[1];
    v77[2] = v74[2];
    v77[3] = v74[3];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v48, v77);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v78, v75, aSeparator, 9LL);
    v10 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, 9LL, v78);
    if ( v10 )
    {
      v11 = *(const char **)(v10 + 8);
      v10 = *(_QWORD *)(v10 + 16);
    }
    else
    {
      v11 = 0LL;
    }
    v14 = 1LL;
    if ( v11 )
      v14 = v10;
    v15 = asc_131C2;
    if ( !v11 )
      v11 = asc_131C2;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v78, v14, 0LL);
    v16 = *(_QWORD *)&v78[8];
    if ( *(_QWORD *)v78 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
    v17 = *(_QWORD *)&v78[16];
    memcpy(*(void **)&v78[16], v11, v14);
    *(_QWORD *)&v53 = v16;
    *((_QWORD *)&v53 + 1) = v17;
    *(_QWORD *)&v54 = v14;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v78, v75, aTerminator, 10LL);
    v18 = clap_builder::parser::error::MatchesError::unwrap(aTerminator, 10LL, v78);
    if ( v18 )
    {
      v19 = *(const char **)(v18 + 8);
      v18 = *(_QWORD *)(v18 + 16);
    }
    else
    {
      v19 = 0LL;
    }
    v20 = 1LL;
    if ( v19 )
    {
      v20 = v18;
      v15 = v19;
    }
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v78, v20, 0LL);
    v21 = *(_QWORD *)&v78[8];
    if ( *(_QWORD *)v78 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
    v22 = *(_QWORD *)&v78[16];
    memcpy(*(void **)&v78[16], v15, v20);
    *(_QWORD *)v51 = v21;
    *(_QWORD *)&v51[8] = v22;
    *(_QWORD *)&v51[16] = v20;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v75, aEqualWidth, 11LL);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v78, v75, aFormat_0, 6LL);
    v24 = clap_builder::parser::error::MatchesError::unwrap(aFormat_0, 6LL, v78);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      v24 = *(_QWORD *)(v24 + 16);
    }
    else
    {
      v25 = 0LL;
    }
    v58 = v54;
    v57 = v53;
    v59 = *(_OWORD *)v51;
    v60 = *(_QWORD *)&v51[16];
    v63 = flag;
    v61 = v25;
    v62 = v24;
    if ( v50 <= 1 )
    {
      uu_seq::number::PreciseNumber::one(&v70);
      if ( v50 <= 2 )
      {
LABEL_42:
        uu_seq::number::PreciseNumber::one(&v64);
        goto LABEL_44;
      }
    }
    else
    {
      uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
        v78,
        *(_QWORD *)(*v49 + 8LL),
        *(_QWORD *)(*v49 + 16LL));
      if ( *(_QWORD *)v78 == 0x8000000000000004LL )
      {
        if ( !v50 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_104838);
        v26 = v78[8];
        <alloc::string::String as core::clone::Clone>::clone(&v53, *v49);
        *(_QWORD *)&v51[16] = v54;
        *(_OWORD *)v51 = v53;
        v51[24] = v26;
        v27 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v27 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = v27;
        v28 = *(_OWORD *)v51;
        v27[1] = *(_OWORD *)&v51[16];
        *v27 = v28;
        v4 = &off_104630;
LABEL_61:
        core::ptr::drop_in_place<uu_seq::SeqOptions>(&v57);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v48);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v48);
        goto LABEL_62;
      }
      v73 = *(_QWORD *)&v78[48];
      v72 = *(_OWORD *)&v78[32];
      v71 = *(_OWORD *)&v78[16];
      v70 = *(_OWORD *)v78;
      if ( v50 <= 2 )
        goto LABEL_42;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v78,
      *(_QWORD *)(v49[1] + 8LL),
      *(_QWORD *)(v49[1] + 16LL));
    if ( *(_QWORD *)v78 == 0x8000000000000004LL )
    {
      if ( v50 <= 1 )
        core::panicking::panic_bounds_check(1LL, v50, &off_104820);
      v29 = v78[8];
      <alloc::string::String as core::clone::Clone>::clone(&v53, v49[1]);
      *(_QWORD *)&v51[16] = v54;
      *(_OWORD *)v51 = v53;
      v51[24] = v29;
      v30 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v30 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = v30;
      v31 = *(_OWORD *)v51;
      v30[1] = *(_OWORD *)&v51[16];
      *v30 = v31;
      v4 = &off_104630;
      goto LABEL_59;
    }
    v67 = *(_QWORD *)&v78[48];
    v66 = *(_OWORD *)&v78[32];
    v65 = *(_OWORD *)&v78[16];
    v64 = *(_OWORD *)v78;
LABEL_44:
    v32 = 0LL;
    if ( (__int64)v64 < (__int64)0x8000000000000004LL )
      v32 = v64 - 0x7FFFFFFFFFFFFFFFLL;
    if ( v32 )
    {
      if ( v32 == 3 )
      {
LABEL_48:
        v33 = v50;
        if ( v50 >= 2 )
        {
          <alloc::string::String as core::clone::Clone>::clone(v51, v49[1]);
          *(_QWORD *)&v78[24] = *(_QWORD *)&v51[16];
          *(_OWORD *)&v78[8] = *(_OWORD *)v51;
          *(_QWORD *)v78 = 0x8000000000000000LL;
          v34 = _rust_alloc(32LL, 8LL);
          if ( !v34 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v2 = (_OWORD *)v34;
          v35 = *(_OWORD *)v78;
          v36 = *(_OWORD *)&v78[16];
          goto LABEL_57;
        }
        v47 = &off_1045E0;
        v37 = 1LL;
        goto LABEL_95;
      }
    }
    else if ( BYTE8(v65) == 1 )
    {
      goto LABEL_48;
    }
    v37 = v50 - 1;
    if ( !v50 )
    {
      v33 = 0LL;
      v47 = &off_1046A0;
      v37 = -1LL;
      goto LABEL_95;
    }
    uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
      v78,
      *(_QWORD *)(v49[v37] + 8LL),
      *(_QWORD *)(v49[v37] + 16LL));
    if ( *(_QWORD *)v78 == 0x8000000000000004LL )
    {
      v33 = v50;
      if ( v37 < v50 )
      {
        v38 = v78[8];
        <alloc::string::String as core::clone::Clone>::clone(&v68, v49[v37]);
        *(_QWORD *)&v51[16] = v69;
        *(_OWORD *)v51 = v68;
        v51[24] = v38;
        v39 = _rust_alloc(32LL, 8LL);
        if ( !v39 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v2 = (_OWORD *)v39;
        v35 = *(_OWORD *)v51;
        v36 = *(_OWORD *)&v51[16];
LABEL_57:
        v2[1] = v36;
        *v2 = v35;
        v4 = &off_104630;
        if ( (__int64)v64 <= (__int64)0x8000000000000003LL )
          goto LABEL_59;
        goto LABEL_58;
      }
      v47 = &off_104808;
LABEL_95:
      core::panicking::panic_bounds_check(v37, v33, v47);
    }
    v56 = *(_QWORD *)&v78[48];
    v55 = *(_OWORD *)&v78[32];
    v54 = *(_OWORD *)&v78[16];
    v53 = *(_OWORD *)v78;
    v41 = *((_QWORD *)&v66 + 1);
    v42 = v67;
    if ( *((_QWORD *)&v72 + 1) > *((_QWORD *)&v66 + 1) )
      v41 = *((_QWORD *)&v72 + 1);
    if ( v41 <= *((_QWORD *)&v55 + 1) )
      v41 = *((_QWORD *)&v55 + 1);
    if ( v73 > v67 )
      v42 = v73;
    if ( v61 )
    {
      uucore::features::format::Format<F>::parse(v78, v61, v62, v73);
      v43 = *(_QWORD *)v78;
      v68 = *(_OWORD *)&v78[8];
      v69 = *(_OWORD *)&v78[24];
      if ( *(_QWORD *)v78 == 0x8000000000000000LL )
      {
        *(_OWORD *)&v78[16] = v69;
        *(_OWORD *)v78 = v68;
        v2 = (_OWORD *)alloc::alloc::exchange_malloc();
        v44 = *(_OWORD *)v78;
        v2[1] = *(_OWORD *)&v78[16];
        *v2 = v44;
        core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&v53);
        v4 = &off_104798;
        if ( (__int64)v64 <= (__int64)0x8000000000000003LL )
        {
LABEL_59:
          if ( (__int64)v70 > (__int64)0x8000000000000003LL )
          {
            <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v70);
            <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v70);
          }
          goto LABEL_61;
        }
LABEL_58:
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v64);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v64);
        goto LABEL_59;
      }
      v52 = v79;
      *(_OWORD *)&v51[40] = *(_OWORD *)&v78[40];
      *(_OWORD *)&v51[8] = v68;
      *(_OWORD *)&v51[24] = v69;
    }
    else
    {
      v43 = 0x8000000000000000LL;
    }
    *(_QWORD *)v51 = v43;
    *(_QWORD *)&v78[32] = v72;
    *(_OWORD *)&v78[16] = v71;
    *(_OWORD *)v78 = v70;
    *(_OWORD *)&v78[40] = v64;
    v79 = v65;
    v80 = v66;
    v81 = v53;
    v82 = v54;
    v83 = v55;
    v45 = uu_seq::print_seq((unsigned int)v78, v42, DWORD2(v57), v58, DWORD2(v59), v60, v63, v41, (__int64)v51);
    v46 = v45;
    if ( v45 )
    {
      if ( (unsigned __int8)std::io::error::Error::kind(v45) != 11 )
      {
        v2 = (_OWORD *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v46);
LABEL_82:
        core::ptr::drop_in_place<core::option::Option<uucore::features::format::Format<uucore::features::format::num_format::Float>>>(v51);
        core::ptr::drop_in_place<uu_seq::SeqOptions>(&v57);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v48);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v48);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v75);
        v4 = &off_1046F0;
        if ( v2 )
          goto LABEL_3;
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
      core::ptr::drop_in_place<std::io::error::Error>(v46);
    }
    v2 = 0LL;
    goto LABEL_82;
  }
  v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v51[8]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  *(_QWORD *)&v74[0] = v2;
  *((_QWORD *)&v74[0] + 1) = v4;
  *(_QWORD *)v51 = v74;
  *(_QWORD *)&v51[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v78 = &anon_f941c7d894c550ecfedd045c68d8a012_33_llvm_4119223083302802398;
  *(_QWORD *)&v78[8] = 1LL;
  *(_QWORD *)&v78[32] = 0LL;
  *(_QWORD *)&v78[16] = v51;
  *(_QWORD *)&v78[24] = 1LL;
  alloc::fmt::format::format_inner(&v84, v78);
  *(_OWORD *)v51 = v84;
  *(_QWORD *)&v51[16] = v85;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v84 + 1), v85, 1LL, 0LL) )
  {
    *(_QWORD *)&v5 = uucore::util_name();
    v57 = v5;
    *(_QWORD *)&v77[0] = &v57;
    *((_QWORD *)&v77[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v78 = &unk_104580;
    *(_QWORD *)&v78[8] = 2LL;
    *(_QWORD *)&v78[32] = 0LL;
    *(_QWORD *)&v78[16] = v77;
    *(_QWORD *)&v78[24] = 1LL;
    std::io::stdio::_eprint(v78);
    *(_QWORD *)&v57 = v51;
    *((_QWORD *)&v57 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v78 = &unk_1045A0;
    *(_QWORD *)&v78[8] = 2LL;
    *(_QWORD *)&v78[32] = 0LL;
    *(_QWORD *)&v78[16] = &v57;
    *(_QWORD *)&v78[24] = 1LL;
    std::io::stdio::_eprint(v78);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v74[0] + 1) + 104LL))(*(_QWORD *)&v74[0]) )
  {
    *(_QWORD *)&v6 = uucore::execution_phrase();
    v57 = v6;
    *(_QWORD *)&v77[0] = &v57;
    *((_QWORD *)&v77[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v78 = &off_1045C0;
    *(_QWORD *)&v78[8] = 2LL;
    *(_QWORD *)&v78[32] = 0LL;
    *(_QWORD *)&v78[16] = v77;
    *(_QWORD *)&v78[24] = 1LL;
    std::io::stdio::_eprint(v78);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v74[0] + 1) + 96LL))(*(_QWORD *)&v74[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v51);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v51);
  v8 = v74[0];
  if ( **((_QWORD **)&v74[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v74[0] + 1))(*(_QWORD *)&v74[0]);
  v9 = *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL);
  if ( v9 )
    _rust_dealloc(v8, v9, *(_QWORD *)(*((_QWORD *)&v8 + 1) + 16LL));
  return v7;
}
