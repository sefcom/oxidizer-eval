__int64 __fastcall uu_rm::uumain(__int64 a1, __int64 a2)
{
  _OWORD *v2; // r15
  __int64 (__fastcall **v3)(); // rdx
  __int64 (__fastcall **v4)(); // r12
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // bp
  char v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r12
  __int128 v22; // xmm0
  __int64 v23; // rdi
  _QWORD *v24; // rax
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  char v27; // r15
  char v28; // bl
  char v29; // r14
  char v30; // r12
  char v31; // al
  const char *v32; // rdx
  __int64 v33; // rax
  __int128 *v34; // rcx
  __int128 v35; // rax
  __int64 v36; // rax
  __int64 (__fastcall **v37)(); // rdx
  __int128 v38; // rax
  __int128 v39; // rax
  unsigned int v40; // ebx
  __int128 v41; // kr00_16
  __int64 v42; // rsi
  __int128 v44; // rax
  char flag; // [rsp+8h] [rbp-6D0h]
  _BYTE v46[7]; // [rsp+9h] [rbp-6CFh] BYREF
  __int64 v47; // [rsp+10h] [rbp-6C8h] BYREF
  __int128 v48; // [rsp+18h] [rbp-6C0h]
  void *v49; // [rsp+28h] [rbp-6B0h] BYREF
  __int128 v50; // [rsp+30h] [rbp-6A8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-698h]
  __m256i v52; // [rsp+48h] [rbp-690h] BYREF
  __int128 v53; // [rsp+68h] [rbp-670h]
  __int64 v54; // [rsp+78h] [rbp-660h]
  __m256i v55; // [rsp+80h] [rbp-658h] BYREF
  __int128 v56; // [rsp+A0h] [rbp-638h]
  __int64 v57; // [rsp+B0h] [rbp-628h]
  const char *v58; // [rsp+B8h] [rbp-620h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-618h]
  __int128 *p_dest; // [rsp+C8h] [rbp-610h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+D0h] [rbp-608h]
  const char *v62; // [rsp+D8h] [rbp-600h]
  __int128 src; // [rsp+E0h] [rbp-5F8h] BYREF
  __m256i v64; // [rsp+F0h] [rbp-5E8h]
  __int128 v65; // [rsp+110h] [rbp-5C8h]
  __int128 v66; // [rsp+3B0h] [rbp-328h] BYREF
  __int64 v67; // [rsp+3C0h] [rbp-318h]
  __int128 v68; // [rsp+3C8h] [rbp-310h] BYREF
  __int64 v69; // [rsp+3D8h] [rbp-300h]
  __int128 dest; // [rsp+3E0h] [rbp-2F8h] BYREF
  __m256i v71; // [rsp+3F0h] [rbp-2E8h]
  __int128 v72; // [rsp+410h] [rbp-2C8h]

  uu_rm::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v55, &dest, a1, a2);
  if ( v55.m256i_i64[0] != 0x8000000000000000LL )
  {
    v54 = v57;
    v53 = v56;
    v52 = v55;
    v5 = (__int64)*(&uu_rm::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v52, aFiles, v5);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v5, &src);
    if ( (_QWORD)dest
      && (v65 = v72,
          v64 = v71,
          src = dest,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v55, &src),
          src = *(_OWORD *)&v55.m256i_u64[1],
          v55.m256i_i64[0] != 0x8000000000000000LL) )
    {
      v48 = src;
      v47 = v55.m256i_i64[0];
    }
    else
    {
      v47 = 0LL;
      v48 = 8uLL;
    }
    v6 = (__int64)*(&uu_rm::OPT_FORCE + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aForce, v6);
    if ( flag )
    {
      v7 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v52, aForce, v6);
      v9 = v8;
      if ( !v7 )
        v9 = 0LL;
      v10 = (__int64)*(&uu_rm::OPT_PROMPT + 1);
      v11 = (__int64)*(&uu_rm::OPT_PROMPT_MORE + 1);
      v62 = aInteractive;
      v12 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(&v52, aPrompt, v10) != 2
         || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v52, aPrompt, v10)
         || v13 <= v9)
        && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(
                               &v52,
                               aPromptMore,
                               v11) != 2
         || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v52, aPromptMore, v11)
         || v14 <= v9)
        && ((unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::value_source(&v52, v62, v12) != 2
         || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v52, v62, v12)
         || v15 <= v9) )
      {
        v16 = 0;
        v17 = 0;
        goto LABEL_35;
      }
    }
    else if ( !*((_QWORD *)&v48 + 1) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&src, 15LL, 0LL);
      v23 = *((_QWORD *)&src + 1);
      if ( (_QWORD)src )
        alloc::raw_vec::handle_error(*((_QWORD *)&src + 1), v64.m256i_i64[0]);
      v24 = (_QWORD *)v64.m256i_i64[0];
      *(_QWORD *)(v64.m256i_i64[0] + 7) = 0x646E617265706F20LL;
      *v24 = 0x20676E697373696DLL;
      v64.m256i_i32[2] = 1;
      *(_QWORD *)&src = v23;
      *((_QWORD *)&src + 1) = v24;
      v64.m256i_i64[0] = 15LL;
      v25 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v25 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v2 = v25;
      v26 = src;
      v25[1] = *(_OWORD *)v64.m256i_i8;
      *v25 = v26;
      v4 = &off_EBC50;
      goto LABEL_49;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v52,
                            aPrompt,
                            *(&uu_rm::OPT_PROMPT + 1)) )
      goto LABEL_23;
    v16 = 1;
    v17 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v52,
                             aPromptMore,
                             *(&uu_rm::OPT_PROMPT_MORE + 1)) )
    {
      v18 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v52, aInteractive, v18) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v52, aInteractive, v18);
        v19 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v18, &src);
        if ( !v19 )
          core::option::unwrap_failed(&off_EBCC0);
        v20 = *(_QWORD *)(v19 + 8);
        v21 = *(_QWORD *)(v19 + 16);
        v16 = 0;
        v17 = 0;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aNever, 5LL) )
        {
          v16 = 1;
          v17 = 1;
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aOnce, 4LL) )
          {
            if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, aAlways, 6LL) )
            {
              v55.m256i_i64[0] = v20;
              v55.m256i_i64[1] = v21;
              *(_QWORD *)&dest = &v55;
              *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&src = &off_EBCD8;
              *((_QWORD *)&src + 1) = 2LL;
              v64.m256i_i64[0] = (__int64)&dest;
              *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
              alloc::fmt::format::format_inner(&v68, &src);
              v64.m256i_i32[2] = 1;
              src = v68;
              v64.m256i_i64[0] = v69;
              v2 = (_OWORD *)alloc::alloc::exchange_malloc();
              v22 = src;
              v2[1] = *(_OWORD *)v64.m256i_i8;
              *v2 = v22;
              v4 = &off_EBD30;
              goto LABEL_49;
            }
