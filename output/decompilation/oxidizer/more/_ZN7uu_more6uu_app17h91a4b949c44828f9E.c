fn uu_more::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab8], Other Possible Types: struct32, struct640
    let v1: u32;  // [bp-0x840]
    let v2: u32;  // [bp-0x83c]
    let v3: struct437;  // [bp-0x838], Other Possible Types: struct712, struct640
    let v4: struct712;  // [bp-0x838]
    let v5: struct640;  // [bp-0x838]
    let v6: struct640;  // [bp-0x838]
    let v7: u32;  // [bp-0x5c0]
    let v8: u64;  // [bp-0x57c]
    let v9: u32;  // [bp-0x574]
    let v10: struct712;  // [bp-0x570], Other Possible Types: struct640
    let v11: u64;  // [bp-0x2b4]
    let v12: u32;  // [bp-0x2ac]
    let v13: struct24;  // [bp-0x2a8], Other Possible Types: struct32, struct640
    let v14: u32;  // [bp-0x30]
    let v15: u32;  // [bp-0x2c]
    let v18: u64;  // rdx
    let v19: u64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v10 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTIONS] FILE...");
    v3 = clap_builder::builder::command::Command::override_usage(&v10, &v0);
    v10 = clap_builder::builder::command::Command::version(&v3);
    memcpy(&v3, &v10, 700);
    v8 = 549755814016 | v11;
    v9 = v12;
    v10 = clap_builder::builder::arg::Arg::new("print-over");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 99);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "print-over");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "Do not scroll, display text and clean line ends");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 100);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Display help instead of ringing bell");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("clean-print");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 112);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "clean-print");
    v0 = clap_builder::builder::arg::Arg::help(&v10, "Do not scroll, clean screen and display text");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("squeeze");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "squeeze");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Squeeze multiple blank lines into one");
    v13 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v4 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("plain");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 117);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "plain");
    v0 = clap_builder::builder::arg::Arg::action(&v10, 2);
    memcpy(&v13, &v0, 632);
    v14 = v1 | 4;
    v15 = v2;
    v10 = clap_builder::builder::command::Command::arg(&v4, &v13);
    v5 = clap_builder::builder::arg::Arg::new("pattern");
    v0 = clap_builder::builder::arg::Arg::short(&v5, 80);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "pattern");
    memcpy(&v0, &v6, 632);
    v1 = v7 & -34 | 32;
    v2 = v7;
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "pattern");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Display file beginning from pattern match");
    v3 = clap_builder::builder::command::Command::arg(&v10, &v0);
    v10 = clap_builder::builder::arg::Arg::new("from-line");
    v0 = clap_builder::builder::arg::Arg::short(&v10, 70);
    v10 = clap_builder::builder::arg::Arg::long(&v0, "from-line");
    v0 = clap_builder::builder::arg::Arg::num_args(&v10);
    v10 = clap_builder::builder::arg::Arg::value_name(&v0, "number");
    v13 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str)
        field_16: &g_525228
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v10, &v13);
    v13 = clap_builder::builder::arg::Arg::help(&v0, "Display file beginning from line number");
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("lines");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "number");
    v3 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v19);
    v13 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v13);
    v13 = clap_builder::builder::arg::Arg::help(&v0, "The number of lines per screen full");
    v3 = clap_builder::builder::command::Command::arg(&v10, &v13);
    v10 = clap_builder::builder::arg::Arg::new("number");
    v0 = clap_builder::builder::arg::Arg::long(&v10, "number");
    v10 = clap_builder::builder::arg::Arg::num_args(&v0);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v19);
    v13 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v10, &v13);
    v13 = clap_builder::builder::arg::Arg::help(&v0, "Same as --lines");
    v10 = clap_builder::builder::command::Command::arg(&v3, &v13);
    v3 = clap_builder::builder::arg::Arg::new("files");
    memcpy(&v0, &v3, 632);
    v1 = v7 & -2;
    v2 = *((&(&v4)[79].field_0 as &char + 4) as &i32);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Path to the files to be read");
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v10, &v3);
    return;
}
