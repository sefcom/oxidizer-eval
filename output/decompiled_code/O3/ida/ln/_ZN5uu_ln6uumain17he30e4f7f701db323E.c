__int64 __fastcall uu_ln::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  const void *v9; // r15
  size_t v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  __int128 v16; // rax
  __int128 v17; // rax
  unsigned int v18; // ebx
  __int128 v19; // kr00_16
  __int64 v20; // rsi
  __int64 v21; // r15
  char flag; // bp
  char v23; // r15
  char v24; // bl
  char v25; // r14
  __int64 v26; // r12
  __int64 v27; // rax
  char v28; // r13
  char v29; // r14
  char v30; // bp
  const void *v31; // r15
  size_t v32; // r14
  __int64 v33; // r12
  char v34; // bl
  char v35; // r12
  char v36; // al
  __int64 v37; // rdx
  char v39; // [rsp+Fh] [rbp-6B9h]
  __int128 v40; // [rsp+10h] [rbp-6B8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-6A8h]
  _OWORD v42[3]; // [rsp+28h] [rbp-6A0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-670h]
  _BYTE v44[8]; // [rsp+60h] [rbp-668h] BYREF
  __int64 v45; // [rsp+68h] [rbp-660h]
  __int64 v46; // [rsp+70h] [rbp-658h]
  __int128 v47; // [rsp+78h] [rbp-650h] BYREF
  __int64 v48; // [rsp+88h] [rbp-640h]
  __int128 v49; // [rsp+90h] [rbp-638h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-628h]
  __int128 v51; // [rsp+B0h] [rbp-618h]
  __int64 v52; // [rsp+C0h] [rbp-608h]
  __int64 v53; // [rsp+D0h] [rbp-5F8h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-5F0h]
  __int128 v55; // [rsp+E8h] [rbp-5E0h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-5D0h]
  _OWORD src[45]; // [rsp+100h] [rbp-5C8h] BYREF
  _OWORD dest[47]; // [rsp+3D0h] [rbp-2F8h] BYREF

  *(_QWORD *)&dest[0] = &off_ECFC0;
  *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&dest[1] = &off_ECFD0;
  *((_QWORD *)&dest[1] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &unk_ECFE0;
  *((_QWORD *)&src[0] + 1) = 2LL;
  *(_QWORD *)&src[2] = 0LL;
  *(_QWORD *)&src[1] = dest;
  *((_QWORD *)&src[1] + 1) = 2LL;
  alloc::fmt::format::format_inner(&v53, src);
  uu_ln::uu_app(src);
  v2 = v53;
  if ( v53 != 0x8000000000000000LL )
    dest[0] = v54;
  if ( *(_QWORD *)&src[26] != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&src[26]);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&src[26]);
  }
  *(_QWORD *)&src[26] = v2;
  *(_OWORD *)((char *)&src[26] + 8) = dest[0];
  memcpy(dest, src, 0x2C8uLL);
  clap_lex::RawArgs::new(&v40, a1, a2);
  *(_QWORD *)&v47 = 0LL;
  if ( (BYTE13(dest[43]) & 8) == 0
    || (v3 = clap_lex::RawArgs::next_os(&v40, &v47)) == 0
    || (v5 = std::path::Path::file_stem(v3, v4)) == 0
    || (std::sys::os_str::bytes::Slice::to_str(src, v5), *(_QWORD *)&src[0]) )
  {
    if ( (HIBYTE(dest[43]) & 2) != 0 )
      goto LABEL_16;
    v6 = clap_lex::RawArgs::next_os(&v40, &v47);
    if ( !v6 )
      goto LABEL_16;
    v8 = std::path::Path::file_name(v6, v7);
    if ( !v8 )
      goto LABEL_16;
    std::sys::os_str::bytes::Slice::to_str(src, v8);
    if ( *(_QWORD *)&src[0] || *((_QWORD *)&dest[18] + 1) != 0x8000000000000000LL )
      goto LABEL_16;
    v9 = (const void *)*((_QWORD *)&src[0] + 1);
    v10 = *(_QWORD *)&src[1];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, *(_QWORD *)&src[1], 0LL);
    v11 = *((_QWORD *)&src[0] + 1);
    if ( !*(_QWORD *)&src[0] )
    {
      v12 = *(_QWORD *)&src[1];
      memcpy(*(void **)&src[1], v9, v10);
      *((_QWORD *)&dest[18] + 1) = v11;
      *(_QWORD *)&dest[19] = v12;
      *((_QWORD *)&dest[19] + 1) = v10;
LABEL_16:
      clap_builder::builder::command::Command::_do_parse(&v49, dest, &v40, v47);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
      goto LABEL_17;
    }
LABEL_44:
    alloc::raw_vec::handle_error(v11, *(_QWORD *)&src[1]);
  }
  v31 = (const void *)*((_QWORD *)&src[0] + 1);
  v32 = *(_QWORD *)&src[1];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(src, *(_QWORD *)&src[1], 0LL);
  v11 = *((_QWORD *)&src[0] + 1);
  if ( *(_QWORD *)&src[0] )
    goto LABEL_44;
  v33 = *(_QWORD *)&src[1];
  memcpy(*(void **)&src[1], v31, v32);
  *(_QWORD *)&src[0] = v11;
  *((_QWORD *)&src[0] + 1) = v33;
  *(_QWORD *)&src[1] = v32;
  clap_lex::RawArgs::insert(&v40, &v47, src);
  dest[35] = 1uLL;
  if ( *((_QWORD *)&dest[18] + 1) != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&dest[18] + 8);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&dest[18] + 8);
  }
  *((_QWORD *)&dest[18] + 1) = 0x8000000000000000LL;
  clap_builder::builder::command::Command::_do_parse(&v49, dest, &v40, v47);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(src);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v40);
