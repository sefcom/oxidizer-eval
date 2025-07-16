fn uu_nl::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u64;  // [bp-0x53c]
    let v5: u32;  // [bp-0x534]
    let v6: u8;  // [bp-0x530]
    let v7: u32;  // [bp-0x2e8]
    let v8: i8;  // [bp-0x2e4]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u384;  // [bp-0x268], Other Possible Types: struct32, struct16
    let v14: u64;  // rdx
    let v15: u64;  // rsi

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::about(&v6, &v3, "Number lines of files");
    clap_builder::builder::command::Command::version(&v3, &v6, "0.0.28");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v6, &v3, &v0);
    clap_builder::builder::command::Command::after_help(&v3, &v6, "STYLE is one of:\n\n* a     number all lines\n* t     number only nonempty lines\n* n     number no lines\n* pBRE  number only lines that contain a match for the basic regular\n        expression, BRE\n\nFORMAT is one of:\n\n* ln    left justified, no leading zeros\n* rn    right justified, no leading zeros\n* rz    right justified, leading zeros");
    memcpy(&v6, &v3, 700);
    v9 = 1126449662918784 | v4;
    v10 = v5;
    clap_builder::builder::arg::Arg::new(&v3, "help");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "help");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 5);
    clap_builder::builder::command::Command::arg(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new(&v6, "file");
    memcpy(&v0, &v6, 584);
    v1 = v7 | 4;
    v2 = *(&v8 as &i32);
    clap_builder::builder::arg::Arg::action(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v6, 3);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "body-numbering");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 98);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "body-numbering");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "use STYLE for numbering body lines");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STYLE");
    clap_builder::builder::command::Command::arg(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "section-delimiter");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 100);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "section-delimiter");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "use CC for separating logical pages");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "CC");
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "footer-numbering");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 102);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "footer-numbering");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "use STYLE for numbering footer lines");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STYLE");
    clap_builder::builder::command::Command::arg(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "header-numbering");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 104);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "header-numbering");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "use STYLE for numbering header lines");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STYLE");
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "line-increment");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 105);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "line-increment");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "line number increment at each line");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "NUMBER");
    v11 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v15);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new(&v6, "join-blank-lines");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 108);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "join-blank-lines");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "group of NUMBER empty lines counted as one");
    clap_builder::builder::arg::Arg::value_name(&v6, &v0, "NUMBER");
    v11 = <u64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser();
    clap_builder::builder::arg::Arg::value_parser(&v0, &v6, &v11);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "number-format");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "number-format");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "insert line numbers according to FORMAT");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "FORMAT");
    v11 = core::fmt::Arguments {
        pieces: [&g_46f369, &g_46f379]
        args: [&g_46f36b, &g_46f37b]
        fmt: &g_46f36d
    };
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg(&v3, &v6, &v0);
    clap_builder::builder::arg::Arg::new(&v6, "no-renumber");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 112);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "no-renumber");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "do not reset line numbers at logical pages");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 3);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "number-separator");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "number-separator");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "add STRING after (possible) line number");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STRING");
    clap_builder::builder::command::Command::arg(&v3, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "starting-line-number");
    clap_builder::builder::arg::Arg::short(&v0, &v6, 118);
    clap_builder::builder::arg::Arg::long(&v6, &v0, "starting-line-number");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "first line number on each logical page");
    clap_builder::builder::arg::Arg::value_name(&v6, &v0, "NUMBER");
    v11 = <i64 as clap_builder::builder::value_parser::ValueParserFactory>::value_parser(v15);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v6, &v11);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "number-width");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "number-width");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "use NUMBER columns for line numbers");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, "NUMBER");
    v11 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new()
        field_16: &g_6d9aa8
    };
    clap_builder::builder::arg::Arg::value_parser(&v0, &v3, &v11);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
