fn uu_nl::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x574]
    let v5: u32;  // [bp-0x56c]
    let v6: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v7: struct712;  // [bp-0x568]
    let v8: struct712;  // [bp-0x568]
    let v9: u32;  // [bp-0x2f0]
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct16;  // [bp-0x2a0], Other Possible Types: struct24, struct48, struct32, struct640
    let v15: u64;  // rdx
    let v16: u64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v7 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::version(&v7);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::command::Command::after_help(&v8);
    memcpy(&v8, &v3, 700);
    v10 = 2252349570023552 | v4;
    v11 = v5;
    v3 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Print help information.");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 5);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v6 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v6, 632);
    v1 = v9 | 4;
    v2 = v9;
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v6);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("body-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "body-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STYLE for numbering body lines");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("section-delimiter");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 100);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "section-delimiter");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "use CC for separating logical pages");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0, "CC");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("footer-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 102);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "footer-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STYLE for numbering footer lines");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("header-numbering");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 104);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "header-numbering");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "use STYLE for numbering header lines");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0, "STYLE");
    v6 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("line-increment");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 105);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "line-increment");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line number increment at each line");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v12 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v16);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v12);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 108);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "join-blank-lines");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "group of NUMBER empty lines counted as one");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v12 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser();
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v12);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("number-format");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-format");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "insert line numbers according to FORMAT");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v12 = struct48 {
        field_0: "ln"
        field_16: "rn"
        field_32: "rz"
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v12);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("no-renumber");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 112);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "no-renumber");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "do not reset line numbers at logical pages");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 3);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("number-separator");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-separator");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "add STRING after (possible) line number");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("starting-line-number");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 118);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "starting-line-number");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "first line number on each logical page");
    v6 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v12 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v16);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v6, &v12);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("number-width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use NUMBER columns for line numbers");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v12 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str)
        field_16: &g_63a038
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v12);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return;
}
