fn uu_mv::uu_app(a0: &struct712) -> u64 {
    let v0: struct24;  // [bp-0xa88]
    let v1: i4736;  // [sp-0xa70], Other Possible Types: struct592, struct24
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa60]
    let v4: i64;  // [sp-0xa58]
    let v5: i32;  // [sp-0x828]
    let v6: i32;  // [sp-0x824]
    let v7: i5696;  // [sp-0x820], Other Possible Types: struct592, struct712
    let v8: i64;  // [sp-0x564]
    let v9: i32;  // [sp-0x55c]
    let v10: i8;  // [bp-0x558]
    let v11: i4736;  // [sp-0x540], Other Possible Types: struct592, struct712, struct437
    let v12: i64;  // [sp-0x538]
    let v13: i64;  // [sp-0x530]
    let v14: i64;  // [sp-0x528]
    let v15: i64;  // [sp-0x520]
    let v16: struct32;  // [bp-0x278], Other Possible Types: struct592, i4736, struct24
    let v18: i64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v7 = clap_builder::builder::command::Command::version(&v11, "0.0.28");
    v11 = clap_builder::builder::command::Command::about(&v7, "Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.");
    v1 = uucore::format_usage(&g_426937, 104);
    v7 = clap_builder::builder::command::Command::override_usage(&v11, &v1);
    v1 = "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file.";
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups";
    v4 = <&T as core::fmt::Display>::fmt;
    v11 = &g_587dc0;
    v12 = 2;
    v15 = 0;
    v13 = &v1;
    v14 = 2;
    core::option::Option<T>::map_or_else();
    v11 = clap_builder::builder::command::Command::after_help(&v7, &v10);
    memcpy(&v7, &v11, 700);
    v8 = 549755814016 | *((&v11 as &char + 700) as &i64);
    v9 = *((&v11 as &char + 708) as &i32);
    v11 = clap_builder::builder::arg::Arg::new("force");
    v1 = clap_builder::builder::arg::Arg::short(&v11, 0x66);
    v11 = clap_builder::builder::arg::Arg::long(&v1, "force");
    v1 = clap_builder::builder::arg::Arg::help(&v11, "do not prompt before overwriting");
    v16 = struct32 {
        field_0: &g_426231
        field_8: 11
        field_16: &g_42623c
        field_24: 10
    };
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v16);
    v1 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v7 = clap_builder::builder::arg::Arg::new("interactive");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 0x69);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "interactive");
    v1 = clap_builder::builder::arg::Arg::help(&v7, "prompt before override");
    v16 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_42623c
        field_24: 10
    };
    v7 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v16);
    v1 = clap_builder::builder::arg::Arg::action(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v11 = clap_builder::builder::arg::Arg::new("no-clobber");
    v1 = clap_builder::builder::arg::Arg::short(&v11, 0x6e);
    v11 = clap_builder::builder::arg::Arg::long(&v1, "no-clobber");
    v1 = clap_builder::builder::arg::Arg::help(&v11, "do not overwrite an existing file");
    v16 = struct32 {
        field_0: &g_42622c
        field_8: 5
        field_16: &g_426231
        field_24: 11
    };
    v11 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v16);
    v1 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v7 = clap_builder::builder::arg::Arg::new("strip-trailing-slashes");
    v1 = clap_builder::builder::arg::Arg::long(&v7, "strip-trailing-slashes");
    v7 = clap_builder::builder::arg::Arg::help(&v1, "remove any trailing slashes from each SOURCE argument");
    v1 = clap_builder::builder::arg::Arg::action(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v1 = uucore::features::backup_control::arguments::backup();
    v11 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v1 = uucore::features::backup_control::arguments::backup_no_args();
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v1 = uucore::features::backup_control::arguments::suffix();
    v11 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v1 = uucore::features::update_control::arguments::update();
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v1 = uucore::features::update_control::arguments::update_no_args();
    v11 = clap_builder::builder::command::Command::arg(&v7, &v1);
    v7 = clap_builder::builder::arg::Arg::new("target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 0x74);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v7, "move all SOURCE arguments into DIRECTORY");
    v7 = clap_builder::builder::arg::Arg::value_name(&v1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v7, 0x4);
    v7 = clap_builder::builder::arg::Arg::conflicts_with(&v1, "no-target-directory");
    *(&v0.field_0 as &struct24) = struct24 {
        field_0: 2
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    *(&v16.field_0 as &struct24) = struct24 {
        field_0: v0
        field_8: *((&v0.field_0 as &char + 8) as &i64)
        field_16: v0.field_16
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v7, &v16);
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v11 = clap_builder::builder::arg::Arg::new("no-target-directory");
    v1 = clap_builder::builder::arg::Arg::short(&v11, 0x54);
    v11 = clap_builder::builder::arg::Arg::long(&v1, "no-target-directory");
    v1 = clap_builder::builder::arg::Arg::help(&v11, "treat DEST as a normal file");
    v16 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v7, &v16);
    v7 = clap_builder::builder::arg::Arg::new("verbose");
    v1 = clap_builder::builder::arg::Arg::short(&v7, 0x76);
    v7 = clap_builder::builder::arg::Arg::long(&v1, "verbose");
    v1 = clap_builder::builder::arg::Arg::help(&v7, "explain what is being done");
    v16 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v11, &v16);
    v11 = clap_builder::builder::arg::Arg::new("progress");
    v1 = clap_builder::builder::arg::Arg::short(&v11, 0x67);
    v11 = clap_builder::builder::arg::Arg::long(&v1, "progress");
    v1 = clap_builder::builder::arg::Arg::help(&v11, &g_426a71, 78);
    v16 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v7, &v16);
    v7 = clap_builder::builder::arg::Arg::new("files");
    v1 = clap_builder::builder::arg::Arg::action(&v7, 0x1);
    v7 = clap_builder::builder::arg::Arg::num_args(&v1);
    memcpy(&v1, &v7, 584);
    v5 = *((&v7 as &char + 584) as &i32) | 1;
    v6 = *((&v7 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v7, 0x2);
    v7 = clap_builder::builder::command::Command::arg(&v11, &v1);
    v11 = clap_builder::builder::arg::Arg::new("debug");
    v1 = clap_builder::builder::arg::Arg::long(&v11, "debug");
    v11 = clap_builder::builder::arg::Arg::help(&v1, "explain how a file is copied. Implies -v");
    v1 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v7, &v1);
    return a0;
}
