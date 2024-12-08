fn uu_more::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct32, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592, struct32
    let v5: i64;  // rdx
    let v6: i64;  // rsi

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::about(&v1, "Display the contents of a text file");
    v0 = uucore::format_usage("{} [OPTIONS] FILE...");
    v1 = clap_builder::builder::command::Command::override_usage(&v2, &v0);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("print-over");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 99);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "print-over");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Do not scroll, display text and clean line ends");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("silent");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 100);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "silent");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Display help instead of ringing bell");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("clean-print");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 112);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "clean-print");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Do not scroll, clean screen and display text");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("squeeze");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "squeeze");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Squeeze multiple blank lines into one");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("plain");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 117);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "plain");
    v0 = clap_builder::builder::arg::Arg::action(&v2, 2);
    memcpy(&v3, &v0, 584);
    v3.584 = v0.584 | 4;
    v3.588 = v0.588;
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("pattern");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 80);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "pattern");
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 & -34 | 32;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "pattern");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Display file beginning from pattern match");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("from-line");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 70);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "from-line");
    v0 = clap_builder::builder::arg::Arg::num_args(&v2, v5);
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "number");
    v3 = 4;
    v3.8 = alloc::boxed::Box<T>::new();
    v3.16 = 5650464;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Display file beginning from line number");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("lines");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "lines");
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "number");
    v1 = clap_builder::builder::arg::Arg::num_args(&v0, v5);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v6, v5);
    v3 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "The number of lines per screen full");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("number");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "number");
    v2 = clap_builder::builder::arg::Arg::num_args(&v0, v5);
    v0 = <u16 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v6, v5);
    v3 = clap_builder::builder::value_parser::RangedI64ValueParser<T>::range(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Same as --lines");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("files");
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 & -2;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Path to the files to be read");
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
