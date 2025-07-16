fn uu_wc::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa60]
    let v1: u64;  // [bp-0xa58]
    let v2: u64;  // [bp-0xa50]
    let v3: struct437;  // [bp-0xa48], Other Possible Types: u512
    let v4: u32;  // [bp-0x800]
    let v5: u32;  // [bp-0x7fc]
    let v6: u64;  // [bp-0x78c]
    let v7: u32;  // [bp-0x784]
    let v8: u8;  // [bp-0x780]
    let v9: u32;  // [bp-0x538]
    let v10: u32;  // [bp-0x534]
    let v11: u8;  // [bp-0x530]
    let v12: u64;  // [bp-0x274]
    let v13: u32;  // [bp-0x26c]
    let v14: u8;  // [bp-0x268], Other Possible Types: struct24
    let v15: u64;  // [bp-0x260]
    let v16: u64;  // [bp-0x258]
    let v19: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v19);
    clap_builder::builder::command::Command::version(&v11, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v11, "Display newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified. With no FILE, or when FILE is -, read standard input.");
    uucore::format_usage(&v8, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v11, &v3, &v8);
    memcpy(&v3, &v11, 700);
    v6 = 584115552392 | v12;
    v7 = v13;
    clap_builder::builder::arg::Arg::new(&v11, "bytes");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 99);
    clap_builder::builder::arg::Arg::long(&v11, &v8, "bytes");
    clap_builder::builder::arg::Arg::help(&v8, &v11, "print the byte counts");
    clap_builder::builder::arg::Arg::action(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg(&v11, &v3, &v14);
    clap_builder::builder::arg::Arg::new(&v3, "chars");
    clap_builder::builder::arg::Arg::short(&v8, &v3, 109);
    clap_builder::builder::arg::Arg::long(&v3, &v8, "chars");
    clap_builder::builder::arg::Arg::help(&v8, &v3, "print the character counts");
    clap_builder::builder::arg::Arg::action(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::new(&v11, "files0-from");
    clap_builder::builder::arg::Arg::long(&v8, &v11, "files0-from");
    clap_builder::builder::arg::Arg::value_name(&v11, &v8, "F");
    clap_builder::builder::arg::Arg::help(&v8, &v11, "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input");
    v0 = 2;
    v16 = v2;
    v14 = v0;
    v15 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v11, &v8, &v14);
    clap_builder::builder::arg::Arg::value_hint(&v8, &v11, 3);
    clap_builder::builder::command::Command::arg(&v11, &v3, &v8);
    clap_builder::builder::arg::Arg::new(&v3, "lines");
    clap_builder::builder::arg::Arg::short(&v8, &v3, 108);
    clap_builder::builder::arg::Arg::long(&v3, &v8, "lines");
    clap_builder::builder::arg::Arg::help(&v8, &v3, "print the newline counts");
    clap_builder::builder::arg::Arg::action(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg(&v3, &v11, &v14);
    clap_builder::builder::arg::Arg::new(&v11, "max-line-length");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 76);
    clap_builder::builder::arg::Arg::long(&v11, &v8, "max-line-length");
    clap_builder::builder::arg::Arg::help(&v8, &v11, "print the length of the longest line");
    clap_builder::builder::arg::Arg::action(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg(&v11, &v3, &v14);
    clap_builder::builder::arg::Arg::new(&v3, "total");
    clap_builder::builder::arg::Arg::long(&v8, &v3, "total");
    v3 = struct64 {
        field_0: &g_415794
        field_8: 4
        field_16: &g_41e30f
        field_24: 6
        field_32: &g_4157c4
        field_40: 4
        field_48: &g_41e315
        field_56: 5
    };
    v14 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v8, &v14);
    clap_builder::builder::arg::Arg::value_name(&v8, &v3, "WHEN");
    memcpy(&v3, &v8, 584);
    v4 = v9 | 16;
    v5 = v10;
    clap_builder::builder::arg::Arg::help(&v8, &v3, "when to print a line with total counts;\n  WHEN can be: auto, always, only, never");
    clap_builder::builder::command::Command::arg(&v3, &v11, &v8);
    clap_builder::builder::arg::Arg::new(&v11, "words");
    clap_builder::builder::arg::Arg::short(&v8, &v11, 119);
    clap_builder::builder::arg::Arg::long(&v11, &v8, "words");
    clap_builder::builder::arg::Arg::help(&v8, &v11, "print the word counts");
    clap_builder::builder::arg::Arg::action(&v14, &v8, 2);
    clap_builder::builder::command::Command::arg(&v11, &v3, &v14);
    clap_builder::builder::arg::Arg::new(&v3, "files");
    clap_builder::builder::arg::Arg::action(&v8, &v3, 1);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::value_hint(&v8, &v3, 3);
    clap_builder::builder::command::Command::arg(a0, &v11, &v8);
    return a0;
}
