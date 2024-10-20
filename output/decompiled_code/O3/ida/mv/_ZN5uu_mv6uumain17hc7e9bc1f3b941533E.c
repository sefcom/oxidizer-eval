__int64 __fastcall uu_mv::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r15
  __int64 v5; // r15
  const char *v6; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  char v12; // bp
  char v13; // r14
  unsigned __int8 updated; // r15
  __int64 v15; // rdi
  _WORD *v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  __int64 (__fastcall *v19)(); // rdx
  __int64 (__fastcall *v20)(); // rdx
  unsigned int v21; // ebx
  __int128 v22; // kr00_16
  __int64 v23; // rsi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  char v30; // r12
  char v31; // r13
  char v32; // r15
  char v33; // al
  __int64 (__fastcall **v34)(); // rdx
  __int64 v35; // rax
  char flag; // [rsp+Eh] [rbp-4AAh]
  unsigned __int8 v37; // [rsp+Fh] [rbp-4A9h]
  __int128 v38; // [rsp+10h] [rbp-4A8h] BYREF
  __m256i v39; // [rsp+20h] [rbp-498h]
  __int64 v40; // [rsp+40h] [rbp-478h]
  char v41; // [rsp+48h] [rbp-470h]
  _BYTE v42[24]; // [rsp+60h] [rbp-458h] BYREF
  __int128 v43; // [rsp+80h] [rbp-438h] BYREF
  __m256i v44; // [rsp+90h] [rbp-428h]
  __int64 v45; // [rsp+B0h] [rbp-408h]
  _BYTE v46[8]; // [rsp+B8h] [rbp-400h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-3F8h]
  __int64 v48; // [rsp+C8h] [rbp-3F0h]
  __m256i v49; // [rsp+D0h] [rbp-3E8h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-3C8h]
  __int64 v51; // [rsp+100h] [rbp-3B8h]
  _BYTE v52[24]; // [rsp+110h] [rbp-3A8h] BYREF
  char v53; // [rsp+128h] [rbp-390h]
  void (__fastcall __noreturn *v54)(); // [rsp+138h] [rbp-380h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+140h] [rbp-378h]
  __int128 v56; // [rsp+148h] [rbp-370h]
  __int128 v57; // [rsp+158h] [rbp-360h]
  const char *v58; // [rsp+168h] [rbp-350h]
  __int64 v59; // [rsp+170h] [rbp-348h]
  __int128 v60; // [rsp+178h] [rbp-340h] BYREF
  __int64 v61; // [rsp+188h] [rbp-330h]
  __int128 v62; // [rsp+190h] [rbp-328h] BYREF
  __int64 v63; // [rsp+1A0h] [rbp-318h]
  __int128 v64; // [rsp+1A8h] [rbp-310h] BYREF
  __int64 v65; // [rsp+1B8h] [rbp-300h]
  const char *v66; // [rsp+1C0h] [rbp-2F8h] BYREF
  __int64 v67; // [rsp+1C8h] [rbp-2F0h]
  __m256i *v68; // [rsp+1D0h] [rbp-2E8h]
  __int64 v69; // [rsp+1D8h] [rbp-2E0h]
  __int64 v70; // [rsp+1E0h] [rbp-2D8h]

  uu_mv::uu_app(&v66);
  clap_builder::builder::command::Command::try_get_matches_from_mut(&v38, &v66, a1, a2);
  if ( (_QWORD)v38 == 0x8000000000000000LL )
  {
    v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v38 + 1));
    v4 = v3;
    goto LABEL_17;
  }
  v45 = v40;
  v44 = v39;
  v43 = v38;
  v5 = (__int64)*(&uu_mv::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v38, &v43, aFiles, v5);
  v6 = aFiles;
  clap_builder::parser::error::MatchesError::unwrap(&v54, aFiles, v5, &v38);
  v7 = v54;
  if ( v54 )
  {
    v8 = (const char *)v55;
    v9 = v56;
    v10 = v57;
    v6 = v58;
    v11 = v59;
  }
  else
  {
    v10 = 0LL;
    v9 = (unsigned __int64)"&";
    v8 = "&";
    v7 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  v54 = v7;
  v55 = (__int64 (__fastcall *)())v8;
  v56 = v9;
  v57 = v10;
  v58 = v6;
  v59 = v11;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v46, &v54);
  if ( v48 == 1
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           &v43,
                           aTargetDirector,
                           *(&uu_mv::OPT_TARGET_DIRECTORY + 1)) )
  {
    *(_QWORD *)v52 = &uu_mv::ARG_FILES;
    *(_QWORD *)&v52[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v38 = &off_12D6F8;
    *((_QWORD *)&v38 + 1) = 2LL;
    v39.m256i_i64[0] = (__int64)v52;
    *(_OWORD *)&v39.m256i_u64[1] = 1uLL;
    alloc::fmt::format::format_inner(&v49, &v38);
    v35 = clap_builder::error::Error<F>::raw(6LL, &v49);
    *(_QWORD *)&v38 = clap_builder::error::Error<F>::format(v35, &v66);
    clap_builder::error::Error<F>::exit(&v38);
  }
  v12 = uu_mv::determine_overwrite_mode(&v43);
  uucore::features::backup_control::determine_backup_mode(&v38, &v43);
  v2 = v38;
  if ( (_QWORD)v38 )
  {
    v4 = (__int64 (__fastcall **)())*((_QWORD *)&v38 + 1);
LABEL_16:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v46);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v46);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
    goto LABEL_17;
  }
  v13 = BYTE8(v38);
  updated = uucore::features::update_control::determine_update_mode(&v43);
  if ( v13 && (!v12 || (updated | 2) == 3) )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v38, 66LL, 0LL);
    v15 = *((_QWORD *)&v38 + 1);
    if ( (_QWORD)v38 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v38 + 1), v39.m256i_i64[0]);
    v16 = (_WORD *)v39.m256i_i64[0];
    *(_OWORD *)(v39.m256i_i64[0] + 48) = xmmword_1736E;
    qmemcpy(v16, "cannot combine --backup with -n/--no-clobber or ", 48);
    v16[32] = 27753;
    v39.m256i_i32[2] = 1;
    *(_QWORD *)&v38 = v15;
    *((_QWORD *)&v38 + 1) = v16;
    v39.m256i_i64[0] = 66LL;
    v17 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v2 = (__int64)v17;
    v18 = v38;
    v17[1] = *(_OWORD *)v39.m256i_i8;
    *v17 = v18;
    v4 = &off_12D750;
    goto LABEL_16;
  }
  uucore::features::backup_control::determine_backup_suffix(&v60, &v43);
  v37 = updated;
  v25 = (__int64)*(&uu_mv::OPT_TARGET_DIRECTORY + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v38, &v43, aTargetDirector, v25);
  v26 = clap_builder::parser::error::MatchesError::unwrap(aTargetDirector, v25, &v38);
  if ( v26 )
  {
    <std::ffi::os_str::OsString as core::convert::From<&T>>::from(&v38, v26);
    *(_QWORD *)&v42[16] = v39.m256i_i64[0];
    *(_OWORD *)v42 = v38;
    if ( (_QWORD)v38 != 0x8000000000000000LL
      && !(unsigned __int8)std::path::Path::is_dir(*(_QWORD *)&v42[8], *(_QWORD *)&v42[16]) )
    {
      *(_QWORD *)v52 = 1LL;
      *(_OWORD *)&v52[8] = *(_OWORD *)&v42[8];
      v53 = 1;
      *(_QWORD *)&v62 = 0LL;
      *((_QWORD *)&v62 + 1) = 1LL;
      v63 = 0LL;
      v40 = 32LL;
      v41 = 3;
      *(_QWORD *)&v38 = 0LL;
      v39.m256i_i64[0] = 0LL;
      v39.m256i_i64[2] = (__int64)&v62;
      v39.m256i_i64[3] = (__int64)&off_12D5F0;
      if ( (unsigned __int8)<os_display::Quoted as core::fmt::Display>::fmt(v52, &v38) )
        core::result::unwrap_failed(aADisplayImplem, 55LL, &v49, &unk_12D638, &off_12D620);
      *(_OWORD *)&v49.m256i_u64[1] = v62;
      v49.m256i_i64[3] = v63;
      v49.m256i_i64[0] = 8LL;
      v27 = _rust_alloc(56LL, 8LL);
      if ( !v27 )
        alloc::alloc::handle_alloc_error(8LL, 56LL);
      v2 = v27;
      *(_QWORD *)(v27 + 48) = v51;
      v28 = *(_OWORD *)v49.m256i_i8;
      v29 = *(_OWORD *)&v49.m256i_u64[2];
      *(_OWORD *)(v27 + 32) = v50;
      *(_OWORD *)(v27 + 16) = v29;
      *(_OWORD *)v27 = v28;
      if ( *(_QWORD *)v42 != 0x8000000000000000LL )
      {
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v42);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v42);
      }
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v60);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v60);
      v4 = &off_12D7F8;
      goto LABEL_16;
    }
  }
  else
  {
    *(_QWORD *)v42 = 0x8000000000000000LL;
  }
  *(_QWORD *)&v52[16] = v61;
  *(_OWORD *)v52 = v60;
  v49.m256i_i64[2] = *(_QWORD *)&v42[16];
  *(_OWORD *)v49.m256i_i8 = *(_OWORD *)v42;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           &v43,
           aNoTargetDirect,
           *(&uu_mv::OPT_NO_TARGET_DIRECTORY + 1));
  v30 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           &v43,
                           aVerbose,
                           *(&uu_mv::OPT_VERBOSE + 1)) )
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aDebug, *(&uu_mv::OPT_DEBUG + 1));
  v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v43,
          aStripTrailingS,
          *(&uu_mv::OPT_STRIP_TRAILING_SLASHES + 1));
  v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aProgress, *(&uu_mv::OPT_PROGRESS + 1));
  v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v43, aDebug, *(&uu_mv::OPT_DEBUG + 1));
  BYTE5(v40) = v12;
  BYTE6(v40) = v13;
  v38 = *(_OWORD *)v52;
  v39.m256i_i64[0] = *(_QWORD *)&v52[16];
  HIBYTE(v40) = v37;
  *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)v49.m256i_i8;
  v39.m256i_i64[3] = v49.m256i_i64[2];
  LOBYTE(v40) = flag;
  BYTE1(v40) = v30;
  BYTE2(v40) = v31;
  BYTE3(v40) = v32;
  BYTE4(v40) = v33;
  v2 = uu_mv::mv(v47, v48, &v38);
  v4 = v34;
  core::ptr::drop_in_place<uu_mv::Options>(&v38);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v46);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v46);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
