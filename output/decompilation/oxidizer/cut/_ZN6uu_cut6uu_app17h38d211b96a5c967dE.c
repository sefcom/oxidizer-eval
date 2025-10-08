fn uu_cut::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xac8]
    let v1: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v2: u32;  // [bp-0x838]
    let v3: u32;  // [bp-0x834]
    let v4: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v5: u32;  // [bp-0x5b8]
    let v6: u32;  // [bp-0x5b4]
    let v7: u64;  // [bp-0x574]
    let v8: u32;  // [bp-0x56c]
    let v9: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v10: u32;  // [bp-0x2f0]
    let v11: u32;  // [bp-0x2ec]
    let v12: u64;  // [bp-0x2ac]
    let v13: u32;  // [bp-0x2a4]
    let v14: struct640;  // [bp-0x2a0]
    let v17: u64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v17);
    v9 = clap_builder::builder::command::Command::version(&v4);
    v1 = uucore::format_usage("{} OPTION... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v9, &v1);
    v9 = clap_builder::builder::command::Command::about(&v4);
    v4 = clap_builder::builder::command::Command::after_help(&v9);
    memcpy(&v9, &v4, 700);
    v12 = 584115552392 | v7;
    v13 = v8;
    v4 = clap_builder::builder::arg::Arg::new("bytes");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 98);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "bytes");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "filter byte columns from the input source");
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("characters");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 99);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "characters");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "alias for character mode");
    memcpy(&v9, &v1, 632);
    v10 = v2 | 32;
    v11 = v3;
    v1 = clap_builder::builder::arg::Arg::value_name(&v9, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("delimiter");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 100);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "delimiter");
    v0 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::help(&v1, "specify the delimiter character that separates fields in the input source. Defaults to Tab.");
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "DELIM");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v1);
    v9 = clap_builder::builder::arg::Arg::new("whitespace-delimited");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 119);
    v9 = clap_builder::builder::arg::Arg::help(&v1, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).");
    v1 = clap_builder::builder::arg::Arg::value_name(&v9, "WHITESPACE");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("fields");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 102);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "fields");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "filter field columns from the input source");
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1 = clap_builder::builder::arg::Arg::value_name(&v4, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("complement");
    v1 = clap_builder::builder::arg::Arg::long(&v9, "complement");
    v9 = clap_builder::builder::arg::Arg::help(&v1, "invert the filter - instead of displaying only the filtered columns, display all but those columns");
    v1 = clap_builder::builder::arg::Arg::action(&v9, 2);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v1);
    v4 = clap_builder::builder::arg::Arg::new("only-delimited");
    v1 = clap_builder::builder::arg::Arg::short(&v4, 115);
    v4 = clap_builder::builder::arg::Arg::long(&v1, "only-delimited");
    v1 = clap_builder::builder::arg::Arg::help(&v4, "in field mode, only print lines which contain the delimiter");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v9, 122);
    v9 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)");
    v14 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v9 = clap_builder::builder::command::Command::arg(&v4, &v14);
    v4 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v1 = clap_builder::builder::arg::Arg::long(&v4, "output-delimiter");
    v4 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::help(&v4, "in field mode, replace the delimiter in output lines with this option's argument");
    v14 = clap_builder::builder::arg::Arg::value_name(&v1, "NEW_DELIM");
    v4 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v9, 632);
    v2 = v10 | 4;
    v3 = v11;
    v9 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v9);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return;
}