LABEL_17:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  if ( (_QWORD)v49 != 0x8000000000000000LL )
  {
    v43 = v52;
    v42[2] = v51;
    v42[1] = v50;
    v42[0] = v49;
    v21 = (__int64)*(&uu_ln::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(src, v42, aFiles, v21);
    clap_builder::parser::error::MatchesError::unwrap(dest, aFiles, v21, src);
    if ( !*(_QWORD *)&dest[0] )
      core::option::unwrap_failed(&off_ED000);
    src[3] = dest[3];
    src[2] = dest[2];
    src[1] = dest[1];
    src[0] = dest[0];
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v44, src);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aSymbolic, 8LL);
    v23 = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aForce, 5LL) )
      v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aInteractive, 11LL);
    uucore::features::backup_control::determine_backup_mode(dest, v42);
    v13 = *(_QWORD *)&dest[0];
    if ( *(_QWORD *)&dest[0] )
    {
      v15 = *((_QWORD *)&dest[0] + 1);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v44);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v44);
    }
    else
    {
      v24 = BYTE8(dest[0]);
      uucore::features::backup_control::determine_backup_suffix(&v47, v42);
      v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aLogical, 7LL);
      v41 = v48;
      v40 = v47;
      v26 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aRelative, 8LL);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, v42, aTargetDirector, 16LL);
      v27 = clap_builder::parser::error::MatchesError::unwrap(aTargetDirector, 16LL, dest);
      v39 = v25;
      if ( v27 )
      {
        <alloc::string::String as core::clone::Clone>::clone(dest, v27);
        v28 = v26;
        v29 = flag;
        v30 = v24;
        *(_QWORD *)&v50 = *(_QWORD *)&dest[1];
        v49 = dest[0];
      }
      else
      {
        v28 = v26;
        v29 = flag;
        v30 = v24;
        *(_QWORD *)&v49 = 0x8000000000000000LL;
      }
      v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aNoTargetDirect, 19LL);
      v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aNoDereference, 14LL);
      v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v42, aVerbose, 7LL);
      BYTE6(dest[3]) = v23;
      BYTE7(dest[3]) = v30;
      dest[0] = v40;
      *(_QWORD *)&dest[1] = v41;
      LOBYTE(dest[3]) = v29;
      BYTE1(dest[3]) = v28;
      BYTE2(dest[3]) = v39;
      *(_OWORD *)((char *)&dest[1] + 8) = v49;
      *((_QWORD *)&dest[2] + 1) = v50;
      BYTE3(dest[3]) = v34;
      BYTE4(dest[3]) = v35;
      BYTE5(dest[3]) = v36;
      v13 = uu_ln::exec(v45, v46, dest);
      v15 = v37;
      core::ptr::drop_in_place<uu_ln::Settings>(dest);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v44);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v44);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v42);
    if ( v13 )
      goto LABEL_19;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v49 + 1));
  v15 = v14;
  if ( !v13 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_19:
  *(_QWORD *)&v40 = v13;
  *((_QWORD *)&v40 + 1) = v15;
  *(_QWORD *)&dest[0] = &v40;
  *((_QWORD *)&dest[0] + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[2] = 0LL;
  *(_QWORD *)&src[1] = dest;
  *((_QWORD *)&src[1] + 1) = 1LL;
  alloc::fmt::format::format_inner(&v55, src);
  dest[0] = v55;
  *(_QWORD *)&dest[1] = v56;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v55 + 1), v56, 1LL, 0LL) )
  {
    *(_QWORD *)&v16 = uucore::util_name();
    v49 = v16;
    *(_QWORD *)&v42[0] = &v49;
    *((_QWORD *)&v42[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_ECF60;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = v42;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
    *(_QWORD *)&v49 = dest;
    *((_QWORD *)&v49 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &unk_ECF80;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = &v49;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 104LL))(v40) )
  {
    *(_QWORD *)&v17 = uucore::execution_phrase();
    v49 = v17;
    *(_QWORD *)&v42[0] = &v49;
    *((_QWORD *)&v42[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src[0] = &off_ECFA0;
    *((_QWORD *)&src[0] + 1) = 2LL;
    *(_QWORD *)&src[2] = 0LL;
    *(_QWORD *)&src[1] = v42;
    *((_QWORD *)&src[1] + 1) = 1LL;
    std::io::stdio::_eprint(src);
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v40 + 1) + 96LL))(v40);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(dest);
  v19 = v40;
  if ( **((_QWORD **)&v40 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v40 + 1))(v40);
  v20 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL);
  if ( v20 )
    _rust_dealloc(v19, v20, *(_QWORD *)(*((_QWORD *)&v19 + 1) + 16LL));
  return v18;
}
