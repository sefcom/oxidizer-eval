void *__fastcall uu_mv::uu_app(void *dest)
{
  __int64 v1; // rax
  _QWORD v3[79]; // [rsp+20h] [rbp-AD8h] BYREF
  int v4; // [rsp+298h] [rbp-860h]
  int v5; // [rsp+29Ch] [rbp-85Ch]
  _BYTE v6[24]; // [rsp+2A0h] [rbp-858h] BYREF
  _DWORD desta[175]; // [rsp+2B8h] [rbp-840h] BYREF
  __int64 v8; // [rsp+574h] [rbp-584h]
  int v9; // [rsp+57Ch] [rbp-57Ch]
  _DWORD src[178]; // [rsp+580h] [rbp-578h] BYREF
  const char *v11; // [rsp+848h] [rbp-2B0h] BYREF
  __int64 v12; // [rsp+850h] [rbp-2A8h]
  const char *v13; // [rsp+858h] [rbp-2A0h]
  __int64 v14; // [rsp+860h] [rbp-298h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(src, v1);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(
    v3,
    "{} [OPTION]... [-T] SOURCE DEST\n"
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
    104LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  v3[0] = &off_141610;
  v3[1] = <&T as core::fmt::Display>::fmt;
  v3[2] = &off_141600;
  v3[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)src = &unk_1415E0;
  *(_QWORD *)&src[2] = 2LL;
  *(_QWORD *)&src[8] = 0LL;
  *(_QWORD *)&src[4] = v3;
  *(_QWORD *)&src[6] = 2LL;
  core::option::Option<T>::map_or_else(v6, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v8 = *(_QWORD *)&src[175] | 0x8000000080LL;
  v9 = src[177];
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  v11 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n"
        "\n"
        "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOU"
        "RCE DEST\n"
        "{} [OPTION]... SOURCE... DIRECTORY\n"
        "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX."
        "\n"
        "The version control method may be selected via the --backup option or through\n"
        "the VERSION_CONTROL environment variable.  Here are the values:\n"
        "\n"
        "  none, off       never make backups (even if --backup is given)\n"
        "  numbered, t     make numbered backups\n"
        "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
        "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will"
        " take effect.\n"
        "\n"
        "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
        "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is"
        "\n"
        "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used"
        "\n"
        "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
        "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more con"
        "trol\n"
        "over which existing files in the destination are replaced, and its value can be one of the following:\n"
        "\n"
        "* all    This is the default operation when an --update option is not specified, and results in all existing fil"
        "es in the destination being replaced.\n"
        "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also "
        "skipping a file does not induce a failure.\n"
        "* older  This is the default operation when --update is specified, and results in files being replaced if they’r"
        "e older than the corresponding source file.override the usual backup suffix\x01";
  v12 = 11LL;
  v13 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n"
        "\n"
        "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOU"
        "RCE DEST\n"
        "{} [OPTION]... SOURCE... DIRECTORY\n"
        "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX."
        "\n"
        "The version control method may be selected via the --backup option or through\n"
        "the VERSION_CONTROL environment variable.  Here are the values:\n"
        "\n"
        "  none, off       never make backups (even if --backup is given)\n"
        "  numbered, t     make numbered backups\n"
        "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
        "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will"
        " take effect.\n"
        "\n"
        "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
        "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is"
        "\n"
        "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used"
        "\n"
        "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
        "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more con"
        "trol\n"
        "over which existing files in the destination are replaced, and its value can be one of the following:\n"
        "\n"
        "* all    This is the default operation when an --update option is not specified, and results in all existing fil"
        "es in the destination being replaced.\n"
        "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also "
        "skipping a file does not induce a failure.\n"
        "* older  This is the default operation when --update is specified, and results in files being replaced if they’r"
        "e older than the corresponding source file.override the usual backup suffix\x01";
  v14 = 10LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 105LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  v11 = (const char *)&unk_21A02;
  v12 = 5LL;
  v13 = "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n"
        "\n"
        "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOU"
        "RCE DEST\n"
        "{} [OPTION]... SOURCE... DIRECTORY\n"
        "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX."
        "\n"
        "The version control method may be selected via the --backup option or through\n"
        "the VERSION_CONTROL environment variable.  Here are the values:\n"
        "\n"
        "  none, off       never make backups (even if --backup is given)\n"
        "  numbered, t     make numbered backups\n"
        "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
        "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will"
        " take effect.\n"
        "\n"
        "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
        "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is"
        "\n"
        "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used"
        "\n"
        "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
        "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more con"
        "trol\n"
        "over which existing files in the destination are replaced, and its value can be one of the following:\n"
        "\n"
        "* all    This is the default operation when an --update option is not specified, and results in all existing fil"
        "es in the destination being replaced.\n"
        "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also "
        "skipping a file does not induce a failure.\n"
        "* older  This is the default operation when --update is specified, and results in files being replaced if they’r"
        "e older than the corresponding source file.override the usual backup suffix\x01";
  v14 = 10LL;
  clap_builder::builder::arg::Arg::overrides_with_all(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 110LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  v11 = (const char *)&unk_21A02;
  v12 = 5LL;
  v13 = "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n"
        "\n"
        "(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOU"
        "RCE DEST\n"
        "{} [OPTION]... SOURCE... DIRECTORY\n"
        "{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX."
        "\n"
        "The version control method may be selected via the --backup option or through\n"
        "the VERSION_CONTROL environment variable.  Here are the values:\n"
        "\n"
        "  none, off       never make backups (even if --backup is given)\n"
        "  numbered, t     make numbered backups\n"
        "  existing, nil   numbered if numbered backups exist, simple otherwise\n"
        "  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will"
        " take effect.\n"
        "\n"
        "Do not move a non-directory that has an existing destination with the same or newer modification timestamp;\n"
        "instead, silently skip the file without failing. If the move is across file system boundaries, the comparison is"
        "\n"
        "to the source timestamp truncated to the resolutions of the destination file system and of the system calls used"
        "\n"
        "to update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\n"
        "and destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more con"
        "trol\n"
        "over which existing files in the destination are replaced, and its value can be one of the following:\n"
        "\n"
        "* all    This is the default operation when an --update option is not specified, and results in all existing fil"
        "es in the destination being replaced.\n"
        "* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also "
        "skipping a file does not induce a failure.\n"
        "* older  This is the default operation when --update is specified, and results in files being replaced if they’r"
        "e older than the corresponding source file.override the usual backup suffix\x01";
  v14 = 11LL;
  clap_builder::builder::arg::Arg::overrides_with_all(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v3, desta);
  clap_builder::builder::arg::Arg::help(desta, v3);
  clap_builder::builder::arg::Arg::action(v3, desta, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::backup_control::arguments::backup(v3);
  clap_builder::builder::command::Command::arg(src, desta);
  uucore::features::backup_control::arguments::backup_no_args(v3);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::backup_control::arguments::suffix(v3);
  clap_builder::builder::command::Command::arg(src, desta);
  uucore::features::update_control::arguments::update(v3);
  clap_builder::builder::command::Command::arg(desta, src);
  uucore::features::update_control::arguments::update_no_args(v3);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 116LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::value_name(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::arg::Arg::conflicts_with(desta, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 84LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v11, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::short(v3, desta, 118LL);
  clap_builder::builder::arg::Arg::long(desta, v3);
  clap_builder::builder::arg::Arg::help(v3, desta);
  clap_builder::builder::arg::Arg::action(&v11, v3, 2LL);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 103LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v11, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::action(v3, desta, 1LL);
  clap_builder::builder::arg::Arg::num_args(desta, v3);
  memcpy(v3, desta, sizeof(v3));
  v4 = desta[158] | 1;
  v5 = desta[159];
  clap_builder::builder::arg::Arg::value_parser(desta, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, desta);
  clap_builder::builder::command::Command::arg(desta, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}