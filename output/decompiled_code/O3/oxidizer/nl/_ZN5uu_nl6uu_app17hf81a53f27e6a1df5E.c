fn uu_nl::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: i4736;  // [sp-0x268], Other Possible Types: struct592, struct32, struct48
    let v5: i64;  // rdx
    let v6: i64;  // rsi

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::about(&v1, "Number lines of files");
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    v1 = clap_builder::builder::command::Command::after_help(&v2, &g_46f54c, 336);
    memcpy(&v2, &v1, 700);
    v2.700 = 1126449662918784 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "help");
    v1 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 5);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v2, 3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("body-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 98);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "body-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "use STYLE for numbering body lines");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("section-delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 100);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "section-delimiter");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "use CC for separating logical pages");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "CC");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("footer-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 102);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "footer-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "use STYLE for numbering footer lines");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("header-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 104);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "header-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "use STYLE for numbering header lines");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("line-increment");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 105);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "line-increment");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "line number increment at each line");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v6, v5);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 108);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "group of NUMBER empty lines counted as one");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v6, v5);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("number-format");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 110);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "number-format");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "insert line numbers according to FORMAT");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v3 = struct48 {
        field_0: &g_46f4c9
        field_8: 2
        field_16: &g_46f4cb
        field_24: 2
        field_32: &g_46f4cd
        field_40: 2
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("no-renumber");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 112);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "no-renumber");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "do not reset line numbers at logical pages");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("number-separator");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 115);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "number-separator");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "add STRING after (possible) line number");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("starting-line-number");
    v0 = clap_builder::builder::arg::Arg::short(&v2, 118);
    v2 = clap_builder::builder::arg::Arg::long(&v0, "starting-line-number");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "first line number on each logical page");
    v2 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v6, v5);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v2, &v3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("number-width");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 119);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "number-width");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "use NUMBER columns for line numbers");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v3 = 4;
    v3.field_8 = alloc::boxed::Box<T>::new();
    v3.field_16 = 7185976;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1, &v3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
