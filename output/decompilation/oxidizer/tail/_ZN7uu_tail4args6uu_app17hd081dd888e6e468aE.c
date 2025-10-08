fn uu_tail::args::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xac0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x848]
    let v2: u32;  // [bp-0x844]
    let v3: struct32;  // [bp-0x840], Other Possible Types: struct437, struct712, struct640
    let v4: u32;  // [bp-0x5c8]
    let v5: i8;  // [bp-0x5c4]
    let v6: u64;  // [bp-0x584]
    let v7: u32;  // [bp-0x57c]
    let v8: struct640;  // [bp-0x578], Other Possible Types: struct712
    let v9: struct712;  // [bp-0x578], Other Possible Types: struct640
    let v10: struct640;  // [bp-0x578]
    let v11: struct712;  // [bp-0x578]
    let v12: struct712;  // [bp-0x578]
    let v13: u32;  // [bp-0x300]
    let v14: u64;  // [bp-0x2bc]
    let v15: u32;  // [bp-0x2b4]
    let v16: struct32;  // [bp-0x2b0], Other Possible Types: struct640, u64
    let v19: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    v11 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v11);
    v0 = uucore::format_usage("{} [FLAG]... [FILE]...");
    v12 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v12, 700);
    v6 = 549755814016 | v14;
    v7 = v15;
    v8 = clap_builder::builder::arg::Arg::new("bytes");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 99);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "bytes");
    memcpy(&v0, &v10, 632);
    v1 = v13 | 32;
    v2 = v13;
    v16 = struct32 {
        field_0: "bytes"
        field_16: "lines"
    };
    v9 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Number of bytes to print");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("follow");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "follow");
    v0 = clap_builder::builder::arg::Arg::default_missing_value(&v3);
    v3 = clap_builder::builder::arg::Arg::num_args(&v0, None, 1);
    memcpy(&v0, &v3, 632);
    v1 = 128 | v4;
    v2 = *(&v5 as &i32);
    v3 = struct32 {
        field_0: "descriptor"
        field_16: "name"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v16, &v3);
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "follow");
    v16 = clap_builder::builder::arg::Arg::help(&v0, "Print the file as it grows");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v16);
    v9 = clap_builder::builder::arg::Arg::new("lines");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 110);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    memcpy(&v0, &v9, 632);
    v1 = v13 | 32;
    v2 = *((&(&v12)[79].field_0 as &char + 4) as &i32);
    v16 = struct32 {
        field_0: "bytes"
        field_16: "lines"
    };
    v9 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Number of lines to print");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("pid");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "pid");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "PID");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "With -f, terminate after process ID, PID dies");
    v16 = clap_builder::builder::arg::Arg::overrides_with(&v0, "pid");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v16);
    v9 = clap_builder::builder::arg::Arg::new("quiet");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 113);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v9);
    v16 = struct32 {
        field_0: "quiet"
        field_16: "verbose"
    };
    v9 = clap_builder::builder::arg::Arg::overrides_with_all(&v0, &v16);
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Never output headers giving file names");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("sleep-interval");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "N");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "sleep-interval");
    v16 = clap_builder::builder::arg::Arg::help(&v0, "Number of seconds to sleep between polling the file when running with -f");
    v3 = clap_builder::builder::command::Command::arg(&v9, &v16);
    v9 = clap_builder::builder::arg::Arg::new("max-unchanged-stats");
    v0 = clap_builder::builder::arg::Arg::value_name(&v9, "N");
    v9 = clap_builder::builder::arg::Arg::long(&v0, "max-unchanged-stats");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Reopen a FILE which has not changed size after N (default 5) iterations to see if it has been unlinked or renamed (this is the usual case of rotated log files); This option is meaningful only when polling (i.e., with --use-polling) and when --follow=name");
    v9 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("verbose");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 118);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v16 = struct32 {
        field_0: "quiet"
        field_16: "verbose"
    };
    v0 = clap_builder::builder::arg::Arg::overrides_with_all(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Always output headers giving file names");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::short(&v9, 122);
    v9 = clap_builder::builder::arg::Arg::long(&v0, "zero-terminated");
    v0 = clap_builder::builder::arg::Arg::help(&v9, "Line delimiter is NUL, not newline");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("use-polling");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, "-disable-inotify");
    v3 = clap_builder::builder::arg::Arg::alias(&v0, "dis");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "use-polling");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Disable 'inotify' support and use polling instead");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v0);
    v9 = clap_builder::builder::arg::Arg::new("retry");
    v0 = clap_builder::builder::arg::Arg::long(&v9, "retry");
    v9 = clap_builder::builder::arg::Arg::help(&v0, "Keep trying to open a file if it is inaccessible");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v9, "retry");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v9 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("F");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 70);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Same as --follow=name --retry");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "F");
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v9, &v16);
    v9 = clap_builder::builder::arg::Arg::new("-presume-input-pipe");
    v0 = clap_builder::builder::arg::Arg::long(&v9, "presume-input-pipe");
    v9 = clap_builder::builder::arg::Arg::alias(&v0, "-presume-input-pipe");
    memcpy(&v0, &v9, 632);
    v1 = v13 | 4;
    v2 = *((&(&v12)[79].field_0 as &char + 4) as &i32);
    v16 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::num_args(&v0);
    v16 = 2;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v16);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
