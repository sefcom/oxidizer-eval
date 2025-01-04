fn uu_nl::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: i256;  // [sp-0x268], Other Possible Types: struct592, struct32, struct48, struct16
    let v8: i64;  // [sp-0x260]
    let v9: i64;  // [sp-0x258]
    let v11: i64;  // rdx
    let v12: i64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    v4 = clap_builder::builder::command::Command::about(&v3, "Number lines of files");
    v3 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::command::Command::after_help(&v4, &g_46f3ec, 336);
    memcpy(&v4, &v3, 700);
    v5 = 1126449662918784 | *((&v3 as &char + 700) as &i64);
    v6 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x5);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v4, 584);
    v1 = *((&v4 as &char + 584) as &i32) | 4;
    v2 = *((&v4 as &char + 588) as &i32);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("body-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x62);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "body-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STYLE for numbering body lines");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("section-delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x64);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "section-delimiter");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "use CC for separating logical pages");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "CC");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("footer-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x66);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "footer-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STYLE for numbering footer lines");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("header-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x68);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "header-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "use STYLE for numbering header lines");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("line-increment");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x69);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "line-increment");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line number increment at each line");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v7 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v12, v11);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x6c);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "group of NUMBER empty lines counted as one");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v7 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser();
    v0 = clap_builder::builder::arg::Arg::value_parser(&v4, &v7);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("number-format");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6e);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-format");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "insert line numbers according to FORMAT");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v7 = struct48 {
        field_0: &g_46f369
        field_8: 2
        field_16: &g_46f36b
        field_24: 2
        field_32: &g_46f36d
        field_40: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("no-renumber");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x70);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "no-renumber");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "do not reset line numbers at logical pages");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("number-separator");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x73);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-separator");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "add STRING after (possible) line number");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("starting-line-number");
    v0 = clap_builder::builder::arg::Arg::short(&v4, 0x76);
    v4 = clap_builder::builder::arg::Arg::long(&v0, "starting-line-number");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "first line number on each logical page");
    v4 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v7 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v12, v11);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v4, &v7);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("number-width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x77);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use NUMBER columns for line numbers");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v7 = 4;
    v8 = alloc::boxed::Box<T>::new();
    v9 = &g_6d9aa8;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
