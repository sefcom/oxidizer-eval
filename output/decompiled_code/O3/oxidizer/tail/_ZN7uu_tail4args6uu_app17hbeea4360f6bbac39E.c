fn uu_tail::args::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa88]
    let v1: i64;  // [sp-0xa80]
    let v2: i64;  // [sp-0xa78]
    let v3: i64;  // [sp-0xa70]
    let v4: i64;  // [sp-0xa68]
    let v5: i64;  // [sp-0xa60]
    let v6: i64;  // [sp-0xa58]
    let v7: i64;  // [sp-0xa50]
    let v8: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v9: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct32, struct437
    let v10: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v11: i64;  // [sp-0x268], Other Possible Types: struct592, struct24, struct8, struct17
    let v12: i64;  // [sp-0x260]
    let v13: i64;  // [bp-0x258]
    let v14: i64;  // [sp-0x250]
    let v16: i64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    v10 = clap_builder::builder::command::Command::version(&v9, "0.0.28");
    v9 = clap_builder::builder::command::Command::about(&v10, &g_428b76, 254);
    v8 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v10 = clap_builder::builder::command::Command::override_usage(&v9, &v8);
    memcpy(&v9, &v10, 700);
    v9.700 = 549755814016 | (stack_base)[628] as i64;
    v9.708 = (stack_base)[620] as i32;
    v10 = clap_builder::builder::arg::Arg::new("bytes");
    v8 = clap_builder::builder::arg::Arg::short(&v10, 99);
    v10 = clap_builder::builder::arg::Arg::long(&v8, "bytes");
    memcpy(&v8, &v10, 584);
    v8.584 = (stack_base)[744] as i32 | 32;
    v8.588 = (stack_base)[740] as i32;
    v0 = &g_42887a;
    v1 = 5;
    v2 = &g_42889a;
    v3 = 5;
    v13 = v2;
    v14 = v3;
    v11 = v0;
    v12 = v1;
    v10 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::help(&v10, "Number of bytes to print");
    v10 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("follow");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 102);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "follow");
    v8 = clap_builder::builder::arg::Arg::default_missing_value(&v9, v16);
    v11 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v9 = clap_builder::builder::arg::Arg::num_args(&v8, &v11);
    memcpy(&v8, &v9, 584);
    v8.584 = 128 | (stack_base)[1456] as i32;
    v8.588 = (stack_base)[1452] as i32;
    v9 = struct32 {
        field_0: &g_428ca2
        field_8: 10
        field_16: &g_41f2b0
        field_24: 4
    };
    v11 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v9);
    v9 = clap_builder::builder::arg::Arg::value_parser(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v9, "follow");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "Print the file as it grows");
    v9 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("lines");
    v8 = clap_builder::builder::arg::Arg::short(&v10, 110);
    v10 = clap_builder::builder::arg::Arg::long(&v8, "lines");
    memcpy(&v8, &v10, 584);
    v8.584 = (stack_base)[744] as i32 | 32;
    v8.588 = (stack_base)[740] as i32;
    v10 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::help(&v10, "Number of lines to print");
    v10 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("pid");
    v8 = clap_builder::builder::arg::Arg::long(&v9, "pid");
    v9 = clap_builder::builder::arg::Arg::value_name(&v8, "PID");
    v8 = clap_builder::builder::arg::Arg::help(&v9, "With -f, terminate after process ID, PID dies");
    v11 = clap_builder::builder::arg::Arg::overrides_with(&v8, "pid");
    v9 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("quiet");
    v8 = clap_builder::builder::arg::Arg::short(&v10, 113);
    v10 = clap_builder::builder::arg::Arg::long(&v8, "quiet");
    v8 = clap_builder::builder::arg::Arg::visible_alias(&v10, "silent");
    v4 = &g_4289f9;
    v5 = 5;
    v6 = &g_428952;
    v7 = 7;
    v13 = v6;
    v11.24 = vvar_699{stack -2640};
    v11 = v4;
    v11.8 = vvar_697{stack -2656};
    v10 = clap_builder::builder::arg::Arg::overrides_with_all(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::help(&v10, "Never output headers giving file names");
    v11 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v10 = clap_builder::builder::command::Command::arg(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::new("sleep-interval");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 115);
    v9 = clap_builder::builder::arg::Arg::value_name(&v8, "N");
    v8 = clap_builder::builder::arg::Arg::long(&v9, "sleep-interval");
    v11 = clap_builder::builder::arg::Arg::help(&v8, "Number of seconds to sleep between polling the file when running with -f");
    v9 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("max-unchanged-stats");
    v8 = clap_builder::builder::arg::Arg::value_name(&v10, "N");
    v10 = clap_builder::builder::arg::Arg::long(&v8, "max-unchanged-stats");
    v8 = clap_builder::builder::arg::Arg::help(&v10, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=name");
    v10 = clap_builder::builder::command::Command::arg(&v9, &v8);
    v9 = clap_builder::builder::arg::Arg::new("verbose");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 118);
    v9 = clap_builder::builder::arg::Arg::long(&v8, "verbose");
    v8 = clap_builder::builder::arg::Arg::overrides_with_all(&v9, &v4);
    v9 = clap_builder::builder::arg::Arg::help(&v8, "Always output headers giving file names");
    v8 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v10, &v8);
    v10 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v8 = clap_builder::builder::arg::Arg::short(&v10, 122);
    v10 = clap_builder::builder::arg::Arg::long(&v8, "zero-terminated");
    v8 = clap_builder::builder::arg::Arg::help(&v10, "Line delimiter is NUL, not newline");
    v11 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v10 = clap_builder::builder::command::Command::arg(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::new("use-polling");
    v8 = clap_builder::builder::arg::Arg::alias(&v9, "-disable-inotify");
    v9 = clap_builder::builder::arg::Arg::alias(&v8, "dis");
    v8 = clap_builder::builder::arg::Arg::long(&v9, "use-polling");
    v9 = clap_builder::builder::arg::Arg::help(&v8, "Disable 'inotify' support and use polling instead");
    v8 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v10, &v8);
    v10 = clap_builder::builder::arg::Arg::new("retry");
    v8 = clap_builder::builder::arg::Arg::long(&v10, "retry");
    v10 = clap_builder::builder::arg::Arg::help(&v8, "Keep trying to open a file if it is inaccessible");
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v10, "retry");
    v11 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v10 = clap_builder::builder::command::Command::arg(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::new("F");
    v8 = clap_builder::builder::arg::Arg::short(&v9, 70);
    v9 = clap_builder::builder::arg::Arg::help(&v8, "Same as --follow=name --retry");
    v8 = clap_builder::builder::arg::Arg::overrides_with(&v9, "F");
    v11 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v9 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("-presume-input-pipe");
    v8 = clap_builder::builder::arg::Arg::long(&v10, "presume-input-pipe");
    v10 = clap_builder::builder::arg::Arg::alias(&v8, "-presume-input-pipe");
    memcpy(&v8, &v10, 584);
    v8.584 = (stack_base)[744] as i32 | 4;
    v8.588 = (stack_base)[740] as i32;
    v11 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v10 = clap_builder::builder::command::Command::arg(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::new("files");
    v8 = clap_builder::builder::arg::Arg::action(&v9, 1);
    v9 = clap_builder::builder::arg::Arg::num_args(&v8);
    v11 = struct8 {
        field_0: 2
    };
    v8 = clap_builder::builder::arg::Arg::value_parser(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v8, 3);
    clap_builder::builder::command::Command::arg(a0, &v10, &v9);
    return a0;
}
