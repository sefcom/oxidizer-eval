fn uu_tee::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: i5696;  // [sp-0xb28], Other Possible Types: struct592, struct65, struct712, struct288
    let v2: struct72;  // [sp-0x858]
    let v3: struct72;  // [sp-0x810]
    let v4: struct72;  // [sp-0x7c8]
    let v5: i4736;  // [sp-0x780], Other Possible Types: struct592, struct24
    let v6: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24, struct72, struct17
    let v9: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v1 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v1, "Copy standard input to each FILE, and also to standard output.");
    v5 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v6, &v5);
    v6 = clap_builder::builder::command::Command::after_help(&v1, "If a FILE is -, it refers to a file named - .");
    memcpy(&v1, &v6, 700);
    v1.700 = 1126449662918784 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v6 = clap_builder::builder::arg::Arg::new("--help");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 104);
    v6 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v6, "Print help");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 7);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("append");
    v5 = clap_builder::builder::arg::Arg::long(&v1, "append");
    v1 = clap_builder::builder::arg::Arg::short(&v5, 97);
    v5 = clap_builder::builder::arg::Arg::help(&v1, "append to the given FILEs, do not overwrite");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("ignore-interrupts");
    v5 = clap_builder::builder::arg::Arg::long(&v6, "ignore-interrupts");
    v6 = clap_builder::builder::arg::Arg::short(&v5, 105);
    v5 = clap_builder::builder::arg::Arg::help(&v6, "ignore interrupt signals (ignored on non-Unix platforms)");
    v7 = clap_builder::builder::arg::Arg::action(&v5, 2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("file");
    v5 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v5, 3);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("ignore-pipe-errors");
    v5 = clap_builder::builder::arg::Arg::short(&v6, 112);
    v6 = clap_builder::builder::arg::Arg::help(&v5, "set write error behavior (ignored on non-Unix platforms)");
    v5 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("output-error");
    v5 = clap_builder::builder::arg::Arg::long(&v1, "output-error");
    memcpy(&v1, &v5, 584);
    v1.584 = 128 | (stack_base)[1336] as i32;
    v1.588 = (stack_base)[1332] as i32;
    v7 = struct17 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v5 = clap_builder::builder::arg::Arg::num_args(&v1, &v7);
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_41459c
        field_56: 4
        field_64: 0
    };
    v2 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors writing to any output");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_41d9d6
        field_56: 11
        field_64: 0
    };
    v3 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "produce warnings for errors that are not pipe errors (ignored on non-unix platforms)");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_414664
        field_56: 4
        field_64: 0
    };
    v4 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output");
    v1 = struct65 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_24: 0x8000000000000000
        field_32: v0
        field_48: &g_41da57
        field_56: 11
        field_64: 0
    };
    v7 = clap_builder::builder::possible_value::PossibleValue::help(&v1, "exit on write errors to any output that are not pipe errors (equivalent to exit on non-unix platforms)");
    v1 = struct288 {
        field_0: v2
        field_16: v10
        field_32: v11
        field_48: v12
        field_64: *((&v2 as &char + 64) as &i64)
        field_72: v3
        field_88: *((&v3 as &char + 16) as &i128)
        field_104: *((&v3 as &char + 32) as &i128)
        field_120: *((&v3 as &char + 48) as &i128)
        field_136: *((&v3 as &char + 64) as &i64)
        field_144: v4
        field_160: *((&v4 as &char + 16) as &i128)
        field_176: *((&v4 as &char + 32) as &i128)
        field_192: *((&v4 as &char + 48) as &i128)
        field_208: *((&v4 as &char + 64) as &i64)
        field_216: v7
        field_232: *((&v7 as &char + 16) as &i128)
        field_248: *((&v7 as &char + 32) as &i128)
        field_264: *((&v7 as &char + 48) as &i128)
        field_280: *((&v7 as &char + 64) as &i64)
    };
    v7 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v5, &v7);
    v5 = clap_builder::builder::arg::Arg::help(&v1, "set write error behavior");
    v1 = clap_builder::builder::arg::Arg::conflicts_with(&v5, "ignore-pipe-errors");
    clap_builder::builder::command::Command::arg(a0, &v6, &v1);
    return a0;
}
