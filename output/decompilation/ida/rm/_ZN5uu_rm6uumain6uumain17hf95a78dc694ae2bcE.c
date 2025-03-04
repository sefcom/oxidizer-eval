__int64 __fastcall uu_rm::uumain::uumain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rdx
  char v8; // bl
  char v9; // bp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  char v14; // r12
  char v15; // r13
  unsigned __int8 v16; // r15
  char v17; // r14
  char v18; // al
  const char *v19; // rcx
  __int128 *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v29; // rax
  char flag; // [rsp+0h] [rbp-6B8h]
  _BYTE v31[7]; // [rsp+1h] [rbp-6B7h] BYREF
  __int64 v32; // [rsp+8h] [rbp-6B0h] BYREF
  __int128 v33; // [rsp+10h] [rbp-6A8h]
  void *v34; // [rsp+20h] [rbp-698h] BYREF
  __int128 *p_dest; // [rsp+28h] [rbp-690h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+30h] [rbp-688h]
  __m256i v37; // [rsp+38h] [rbp-680h] BYREF
  __int128 v38; // [rsp+58h] [rbp-660h]
  __int64 v39; // [rsp+68h] [rbp-650h]
  __m256i v40; // [rsp+70h] [rbp-648h] BYREF
  __int128 v41; // [rsp+90h] [rbp-628h]
  __int64 v42; // [rsp+A0h] [rbp-618h]
  _QWORD v43[2]; // [rsp+B0h] [rbp-608h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-5F8h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-5E8h]
  __int128 v46; // [rsp+D8h] [rbp-5E0h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-5D0h]
  __int128 src; // [rsp+F0h] [rbp-5C8h] BYREF
  __m256i v49; // [rsp+100h] [rbp-5B8h]
  __int128 v50; // [rsp+120h] [rbp-598h] BYREF
  __int128 dest; // [rsp+3C0h] [rbp-2F8h] BYREF
  __m256i v52; // [rsp+3D0h] [rbp-2E8h]
  __int128 v53; // [rsp+3F0h] [rbp-2C8h]

  uu_rm::uu_app(&src, a2, a3, a4);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v40, &dest, a1, a2);
  if ( v40.m256i_i64[0] != 0x8000000000000000LL )
  {
    v39 = v42;
    v38 = v41;
    v37 = v40;
    v5 = (__int64)*(&uu_rm::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v37, aFiles, v5);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v5, &src);
    if ( (_QWORD)dest
      && (v50 = v53,
          v49 = v52,
          src = dest,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v40, &src),
          src = *(_OWORD *)&v40.m256i_u64[1],
          v40.m256i_i64[0] != 0x8000000000000000LL) )
    {
      v33 = src;
      v32 = v40.m256i_i64[0];
    }
    else
    {
      v32 = 0LL;
      v33 = 8uLL;
    }
    v6 = (__int64)*(&uu_rm::OPT_FORCE + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v37, aForce, v6);
    if ( flag )
    {
      if ( !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v37, aForce, v6) )
        v7 = 0LL;
      v40.m256i_i64[0] = v7;
      src = *(_OWORD *)&uu_rm::OPT_PROMPT;
      *(_OWORD *)v49.m256i_i8 = *(_OWORD *)&uu_rm::OPT_PROMPT_MORE;
      *(_OWORD *)&v49.m256i_u64[2] = *(_OWORD *)&uu_rm::OPT_INTERACTIVE;
      *(_QWORD *)&dest = &src;
      *((_QWORD *)&dest + 1) = &v50;
      v8 = 0;
      v9 = 0;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                               &dest,
                               &v37,
                               &v40) )
        goto LABEL_24;
    }
    else if ( !*((_QWORD *)&v33 + 1) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
      v49.m256i_i64[0] = v52.m256i_i64[0];
      src = dest;
      v49.m256i_i32[2] = 1;
      v4 = alloc::boxed::Box<T>::new(&src);
      goto LABEL_39;
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            &v37,
                            aPrompt,
                            *(&uu_rm::OPT_PROMPT + 1)) )
    {
LABEL_14:
      v8 = 0;
      v9 = 2;
      goto LABEL_24;
    }
    v8 = 1;
    v9 = 1;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v37,
                             aPromptMore,
                             *(&uu_rm::OPT_PROMPT_MORE + 1)) )
    {
      v10 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v37, aInteractive, v10) )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v37, aInteractive, v10);
        v11 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v10, &src);
        if ( !v11 )
          core::option::unwrap_failed(&off_125030);
        v12 = *(_QWORD *)(v11 + 8);
        v13 = *(_QWORD *)(v11 + 16);
        v8 = 0;
        v9 = 0;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aNever, 5LL) )
          goto LABEL_24;
        v8 = 1;
        v9 = 1;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aOnce, 4LL) )
          goto LABEL_24;
        if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aAlways, 6LL) )
        {
          v40.m256i_i64[0] = v12;
          v40.m256i_i64[1] = v13;
          *(_QWORD *)&dest = &v40;
          *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&src = &off_124F40;
          *((_QWORD *)&src + 1) = 2LL;
          v49.m256i_i64[0] = (__int64)&dest;
          *(_OWORD *)&v49.m256i_u64[1] = 1uLL;
          core::option::Option<T>::map_or_else(&v44, &src);
          v49.m256i_i32[2] = 1;
          src = v44;
          v49.m256i_i64[0] = v45;
          v4 = alloc::boxed::Box<T>::new(&src);
          goto LABEL_39;
        }
        goto LABEL_14;
      }
      v9 = 3;
      v8 = 0;
    }
