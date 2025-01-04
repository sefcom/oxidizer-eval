__int64 __fastcall uu_rm::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdx
  char v6; // bl
  char v7; // bp
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  char v12; // r12
  char v13; // r13
  unsigned __int8 v14; // r15
  char v15; // r14
  char v16; // al
  const char *v17; // rcx
  __int128 *v18; // rdx
  __int64 v19; // rsi
  __int128 v20; // rax
  __int64 v21; // rax
  __int128 v23; // rax
  char flag; // [rsp+0h] [rbp-6B8h]
  _BYTE v25[7]; // [rsp+1h] [rbp-6B7h] BYREF
  __int64 v26; // [rsp+8h] [rbp-6B0h] BYREF
  __int128 v27; // [rsp+10h] [rbp-6A8h]
  void *v28; // [rsp+20h] [rbp-698h] BYREF
  __int128 *p_dest; // [rsp+28h] [rbp-690h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+30h] [rbp-688h]
  __m256i v31; // [rsp+38h] [rbp-680h] BYREF
  __int128 v32; // [rsp+58h] [rbp-660h]
  __int64 v33; // [rsp+68h] [rbp-650h]
  __m256i v34; // [rsp+70h] [rbp-648h] BYREF
  __int128 v35; // [rsp+90h] [rbp-628h]
  __int64 v36; // [rsp+A0h] [rbp-618h]
  _QWORD v37[2]; // [rsp+B0h] [rbp-608h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-5F8h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-5E8h]
  __int128 v40; // [rsp+D8h] [rbp-5E0h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-5D0h]
  __int128 src; // [rsp+F0h] [rbp-5C8h] BYREF
  __m256i v43; // [rsp+100h] [rbp-5B8h]
  __int128 v44; // [rsp+120h] [rbp-598h] BYREF
  __int128 dest; // [rsp+3C0h] [rbp-2F8h] BYREF
  __m256i v46; // [rsp+3D0h] [rbp-2E8h]
  __int128 v47; // [rsp+3F0h] [rbp-2C8h]

  uu_rm::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v34, &dest, a1, a2);
  if ( v34.m256i_i64[0] != 0x8000000000000000LL )
  {
    v33 = v36;
    v32 = v35;
    v31 = v34;
    v3 = (__int64)*(&uu_rm::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v31, aFiles, v3);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v3, &src);
    if ( (_QWORD)dest
      && (v44 = v47,
          v43 = v46,
          src = dest,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v34, &src),
          src = *(_OWORD *)&v34.m256i_u64[1],
          v34.m256i_i64[0] != 0x8000000000000000LL) )
    {
      v27 = src;
      v26 = v34.m256i_i64[0];
    }
    else
    {
      v26 = 0LL;
      v27 = 8uLL;
    }
    v4 = (__int64)*(&uu_rm::OPT_FORCE + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v31, aForce, v4);
    if ( flag )
    {
      if ( !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v31, aForce, v4) )
        v5 = 0LL;
      v34.m256i_i64[0] = v5;
      src = *(_OWORD *)&uu_rm::OPT_PROMPT;
      *(_OWORD *)v43.m256i_i8 = *(_OWORD *)&uu_rm::OPT_PROMPT_MORE;
      *(_OWORD *)&v43.m256i_u64[2] = *(_OWORD *)&uu_rm::OPT_INTERACTIVE;
      *(_QWORD *)&dest = &src;
      *((_QWORD *)&dest + 1) = &v44;
      v6 = 0;
      v7 = 0;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                               &dest,
                               &v31,
                               &v34) )
        goto LABEL_24;
    }
    else if ( !*((_QWORD *)&v27 + 1) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
      v43.m256i_i64[0] = v46.m256i_i64[0];
      src = dest;
      v43.m256i_i32[2] = 1;
      v2 = alloc::boxed::Box<T>::new(&src);
      goto LABEL_39;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v31,
                            aPrompt,
                            *(&uu_rm::OPT_PROMPT + 1)) )
    {
LABEL_14:
      v6 = 0;
      v7 = 2;
      goto LABEL_24;
    }
    v6 = 1;
    v7 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v31,
                             aPromptMore,
                             *(&uu_rm::OPT_PROMPT_MORE + 1)) )
    {
      v8 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v31, aInteractive, v8) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v31, aInteractive, v8);
        v9 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v8, &src);
        if ( !v9 )
          core::option::unwrap_failed(&off_125030);
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 16);
        v6 = 0;
        v7 = 0;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aNever, 5LL) )
          goto LABEL_24;
        v6 = 1;
        v7 = 1;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aOnce, 4LL) )
          goto LABEL_24;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aAlways, 6LL) )
        {
          v34.m256i_i64[0] = v10;
          v34.m256i_i64[1] = v11;
          *(_QWORD *)&dest = &v34;
          *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&src = &off_124F40;
          *((_QWORD *)&src + 1) = 2LL;
          v43.m256i_i64[0] = (__int64)&dest;
          *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
          core::option::Option<T>::map_or_else(&v38, &src);
          v43.m256i_i32[2] = 1;
          src = v38;
          v43.m256i_i64[0] = v39;
          v2 = alloc::boxed::Box<T>::new(&src);
          goto LABEL_39;
        }
        goto LABEL_14;
      }
      v7 = 3;
      v6 = 0;
    }
