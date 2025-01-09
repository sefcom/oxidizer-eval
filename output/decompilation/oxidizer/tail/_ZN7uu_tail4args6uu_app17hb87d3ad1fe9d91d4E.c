fn uu_tail::args::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xa88]
    let v1: i64;  // [sp-0xa80]
    let v2: i64;  // [sp-0xa78]
    let v3: i64;  // [sp-0xa70]
    let v4: i64;  // [sp-0xa68]
    let v5: i64;  // [sp-0xa60]
    let v6: i64;  // [sp-0xa58]
    let v7: i64;  // [sp-0xa50]
    let v8: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v9: i32;  // [sp-0x800]
    let v10: i32;  // [sp-0x7fc]
    let v11: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct32, struct437
    let v12: i64;  // [sp-0x53c]
    let v13: i32;  // [sp-0x534]
    let v14: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v15: i64;  // [sp-0x268], Other Possible Types: struct592, struct17, struct8, struct24
    let v16: i64;  // [sp-0x260]
    let v17: i64;  // [bp-0x258]
    let v18: i64;  // [sp-0x250]
    let v20: i64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v20);
    v14 = clap_builder::builder::command::Command::version(&v11, "0.0.28");
    v11 = clap_builder::builder::command::Command::about(&v14, "Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.");
    v8 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v14 = clap_builder::builder::command::Command::override_usage(&v11, &v8);
    memcpy(&v11, &v14, 700);
    v12 = 549755814016 | *((&v14 as &char + 700) as &i64);
    v13 = *((&v14 as &char + 708) as &i32);
    v14 = clap_builder::builder::arg::Arg::new("bytes");
    v8 = clap_builder::builder::arg::Arg::short(&v14, 0x63);
    v14 = clap_builder::builder::arg::Arg::long(&v8, "bytes");
    memcpy(&v8, &v14, 584);
    v9 = *((&v14 as &char + 584) as &i32) | 32;
    v10 = *((&v14 as &char + 588) as &i32);
    v0 = &g_4284e3;
    v1 = 5;
    v2 = &g_428503;
    v3 = 5;
    v17 = v2;
    v18 = v3;
    v15 = v0;
    v16 = v1;
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::help(&v14, "Number of bytes to print");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("follow");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 0x66);
    v11 = clap_builder::builder::arg::Arg::long(&v8, "follow");
    v8 = clap_builder::builder::arg::Arg::default_missing_value(&v11);
    v15 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v11 = clap_builder::builder::arg::Arg::num_args(&v8, &v15);
    memcpy(&v8, &v11, 584);
    v9 = 128 | *((&v11 as &char + 584) as &i32);
    v10 = *((&v11 as &char + 588) as &i32);
    v11 = struct32 {
        field_0: &g_42891a
        field_8: 10
        field_16: &g_41ef30
        field_24: 4
    };
    v15 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v11);
    v11 = clap_builder::builder::arg::Arg::value_parser(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v11, "follow");
    v15 = clap_builder::builder::arg::Arg::help(&v8, "Print the file as it grows");
    v11 = clap_builder::builder::command::Command::arg(&v14, &v15);
    v14 = clap_builder::builder::arg::Arg::new("lines");
    v8 = clap_builder::builder::arg::Arg::short(&v14, 0x6e);
    v14 = clap_builder::builder::arg::Arg::long(&v8, "lines");
    memcpy(&v8, &v14, 584);
    v9 = *((&v14 as &char + 584) as &i32) | 32;
    v10 = *((&v14 as &char + 588) as &i32);
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::help(&v14, "Number of lines to print");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("pid");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "pid");
    v11 = clap_builder::builder::arg::Arg::value_name(&v8, "PID");
    v8 = clap_builder::builder::arg::Arg::help(&v11, "With -f, terminate after process ID, PID dies");
    v15 = clap_builder::builder::arg::Arg::overrides_with(&v8, "pid");
    v11 = clap_builder::builder::command::Command::arg(&v14, &v15);
    v14 = clap_builder::builder::arg::Arg::new("quiet");
    v8 = clap_builder::builder::arg::Arg::short(&v14, 0x71);
    v14 = clap_builder::builder::arg::Arg::long(&v8, "quiet");
    v8 = clap_builder::builder::arg::Arg::visible_alias(&v14, "silent");
    v4 = &g_428671;
    v5 = 5;
    v6 = &g_428657;
    v7 = 7;
    v17 = v6;
    v18 = v7;
    v15 = v4;
    v16 = v5;
    v14 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v15);
    v8 = clap_builder::builder::arg::Arg::help(&v14, "Never output headers giving file names");
    v15 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v15);
    v11 = clap_builder::builder::arg::Arg::new("sleep-interval");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 0x73);
    v11 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "sleep-interval");
    v15 = clap_builder::builder::arg::Arg::help(&v8, "Number of seconds to sleep between polling the file when running with -f");
    v11 = clap_builder::builder::command::Command::arg(&v14, &v15);
    v14 = clap_builder::builder::arg::Arg::new("max-unchanged-stats");
    v8 = clap_builder::builder::arg::Arg::value_name(&v14, "N");
    v14 = clap_builder::builder::arg::Arg::long(&v8, "max-unchanged-stats");
    v8 = clap_builder::builder::arg::Arg::help(&v14, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=name");
    v14 = clap_builder::builder::command::Command::arg(&v11, &v8);
    v11 = clap_builder::builder::arg::Arg::new("verbose");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 0x76);
    v11 = clap_builder::builder::arg::Arg::long(&v8, "verbose");
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v11, &v4);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "Always output headers giving file names");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v8);
    v14 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v8 = clap_builder::builder::arg::Arg::short(&v14, 0x7a);
    v14 = clap_builder::builder::arg::Arg::long(&v8, "zero-terminated");
    v8 = clap_builder::builder::arg::Arg::help(&v14, "Line delimiter is NUL, not newline");
    v15 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v15);
    v11 = clap_builder::builder::arg::Arg::new("use-polling");
    v8 = clap_builder::builder::arg::Arg::alias(&v11, "-disable-inotify");
    v11 = clap_builder::builder::arg::Arg::alias(&v8, "dis");
    v8 = clap_builder::builder::arg::Arg::long(&v11, "use-polling");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "Disable 'inotify' support and use polling instead");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v8);
    v14 = clap_builder::builder::arg::Arg::new("retry");
    v8 = clap_builder::builder::arg::Arg::long(&v14, "retry");
    v14 = clap_builder::builder::arg::Arg::help(&v8, "Keep trying to open a file if it is inaccessible");
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v14, "retry");
    v15 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v15);
    v11 = clap_builder::builder::arg::Arg::new("F");
    v8 = clap_builder::builder::arg::Arg::short(&v11, 0x46);
    v11 = clap_builder::builder::arg::Arg::help(&v8, "Same as --follow=name --retry");
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v11, "F");
    v15 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v11 = clap_builder::builder::command::Command::arg(&v14, &v15);
    v14 = clap_builder::builder::arg::Arg::new("-presume-input-pipe");
    v8 = clap_builder::builder::arg::Arg::long(&v14, "presume-input-pipe");
    v14 = clap_builder::builder::arg::Arg::alias(&v8, "-presume-input-pipe");
    memcpy(&v8, &v14, 584);
    v9 = *((&v14 as &char + 584) as &i32) | 4;
    v10 = *((&v14 as &char + 588) as &i32);
    v15 = clap_builder::builder::arg::Arg::action(&v8, 0x2);
    v14 = clap_builder::builder::command::Command::arg(&v11, &v15);
    v11 = clap_builder::builder::arg::Arg::new("files");
    v8 = clap_builder::builder::arg::Arg::action(&v11, 0x1);
    v11 = clap_builder::builder::arg::Arg::num_args(&v8);
    v15 = struct8 {
        field_0: 2
    };
    v8 = clap_builder::builder::arg::Arg::value_parser(&v11, &v15);
    v11 = clap_builder::builder::arg::Arg::value_hint(&v8, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v14, &v11);
    return a0;
}
