__int64 __fastcall uu_tac::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rbx
  size_t v9; // r15
  _OWORD *v10; // r14
  size_t v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r15
  __int128 v15; // rax
  __int128 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rsi
  unsigned __int8 flag; // bp
  unsigned __int8 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  char *v26; // r12
  __int64 v27; // r15
  __int64 v28; // rbx
  void *v29; // rdi
  size_t v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  void *v34; // r12
  size_t v35; // r15
  void *v36; // rbx
  _OWORD *v37; // [rsp+8h] [rbp-3C0h] BYREF
  void *src; // [rsp+10h] [rbp-3B8h]
  size_t n; // [rsp+18h] [rbp-3B0h]
  __int64 v40; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-3A0h]
  __int64 v42; // [rsp+38h] [rbp-390h] BYREF
  __int128 v43; // [rsp+40h] [rbp-388h] BYREF
  __int128 v44; // [rsp+50h] [rbp-378h]
  __int128 v45; // [rsp+60h] [rbp-368h]
  __int128 v46; // [rsp+70h] [rbp-358h]
  _OWORD v47[3]; // [rsp+80h] [rbp-348h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-318h]
  __int128 v49; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-300h]
  __int128 v51; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-2E8h]
  __int128 v53; // [rsp+F0h] [rbp-2D8h]
  __int128 v54; // [rsp+100h] [rbp-2C8h]
  _QWORD v55[50]; // [rsp+1F8h] [rbp-1D0h] BYREF
  char v56; // [rsp+38Dh] [rbp-3Bh]
  char v57; // [rsp+38Fh] [rbp-39h]

  uu_tac::uu_app(&v51);
  clap_lex::RawArgs::new(&v40, a1, a2);
  v42 = 0LL;
  if ( (v56 & 8) == 0
    || (v2 = clap_lex::RawArgs::next_os(&v40, &v42)) == 0
    || (v4 = std::path::Path::file_stem(v2, v3)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(&v37, v4), v37) )
  {
    if ( (v57 & 2) != 0 )
      goto LABEL_12;
    v5 = clap_lex::RawArgs::next_os(&v40, &v42);
    if ( !v5 )
      goto LABEL_12;
    v7 = std::path::Path::file_name(v5, v6);
    if ( !v7 )
      goto LABEL_12;
    std::sys::os_str::bytes::Slice::to_str(&v37, v7);
    if ( v37 || v55[0] != 0x8000000000000000LL )
      goto LABEL_12;
    v8 = src;
    v9 = n;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, n, 0LL);
    v10 = src;
    if ( !v37 )
    {
      v11 = n;
      memcpy((void *)n, v8, v9);
      v55[0] = v10;
      v55[1] = v11;
      v55[2] = v9;
LABEL_12:
      clap_builder::builder::command::Command::_do_parse(&v43, &v51, &v40, v42);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
      goto LABEL_13;
    }
LABEL_40:
    alloc::raw_vec::handle_error(v10, n);
  }
  v34 = src;
  v35 = n;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, n, 0LL);
  v10 = src;
  if ( v37 )
    goto LABEL_40;
  v36 = (void *)n;
  memcpy((void *)n, v34, v35);
  v37 = v10;
  src = v36;
  n = v35;
  clap_lex::RawArgs::insert(&v40, &v42, &v37);
  v55[33] = 1LL;
  v55[34] = 0LL;
  if ( v55[0] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v55);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v55);
  }
  v55[0] = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v43, &v51, &v40, v42);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
