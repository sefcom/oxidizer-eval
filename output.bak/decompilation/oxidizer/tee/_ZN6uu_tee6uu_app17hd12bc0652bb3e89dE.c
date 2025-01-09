fn uu_tee::uu_app(a0: &struct712) -> u64 {
    let v1: i4736;  // [sp-0xb28], Other Possible Types: struct592, struct65, struct712, struct288
    let v2: i32;  // [sp-0x8e0]
    let v3: i32;  // [sp-0x8dc]
    let v4: i64;  // [sp-0x86c]
    let v5: i32;  // [sp-0x864]
    let v6: struct72;  // [sp-0x858]
    let v7: struct72;  // [sp-0x810]
    let v8: struct72;  // [sp-0x7c8]
    let v9: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v10: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v11: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24, struct17, struct72
    let v13: i64;  // rdx

    v10 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v1 = clap_builder::builder::command::Command::version(&v10, "0.0.28");
    v10 = clap_builder::builder::command::Command::about(&v1, "Copy standard input to each FILE, and also to standard output.");
    v9 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v10, &v9);
    v10 = clap_builder::builder::command::Command::after_help(&v1, "If a FILE is -, it refers to a file named - .");
    memcpy(&v1, &v10, 700);
    v4 = 1126449662918784 | *((&v10 as &char + 700) as &i64);
    v5 = *((&v10 as &char + 708) as &i32);
    v10 = clap_builder::builder::arg::Arg::new("--help");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 0x68);
    v10 = clap_builder::builder::arg::Arg::long(&v9, "help");
    v9 = clap_builder::builder::arg::Arg::help(&v10, "Print help");
    v11 = clap_builder::builder::arg::Arg::action(&v9, 0x7);
    v10 = clap_builder::builder::command::Command::arg(&v1, &v11);
    v1 = clap_builder::builder::arg::Arg::new("append");
    v9 = clap_builder::builder::arg::Arg::long(&v1, "append");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 0x61);
    v9 = clap_builder::builder::arg::Arg::help(&v1, "append to the given FILEs, do not overwrite");
    v11 = clap_builder::builder::arg::Arg::action(&v9, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("ignore-interrupts");
    v9 = clap_builder::builder::arg::Arg::long(&v10, "ignore-interrupts");
    v10 = clap_builder::builder::arg::Arg::short(&v9, 0x69);
    v9 = clap_builder::builder::arg::Arg::help(&v10, "ignore interrupt signals (ignored on non-Unix platforms)");
    v11 = clap_builder::builder::arg::Arg::action(&v9, 0x2);
    v10 = clap_builder::builder::command::Command::arg(&v1, &v11);
    v1 = clap_builder::builder::arg::Arg::new("file");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v11 = clap_builder::builder::arg::Arg::value_hint(&v9, 0x3);
    v1 = clap_builder::builder::command::Command::arg(&v10, &v11);
    v10 = clap_builder::builder::arg::Arg::new("ignore-pipe-errors");
    v9 = clap_builder::builder::arg::Arg::short(&v10, 0x70);
    v10 = clap_builder::builder::arg::Arg::help(&v9, "set write error behavior (ignored on non-Unix platforms)");
    v9 = clap_builder::builder::arg::Arg::action(&v10, 0x2);
    v10 = clap_builder::builder::command::Command::arg(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::new("output-error");
    v9 = clap_builder::builder::arg::Arg::long(&v1, "output-error");
    memcpy(&v1, &v9, 584);
    v2 = 128 | *((&v9 as &char + 584) as &i32);
    v3 = *((&v9 as &char + 588) as &i32);
    v11 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v9 = clap_builder::builder::arg::Arg::num_args(&v1, &v11);
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_40aaf4
        field_56: 4
        field_64: 0
    };
    v6 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors writing to any output");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_413bbc
        field_56: 11
        field_64: 0
    };
    v7 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_40abbc
        field_56: 4
        field_64: 0
    };
    v8 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_413bc7
        field_56: 11
        field_64: 0
    };
    v11 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)");
    v1 = struct288 {
        field_0: v6
        field_16: v14
        field_32: v15
        field_48: v16
        field_64: *((&v6 as &char + 64) as &i64)
        field_72: v7
        field_88: *((&v7 as &char + 16) as &i128)
        field_104: *((&v7 as &char + 32) as &i128)
        field_120: *((&v7 as &char + 48) as &i128)
        field_136: *((&v7 as &char + 64) as &i64)
        field_144: v8
        field_160: *((&v8 as &char + 16) as &i128)
        field_176: *((&v8 as &char + 32) as &i128)
        field_192: *((&v8 as &char + 48) as &i128)
        field_208: *((&v8 as &char + 64) as &i64)
        field_216: v11
        field_232: *((&v11 as &char + 16) as &i128)
        field_248: *((&v11 as &char + 32) as &i128)
        field_264: *((&v11 as &char + 48) as &i128)
        field_280: *((&v11 as &char + 64) as &i64)
    };
    v11 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v9, &v11);
    v9 = clap_builder::builder::arg::Arg::help(&v1, "set write error behavior");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v9, "ignore-pipe-errors");
    clap_builder::builder::command::Command::arg(a0, &v10, &v1);
    return a0;
}