LABEL_24:
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v31,
            aOneFileSystem,
            *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v31,
            aNoPreserveRoot,
            *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v31,
            aRecursive,
            *(&uu_rm::OPT_RECURSIVE + 1));
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v31, aDir, *(&uu_rm::OPT_DIR + 1));
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v31, aVerbose, *(&uu_rm::OPT_VERBOSE + 1));
    v25[0] = flag;
    v25[6] = v7;
    v25[1] = v12;
    v25[2] = v13 ^ 1;
    v25[3] = v14;
    v25[4] = v15;
    v25[5] = v16;
    if ( v6 && (v14 | (*((_QWORD *)&v27 + 1) >= 4uLL)) == 1 )
    {
      v28 = (void *)*((_QWORD *)&v27 + 1);
      v17 = aArgumentnoequa;
      if ( *((_QWORD *)&v27 + 1) >= 2uLL )
        v17 = (const char *)&unk_15810;
      v37[0] = v17;
      v18 = (__int128 *)&unk_15819;
      if ( v14 )
        v18 = (__int128 *)&unk_1581A;
      v19 = 1LL;
      if ( v14 )
        v19 = 13LL;
      v37[1] = 8 - ((*((_QWORD *)&v27 + 1) < 2uLL) - 1LL);
      p_dest = v18;
      v30 = (__int64 (__fastcall *)())v19;
      *(_QWORD *)&src = &v28;
      *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v43.m256i_i64[0] = (__int64)v37;
      v43.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v43.m256i_i64[2] = (__int64)&p_dest;
      v43.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_124F60;
      *((_QWORD *)&dest + 1) = 3LL;
      v46.m256i_i64[0] = (__int64)&src;
      *(_OWORD *)&v46.m256i_u64[1] = 3uLL;
      core::option::Option<T>::map_or_else(&v40, &dest);
      *(_OWORD *)v34.m256i_i8 = v40;
      v34.m256i_i64[2] = v41;
      *(_QWORD *)&v20 = uucore::util_name();
      dest = v20;
      p_dest = &dest;
      v30 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_124EC8;
      *((_QWORD *)&src + 1) = 2LL;
      v43.m256i_i64[0] = (__int64)&p_dest;
      *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&src);
      *(_QWORD *)&dest = &v34;
      *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_15190;
      *((_QWORD *)&src + 1) = 1LL;
      v43.m256i_i64[0] = (__int64)&dest;
      *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&src);
      *(_QWORD *)&src = &off_124F90;
      *((_QWORD *)&src + 1) = 1LL;
      v43.m256i_i64[0] = 8LL;
      *(_OWORD *)&v43.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(&src);
      v28 = &std::io::stdio::stderr::INSTANCE;
      v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v28);
      if ( v21 )
      {
        v37[0] = v21;
        *(_QWORD *)&v23 = uucore::util_name();
        dest = v23;
        p_dest = &dest;
        v30 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &unk_124EC8;
        *((_QWORD *)&src + 1) = 2LL;
        v43.m256i_i64[0] = (__int64)&p_dest;
        *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        *(_QWORD *)&dest = v37;
        *((_QWORD *)&dest + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &unk_124EE8;
        *((_QWORD *)&src + 1) = 2LL;
        v43.m256i_i64[0] = (__int64)&dest;
        *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        std::process::exit(1);
      }
      if ( !(unsigned __int8)uucore::read_yes() )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v34);
        v2 = 0LL;
        goto LABEL_39;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v34);
    }
    if ( !(unsigned __int8)uu_rm::remove(v27, *((_QWORD *)&v27 + 1), v25) )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v26);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
      return 0LL;
    }
    v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_39:
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v26);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34.m256i_i64[1]);
}
