long long uu_mv::uu_app::h1ecbc8af3b6d204b(unsigned long long a0, unsigned long a1, unsigned long a2)
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
    unsigned long long v17;  // [sp-0x530]
    unsigned long long v18;  // [sp-0x528]
    void* v19;  // [sp-0x520]
    char v20;  // [bp-0x284]
    char v21;  // [bp-0x27c]
    unsigned long v22;  // [sp-0x278], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x270]
    unsigned long long v24;  // [sp-0x268]
    unsigned long long v25;  // [sp-0x260]
    unsigned long long v27;  // rdx

    clap_builder::builder::command::Command::new::h4a287545efc3966f(&v15, uucore::util_name::h412db5e565a079f3(), v27);
    clap_builder::builder::command::Command::version::h0f09afa79a02f24a(&v9, &v15, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h061964e410cabade(&v15, &v9, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.", 64);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsWhen specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -", 104);
    clap_builder::builder::command::Command::override_usage::heaf1fb69c0020b1f(&v9, &v15, &v3);
    v3 = &g_587020;
    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
    v5 = &g_587010;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
    v15 = &g_587030;
    v16 = 2;
    v19 = 0;
    v17 = &v3;
    v18 = 2;
    ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v14, &v15);
    clap_builder::builder::command::Command::after_help::h6c50d7b63713bb1d(&v15, &v9, &v14);
    memcpy(&v9, &v15, 700);
    v12 = 549755814016 | *((long long *)&v20);
    v13 = *((int *)&v21);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v15, "force", 5);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v15, 102);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v15, &v3, "force", 5);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v15, "do not prompt before overwriting' to a subdirectory of itself, 'src/uucore/src/lib/mods/error.rs", 32);
    v22 = "interactive";
    v23 = 11;
    v24 = "no-clobber";
    v25 = 10;
    clap_builder::builder::arg::Arg::overrides_with_all::h3d14953faae65c4d(&v15, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v9, "interactive", 11);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v9, 105);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v9, &v3, "interactive", 11);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v9, "prompt before override", 22);
    v22 = "force";
    v23 = 5;
    v24 = "no-clobber";
    v25 = 10;
    clap_builder::builder::arg::Arg::overrides_with_all::h3d14953faae65c4d(&v9, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v15, "no-clobber", 10);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v15, 110);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v15, &v3, "no-clobber", 10);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v15, "do not overwrite an existing file", 33);
    v22 = "force";
    v23 = 5;
    v24 = "interactive";
    v25 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all::h3d14953faae65c4d(&v15, &v3, &v22);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v9, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v3, &v9, "strip-trailing-slashes", 22);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v9, &v3, "remove any trailing slashes from each SOURCE argument", 53);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    uucore::features::backup_control::arguments::backup::h94d489eabddd6e27(&v3);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v3);
    uucore::features::backup_control::arguments::backup_no_args::hb69ce73ec840fc19(&v3);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    uucore::features::backup_control::arguments::suffix::h2f72f755bdb4d605(&v3);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v3);
    uucore::features::update_control::arguments::update::h5f8b6fb0eea8d216(&v3);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    uucore::features::update_control::arguments::update_no_args::h60edf03ed24e96fb(&v3);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v9, "target-directory", 16);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v9, 116);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v9, &v3, "target-directory", 16);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v9, "move all SOURCE arguments into DIRECTORY", 40);
    clap_builder::builder::arg::Arg::value_name::hce9196aa2efac756(&v9, &v3, v27);
    clap_builder::builder::arg::Arg::value_hint::h6cfbc1ebaf483c28(&v3, &v9, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h656b71f375ee57b8(&v9, &v3, "no-target-directory", 19);
    v0 = 2;
    v24 = *((long long *)&v2);
    v22 = v0;
    v23 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h0eff7fb31b4f15ba(&v3, &v9, &v22);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v15, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v15, 84);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v15, &v3, "no-target-directory", 19);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v15, "treat DEST as a normal file", 27);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v22);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v9, "verbose", 7);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v9, 118);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v9, &v3, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v9, "explain what is being done", 26);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v22);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v15, "progress", 8);
    clap_builder::builder::arg::Arg::short::he8288feab3132daa(&v3, &v15, 103);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v15, &v3, "progress", 8);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v3, &v15, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.", 78);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v22, &v3, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v15, &v9, &v22);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v9, "files", 5);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v9, 1);
    clap_builder::builder::arg::Arg::num_args::h254ca1622ef78259(&v9, &v3);
    memcpy(&v3, &v9, 584);
    v7 = *((int *)&v10) | 1;
    v8 = *((int *)&v11);
    clap_builder::builder::arg::Arg::value_parser::h0eff7fb31b4f15ba(&v9, &v3, &v0);
    clap_builder::builder::arg::Arg::value_hint::h6cfbc1ebaf483c28(&v3, &v9, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(&v9, &v15, &v3);
    clap_builder::builder::arg::Arg::new::habf5a2733be14a6e(&v15, "debug", 5);
    clap_builder::builder::arg::Arg::long::h75104e67178377b4(&v3, &v15, "debug", 5);
    clap_builder::builder::arg::Arg::help::h01aefbb75ea48db5(&v15, &v3, "explain how a file is copied. Implies -vbacking up  might destroy source;   not moved", 40);
    clap_builder::builder::arg::Arg::action::h1dc70d7ecfeb40f5(&v3, &v15, 2);
    clap_builder::builder::command::Command::arg::h98b2d4953d4269ae(a0, &v9, &v3);
    return a0;
}
