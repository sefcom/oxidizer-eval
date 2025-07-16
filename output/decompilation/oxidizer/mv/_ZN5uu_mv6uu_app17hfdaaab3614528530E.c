fn uu_mv::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa88]
    let v1: u192;  // [bp-0xa88]
    let v2: struct584;  // [bp-0xa70], Other Possible Types: u8
    let v3: u32;  // [bp-0x828]
    let v4: u32;  // [bp-0x824]
    let v5: u8;  // [bp-0x820]
    let v6: u32;  // [bp-0x5d8]
    let v7: i8;  // [bp-0x5d4]
    let v8: u64;  // [bp-0x564]
    let v9: u32;  // [bp-0x55c]
    let v10: alloc::string::String;  // [bp-0x558]
    let v11: struct437;  // [bp-0x540]
    let v12: u64;  // [bp-0x284]
    let v13: u32;  // [bp-0x27c]
    let v14: u256;  // [bp-0x278]
    let v17: u64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v17);
    clap_builder::builder::command::Command::version(&v5, &v11, "0.0.28");
    clap_builder::builder::command::Command::about(&v11, &v5, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.");
    uucore::format_usage(&v2, "{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...");
    clap_builder::builder::command::Command::override_usage(&v5, &v11, &v2);
    v10 = format!("{}\n\n{}", "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    clap_builder::builder::command::Command::after_help(&v11 as u384, &v5, &v10);
    memcpy(&v5, &v11 as u384, 700);
    v8 = 549755814016 | v12;
    v9 = v13;
    clap_builder::builder::arg::Arg::new(&v11 as u384, "force");
    clap_builder::builder::arg::Arg::short(&v2, &v11 as u384, 102);
    clap_builder::builder::arg::Arg::long(&v11 as u384, &v2, "force");
    clap_builder::builder::arg::Arg::help(&v2, &v11 as u384, "do not prompt before overwriting");
    v14 = struct32 {
        field_0: &g_426231
        field_8: 11
        field_16: &g_42623c
        field_24: 10
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v11 as u384, &v2, &v14);
    clap_builder::builder::arg::Arg::action(&v2, &v11 as u384, 2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v2);
    clap_builder::builder::arg::Arg::new(&v5, "interactive");
    clap_builder::builder::arg::Arg::short(&v2, &v5, 105);
    clap_builder::builder::arg::Arg::long(&v5, &v2, "interactive");
    clap_builder::builder::arg::Arg::help(&v2, &v5, "prompt before override");
    v14 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_42623c
        field_24: 10
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v5, &v2, &v14);
    clap_builder::builder::arg::Arg::action(&v2, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    clap_builder::builder::arg::Arg::new(&v11 as u384, "no-clobber");
    clap_builder::builder::arg::Arg::short(&v2, &v11 as u384, 110);
    clap_builder::builder::arg::Arg::long(&v11 as u384, &v2, "no-clobber");
    clap_builder::builder::arg::Arg::help(&v2, &v11 as u384, "do not overwrite an existing file");
    v14 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_426231
        field_24: 11
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v11 as u384, &v2, &v14);
    clap_builder::builder::arg::Arg::action(&v2, &v11 as u384, 2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v2);
    clap_builder::builder::arg::Arg::new(&v5, "strip-trailing-slashes");
    clap_builder::builder::arg::Arg::long(&v2, &v5, "strip-trailing-slashes");
    clap_builder::builder::arg::Arg::help(&v5, &v2, "remove any trailing slashes from each SOURCE argument");
    clap_builder::builder::arg::Arg::action(&v2, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    uucore::features::backup_control::arguments::backup(&v2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v2);
    uucore::features::backup_control::arguments::backup_no_args(&v2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    v2 = uucore::features::backup_control::arguments::suffix();
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v2);
    uucore::features::update_control::arguments::update(&v2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    uucore::features::update_control::arguments::update_no_args(&v2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v2);
    clap_builder::builder::arg::Arg::new(&v5, "target-directory");
    clap_builder::builder::arg::Arg::short(&v2, &v5, 116);
    clap_builder::builder::arg::Arg::long(&v5, &v2, "target-directory");
    clap_builder::builder::arg::Arg::help(&v2, &v5, "move all SOURCE arguments into DIRECTORY");
    clap_builder::builder::arg::Arg::value_name(&v5, &v2);
    clap_builder::builder::arg::Arg::value_hint(&v2, &v5, 4);
    clap_builder::builder::arg::Arg::conflicts_with(&v5, &v2, "no-target-directory");
    v0 = 2;
    v14 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v2, &v5, &v14);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    clap_builder::builder::arg::Arg::new(&v11 as u384, "no-target-directory");
    clap_builder::builder::arg::Arg::short(&v2, &v11 as u384, 84);
    clap_builder::builder::arg::Arg::long(&v11 as u384, &v2, "no-target-directory");
    clap_builder::builder::arg::Arg::help(&v2, &v11 as u384, "treat DEST as a normal file");
    clap_builder::builder::arg::Arg::action(&v14, &v2, 2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v14);
    clap_builder::builder::arg::Arg::new(&v5, "verbose");
    clap_builder::builder::arg::Arg::short(&v2, &v5, 118);
    clap_builder::builder::arg::Arg::long(&v5, &v2, "verbose");
    clap_builder::builder::arg::Arg::help(&v2, &v5, "explain what is being done");
    clap_builder::builder::arg::Arg::action(&v14, &v2, 2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v14);
    clap_builder::builder::arg::Arg::new(&v11 as u384, "progress");
    clap_builder::builder::arg::Arg::short(&v2, &v11 as u384, 103);
    clap_builder::builder::arg::Arg::long(&v11 as u384, &v2, "progress");
    clap_builder::builder::arg::Arg::help(&v2, &v11 as u384, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.");
    clap_builder::builder::arg::Arg::action(&v14, &v2, 2);
    clap_builder::builder::command::Command::arg(&v11 as u384, &v5, &v14);
    clap_builder::builder::arg::Arg::new(&v5, "files");
    clap_builder::builder::arg::Arg::action(&v2, &v5, 1);
    clap_builder::builder::arg::Arg::num_args(&v5, &v2);
    memcpy(&v2, &v5, 584);
    v3 = v6 | 1;
    v4 = *(&v7 as &i32);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v2, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v2, &v5, 2);
    clap_builder::builder::command::Command::arg(&v5, &v11 as u384, &v2);
    clap_builder::builder::arg::Arg::new(&v11 as u384, "debug");
    clap_builder::builder::arg::Arg::long(&v2, &v11 as u384, "debug");
    clap_builder::builder::arg::Arg::help(&v11 as u384, &v2, "explain how a file is copied. Implies -v");
    clap_builder::builder::arg::Arg::action(&v2, &v11 as u384, 2);
    clap_builder::builder::command::Command::arg(a0, &v5, &v2);
    return a0;
}
