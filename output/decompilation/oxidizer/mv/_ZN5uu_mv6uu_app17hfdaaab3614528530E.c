fn uu_mv::uu_app(a0: &struct712) -> u64 {
    let v0: struct24;  // [bp-0xa88]
    let v1: struct592;  // [sp-0xa70], Other Possible Types: struct24
    let v2: i32;  // [sp-0x828]
    let v3: i32;  // [sp-0x824]
    let v4: struct592;  // [sp-0x820], Other Possible Types: struct712
    let v5: i64;  // [sp-0x564]
    let v6: i32;  // [sp-0x55c]
    let v7: String;  // [sp-0x558]
    let v8: struct592;  // [sp-0x540], Other Possible Types: struct712, struct437
    let v9: struct592;  // [bp-0x278], Other Possible Types: struct32, int
    let v11: i64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v4 = clap_builder::builder::command::Command::version(&v8, "0.0.28");
    v8 = clap_builder::builder::command::Command::about(&v4, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.");
    v1 = uucore::format_usage("{} [OPTION]... [-T] SOURCE DEST
{} [OPTION]... SOURCE... DIRECTORY
{} [OPTION]... -t DIRECTORY SOURCE...");
    v4 = clap_builder::builder::command::Command::override_usage(&v8, &v1);
    v7 = format!("{}

{}", "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v8 = clap_builder::builder::command::Command::after_help(&v4, &v7);
    memcpy(&v4, &v8, 700);
    v5 = 549755814016 | *((&v8.field_0 as &char + 700) as &i64);
    v6 = *((&v8.field_0 as &char + 708) as &i32);
    v8 = clap_builder::builder::arg::Arg::new("force");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 0x66);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "do not prompt before overwriting");
    v9 = struct32 {
        field_0: &g_426231
        field_8: 11
        field_16: &g_42623c
        field_24: 10
    };
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v8 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("interactive");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x69);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "interactive");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "prompt before override");
    v9 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_42623c
        field_24: 10
    };
    v4 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("no-clobber");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 0x6e);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "no-clobber");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "do not overwrite an existing file");
    v9 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_426231
        field_24: 11
    };
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v8 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "strip-trailing-slashes");
    v4 = clap_builder::builder::arg::Arg::help(&v1, "remove any trailing slashes from each SOURCE argument");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uucore::features::backup_control::arguments::backup();
    v8 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v1 = uucore::features::backup_control::arguments::backup_no_args();
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uucore::features::backup_control::arguments::suffix();
    v8 = clap_builder::builder::command::Command::arg(&v1, &v1);
    v1 = uucore::features::update_control::arguments::update();
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v1 = uucore::features::update_control::arguments::update_no_args();
    v8 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x74);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "move all SOURCE arguments into DIRECTORY");
    v4 = clap_builder::builder::arg::Arg::value_name(&v1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x4);
    v4 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "no-target-directory");
    *(&v0.field_0 as &struct24) = struct24 {
        field_0: 2
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    v9 = *(&v0.field_0 as &i192);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v4, &v9);
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 0x54);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "no-target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "treat DEST as a normal file");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v8 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 0x76);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "explain what is being done");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v8, &v9);
    v8 = clap_builder::builder::arg::Arg::new("progress");
    v1 = clap_builder::builder::arg::Arg::short(&v8, 0x67);
    v8 = clap_builder::builder::arg::Arg::long(&v1, "progress");
    v1 = clap_builder::builder::arg::Arg::help(&v8, "Display a progress bar. 
Note: this feature is not supported by GNU coreutils.");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v8 = clap_builder::builder::command::Command::arg(&v4, &v9);
    v4 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v4, 0x1);
    v4 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v4, 584);
    v2 = *((&v4.field_0 as &char + 584) as &i32) | 1;
    v3 = *((&v4.field_0 as &char + 588) as &i32);
    v4 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v8, &v1);
    v8 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v8, "debug");
    v8 = clap_builder::builder::arg::Arg::help(&v1, "explain how a file is copied. Implies -v");
    v1 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
