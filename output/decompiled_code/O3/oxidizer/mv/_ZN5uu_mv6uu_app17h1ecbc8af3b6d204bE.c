fn uu_mv::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0xa88]
    let v1: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x820], Other Possible Types: struct592, struct712
    let v3: i192;  // [sp-0x558]
    let v4: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v5: i4736;  // [bp-0x278], Other Possible Types: struct32, struct592
    let v7: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v2 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v4 = clap_builder::builder::command::Command::about(&v2, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.");
    v1 = uucore::format_usage(&g_425fc6, 104);
    v2 = clap_builder::builder::command::Command::override_usage(&v4, &v1);
    v3 = format!("{:?}\n\n{:?}", "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v4 = clap_builder::builder::command::Command::after_help(&v2, &v3);
    memcpy(&v2, &v4, 700);
    v2.700 = 549755814016 | (stack_base)[644] as i64;
    v2.708 = (stack_base)[636] as i32;
    v4 = clap_builder::builder::arg::Arg::new("force");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 102);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "do not prompt before overwriting");
    v5 = struct32 {
        field_0: &g_425f31
        field_8: 11
        field_16: &g_425f3c
        field_24: 10
    };
    v4 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("interactive");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 105);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "interactive");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "prompt before override");
    v5 = struct32 {
        field_0: &g_425f2c
        field_8: 5
        field_16: &g_425f3c
        field_24: 10
    };
    v2 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("no-clobber");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 110);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "no-clobber");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "do not overwrite an existing file");
    v5 = struct32 {
        field_0: &g_425f2c
        field_8: 5
        field_16: &g_425f31
        field_24: 11
    };
    v4 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    v4 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "strip-trailing-slashes");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "remove any trailing slashes from each SOURCE argument");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v1 = uucore::features::backup_control::arguments::backup();
    v4 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v1 = uucore::features::backup_control::arguments::backup_no_args();
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v1 = uucore::features::backup_control::arguments::suffix();
    v4 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v1 = uucore::features::update_control::arguments::update();
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v1 = uucore::features::update_control::arguments::update_no_args();
    v4 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 116);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "move all SOURCE arguments into DIRECTORY");
    v2 = clap_builder::builder::arg::Arg::value_name(&v1, v7);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2, 4);
    v2 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "no-target-directory");
    *(&v0.field_0 as &struct24) = struct24 {
        field_0: 2
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    v5 = *(&v0.field_0 as &i192);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v5);
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 84);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "no-target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "treat DEST as a normal file");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v4 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "explain what is being done");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("progress");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 103);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "progress");
    v1 = clap_builder::builder::arg::Arg::help(&v4, &g_426771, 78);
    v5 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v4 = clap_builder::builder::command::Command::arg(&v2, &v5);
    v2 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 1);
    v2 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v2, 584);
    v1.584 = (stack_base)[1496] as i32 | 1;
    v1.588 = (stack_base)[1492] as i32;
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "debug");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "explain how a file is copied. Implies -v");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 2);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
