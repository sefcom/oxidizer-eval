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
  char v12; // r15
  char v13; // r12
  char v14; // r13
  char v15; // r14
  char v16; // al
  const char *v17; // rdx
  __int64 v18; // rax
  __int128 *v19; // rcx
  __int128 v20; // rax
  __int64 v21; // rax
  __int128 v23; // rax
  char flag; // [rsp+0h] [rbp-6B8h]
  _BYTE v25[7]; // [rsp+1h] [rbp-6B7h] BYREF
  void *v26; // [rsp+8h] [rbp-6B0h] BYREF
  __int64 v27; // [rsp+10h] [rbp-6A8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-6A0h]
  const char *v29; // [rsp+28h] [rbp-690h] BYREF
  __int64 v30; // [rsp+30h] [rbp-688h]
  __int128 *p_dest; // [rsp+38h] [rbp-680h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+40h] [rbp-678h]
  __m256i v33; // [rsp+48h] [rbp-670h] BYREF
  __int128 v34; // [rsp+68h] [rbp-650h]
  __int64 v35; // [rsp+78h] [rbp-640h]
  __m256i v36; // [rsp+80h] [rbp-638h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-618h]
  __int64 v38; // [rsp+B0h] [rbp-608h]
  __int128 v39; // [rsp+C0h] [rbp-5F8h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-5E8h]
  __int128 v41; // [rsp+D8h] [rbp-5E0h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-5D0h]
  __int128 src; // [rsp+F0h] [rbp-5C8h] BYREF
  __m256i v44; // [rsp+100h] [rbp-5B8h]
  __int128 v45; // [rsp+120h] [rbp-598h] BYREF
  __int128 dest; // [rsp+3C0h] [rbp-2F8h] BYREF
  __m256i v47; // [rsp+3D0h] [rbp-2E8h]
  __int128 v48; // [rsp+3F0h] [rbp-2C8h]

  uu_rm::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v36, &dest, a1, a2);
  if ( v36.m256i_i64[0] != 0x8000000000000000LL )
  {
    v35 = v38;
    v34 = v37;
    v33 = v36;
    v3 = (__int64)*(&uu_rm::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v33, aFiles, v3);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v3, &src);
    if ( (_QWORD)dest
      && (v45 = v48,
          v44 = v47,
          src = dest,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v36, &src),
          src = *(_OWORD *)&v36.m256i_u64[1],
          v36.m256i_i64[0] != 0x8000000000000000LL) )
    {
      v28 = src;
      v27 = v36.m256i_i64[0];
    }
    else
    {
      v27 = 0LL;
      v28 = 8uLL;
    }
    v4 = (__int64)*(&uu_rm::OPT_FORCE + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aForce, v4);
    if ( flag )
    {
      if ( !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v33, aForce, v4) )
        v5 = 0LL;
      v36.m256i_i64[0] = v5;
      src = *(_OWORD *)&uu_rm::OPT_PROMPT;
      *(_OWORD *)v44.m256i_i8 = *(_OWORD *)&uu_rm::OPT_PROMPT_MORE;
      *(_OWORD *)&v44.m256i_u64[2] = *(_OWORD *)&uu_rm::OPT_INTERACTIVE;
      *(_QWORD *)&dest = &src;
      *((_QWORD *)&dest + 1) = &v45;
      v6 = 0;
      v7 = 0;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                               &dest,
                               &v33,
                               &v36) )
        goto LABEL_24;
    }
    else if ( !*((_QWORD *)&v28 + 1) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
      v44.m256i_i64[0] = v47.m256i_i64[0];
      src = dest;
      v44.m256i_i32[2] = 1;
      v2 = alloc::boxed::Box<T>::new(&src);
      goto LABEL_38;
    }
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v33,
                             aPrompt,
                             *(&uu_rm::OPT_PROMPT + 1)) )
    {
      v6 = 1;
      v7 = 1;
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              &v33,
                              aPromptMore,
                              *(&uu_rm::OPT_PROMPT_MORE + 1)) )
        goto LABEL_24;
      v8 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v33, aInteractive, v8) )
      {
        v7 = 3;
        v6 = 0;
        goto LABEL_24;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v33, aInteractive, v8);
      v9 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v8, &src);
      if ( !v9 )
        core::option::unwrap_failed(&off_1253C8);
      v10 = *(_QWORD *)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 16);
      v6 = 0;
      v7 = 0;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aNever, 5LL)
        || (v6 = 1, v7 = 1, (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aOnce, 4LL)) )
      {
LABEL_24:
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v33,
                aOneFileSystem,
                *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v33,
                aNoPreserveRoot,
                *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v33,
                aRecursive,
                *(&uu_rm::OPT_RECURSIVE + 1));
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aDir, *(&uu_rm::OPT_DIR + 1));
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v33,
                aVerbose,
                *(&uu_rm::OPT_VERBOSE + 1));
        v25[0] = flag;
        v25[6] = v7;
        v25[1] = v12;
        v25[2] = v13 ^ 1;
        v25[3] = v14;
        v25[4] = v15;
        v25[5] = v16;
        if ( v6 )
        {
          if ( v14 )
          {
            v17 = aArgumentnoequa;
            if ( *((_QWORD *)&v28 + 1) >= 2uLL )
              v17 = aArguments;
            v26 = (void *)*((_QWORD *)&v28 + 1);
            v29 = v17;
            v30 = 8 - ((*((_QWORD *)&v28 + 1) < 2uLL) - 1LL);
            v18 = 13LL;
            v19 = (__int128 *)&unk_157FA;
            goto LABEL_31;
          }
          if ( *((_QWORD *)&v28 + 1) > 3uLL )
          {
            v26 = (void *)*((_QWORD *)&v28 + 1);
            v29 = aArguments;
            v30 = 9LL;
            v18 = 1LL;
            v19 = (__int128 *)&unk_157F9;
LABEL_31:
            p_dest = v19;
            v32 = (__int64 (__fastcall *)())v18;
            *(_QWORD *)&src = &v26;
            *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v44.m256i_i64[0] = (__int64)&v29;
            v44.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            v44.m256i_i64[2] = (__int64)&p_dest;
            v44.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &off_1254A8;
            *((_QWORD *)&dest + 1) = 3LL;
            v47.m256i_i64[0] = (__int64)&src;
            *(_OWORD *)&v47.m256i_u64[1] = 3uLL;
            core::option::Option<T>::map_or_else(&v41, &dest);
            *(_OWORD *)v36.m256i_i8 = v41;
            v36.m256i_i64[2] = v42;
            *(_QWORD *)&v20 = uucore::util_name();
            dest = v20;
            p_dest = &dest;
            v32 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_1252D8;
            *((_QWORD *)&src + 1) = 2LL;
            v44.m256i_i64[0] = (__int64)&p_dest;
            *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&dest = &v36;
            *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_151F0;
            *((_QWORD *)&src + 1) = 1LL;
            v44.m256i_i64[0] = (__int64)&dest;
            *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&src = &off_1254D8;
            *((_QWORD *)&src + 1) = 1LL;
            v44.m256i_i64[0] = 8LL;
            *(_OWORD *)&v44.m256i_u64[1] = 0LL;
            std::io::stdio::_eprint(&src);
            v26 = &std::io::stdio::stderr::INSTANCE;
            v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v26);
            if ( v21 )
            {
              v29 = (const char *)v21;
              *(_QWORD *)&v23 = uucore::util_name();
              dest = v23;
              p_dest = &dest;
              v32 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&src = &unk_1252D8;
              *((_QWORD *)&src + 1) = 2LL;
              v44.m256i_i64[0] = (__int64)&p_dest;
              *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
              std::io::stdio::_eprint(&src);
              *(_QWORD *)&dest = &v29;
              *((_QWORD *)&dest + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&src = &unk_1252F8;
              *((_QWORD *)&src + 1) = 2LL;
              v44.m256i_i64[0] = (__int64)&dest;
              *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
              std::io::stdio::_eprint(&src);
              std::process::exit(1);
            }
            if ( !(unsigned __int8)uucore::read_yes() )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v36);
              v2 = 0LL;
              goto LABEL_38;
            }
            core::ptr::drop_in_place<alloc::string::String>(&v36);
          }
        }
        if ( !(unsigned __int8)uu_rm::remove(v28, *((_QWORD *)&v28 + 1), v25) )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v27);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
          return 0LL;
        }
        v2 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_38:
        core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v27);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
        return v2;
      }
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, aAlways, 6LL) )
      {
        v36.m256i_i64[0] = v10;
        v36.m256i_i64[1] = v11;
        *(_QWORD *)&dest = &v36;
        *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &off_1253E0;
        *((_QWORD *)&src + 1) = 2LL;
        v44.m256i_i64[0] = (__int64)&dest;
        *(_OWORD *)&v44.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(&v39, &src);
        v44.m256i_i32[2] = 1;
        src = v39;
        v44.m256i_i64[0] = v40;
        v2 = alloc::boxed::Box<T>::new(&src);
        goto LABEL_38;
      }
    }
    v6 = 0;
    v7 = 2;
    goto LABEL_24;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v36.m256i_i64[1]);
}