LABEL_23:
            v16 = 0;
            v17 = 2;
          }
        }
      }
      else
      {
        v17 = 3;
        v16 = 0;
      }
    }
LABEL_35:
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v52,
            aOneFileSystem,
            *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v52,
            aNoPreserveRoot,
            *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v52,
            aRecursive,
            *(&uu_rm::OPT_RECURSIVE + 1));
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aDir, *(&uu_rm::OPT_DIR + 1));
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v52, aVerbose, *(&uu_rm::OPT_VERBOSE + 1));
    v46[0] = flag;
    v46[6] = v17;
    v46[1] = v27;
    v46[2] = v28 ^ 1;
    v46[3] = v29;
    v46[4] = v30;
    v46[5] = v31;
    if ( v16 )
    {
      if ( v29 )
      {
        v32 = (const char *)&unk_11958;
        if ( *((_QWORD *)&v48 + 1) >= 2uLL )
          v32 = aArguments;
        v49 = (void *)*((_QWORD *)&v48 + 1);
        v58 = v32;
        v59 = 8 - ((*((_QWORD *)&v48 + 1) < 2uLL) - 1LL);
        v33 = 13LL;
        v34 = (__int128 *)&unk_1197A;
        goto LABEL_42;
      }
      if ( *((_QWORD *)&v48 + 1) > 3uLL )
      {
        v49 = (void *)*((_QWORD *)&v48 + 1);
        v58 = aArguments;
        v59 = 9LL;
        v33 = 1LL;
        v34 = (__int128 *)&unk_11979;
LABEL_42:
        p_dest = v34;
        v61 = (__int64 (__fastcall *)())v33;
        *(_QWORD *)&src = &v49;
        *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v64.m256i_i64[0] = (__int64)&v58;
        v4 = (__int64 (__fastcall **)())<&T as core::fmt::Display>::fmt;
        v64.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
        v64.m256i_i64[2] = (__int64)&p_dest;
        v64.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_EBDA0;
        *((_QWORD *)&dest + 1) = 3LL;
        v71.m256i_i64[0] = (__int64)&src;
        *(_OWORD *)&v71.m256i_u64[1] = 3uLL;
        alloc::fmt::format::format_inner(&v50, &dest);
        *(_OWORD *)v55.m256i_i8 = v50;
        v55.m256i_i64[2] = v51;
        *(_QWORD *)&v35 = uucore::util_name();
        dest = v35;
        p_dest = &dest;
        v61 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &unk_EBBD0;
        *((_QWORD *)&src + 1) = 2LL;
        v64.m256i_i64[0] = (__int64)&p_dest;
        *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        *(_QWORD *)&dest = &v55;
        *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
        *((_QWORD *)&src + 1) = 1LL;
        v64.m256i_i64[0] = (__int64)&dest;
        *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        *(_QWORD *)&src = &off_EBDD0;
        *((_QWORD *)&src + 1) = 1LL;
        v64.m256i_i64[0] = 8LL;
        *(_OWORD *)&v64.m256i_u64[1] = 0LL;
        std::io::stdio::_eprint(&src);
        v49 = &std::io::stdio::stderr::INSTANCE;
        v36 = <std::io::stdio::Stderr as std::io::Write>::flush(&v49);
        if ( v36 )
        {
          v58 = (const char *)v36;
          *(_QWORD *)&v44 = uucore::util_name();
          dest = v44;
          p_dest = &dest;
          v61 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&src = &unk_EBBD0;
          *((_QWORD *)&src + 1) = 2LL;
          v64.m256i_i64[0] = (__int64)&p_dest;
          *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
          std::io::stdio::_eprint(&src);
          *(_QWORD *)&dest = &v58;
          *((_QWORD *)&dest + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&src = &unk_EBBF0;
          *((_QWORD *)&src + 1) = 2LL;
          v64.m256i_i64[0] = (__int64)&dest;
          *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
          std::io::stdio::_eprint(&src);
          std::process::exit(1);
        }
        if ( !(unsigned __int8)uucore::read_yes() )
        {
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v55);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v55);
          v2 = 0LL;
          goto LABEL_49;
        }
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v55);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v55);
      }
    }
    if ( !(unsigned __int8)uu_rm::remove(v48, *((_QWORD *)&v48 + 1), v46) )
    {
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v47);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v52);
      return (unsigned int)uucore::mods::error::get_exit_code();
    }
    v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    v4 = v37;
