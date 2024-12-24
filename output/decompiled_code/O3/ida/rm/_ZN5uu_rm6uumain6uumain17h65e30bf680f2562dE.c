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
  char v14; // r15
  char v15; // r12
  char v16; // r13
  char v17; // r14
  char v18; // al
  const char *v19; // rdx
  __int64 v20; // rax
  __int128 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int128 v29; // rax
  char flag; // [rsp+0h] [rbp-6B8h]
  _BYTE v31[7]; // [rsp+1h] [rbp-6B7h] BYREF
  void *v32; // [rsp+8h] [rbp-6B0h] BYREF
  __int64 v33; // [rsp+10h] [rbp-6A8h] BYREF
  __int128 v34; // [rsp+18h] [rbp-6A0h]
  const char *v35; // [rsp+28h] [rbp-690h] BYREF
  __int64 v36; // [rsp+30h] [rbp-688h]
  __int128 *p_dest; // [rsp+38h] [rbp-680h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+40h] [rbp-678h]
  __m256i v39; // [rsp+48h] [rbp-670h] BYREF
  __int128 v40; // [rsp+68h] [rbp-650h]
  __int64 v41; // [rsp+78h] [rbp-640h]
  __m256i v42; // [rsp+80h] [rbp-638h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-618h]
  __int64 v44; // [rsp+B0h] [rbp-608h]
  __int128 v45; // [rsp+C0h] [rbp-5F8h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-5E8h]
  __int128 v47; // [rsp+D8h] [rbp-5E0h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-5D0h]
  __int128 src; // [rsp+F0h] [rbp-5C8h] BYREF
  __m256i v50; // [rsp+100h] [rbp-5B8h]
  __int128 v51; // [rsp+120h] [rbp-598h] BYREF
  __int128 dest; // [rsp+3C0h] [rbp-2F8h] BYREF
  __m256i v53; // [rsp+3D0h] [rbp-2E8h]
  __int128 v54; // [rsp+3F0h] [rbp-2C8h]

  uu_rm::uu_app(&src, a2, a3, a4);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v42, &dest, a1, a2);
  if ( v42.m256i_i64[0] != 0x8000000000000000LL )
  {
    v41 = v44;
    v40 = v43;
    v39 = v42;
    v5 = (__int64)*(&uu_rm::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, &v39, aFiles, v5);
    clap_builder::parser::error::MatchesError::unwrap(&dest, aFiles, v5, &src);
    if ( (_QWORD)dest
      && (v51 = v54,
          v50 = v53,
          src = dest,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v42, &src),
          src = *(_OWORD *)&v42.m256i_u64[1],
          v42.m256i_i64[0] != 0x8000000000000000LL) )
    {
      v34 = src;
      v33 = v42.m256i_i64[0];
    }
    else
    {
      v33 = 0LL;
      v34 = 8uLL;
    }
    v6 = (__int64)*(&uu_rm::OPT_FORCE + 1);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v39, aForce, v6);
    if ( flag )
    {
      if ( !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v39, aForce, v6) )
        v7 = 0LL;
      v42.m256i_i64[0] = v7;
      src = *(_OWORD *)&uu_rm::OPT_PROMPT;
      *(_OWORD *)v50.m256i_i8 = *(_OWORD *)&uu_rm::OPT_PROMPT_MORE;
      *(_OWORD *)&v50.m256i_u64[2] = *(_OWORD *)&uu_rm::OPT_INTERACTIVE;
      *(_QWORD *)&dest = &src;
      *((_QWORD *)&dest + 1) = &v51;
      v8 = 0;
      v9 = 0;
      if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                               &dest,
                               &v39,
                               &v42) )
        goto LABEL_24;
    }
    else if ( !*((_QWORD *)&v34 + 1) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
      v50.m256i_i64[0] = v53.m256i_i64[0];
      src = dest;
      v50.m256i_i32[2] = 1;
      v4 = alloc::boxed::Box<T>::new(&src);
      goto LABEL_38;
    }
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v39,
                             aPrompt,
                             *(&uu_rm::OPT_PROMPT + 1)) )
    {
      v8 = 1;
      v9 = 1;
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              &v39,
                              aPromptMore,
                              *(&uu_rm::OPT_PROMPT_MORE + 1)) )
        goto LABEL_24;
      v10 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                               &v39,
                               aInteractive,
                               v10) )
      {
        v9 = 3;
        v8 = 0;
        goto LABEL_24;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, &v39, aInteractive, v10);
      v11 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v10, &src);
      if ( !v11 )
        core::option::unwrap_failed(&off_1253C8);
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      v8 = 0;
      v9 = 0;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aNever, 5LL)
        || (v8 = 1, v9 = 1, (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aOnce, 4LL)) )
      {
LABEL_24:
        v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v39,
                aOneFileSystem,
                *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v39,
                aNoPreserveRoot,
                *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
        v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v39,
                aRecursive,
                *(&uu_rm::OPT_RECURSIVE + 1));
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v39, aDir, *(&uu_rm::OPT_DIR + 1));
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                &v39,
                aVerbose,
                *(&uu_rm::OPT_VERBOSE + 1));
        v31[0] = flag;
        v31[6] = v9;
        v31[1] = v14;
        v31[2] = v15 ^ 1;
        v31[3] = v16;
        v31[4] = v17;
        v31[5] = v18;
        if ( v8 )
        {
          if ( v16 )
          {
            v19 = aArgumentnoequa;
            if ( *((_QWORD *)&v34 + 1) >= 2uLL )
              v19 = aArguments;
            v32 = (void *)*((_QWORD *)&v34 + 1);
            v35 = v19;
            v36 = 8 - ((*((_QWORD *)&v34 + 1) < 2uLL) - 1LL);
            v20 = 13LL;
            v21 = (__int128 *)&unk_157FA;
            goto LABEL_31;
          }
          if ( *((_QWORD *)&v34 + 1) > 3uLL )
          {
            v32 = (void *)*((_QWORD *)&v34 + 1);
            v35 = aArguments;
            v36 = 9LL;
            v20 = 1LL;
            v21 = (__int128 *)&unk_157F9;
LABEL_31:
            p_dest = v21;
            v38 = (__int64 (__fastcall *)())v20;
            *(_QWORD *)&src = &v32;
            *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v50.m256i_i64[0] = (__int64)&v35;
            v50.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            v50.m256i_i64[2] = (__int64)&p_dest;
            v50.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &off_1254A8;
            *((_QWORD *)&dest + 1) = 3LL;
            v53.m256i_i64[0] = (__int64)&src;
            *(_OWORD *)&v53.m256i_u64[1] = 3uLL;
            core::option::Option<T>::map_or_else(&v47, &dest);
            *(_OWORD *)v42.m256i_i8 = v47;
            v42.m256i_i64[2] = v48;
            *(_QWORD *)&v24 = uucore::util_name(&v47, &dest, v22, v23);
            dest = v24;
            p_dest = &dest;
            v38 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_1252D8;
            *((_QWORD *)&src + 1) = 2LL;
            v50.m256i_i64[0] = (__int64)&p_dest;
            *(_OWORD *)&v50.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&dest = &v42;
            *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_151F0;
            *((_QWORD *)&src + 1) = 1LL;
            v50.m256i_i64[0] = (__int64)&dest;
            *(_OWORD *)&v50.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&src = &off_1254D8;
            *((_QWORD *)&src + 1) = 1LL;
            v50.m256i_i64[0] = 8LL;
            *(_OWORD *)&v50.m256i_u64[1] = 0LL;
            std::io::stdio::_eprint(&src);
            v32 = &std::io::stdio::stderr::INSTANCE;
            v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&v32);
            if ( v25 )
            {
              v35 = (const char *)v25;
              *(_QWORD *)&v29 = uucore::util_name(&v32, &dest, v26, v27);
              dest = v29;
              p_dest = &dest;
              v38 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&src = &unk_1252D8;
              *((_QWORD *)&src + 1) = 2LL;
              v50.m256i_i64[0] = (__int64)&p_dest;
              *(_OWORD *)&v50.m256i_u64[1] = 1uLL;
              std::io::stdio::_eprint(&src);
              *(_QWORD *)&dest = &v35;
              *((_QWORD *)&dest + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&src = &unk_1252F8;
              *((_QWORD *)&src + 1) = 2LL;
              v50.m256i_i64[0] = (__int64)&dest;
              *(_OWORD *)&v50.m256i_u64[1] = 1uLL;
              std::io::stdio::_eprint(&src);
              std::process::exit(1);
            }
            if ( !(unsigned __int8)uucore::read_yes() )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v42);
              v4 = 0LL;
              goto LABEL_38;
            }
            core::ptr::drop_in_place<alloc::string::String>(&v42);
          }
        }
        if ( !(unsigned __int8)uu_rm::remove(v34, *((__int64 *)&v34 + 1), v31) )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v33);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
          return 0LL;
        }
        v4 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_38:
        core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v33);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
        return v4;
      }
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, aAlways, 6LL) )
      {
        v42.m256i_i64[0] = v12;
        v42.m256i_i64[1] = v13;
        *(_QWORD *)&dest = &v42;
        *((_QWORD *)&dest + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &off_1253E0;
        *((_QWORD *)&src + 1) = 2LL;
        v50.m256i_i64[0] = (__int64)&dest;
        *(_OWORD *)&v50.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(&v45, &src);
        v50.m256i_i32[2] = 1;
        src = v45;
        v50.m256i_i64[0] = v46;
        v4 = alloc::boxed::Box<T>::new(&src);
        goto LABEL_38;
      }
    }
    v8 = 0;
    v9 = 2;
    goto LABEL_24;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42.m256i_i64[1]);
}
