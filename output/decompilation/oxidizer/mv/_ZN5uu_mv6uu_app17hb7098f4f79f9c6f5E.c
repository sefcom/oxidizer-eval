fn uu_mv::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xaf0]
    let v1: struct24;  // [bp-0xad8], Other Possible Types: struct632, struct640
    let v2: u32;  // [bp-0x860]
    let v3: u32;  // [bp-0x85c]
    let v4: alloc::string::String;  // [bp-0x858]
    let v5: struct712;  // [bp-0x840], Other Possible Types: struct640
    let v6: struct712;  // [bp-0x840]
    let v7: struct640;  // [bp-0x840]
    let v8: struct640;  // [bp-0x840]
    let v9: u32;  // [bp-0x5c8]
    let v10: u64;  // [bp-0x584]
    let v11: u32;  // [bp-0x57c]
    let v12: struct437;  // [bp-0x578], Other Possible Types: struct712, struct640
    let v13: u64;  // [bp-0x2bc]
    let v14: u32;  // [bp-0x2b4]
    let v15: struct32;  // [bp-0x2b0], Other Possible Types: struct640
    let v18: u64;  // rdx

    v12 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v5 = clap_builder::builder::command::Command::version(&v12);
    v12 = clap_builder::builder::command::Command::about(&v5);
    v1 = uucore::format_usage("{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...");
    v5 = clap_builder::builder::command::Command::override_usage(&v12, &v1);
    v4 = format!("{}\n\n{}", "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.", "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups");
    v12 = clap_builder::builder::command::Command::after_help(&v5, &v4);
    memcpy(&v5, &v12, 700);
    v10 = 549755814016 | v13;
    v11 = v14;
    v12 = clap_builder::builder::arg::Arg::new("force");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 102);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "do not prompt before overwriting");
    v15 = struct32 {
        field_0: "interactive"
        field_16: "no-clobber"
    };
    v12 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::action(&v12, 2);
    v12 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("interactive");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "interactive");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "prompt before override");
    v15 = struct32 {
        field_0: "force"
        field_16: "no-clobber"
    };
    v5 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v12 = clap_builder::builder::arg::Arg::new("no-clobber");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 110);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "no-clobber");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "do not overwrite an existing file");
    v15 = struct32 {
        field_0: "force"
        field_16: "interactive"
    };
    v12 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v15);
    v1 = clap_builder::builder::arg::Arg::action(&v12, 2);
    v12 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v1 = clap_builder::builder::arg::Arg::long(&v5, "strip-trailing-slashes");
    v5 = clap_builder::builder::arg::Arg::help(&v1, "remove any trailing slashes from each SOURCE argument");
    v1 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v1 = uucore::features::backup_control::arguments::backup();
    v12 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v1 = uucore::features::backup_control::arguments::backup_no_args();
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v1 = uucore::features::backup_control::arguments::suffix();
    v12 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v1 = uucore::features::update_control::arguments::update();
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v1 = uucore::features::update_control::arguments::update_no_args();
    v12 = clap_builder::builder::command::Command::arg(&v5, &v1);
    v5 = clap_builder::builder::arg::Arg::new("target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 116);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "move all SOURCE arguments into DIRECTORY");
    v5 = clap_builder::builder::arg::Arg::value_name(&v1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v5, 4);
    v5 = clap_builder::builder::arg::Arg::conflicts_with(&v1);
    v0 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v12 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 84);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "no-target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "treat DEST as a normal file");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v12 = clap_builder::builder::command::Command::arg(&v5, &v15);
    v5 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 118);
    v5 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v5, "explain what is being done");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v6 = clap_builder::builder::command::Command::arg(&v12, &v15);
    v12 = clap_builder::builder::arg::Arg::new("progress");
    v1 = clap_builder::builder::arg::Arg::short(&v12, 103);
    v12 = clap_builder::builder::arg::Arg::long(&v1, "progress");
    v1 = clap_builder::builder::arg::Arg::help(&v12, "Display a progress bar. \nNote: this feature is not supported by GNU coreutils.");
    v15 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v12 = clap_builder::builder::command::Command::arg(&v6, &v15);
    v7 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v7, 1);
    v8 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v8, 632);
    v2 = v9 | 1;
    v3 = v9;
    v5 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v5, 2);
    v5 = clap_builder::builder::command::Command::arg(&v12, &v1);
    v12 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v12, "debug");
    v12 = clap_builder::builder::arg::Arg::help(&v1, "explain how a file is copied. Implies -v");
    v1 = clap_builder::builder::arg::Arg::action(&v12, 2);
    clap_builder::builder::command::Command::arg(a0, &v5, &v1);
    return;
}