LABEL_49:
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v47);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v47);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v52);
    if ( v2 )
      goto LABEL_50;
    return (unsigned int)uucore::mods::error::get_exit_code();
  }
  v2 = (_OWORD *)uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v55.m256i_i64[1]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_50:
  *(_QWORD *)&v50 = v2;
  *((_QWORD *)&v50 + 1) = v4;
  *(_QWORD *)&dest = &v50;
  *((_QWORD *)&dest + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&src + 1) = 1LL;
  v64.m256i_i64[0] = (__int64)&dest;
  *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
  alloc::fmt::format::format_inner(&v66, &src);
  dest = v66;
  v71.m256i_i64[0] = v67;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v66 + 1), v67, 1LL, 0LL) )
  {
    *(_QWORD *)&v38 = uucore::util_name();
    *(_OWORD *)v55.m256i_i8 = v38;
    v52.m256i_i64[0] = (__int64)&v55;
    v52.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_EBBD0;
    *((_QWORD *)&src + 1) = 2LL;
    v64.m256i_i64[0] = (__int64)&v52;
    *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&src);
    v55.m256i_i64[0] = (__int64)&dest;
    v55.m256i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &unk_EBBF0;
    *((_QWORD *)&src + 1) = 2LL;
    v64.m256i_i64[0] = (__int64)&v55;
    *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v50 + 1) + 104LL))(v50) )
  {
    *(_QWORD *)&v39 = uucore::execution_phrase();
    *(_OWORD *)v55.m256i_i8 = v39;
    v52.m256i_i64[0] = (__int64)&v55;
    v52.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
    *(_QWORD *)&src = &off_EBC10;
    *((_QWORD *)&src + 1) = 2LL;
    v64.m256i_i64[0] = (__int64)&v52;
    *(_OWORD *)&v64.m256i_u64[1] = 1uLL;
    std::io::stdio::_eprint(&src);
  }
  v40 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v50 + 1) + 96LL))(v50);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&dest);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest);
  v41 = v50;
  if ( **((_QWORD **)&v50 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v50 + 1))(v50);
  v42 = *(_QWORD *)(*((_QWORD *)&v41 + 1) + 8LL);
  if ( v42 )
    _rust_dealloc(v41, v42, *(_QWORD *)(*((_QWORD *)&v41 + 1) + 16LL));
  return v40;
}
