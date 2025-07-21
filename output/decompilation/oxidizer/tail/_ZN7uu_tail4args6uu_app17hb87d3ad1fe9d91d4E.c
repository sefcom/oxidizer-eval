fn uu_tail::args::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa88]
    let v1: u64;  // [bp-0xa80]
    let v2: u64;  // [bp-0xa78]
    let v3: u64;  // [bp-0xa70]
    let v4: u64;  // [bp-0xa68]
    let v5: u64;  // [bp-0xa60]
    let v6: u64;  // [bp-0xa58]
    let v7: u64;  // [bp-0xa50]
    let v8: u8;  // [bp-0xa48]
    let v9: u32;  // [bp-0x800]
    let v10: u32;  // [bp-0x7fc]
    let v11: struct32;  // [bp-0x7f8], Other Possible Types: struct437
    let v12: u32;  // [bp-0x5b0]
    let v13: i8;  // [bp-0x5ac]
    let v14: u64;  // [bp-0x53c]
    let v15: u32;  // [bp-0x534]
    let v16: u8;  // [bp-0x530]
    let v17: u32;  // [bp-0x2e8]
    let v18: i8;  // [bp-0x2e4]
    let v19: u64;  // [bp-0x274]
    let v20: u32;  // [bp-0x26c]
    let v21: struct17;  // [bp-0x268], Other Possible Types: struct24, u64
    let v22: u64;  // [bp-0x260]
    let v23: u64;  // [bp-0x258]
    let v24: u64;  // [bp-0x250]
    let v27: u64;  // rdx

    v11 = clap_builder::builder::command::Command::new(uucore::util_name(), v27);
    clap_builder::builder::command::Command::version(&v16, &v11, "0.0.28");
    clap_builder::builder::command::Command::about(&v11, &v16, "Print the last 10 lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\nMandatory arguments to long flags are mandatory for short flags too.");
    uucore::format_usage(&v8, "{} [FLAG]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v16, &v11, &v8);
    memcpy(&v11, &v16, 700);
    v14 = 549755814016 | v19;
    v15 = v20;
    clap_builder::builder::arg::Arg::new(&v16, "bytes");
    clap_builder::builder::arg::Arg::short(&v8, &v16, 99);
    clap_builder::builder::arg::Arg::long(&v16, &v8, "bytes");
    memcpy(&v8, &v16, 584);
    v9 = v17 | 32;
    v10 = *(&v18 as &i32);
    v0 = &g_4284e3;
    v1 = 5;
    v2 = &g_428503;
    v3 = 5;
    v23 = &g_428503;
    v24 = 5;
    v21 = v0;
    v22 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all(&v16, &v8, &v21);
    clap_builder::builder::arg::Arg::help(&v8, &v16, "Number of bytes to print");
    clap_builder::builder::command::Command::arg(&v16, &v11, &v8);
    clap_builder::builder::arg::Arg::new(&v11, "follow");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 102);
    clap_builder::builder::arg::Arg::long(&v11, &v8, "follow");
    clap_builder::builder::arg::Arg::default_missing_value(&v8, &v11);
    v21 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v21 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    clap_builder::builder::arg::Arg::num_args(&v11, &v8, &v21);
    memcpy(&v8, &v11, 584);
    v9 = 128 | v12;
    v10 = *(&v13 as &i32);
    v11 = struct32 {
        field_0: &g_42891a
        field_8: 10
        field_16: &g_41ef30
        field_24: 4
    };
    v21 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v11);
    clap_builder::builder::arg::Arg::value_parser(&v11, &v8, &v21);
    clap_builder::builder::arg::Arg::overrides_with(&v8, &v11, "follow");
    clap_builder::builder::arg::Arg::help(&v21, &v8, "Print the file as it grows");
    clap_builder::builder::command::Command::arg(&v11, &v16, &v21);
    clap_builder::builder::arg::Arg::new(&v16, "lines");
    clap_builder::builder::arg::Arg::short(&v8, &v16, 110);
    clap_builder::builder::arg::Arg::long(&v16, &v8, "lines");
    memcpy(&v8, &v16, 584);
    v9 = v17 | 32;
    v10 = *(&v18 as &i32);
    clap_builder::builder::arg::Arg::overrides_with_all(&v16, &v8, &v0);
    clap_builder::builder::arg::Arg::help(&v8, &v16, "Number of lines to print");
    clap_builder::builder::command::Command::arg(&v16, &v11, &v8);
    clap_builder::builder::arg::Arg::new(&v11, "pid");
    clap_builder::builder::arg::Arg::long(&v8, &v11, "pid");
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "PID");
    clap_builder::builder::arg::Arg::help(&v8, &v11, "With -f, terminate after process ID, PID dies");
    clap_builder::builder::arg::Arg::overrides_with(&v21, &v8, "pid");
    clap_builder::builder::command::Command::arg(&v11, &v16, &v21);
    clap_builder::builder::arg::Arg::new(&v16, "quiet");
    clap_builder::builder::arg::Arg::short(&v8, &v16, 113);
    clap_builder::builder::arg::Arg::long(&v16, &v8, "quiet");
    clap_builder::builder::arg::Arg::visible_alias(&v8, &v16, "silent");
    v4 = &g_428671;
    v5 = 5;
    v6 = &g_428657;
    v7 = 7;
    v23 = &g_428657;
    v24 = 7;
    v21 = v4;
    v22 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all(&v16, &v8, &v21);
    clap_builder::builder::arg::Arg::help(&v8, &v16, "Never output headers giving file names");
    clap_builder::builder::arg::Arg::action(&v21, &v8, 2);
    clap_builder::builder::command::Command::arg(&v16, &v11, &v21);
    clap_builder::builder::arg::Arg::new(&v11, "sleep-interval");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 115);
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "N");
    clap_builder::builder::arg::Arg::long(&v8, &v11, "sleep-interval");
    clap_builder::builder::arg::Arg::help(&v21, &v8, "Number of seconds to sleep between polling the file when running with -f");
    clap_builder::builder::command::Command::arg(&v11, &v16, &v21);
    clap_builder::builder::arg::Arg::new(&v16, "max-unchanged-stats");
    clap_builder::builder::arg::Arg::value_name(&v8, &v16, "N");
    clap_builder::builder::arg::Arg::long(&v16, &v8, "max-unchanged-stats");
    clap_builder::builder::arg::Arg::help(&v8, &v16, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=name");
    clap_builder::builder::command::Command::arg(&v16, &v11, &v8);
    clap_builder::builder::arg::Arg::new(&v11, "verbose");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 118);
    clap_builder::builder::arg::Arg::long(&v11, &v8, "verbose");
    clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v11, &v4);
    clap_builder::builder::arg::Arg::help(&v11, &v8, "Always output headers giving file names");
    clap_builder::builder::arg::Arg::action(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v16, &v8);
    clap_builder::builder::arg::Arg::new(&v16, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v8, &v16, 122);
    clap_builder::builder::arg::Arg::long(&v16, &v8, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v8, &v16, "Line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v21, &v8, 2);
    clap_builder::builder::command::Command::arg(&v16, &v11, &v21);
    clap_builder::builder::arg::Arg::new(&v11, "use-polling");
    clap_builder::builder::arg::Arg::alias(&v8, &v11, "-disable-inotify");
    clap_builder::builder::arg::Arg::alias(&v11, &v8, "dis");
    clap_builder::builder::arg::Arg::long(&v8, &v11, "use-polling");
    clap_builder::builder::arg::Arg::help(&v11, &v8, "Disable 'inotify' support and use polling instead");
    clap_builder::builder::arg::Arg::action(&v8, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v16, &v8);
    clap_builder::builder::arg::Arg::new(&v16, "retry");
    clap_builder::builder::arg::Arg::long(&v8, &v16, "retry");
    clap_builder::builder::arg::Arg::help(&v16, &v8, "Keep trying to open a file if it is inaccessible");
    clap_builder::builder::arg::Arg::overrides_with(&v8, &v16, "retry");
    clap_builder::builder::arg::Arg::action(&v21, &v8, 2);
    clap_builder::builder::command::Command::arg(&v16, &v11, &v21);
    clap_builder::builder::arg::Arg::new(&v11, "F");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 70);
    clap_builder::builder::arg::Arg::help(&v11, &v8, "Same as --follow=name --retry");
    clap_builder::builder::arg::Arg::overrides_with(&v8, &v11, "F");
    clap_builder::builder::arg::Arg::action(&v21, &v8, 2);
    clap_builder::builder::command::Command::arg(&v11, &v16, &v21);
    clap_builder::builder::arg::Arg::new(&v16, "-presume-input-pipe");
    clap_builder::builder::arg::Arg::long(&v8, &v16, "presume-input-pipe");
    clap_builder::builder::arg::Arg::alias(&v16, &v8, "-presume-input-pipe");
    memcpy(&v8, &v16, 584);
    v9 = v17 | 4;
    v10 = *(&v18 as &i32);
    clap_builder::builder::arg::Arg::action(&v21, &v8, 2);
    clap_builder::builder::command::Command::arg(&v16, &v11, &v21);
    clap_builder::builder::arg::Arg::new(&v11, "files");
    clap_builder::builder::arg::Arg::action(&v8, &v11, 1);
    clap_builder::builder::arg::Arg::num_args(&v11, &v8);
    v21 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v8, &v11, &v21);
    clap_builder::builder::arg::Arg::value_hint(&v11, &v8, 3);
    clap_builder::builder::command::Command::arg(a0, &v16, &v11);
    return a0;
}
