__int64 __fastcall uu_mv::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // r15
  const char *v5; // rsi
  void (__fastcall __noreturn *v6)(); // rax
  const char *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r14
  char v12; // bp
  __int8 v13; // bl
  char updated; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // r15
  char v19; // r12
  char v20; // r13
  char v21; // al
  __int64 v23; // r14
  char v24; // [rsp+Eh] [rbp-43Ah]
  char flag; // [rsp+Fh] [rbp-439h]
  __m256i v26; // [rsp+10h] [rbp-438h] BYREF
  __int128 v27; // [rsp+30h] [rbp-418h]
  const char *v28; // [rsp+40h] [rbp-408h]
  __int64 v29; // [rsp+48h] [rbp-400h]
  __int64 v30; // [rsp+60h] [rbp-3E8h]
  __int64 v31; // [rsp+68h] [rbp-3E0h]
  __int64 v32; // [rsp+70h] [rbp-3D8h]
  __m256i v33; // [rsp+78h] [rbp-3D0h] BYREF
  __int128 v34; // [rsp+98h] [rbp-3B0h]
  const char *v35; // [rsp+A8h] [rbp-3A0h]
  __int128 v36; // [rsp+B0h] [rbp-398h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-388h]
  __int128 v38; // [rsp+D0h] [rbp-378h]
  const char *v39; // [rsp+E0h] [rbp-368h]
  __int64 v40; // [rsp+E8h] [rbp-360h]
  char v41[8]; // [rsp+F0h] [rbp-358h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-350h]
  __int64 v43; // [rsp+100h] [rbp-348h]
  __int128 v44; // [rsp+108h] [rbp-340h] BYREF
  __int64 v45; // [rsp+118h] [rbp-330h]
  __int128 v46; // [rsp+120h] [rbp-328h] BYREF
  __int64 v47; // [rsp+130h] [rbp-318h]
  _BYTE v48[24]; // [rsp+138h] [rbp-310h] BYREF
  _BYTE dest[760]; // [rsp+150h] [rbp-2F8h] BYREF

  uu_mv::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from_mut(&v26, dest, a1, a2);
  if ( __OFSUB__(-v26.m256i_i64[0], 1LL) )
  {
    v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           v26.m256i_i64[1],
           dest,
           v2,
           -v26.m256i_i64[0]);
    goto LABEL_22;
  }
  v35 = v28;
  v34 = v27;
  v33 = v26;
  v4 = (__int64)*(&uu_mv::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v26,
    &v33,
    "filesdebug\n"
    "\n"
    "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE "
    "DEST\n"
    "{} [OPTION]... SOURCE... DIRECTORY\n"
    "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
    "The version control method may be selected via the --backup option or through\n"
    "the VERSION_CONTROL environment variable.  Here are the values:\n"
    "\n"
    "  none, off       never make backups (even if --backup is given)\n"
    "  numbered, t     make numbered backups\n"
    "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
    "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will tak"
    "e effect.\n"
    "\n"
    "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
    "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\n"
    "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used\n"
    "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
    "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control"
    "\n"
    "over which existing files in the destination are replaced, and its value can be one of the following:\n"
    "\n"
    "* all    This is the default operation when an --update option is not specified, and results in all existing files i"
    "n the destination being replaced.\n"
    "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skip"
    "ping a file does not induce a failure.\n"
    "* older  This is the default operation when --update is specified, and results in files being replaced if they’re ol"
    "der than the corresponding source file.override the usual backup suffix\x01",
    v4);
  v5 = "filesdebug\n"
       "\n"
       "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOUR"
       "CE DEST\n"
       "{} [OPTION]... SOURCE... DIRECTORY\n"
       "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
       "The version control method may be selected via the --backup option or through\n"
       "the VERSION_CONTROL environment variable.  Here are the values:\n"
       "\n"
       "  none, off       never make backups (even if --backup is given)\n"
       "  numbered, t     make numbered backups\n"
       "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
       "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will "
       "take effect.\n"
       "\n"
       "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
       "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\n"
       "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used\n"
       "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
       "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more cont"
       "rol\n"
       "over which existing files in the destination are replaced, and its value can be one of the following:\n"
       "\n"
       "* all    This is the default operation when an --update option is not specified, and results in all existing file"
       "s in the destination being replaced.\n"
       "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also s"
       "kipping a file does not induce a failure.\n"
       "* older  This is the default operation when --update is specified, and results in files being replaced if they’re"
       " older than the corresponding source file.override the usual backup suffix\x01";
  clap_builder::parser::error::MatchesError::unwrap(
    &v36,
    "filesdebug\n"
    "\n"
    "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE "
    "DEST\n"
    "{} [OPTION]... SOURCE... DIRECTORY\n"
    "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\n"
    "The version control method may be selected via the --backup option or through\n"
    "the VERSION_CONTROL environment variable.  Here are the values:\n"
    "\n"
    "  none, off       never make backups (even if --backup is given)\n"
    "  numbered, t     make numbered backups\n"
    "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
    "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will tak"
    "e effect.\n"
    "\n"
    "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
    "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\n"
    "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used\n"
    "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
    "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control"
    "\n"
    "over which existing files in the destination are replaced, and its value can be one of the following:\n"
    "\n"
    "* all    This is the default operation when an --update option is not specified, and results in all existing files i"
    "n the destination being replaced.\n"
    "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skip"
    "ping a file does not induce a failure.\n"
    "* older  This is the default operation when --update is specified, and results in files being replaced if they’re ol"
    "der than the corresponding source file.override the usual backup suffix\x01",
    v4,
    &v26);
  v6 = (void (__fastcall __noreturn *)())v36;
  if ( (_QWORD)v36 )
  {
    v7 = (const char *)*((_QWORD *)&v36 + 1);
    v8 = v37;
    v9 = v38;
    v5 = v39;
    v10 = v40;
  }
  else
  {
    v9 = 0LL;
    v8 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v6 = core::ops::function::FnOnce::call_once;
    v10 = 0LL;
  }
  v26.m256i_i64[0] = (__int64)v6;
  v26.m256i_i64[1] = (__int64)v7;
  *(_OWORD *)&v26.m256i_u64[2] = v8;
  v27 = v9;
  v28 = v5;
  v29 = v10;
  core::iter::traits::iterator::Iterator::collect(v41, &v26);
  v11 = v43;
  if ( v43 == 1
    && !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                           &v33,
                           aTargetDirector,
                           *(&uu_mv::OPT_TARGET_DIRECTORY + 1)) )
  {
    *(_QWORD *)&v36 = &uu_mv::ARG_FILES;
    *((_QWORD *)&v36 + 1) = <&T as core::fmt::Display>::fmt;
    v26.m256i_i64[0] = (__int64)&off_140570;
    v26.m256i_i64[1] = 2LL;
    *(_QWORD *)&v27 = 0LL;
    v26.m256i_i64[2] = (__int64)&v36;
    v26.m256i_i64[3] = 1LL;
    core::option::Option<T>::map_or_else(v48, &v26);
    v23 = clap_builder::error::Error<F>::raw(v48);
    clap_builder::error::Error<F>::format(v23, dest);
    v26.m256i_i64[0] = v23;
    clap_builder::error::Error<F>::exit(&v26);
  }
  v12 = uu_mv::determine_overwrite_mode(&v33);
  uucore::features::backup_control::determine_backup_mode(&v26, &v33);
  v13 = v26.m256i_i8[8];
  v3 = v26.m256i_i64[0];
  if ( v26.m256i_i64[0] )
  {
LABEL_9:
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v41);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
    goto LABEL_22;
  }
  updated = uucore::features::update_control::determine_update_mode(&v33);
  if ( v13 && updated & 1 | (v12 == 0) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
      &v36,
      "cannot combine --backup with -n/--no-clobber or --update=none-failUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGEN"
      "OEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYE"
      "FBIGENOSPCESPIPEEROFSEMLINKEPIPE",
      66LL);
    v26.m256i_i64[2] = v37;
    *(_OWORD *)v26.m256i_i8 = v36;
    v26.m256i_i32[6] = 1;
    v3 = alloc::boxed::Box<T>::new(&v26);
    goto LABEL_9;
  }
  uucore::features::backup_control::determine_backup_suffix(&v44, &v33);
  v15 = (__int64)*(&uu_mv::OPT_TARGET_DIRECTORY + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v26, &v33, aTargetDirector, v15);
  v16 = clap_builder::parser::error::MatchesError::unwrap(aTargetDirector, v15, &v26);
  if ( v16 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, *(_QWORD *)(v16 + 8), *(_QWORD *)(v16 + 16));
    v30 = v26.m256i_i64[1];
    v17 = v26.m256i_i64[0];
    v32 = v26.m256i_i64[2];
    if ( v26.m256i_i64[0] == 0x8000000000000000LL )
    {
      v31 = 0x8000000000000000LL;
      v24 = updated;
    }
    else
    {
      if ( !(unsigned __int8)std::path::Path::is_dir() )
      {
        *(_QWORD *)&v36 = 1LL;
        *((_QWORD *)&v36 + 1) = v30;
        *(_QWORD *)&v37 = v32;
        BYTE8(v37) = 1;
        <T as alloc::string::SpecToString>::spec_to_string(&v46, &v36);
        v26.m256i_i64[3] = v47;
        *(_OWORD *)&v26.m256i_u64[1] = v46;
        v26.m256i_i64[0] = 7LL;
        v3 = alloc::boxed::Box<T>::new(&v26);
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v17, v30);
        core::ptr::drop_in_place<alloc::string::String>(&v44);
        goto LABEL_9;
      }
      v24 = updated;
      v31 = v17;
    }
  }
  else
  {
    v31 = 0x8000000000000000LL;
    v24 = updated;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           &v33,
           "no-target-directoryverbosefilesdebug\n"
           "\n"
           "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] "
           "SOURCE DEST\n"
           "{} [OPTION]... SOURCE... DIRECTORY\n"
           "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFF"
           "IX.\n"
           "The version control method may be selected via the --backup option or through\n"
           "the VERSION_CONTROL environment variable.  Here are the values:\n"
           "\n"
           "  none, off       never make backups (even if --backup is given)\n"
           "  numbered, t     make numbered backups\n"
           "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
           "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one w"
           "ill take effect.\n"
           "\n"
           "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
           "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison"
           " is\n"
           "to the source timestamp truncated to the resolutions of the destination file system and of the system calls u"
           "sed\n"
           "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
           "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more "
           "control\n"
           "over which existing files in the destination are replaced, and its value can be one of the following:\n"
           "\n"
           "* all    This is the default operation when an --update option is not specified, and results in all existing "
           "files in the destination being replaced.\n"
           "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but al"
           "so skipping a file does not induce a failure.\n"
           "* older  This is the default operation when --update is specified, and results in files being replaced if the"
           "y’re older than the corresponding source file.override the usual backup suffix\x01",
           *(&uu_mv::OPT_NO_TARGET_DIRECTORY + 1));
  v18 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           &v33,
                           "verbosefilesdebug\n"
                           "\n"
                           "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} ["
                           "OPTION]... [-T] SOURCE DEST\n"
                           "{} [OPTION]... SOURCE... DIRECTORY\n"
                           "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SI"
                           "MPLE_BACKUP_SUFFIX.\n"
                           "The version control method may be selected via the --backup option or through\n"
                           "the VERSION_CONTROL environment variable.  Here are the values:\n"
                           "\n"
                           "  none, off       never make backups (even if --backup is given)\n"
                           "  numbered, t     make numbered backups\n"
                           "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
                           "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only"
                           " the final one will take effect.\n"
                           "\n"
                           "Do not move a non-directory that has an existing destination with the same or newer modificat"
                           "ion timestamp;\n"
                           "instead, silently skip the file without failing. If the move is across file system boundaries"
                           ", the comparison is\n"
                           "to the source timestamp truncated to the resolutions of the destination file system and of th"
                           "e system calls used\n"
                           "to update timestamps; this avoids duplicate work if several mv -u commands are executed with "
                           "the same source\n"
                           "and destination. This option is ignored if the -n or --no-clobber option is also specified. w"
                           "hich gives more control\n"
                           "over which existing files in the destination are replaced, and its value can be one of the fo"
                           "llowing:\n"
                           "\n"
                           "* all    This is the default operation when an --update option is not specified, and results "
                           "in all existing files in the destination being replaced.\n"
                           "* none   This is similar to the --no-clobber option, in that no files in the destination are "
                           "replaced, but also skipping a file does not induce a failure.\n"
                           "* older  This is the default operation when --update is specified, and results in files being"
                           " replaced if they’re older than the corresponding source file.override the usual backup suffix\x01",
                           *(&uu_mv::OPT_VERBOSE + 1)) )
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            &v33,
            "debug\n"
            "\n"
            "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T]"
            " SOURCE DEST\n"
            "{} [OPTION]... SOURCE... DIRECTORY\n"
            "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUF"
            "FIX.\n"
            "The version control method may be selected via the --backup option or through\n"
            "the VERSION_CONTROL environment variable.  Here are the values:\n"
            "\n"
            "  none, off       never make backups (even if --backup is given)\n"
            "  numbered, t     make numbered backups\n"
            "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
            "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one "
            "will take effect.\n"
            "\n"
            "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
            "instead, silently skip the file without failing. If the move is across file system boundaries, the compariso"
            "n is\n"
            "to the source timestamp truncated to the resolutions of the destination file system and of the system calls "
            "used\n"
            "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source"
            "\n"
            "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more"
            " control\n"
            "over which existing files in the destination are replaced, and its value can be one of the following:\n"
            "\n"
            "* all    This is the default operation when an --update option is not specified, and results in all existing"
            " files in the destination being replaced.\n"
            "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but a"
            "lso skipping a file does not induce a failure.\n"
            "* older  This is the default operation when --update is specified, and results in files being replaced if th"
            "ey’re older than the corresponding source file.override the usual backup suffix\x01",
            *(&uu_mv::OPT_DEBUG + 1));
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v33,
          "strip-trailing-slashesno-target-directoryverbosefilesdebug\n"
          "\n"
          "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] S"
          "OURCE DEST\n"
          "{} [OPTION]... SOURCE... DIRECTORY\n"
          "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFI"
          "X.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n"
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one wi"
          "ll take effect.\n"
          "\n"
          "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
          "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison "
          "is\n"
          "to the source timestamp truncated to the resolutions of the destination file system and of the system calls us"
          "ed\n"
          "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
          "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more c"
          "ontrol\n"
          "over which existing files in the destination are replaced, and its value can be one of the following:\n"
          "\n"
          "* all    This is the default operation when an --update option is not specified, and results in all existing f"
          "iles in the destination being replaced.\n"
          "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but als"
          "o skipping a file does not induce a failure.\n"
          "* older  This is the default operation when --update is specified, and results in files being replaced if they"
          "’re older than the corresponding source file.override the usual backup suffix\x01",
          *(&uu_mv::OPT_STRIP_TRAILING_SLASHES + 1));
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aProgress, *(&uu_mv::OPT_PROGRESS + 1));
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          &v33,
          "debug\n"
          "\n"
          "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] S"
          "OURCE DEST\n"
          "{} [OPTION]... SOURCE... DIRECTORY\n"
          "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFI"
          "X.\n"
          "The version control method may be selected via the --backup option or through\n"
          "the VERSION_CONTROL environment variable.  Here are the values:\n"
          "\n"
          "  none, off       never make backups (even if --backup is given)\n"
          "  numbered, t     make numbered backups\n"
          "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
          "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one wi"
          "ll take effect.\n"
          "\n"
          "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
          "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison "
          "is\n"
          "to the source timestamp truncated to the resolutions of the destination file system and of the system calls us"
          "ed\n"
          "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
          "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more c"
          "ontrol\n"
          "over which existing files in the destination are replaced, and its value can be one of the following:\n"
          "\n"
          "* all    This is the default operation when an --update option is not specified, and results in all existing f"
          "iles in the destination being replaced.\n"
          "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but als"
          "o skipping a file does not induce a failure.\n"
          "* older  This is the default operation when --update is specified, and results in files being replaced if they"
          "’re older than the corresponding source file.override the usual backup suffix\x01",
          *(&uu_mv::OPT_DEBUG + 1));
  BYTE5(v28) = v12;
  BYTE6(v28) = v13;
  *(_OWORD *)v26.m256i_i8 = v44;
  v26.m256i_i64[2] = v45;
  HIBYTE(v28) = v24;
  v26.m256i_i64[3] = v31;
  *(_QWORD *)&v27 = v30;
  *((_QWORD *)&v27 + 1) = v32;
  LOBYTE(v28) = flag;
  BYTE1(v28) = v18;
  BYTE2(v28) = v19;
  BYTE3(v28) = v20;
  BYTE4(v28) = v21;
  v3 = uu_mv::mv(v42, v11, &v26);
  core::ptr::drop_in_place<uu_mv::Options>(&v26);
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v41);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
LABEL_22:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  return v3;
}