fn uu_cut::uu_app(a0: &struct712) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i8;  // [bp-0xa58]
    let v2: i8;  // [bp-0xa50]
    let v3: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x800]
    let v5: i32;  // [sp-0x7fc]
    let v6: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v7: i32;  // [sp-0x5b0]
    let v8: i32;  // [sp-0x5ac]
    let v9: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v10: i32;  // [sp-0x2e8]
    let v11: i32;  // [sp-0x2e4]
    let v12: i64;  // [sp-0x274]
    let v13: i32;  // [sp-0x26c]
    let v14: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v15: i64;  // [sp-0x260]
    let v16: i64;  // [sp-0x258]
    let v18: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v18);
    v9 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v3 = uucore::format_usage("{} OPTION... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v9, &v3);
    v9 = clap_builder::builder::command::Command::about(&v6, "Prints specified byte or field columns from each line of stdin or the input files");
    v6 = clap_builder::builder::command::Command::after_help(&v9, &g_41dd2e, 3083);
    memcpy(&v9, &v6, 700);
    v12 = 584115552392 | *((&v6 as &char + 700) as &i64);
    v13 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("bytes");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x62);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "bytes");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "filter byte columns from the input source");
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("characters");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x63);
    v9 = clap_builder::builder::arg::Arg::long(&v3, "characters");
    v3 = clap_builder::builder::arg::Arg::help(&v9, "alias for character mode");
    memcpy(&v9, &v3, 584);
    v10 = v4 | 32;
    v11 = v5;
    v3 = clap_builder::builder::arg::Arg::value_name(&v9, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v14);
    v6 = clap_builder::builder::arg::Arg::new("delimiter");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x64);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "delimiter");
    v0 = 2;
    v16 = v2;
    v14 = v0;
    v15 = v1;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v6, &v14);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "specify the delimiter character that separates fields in the input source. Defaults to Tab.");
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "DELIM");
    v6 = clap_builder::builder::command::Command::arg(&v9, &v3);
    v9 = clap_builder::builder::arg::Arg::new("whitespace-delimited");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x77);
    v9 = clap_builder::builder::arg::Arg::help(&v3, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).");
    v3 = clap_builder::builder::arg::Arg::value_name(&v9, "WHITESPACE");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v14);
    v6 = clap_builder::builder::arg::Arg::new("fields");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x66);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "fields");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "filter field columns from the input source");
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    v3 = clap_builder::builder::arg::Arg::value_name(&v6, "LIST");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("complement");
    v3 = clap_builder::builder::arg::Arg::long(&v9, "complement");
    v9 = clap_builder::builder::arg::Arg::help(&v3, "invert the filter - instead of displaying only the filtered columns, display all but those columns");
    v3 = clap_builder::builder::arg::Arg::action(&v9, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("only-delimited");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x73);
    v6 = clap_builder::builder::arg::Arg::long(&v3, "only-delimited");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "in field mode, only print lines which contain the delimiter");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v3 = clap_builder::builder::arg::Arg::short(&v9, 0x7a);
    v9 = clap_builder::builder::arg::Arg::long(&v3, "zero-terminated");
    v3 = clap_builder::builder::arg::Arg::help(&v9, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)");
    v14 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v9 = clap_builder::builder::command::Command::arg(&v6, &v14);
    v6 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "output-delimiter");
    v6 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "in field mode, replace the delimiter in output lines with this option's argument");
    v14 = clap_builder::builder::arg::Arg::value_name(&v3, "NEW_DELIM");
    v6 = clap_builder::builder::command::Command::arg(&v9, &v14);
    v9 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v3, &v9, 584);
    v4 = v10 | 4;
    v5 = v11;
    v9 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v9, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