LABEL_13:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v51);
  if ( (_QWORD)v43 != 0x8000000000000000LL )
  {
    v48 = v46;
    v47[2] = v45;
    v47[1] = v44;
    v47[0] = v43;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v47,
             anon_8dbe3744b211a940d537979c519aa4d5_22_llvm_5607699944319050003,
             *(&uu_tac::options::BEFORE + 1));
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v47,
            anon_8dbe3744b211a940d537979c519aa4d5_23_llvm_5607699944319050003,
            *(&uu_tac::options::REGEX + 1));
    v23 = (__int64)*(&uu_tac::options::SEPARATOR + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      &v51,
      v47,
      anon_8dbe3744b211a940d537979c519aa4d5_24_llvm_5607699944319050003,
      v23);
    v24 = clap_builder::parser::error::MatchesError::unwrap(
            anon_8dbe3744b211a940d537979c519aa4d5_24_llvm_5607699944319050003,
            v23,
            &v51);
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 16);
      if ( v25 )
        v26 = *(char **)(v24 + 8);
      else
        v26 = &byte_57847;
    }
    else
    {
      v26 = asc_57822;
      v25 = 1LL;
    }
    v27 = (v25 == 0) + v25;
    v28 = (__int64)*(&uu_tac::options::FILE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v51, v47, "filemode{", v28);
    clap_builder::parser::error::MatchesError::unwrap(&v43, "filemode{", v28, &v51);
    if ( (_QWORD)v43 )
    {
      v54 = v46;
      v53 = v45;
      v52 = v44;
      v51 = v43;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v37, &v51);
      v29 = src;
      v30 = n;
    }
    else
    {
      v31 = (_QWORD *)_rust_alloc(16LL, 8LL);
      if ( !v31 )
        alloc::alloc::handle_alloc_error(8LL, 16LL);
      v29 = v31;
      *v31 = "-";
      v31[1] = 1LL;
      v37 = (_OWORD *)(&dword_0 + 1);
      src = v31;
      n = 1LL;
      v30 = 1LL;
    }
    v12 = uu_tac::tac(v29, v30, flag, v22, v26, v27);
    v14 = v32;
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v37);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v37);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v47);
    if ( v12 )
      goto LABEL_15;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v12 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v43 + 1));
  v14 = v13;
  if ( !v12 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_15:
  v40 = v12;
  v41 = v14;
  *(_QWORD *)&v43 = &v40;
  *((_QWORD *)&v43 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v51 = &anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  *((_QWORD *)&v51 + 1) = 1LL;
  *(_QWORD *)&v53 = 0LL;
  *(_QWORD *)&v52 = &v43;
  *((_QWORD *)&v52 + 1) = 1LL;
  alloc::fmt::format::format_inner(&v49, &v51);
  v43 = v49;
  *(_QWORD *)&v44 = v50;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v49 + 1), v50, 1LL, 0LL) )
  {
    *(_QWORD *)&v15 = uucore::util_name();
    v47[0] = v15;
    v37 = v47;
    src = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &unk_25D350;
    *((_QWORD *)&v51 + 1) = 2LL;
    *(_QWORD *)&v53 = 0LL;
    *(_QWORD *)&v52 = &v37;
    *((_QWORD *)&v52 + 1) = 1LL;
    std::io::stdio::_eprint(&v51);
    *(_QWORD *)&v47[0] = &v43;
    *((_QWORD *)&v47[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &unk_25D370;
    *((_QWORD *)&v51 + 1) = 2LL;
    *(_QWORD *)&v53 = 0LL;
    *(_QWORD *)&v52 = v47;
    *((_QWORD *)&v52 + 1) = 1LL;
    std::io::stdio::_eprint(&v51);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v41 + 104))(v40) )
  {
    *(_QWORD *)&v16 = uucore::execution_phrase();
    v47[0] = v16;
    v37 = v47;
    src = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v51 = &off_25D390;
    *((_QWORD *)&v51 + 1) = 2LL;
    *(_QWORD *)&v53 = 0LL;
    *(_QWORD *)&v52 = &v37;
    *((_QWORD *)&v52 + 1) = 1LL;
    std::io::stdio::_eprint(&v51);
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(v41 + 96))(v40);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v43);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v43);
  v18 = v40;
  v19 = v41;
  if ( *(_QWORD *)v41 )
    (*(void (__fastcall **)(__int64))v41)(v40);
  v20 = *(_QWORD *)(v19 + 8);
  if ( v20 )
    _rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
  return v17;
}
