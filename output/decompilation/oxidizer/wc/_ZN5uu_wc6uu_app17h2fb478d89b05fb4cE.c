fn uu_wc::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct437;  // [bp-0xab0], Other Possible Types: struct64, struct712, struct640
    let v2: u32;  // [bp-0x838]
    let v3: u32;  // [bp-0x834]
    let v4: u64;  // [bp-0x7f4]
    let v5: u32;  // [bp-0x7ec]
    let v6: struct24;  // [bp-0x7e8], Other Possible Types: struct640
    let v7: u32;  // [bp-0x570]
    let v8: u32;  // [bp-0x56c]
    let v9: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v9 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v9);
    v6 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v9 = clap_builder::builder::command::Command::override_usage(&v1, &v6);
    memcpy(&v1, &v9, 700);
    v4 = 584115552392 | v10;
    v5 = v11;
    v9 = clap_builder::builder::arg::Arg::new("bytes");
    v6 = clap_builder::builder::arg::Arg::short(&v9, 99);
    v9 = clap_builder::builder::arg::Arg::long(&v6, "bytes");
    v6 = clap_builder::builder::arg::Arg::help(&v9, "print the byte counts");
    v12 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v9 = clap_builder::builder::command::Command::arg(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::new("chars");
    v6 = clap_builder::builder::arg::Arg::short(&v1, 109);
    v1 = clap_builder::builder::arg::Arg::long(&v6, "chars");
    v6 = clap_builder::builder::arg::Arg::help(&v1, "print the character counts");
    v12 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v1 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("files0-from");
    v6 = clap_builder::builder::arg::Arg::long(&v9, "files0-from");
    v9 = clap_builder::builder::arg::Arg::value_name(&v6, "F");
    v6 = clap_builder::builder::arg::Arg::help(&v9, "read input from the files specified by\n  NUL-terminated names in file F;\n  If F is - then read names from standard input");
    v0 = 2;
    v9 = clap_builder::builder::arg::Arg::value_parser(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v9);
    v9 = clap_builder::builder::command::Command::arg(&v1, &v6);
    v1 = clap_builder::builder::arg::Arg::new("lines");
    v6 = clap_builder::builder::arg::Arg::short(&v1, 108);
    v1 = clap_builder::builder::arg::Arg::long(&v6, "lines");
    v6 = clap_builder::builder::arg::Arg::help(&v1, "print the newline counts");
    v12 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v1 = clap_builder::builder::command::Command::arg(&v9, &v12);
    v9 = clap_builder::builder::arg::Arg::new("max-line-length");
    v6 = clap_builder::builder::arg::Arg::short(&v9, 76);
    v9 = clap_builder::builder::arg::Arg::long(&v6, "max-line-length");
    v6 = clap_builder::builder::arg::Arg::help(&v9, "print the length of the longest line");
    v12 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v9 = clap_builder::builder::command::Command::arg(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::new("total");
    v6 = clap_builder::builder::arg::Arg::long(&v1, "total");
    v1 = struct64 {
        field_0: "auto"
        field_16: "always"
        field_32: "only"
        field_48: "never"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v12, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    memcpy(&v1, &v6, 632);
    v2 = v7 | 16;
    v3 = v8;
    v6 = clap_builder::builder::arg::Arg::help(&v1, "when to print a line with total counts;\n  WHEN can be: auto, always, only, never");
    v1 = clap_builder::builder::command::Command::arg(&v9, &v6);
    v9 = clap_builder::builder::arg::Arg::new("words");
    v6 = clap_builder::builder::arg::Arg::short(&v9, 119);
    v9 = clap_builder::builder::arg::Arg::long(&v6, "words");
    v6 = clap_builder::builder::arg::Arg::help(&v9, "print the word counts");
    v12 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v9 = clap_builder::builder::command::Command::arg(&v1, &v12);
    v1 = clap_builder::builder::arg::Arg::new("files");
    v6 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v1);
    clap_builder::builder::command::Command::arg(a0, &v9, &v6);
    return;
}