LABEL_24:
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v37,
            aOneFileSystem,
            *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v37,
            aNoPreserveRoot,
            *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v37,
            aRecursive,
            *(&uu_rm::OPT_RECURSIVE + 1));
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v37, aDir, *(&uu_rm::OPT_DIR + 1));
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v37, aVerbose, *(&uu_rm::OPT_VERBOSE + 1));
    v31[0] = flag;
    v31[6] = v9;
    v31[1] = v14;
    v31[2] = v15 ^ 1;
    v31[3] = v16;
    v31[4] = v17;
    v31[5] = v18;
    if ( v8 && (v16 | (*((_QWORD *)&v33 + 1) >= 4uLL)) == 1 )
    {
      v34 = (void *)*((_QWORD *)&v33 + 1);
      v19 = aArgumentnoequa;
      if ( *((_QWORD *)&v33 + 1) >= 2uLL )
        v19 = (const char *)&unk_15810;
      v43[0] = v19;
      v20 = (__int128 *)&unk_15819;
      if ( v16 )
        v20 = (__int128 *)&unk_1581A;
      v21 = 1LL;
      if ( v16 )
        v21 = 13LL;
      v43[1] = 8 - ((*((_QWORD *)&v33 + 1) < 2uLL) - 1LL);
      p_dest = v20;
      v36 = (__int64 (__fastcall *)())v21;
      *(_QWORD *)&src = &v34;
      *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v49.m256i_i64[0] = (__int64)v43;
      v49.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
      v49.m256i_i64[2] = (__int64)&p_dest;
      v49.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest = &off_124F60;
      *((_QWORD *)&dest + 1) = 3LL;
      v52.m256i_i64[0] = (__int64)&src;
      *(_OWORD *)&v52.m256i_u64[1] = 3uLL;
      core::option::Option<T>::map_or_else(&v46, &dest);
      *(_OWORD *)v40.m256i_i8 = v46;
      v40.m256i_i64[2] = v47;
      *(_QWORD *)&v24 = uucore::util_name(&v46, &dest, v22, v23);
      dest = v24;
      p_dest = &dest;
      v36 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_124EC8;
      *((_QWORD *)&src + 1) = 2LL;
      v49.m256i_i64[0] = (__int64)&p_dest;
      *(_OWORD *)&v49.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&src);
      *(_QWORD *)&dest = &v40;
      *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_15190;
      *((_QWORD *)&src + 1) = 1LL;
      v49.m256i_i64[0] = (__int64)&dest;
      *(_OWORD *)&v49.m256i_u64[1] = 1uLL;
      std::io::stdio::_eprint(&src);
      *(_QWORD *)&src = &off_124F90;
      *((_QWORD *)&src + 1) = 1LL;
      v49.m256i_i64[0] = 8LL;
      *(_OWORD *)&v49.m256i_u64[1] = 0LL;
      std::io::stdio::_eprint(&src);
      v34 = &std::io::stdio::stderr::INSTANCE;
      v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&v34);
      if ( v25 )
      {
        v43[0] = v25;
        *(_QWORD *)&v29 = uucore::util_name(&v34, &dest, v26, v27);
        dest = v29;
        p_dest = &dest;
        v36 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &unk_124EC8;
        *((_QWORD *)&src + 1) = 2LL;
        v49.m256i_i64[0] = (__int64)&p_dest;
        *(_OWORD *)&v49.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        *(_QWORD *)&dest = v43;
        *((_QWORD *)&dest + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &unk_124EE8;
        *((_QWORD *)&src + 1) = 2LL;
        v49.m256i_i64[0] = (__int64)&dest;
        *(_OWORD *)&v49.m256i_u64[1] = 1uLL;
        std::io::stdio::_eprint(&src);
        std::process::exit(1);
      }
      if ( !(unsigned __int8)uucore::read_yes() )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v40);
        v4 = 0LL;
        goto LABEL_39;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v40);
    }
    if ( !(unsigned __int8)uu_rm::remove(v33, *((__int64 *)&v33 + 1), v31) )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v32);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
      return 0LL;
    }
    v4 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_39:
    core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v32);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v37);
    return v4;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40.m256i_i64[1]);
}
