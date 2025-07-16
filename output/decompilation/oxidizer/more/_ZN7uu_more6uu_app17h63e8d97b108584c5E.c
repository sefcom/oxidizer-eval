fn uu_more::uu_app(a0: &struct712) -> long long {
    let v0: struct32;  // [bp-0xa48], Other Possible Types: u8
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: u8;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268], Other Possible Types: struct32
    let v12: u32;  // [bp-0x20]
    let v13: u32;  // [bp-0x1c]
    let v16: u64;  // rdx
    let v17: u64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::about(&v8, &v3, "Display the contents of a text file");
    uucore::format_usage(&v0, "{} [OPTIONS] FILE...");
    clap_builder::builder::command::Command::override_usage(&v3, &v8, &v0);
    clap_builder::builder::command::Command::version(&v8, &v3, "0.0.28");
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "print-over");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 99);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "print-over");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Do not scroll, display text and clean line ends");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "silent");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 100);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "silent");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Display help instead of ringing bell");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "clean-print");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 112);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "clean-print");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Do not scroll, clean screen and display text");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "squeeze");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "squeeze");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Squeeze multiple blank lines into one");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "plain");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 117);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "plain");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    memcpy(&v11, &v0, 584);
    v12 = v1 | 4;
    v13 = v2;
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "pattern");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 80);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "pattern");
    memcpy(&v0, &v3, 584);
    v1 = v4 & -34 | 32;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "pattern");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Display file beginning from pattern match");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "from-line");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "from-line");
    clap_builder::builder::arg::Arg::num_args(&v0, &v8);
    clap_builder::builder::arg::Arg::value_name(&v8, &v0, "number");
    v11 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new()
        field_16: &g_5628d0
    };
    clap_builder::builder::arg::Arg::value_parser(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help(&v11, &v0, "Display file beginning from line number");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "lines");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "lines");
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "number");
    clap_builder::builder::arg::Arg::num_args(&v3, &v0);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v17);
    v11 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, None);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v11);
    clap_builder::builder::arg::Arg::help(&v11, &v0, "The number of lines per screen full");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "number");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "number");
    clap_builder::builder::arg::Arg::num_args(&v8, &v0);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v17);
    v11 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, None);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v8, &v11);
    clap_builder::builder::arg::Arg::help(&v11, &v0, "Same as --lines");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "files");
    memcpy(&v0, &v3, 584);
    v1 = v4 & -2;
    v2 = *(&v5 as &i32);
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Path to the files to be read");
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
