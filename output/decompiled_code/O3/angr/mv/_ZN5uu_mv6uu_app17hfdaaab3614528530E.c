long long uu_mv::uu_app::hfdaaab3614528530(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0xa88]
    char v1;  // [bp-0xa80]
    char v2;  // [bp-0xa78]
    char v3;  // [bp-0xa70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa68]
    unsigned long long v5;  // [sp-0xa60]
    unsigned long long v6;  // [sp-0xa58]
    unsigned int v7;  // [sp-0x828]
    unsigned int v8;  // [sp-0x824]
    char v9;  // [bp-0x820]
    char v10;  // [bp-0x5d8]
    char v11;  // [bp-0x5d4]
    unsigned long long v12;  // [sp-0x564]
    unsigned int v13;  // [sp-0x55c]
    char v14;  // [bp-0x558]
    char v15;  // [bp-0x540], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x538]
    char *v17;  // [sp-0x530]
    unsigned long long v18;  // [sp-0x528]
    void* v19;  // [sp-0x520]
    char v20;  // [bp-0x284]
    char v21;  // [bp-0x27c]
    unsigned long v22;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x270]
    unsigned long long v24;  // [sp-0x268]
    unsigned long long v25;  // [sp-0x260]
    unsigned long long v27;  // rdx

    clap_builder::builder::command::Command::new::h3ac40d4d2ba218e2(&v15, uucore::util_name::h60d842bf27b05e82(), v27);
    clap_builder::builder::command::Command::version::h3a5176627196e52e(&v9, &v15, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h1d1180b4bea582ed(&v15, &v9, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.", 64);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...", 104);
    clap_builder::builder::command::Command::override_usage::h447655dada94692d(&v9, &v15, &v3);
    v3 = &g_587db0;
    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
    v5 = &g_587da0;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
    v15 = &g_587dc0;
    v16 = 2;
    v19 = 0;
    v17 = &v3;
    v18 = 2;
    ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v14, &v15);
    clap_builder::builder::command::Command::after_help::hffed433d7565392e(&v15, &v9, &v14);
    memcpy(&v9, &v15, 700);
    v12 = 549755814016 | *((long long *)&v20);
    v13 = *((int *)&v21);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v15, "force", 5);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v15, 102);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v15, &v3, "force", 5);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v15, "do not prompt before overwriting' to a subdirectory of itself, 'src/uucore/src/lib/mods/error.rs", 32);
    v22 = "interactive";
    v23 = 11;
    v24 = "no-clobber";
    v25 = 10;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&v15, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v9, "interactive", 11);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v9, 105);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v9, &v3, "interactive", 11);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v9, "prompt before override", 22);
    v22 = "force";
    v23 = 5;
    v24 = "no-clobber";
    v25 = 10;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&v9, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v15, "no-clobber", 10);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v15, 110);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v15, &v3, "no-clobber", 10);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v15, "do not overwrite an existing file", 33);
    v22 = "force";
    v23 = 5;
    v24 = "interactive";
    v25 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h23a4bf7baf701fb5(&v15, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v9, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v3, &v9, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v9, &v3, "remove any trailing slashes from each SOURCE argument", 53);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    uucore::features::backup_control::arguments::backup::h804b9c4d220a6bfa(&v3);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v3);
    uucore::features::backup_control::arguments::backup_no_args::h7f5ee465b0f6b670(&v3);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    uucore::features::backup_control::arguments::suffix::h659b6e9a409bb614(&v3);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v3);
    uucore::features::update_control::arguments::update::h43d52bfaa3e04136(&v3);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    uucore::features::update_control::arguments::update_no_args::h0df581fe31ef9923(&v3);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v9, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v9, 116);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v9, &v3, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v9, "move all SOURCE arguments into DIRECTORY", 40);
    clap_builder::builder::arg::Arg::value_name::h6c7f718e13d12b61(&v9, &v3, v27);
    clap_builder::builder::arg::Arg::value_hint::hd834dc4c6585e22d(&v3, &v9, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h84a620ed2b3e8926(&v9, &v3, "no-target-directory", 19);
    v0 = 2;
    v24 = *((long long *)&v2);
    v22 = v0;
    v23 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h36c41d5fcbf32a50(&v3, &v9, &v22);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v15, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v15, 84);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v15, &v3, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v15, "treat DEST as a normal file", 27);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v22);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v9, "verbose", 7);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v9, 118);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v9, &v3, "verbose", 7);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v9, "explain what is being done", 26);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v22);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v15, "progress", 8);
    clap_builder::builder::arg::Arg::short::hdbbca410bd052cab(&v3, &v15, 103);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v15, &v3, "progress", 8);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v3, &v15, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.", 78);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v15, &v9, &v22);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v9, "files", 5);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v9, 1);
    clap_builder::builder::arg::Arg::num_args::hf9359e8da3676a05(&v9, &v3);
    memcpy(&v3, &v9, 584);
    v7 = *((int *)&v10) | 1;
    v8 = *((int *)&v11);
    clap_builder::builder::arg::Arg::value_parser::h36c41d5fcbf32a50(&v9, &v3, &v0);
    clap_builder::builder::arg::Arg::value_hint::hd834dc4c6585e22d(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::h412655cb859ad9ef(&v15, "debugThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or -", 5);
    clap_builder::builder::arg::Arg::long::hed17bfa77e83592d(&v3, &v15, "debugThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or -", 5);
    clap_builder::builder::arg::Arg::help::hfb37332b8e05b438(&v15, &v3, "explain how a file is copied. Implies -vbacking up  might destroy source;   not moved: overwrite ?  \n", 40);
    clap_builder::builder::arg::Arg::action::h1e93e8b84edc4ec8(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h6ced883a66281c56(a0, &v9, &v3);
    return a0;
}
