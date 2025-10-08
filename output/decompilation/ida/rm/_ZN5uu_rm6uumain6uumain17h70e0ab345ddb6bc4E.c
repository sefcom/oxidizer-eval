__int64 __fastcall uu_rm::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  char v10; // bp
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r12
  char v16; // al
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rbx
  char v20; // r13
  char v21; // r12
  char v22; // bl
  char v23; // r14
  char v24; // r15
  char v25; // cl
  const char *v26; // rcx
  __int64 v27; // rax
  void *v28; // rcx
  __int128 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int128 v33; // rax
  char yes; // bl
  char flag; // [rsp+Fh] [rbp-6D9h]
  _BYTE v36[8]; // [rsp+10h] [rbp-6D8h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-6D0h]
  __int128 v38; // [rsp+20h] [rbp-6C8h]
  __int64 v39; // [rsp+30h] [rbp-6B8h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+38h] [rbp-6B0h]
  __int128 v41; // [rsp+40h] [rbp-6A8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-698h]
  __int128 v43; // [rsp+60h] [rbp-688h]
  __int64 v44; // [rsp+70h] [rbp-678h]
  __int128 v45; // [rsp+78h] [rbp-670h] BYREF
  __int64 v46; // [rsp+88h] [rbp-660h]
  int v47; // [rsp+94h] [rbp-654h]
  unsigned __int64 v48; // [rsp+98h] [rbp-650h] BYREF
  const char *v49; // [rsp+A0h] [rbp-648h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-640h]
  __int128 v51; // [rsp+B0h] [rbp-638h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-628h]
  __int128 v53; // [rsp+C8h] [rbp-620h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-610h]
  __int128 src; // [rsp+E0h] [rbp-608h] BYREF
  __m256i v56; // [rsp+F0h] [rbp-5F8h]
  char v57; // [rsp+110h] [rbp-5D8h] BYREF
  _QWORD v58[8]; // [rsp+3B0h] [rbp-338h] BYREF
  _OWORD dest[3]; // [rsp+3F0h] [rbp-2F8h] BYREF
  __int64 v60; // [rsp+420h] [rbp-2C8h]

  uu_rm::uu_app(&src);
  clap_builder::builder::command::Command::after_help(dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v41, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v41, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v41 + 1),
             dest,
             v2,
             -(__int64)v41);
  v60 = v44;
  dest[2] = v43;
  dest[1] = v42;
  dest[0] = v41;
  v4 = (__int64)*(&uu_rm::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, dest, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(v58, aFiles, v4, &src);
  if ( v58[0] && (core::iter::traits::iterator::Iterator::collect(&src, v58), (_QWORD)src != 0x8000000000000000LL) )
  {
    v38 = src;
    v37 = v56.m256i_i64[0];
  }
  else
  {
    *((_QWORD *)&v38 + 1) = 8LL;
    v37 = 0LL;
    *(_QWORD *)&v38 = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aForce, *(&uu_rm::OPT_FORCE + 1));
  if ( flag )
  {
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(dest, aForce, *(&uu_rm::OPT_FORCE + 1));
    v7 = 0LL;
    if ( (v5 & 1) != 0 )
      v7 = v6;
    *(_QWORD *)&v45 = v7;
    src = *(_OWORD *)&uu_rm::OPT_PROMPT;
    *(_OWORD *)v56.m256i_i8 = *(_OWORD *)&uu_rm::OPT_PROMPT_MORE;
    *(_OWORD *)&v56.m256i_u64[2] = *(_OWORD *)&uu_rm::OPT_INTERACTIVE;
    *(_QWORD *)&v41 = &src;
    *((_QWORD *)&v41 + 1) = &v57;
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v41, dest, &v45);
    LODWORD(v9) = 0;
    v10 = 0;
    if ( !v8 )
      goto LABEL_24;
LABEL_13:
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             dest,
                             aPrompt,
                             *(&uu_rm::OPT_PROMPT + 1)) )
    {
      v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              dest,
              aPromptMore,
              *(&uu_rm::OPT_PROMPT_MORE + 1));
      LOBYTE(v9) = 1;
      v10 = 1;
      if ( v11 )
        goto LABEL_24;
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                               dest,
                               aInteractive,
                               *(&uu_rm::OPT_INTERACTIVE + 1),
                               v9) )
      {
        v10 = 3;
        LODWORD(v9) = 0;
        goto LABEL_24;
      }
      v12 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, dest, aInteractive, v12);
      v13 = clap_builder::parser::error::MatchesError::unwrap(aInteractive, v12, &src);
      if ( !v13 )
        core::option::unwrap_failed(&off_E9928);
      v14 = *(_QWORD *)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 16);
      v16 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, aNever, 5LL);
      LODWORD(v9) = 0;
      v10 = 0;
      if ( v16
        || (v17 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, aOnce, 4LL), LOBYTE(v9) = 1,
                                                                                             v10 = 1,
                                                                                             v17) )
      {
LABEL_24:
        v47 = v9;
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                dest,
                aOneFileSystem,
                *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1));
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                dest,
                aNoPreserveRoot,
                *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1));
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                dest,
                aRecursive,
                *(&uu_rm::OPT_RECURSIVE + 1));
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(dest, aDir, *(&uu_rm::OPT_DIR + 1));
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                dest,
                aVerbose,
                *(&uu_rm::OPT_VERBOSE + 1));
        v25 = 2
            - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                dest,
                aPresumeInputTt,
                *(&uu_rm::PRESUME_INPUT_TTY + 1));
        v36[0] = flag;
        v36[7] = v10;
        v36[1] = v20;
        v36[2] = v21 ^ 1;
        v36[3] = v22;
        v36[4] = v23;
        v36[5] = v24;
        v36[6] = v25;
        if ( (_BYTE)v47 )
        {
          if ( v22 )
          {
            v26 = aArgumentnoequa;
            if ( v37 >= 2 )
              v26 = aArguments;
            v48 = v37;
            v49 = v26;
            v50 = 8 - ((v37 < 2) - 1LL);
            v27 = 13LL;
            v28 = &unk_18ED2;
            goto LABEL_31;
          }
          if ( v37 > 3 )
          {
            v48 = v37;
            v49 = aArguments;
            v50 = 9LL;
            v27 = 1LL;
            v28 = &unk_18ED1;
LABEL_31:
            v39 = (__int64)v28;
            v40 = (__int64 (__fastcall **)())v27;
            *(_QWORD *)&src = &v48;
            *((_QWORD *)&src + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v56.m256i_i64[0] = (__int64)&v49;
            v56.m256i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
            v56.m256i_i64[2] = (__int64)&v39;
            v56.m256i_i64[3] = (__int64)<&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v41 = &off_E9830;
            *((_QWORD *)&v41 + 1) = 3LL;
            *(_QWORD *)&v43 = 0LL;
            *(_QWORD *)&v42 = &src;
            *((_QWORD *)&v42 + 1) = 3LL;
            core::option::Option<T>::map_or_else(&v45, &v41);
            v51 = v45;
            v52 = v46;
            *(_QWORD *)&v29 = uucore::util_name();
            v41 = v29;
            *(_QWORD *)&v45 = &v41;
            *((_QWORD *)&v45 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_E9798;
            *((_QWORD *)&src + 1) = 2LL;
            v56.m256i_i64[0] = (__int64)&v45;
            *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&v41 = &v51;
            *((_QWORD *)&v41 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&src = &unk_18830;
            *((_QWORD *)&src + 1) = 1LL;
            v56.m256i_i64[0] = (__int64)&v41;
            *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&src = &off_E9860;
            *((_QWORD *)&src + 1) = 1LL;
            v56.m256i_i64[0] = 8LL;
            *(_OWORD *)&v56.m256i_u64[1] = 0LL;
            std::io::stdio::_eprint(&src);
            *(_QWORD *)&src = &std::io::stdio::stderr::INSTANCE;
            v30 = <std::io::stdio::Stderr as std::io::Write>::flush(&src);
            if ( v30 )
            {
              v31 = uu_rm::uumain::uumain::{{closure}}(v30);
              if ( v31 )
              {
                v39 = v31;
                v40 = &off_E9960;
                v32 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v31);
                uucore::mods::error::set_exit_code(v32);
                *(_QWORD *)&v33 = uucore::util_name();
                v45 = v33;
                *(_QWORD *)&v41 = &v45;
                *((_QWORD *)&v41 + 1) = <&T as core::fmt::Display>::fmt;
                *(_QWORD *)&v42 = &v39;
                *((_QWORD *)&v42 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                *(_QWORD *)&src = &unk_E9870;
                *((_QWORD *)&src + 1) = 3LL;
                v56.m256i_i64[0] = (__int64)&v41;
                *(_OWORD *)&v56.m256i_u64[1] = 2uLL;
                std::io::stdio::_eprint(&src);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                  v39,
                  v40);
              }
            }
            yes = uucore::read_yes();
            core::ptr::drop_in_place<alloc::string::String>(&v51);
            if ( yes )
              goto LABEL_35;
            v18 = 0LL;
LABEL_39:
            v19 = v18;
            goto LABEL_40;
          }
        }
LABEL_35:
        if ( !(unsigned __int8)uu_rm::remove(*((_QWORD *)&v38 + 1), v37, v36) )
        {
          core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v38, *((_QWORD *)&v38 + 1));
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
          return 0LL;
        }
        v18 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        goto LABEL_39;
      }
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, aAlways, 6LL) )
      {
        *(_QWORD *)&v45 = v14;
        *((_QWORD *)&v45 + 1) = v15;
        *(_QWORD *)&v41 = &v45;
        *((_QWORD *)&v41 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&src = &off_E9810;
        *((_QWORD *)&src + 1) = 2LL;
        v56.m256i_i64[0] = (__int64)&v41;
        *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
        core::option::Option<T>::map_or_else(&v53, &src);
        v56.m256i_i32[2] = 1;
        src = v53;
        v56.m256i_i64[0] = v54;
        v18 = alloc::boxed::Box<T>::new(&src);
        goto LABEL_39;
      }
    }
    LODWORD(v9) = 0;
    v10 = 2;
    goto LABEL_24;
  }
  if ( v37 )
    goto LABEL_13;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v41, aMissingOperand, 15LL);
  v56.m256i_i64[0] = v42;
  src = v41;
  v56.m256i_i32[2] = 1;
  v19 = alloc::boxed::Box<T>::new(&src);
LABEL_40:
  core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v38, *((_QWORD *)&v38 + 1));
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(dest);
  return v19;
}