fn uu_more::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct32, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v4: i64;  // [sp-0x53c]
    let v5: i32;  // [sp-0x534]
    let v6: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v7: i4736;  // [sp-0x268], Other Possible Types: struct592, struct32
    let v8: i64;  // [sp-0x260]
    let v9: i64;  // [sp-0x258]
    let v10: i32;  // [sp-0x20]
    let v11: i32;  // [sp-0x1c]
    let v13: i64;  // rdx
    let v14: i64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v6 = clap_builder::builder::command::Command::about(&v3, "Display the contents of a text file");
    v0 = uucore::format_usage("{} [OPTIONS] FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v6, &v0);
    v6 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("print-over");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x63);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "print-over");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Do not scroll, display text and clean line ends");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x64);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Display help instead of ringing bell");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("clean-print");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x70);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "clean-print");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Do not scroll, clean screen and display text");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("squeeze");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x73);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "squeeze");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Squeeze multiple blank lines into one");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("plain");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x75);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "plain");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    memcpy(&v7, &v0, 584);
    v10 = v1 | 4;
    v11 = v2;
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("pattern");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x50);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "pattern");
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) & -34 | 32;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "pattern");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Display file beginning from pattern match");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("from-line");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x46);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "from-line");
    v0 = clap_builder::builder::arg::Arg::num_args(&v6, v13);
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "number");
    v7 = 4;
    v8 = alloc::boxed::Box<T>::new();
    v9 = &g_5628d0;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v7);
    v7 = clap_builder::builder::arg::Arg::help(&v0, "Display file beginning from line number");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("lines");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 0x6e);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "number");
    v3 = clap_builder::builder::arg::Arg::num_args(&v0, v13);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v14, v13);
    v7 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, None);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v7);
    v7 = clap_builder::builder::arg::Arg::help(&v0, "The number of lines per screen full");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("number");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "number");
    v6 = clap_builder::builder::arg::Arg::num_args(&v0, v13);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v14, v13);
    v7 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, None);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v7);
    v7 = clap_builder::builder::arg::Arg::help(&v0, "Same as --lines");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("files");
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) & -2;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Path to the files to be read");
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