LABEL_17:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v66);
  if ( v2 )
  {
    *(_QWORD *)&v43 = v2;
    *((_QWORD *)&v43 + 1) = v4;
    *(_QWORD *)&v38 = &v43;
    *((_QWORD *)&v38 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v66 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
    v67 = 1LL;
    v70 = 0LL;
    v68 = (__m256i *)&v38;
    v69 = 1LL;
    alloc::fmt::format::format_inner(&v64, &v66);
    v38 = v64;
    v39.m256i_i64[0] = v65;
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v64 + 1), v65, 1LL, 0LL) )
    {
      v54 = (void (__fastcall __noreturn *)())uucore::util_name();
      v55 = v19;
      v49.m256i_i64[0] = (__int64)&v54;
      v49.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v66 = (const char *)&unk_12D698;
      v67 = 2LL;
      v70 = 0LL;
      v68 = &v49;
      v69 = 1LL;
      std::io::stdio::_eprint(&v66);
      v54 = (void (__fastcall __noreturn *)())&v38;
      v55 = <alloc::string::String as core::fmt::Display>::fmt;
      v66 = (const char *)&unk_12D6B8;
      v67 = 2LL;
      v70 = 0LL;
      v68 = (__m256i *)&v54;
      v69 = 1LL;
      std::io::stdio::_eprint(&v66);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v43 + 1) + 104LL))(v43) )
    {
      v54 = (void (__fastcall __noreturn *)())uucore::execution_phrase();
      v55 = v20;
      v49.m256i_i64[0] = (__int64)&v54;
      v49.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v66 = (const char *)&off_12D6D8;
      v67 = 2LL;
      v70 = 0LL;
      v68 = &v49;
      v69 = 1LL;
      std::io::stdio::_eprint(&v66);
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v43 + 1) + 96LL))(v43);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v38);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v38);
    v22 = v43;
    if ( **((_QWORD **)&v43 + 1) )
      (**((void (__fastcall ***)(_QWORD))&v43 + 1))(v43);
    v23 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 8LL);
    if ( v23 )
      _rust_dealloc(v22, v23, *(_QWORD *)(*((_QWORD *)&v22 + 1) + 16LL));
  }
  else
  {
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  return v21;
}
