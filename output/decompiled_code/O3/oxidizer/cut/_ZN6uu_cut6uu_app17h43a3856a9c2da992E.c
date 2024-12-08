fn uu_cut::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa60]
    let v1: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v3: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v4: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v6: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v3 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v1 = uucore::format_usage("{} OPTION... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v3, &v1);
    v3 = clap_builder::builder::command::Command::about(&v2, "Prints specified byte or field columns from each line of stdin or the input files");
    v2 = clap_builder::builder::command::Command::after_help(&v3, &g_41de36, 3083);
    memcpy(&v3, &v2, 700);
    v3.700 = 584115552392 | (stack_base)[1340] as i64;
    v3.708 = (stack_base)[1332] as i32;
    v2 = clap_builder::builder::arg::Arg::new("bytes");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 98);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "bytes");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "filter byte columns from the input source");
    memcpy(&v2, &v1, 584);
    v2.584 = v1.584 | 32;
    v2.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "LIST");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("characters");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 99);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "characters");
    v1 = clap_builder::builder::arg::Arg::help(&v3, "alias for character mode");
    memcpy(&v3, &v1, 584);
    v3.584 = v1.584 | 32;
    v3.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v3, "LIST");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("delimiter");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 100);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "delimiter");
    v0 = 2;
    v4.16 = (stack_base)[2640] as i64;
    v4 = v0;
    v4.8 = (stack_base)[2648] as i64;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "specify the delimiter character that separates fields in the input source. Defaults to Tab.");
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "DELIM");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v1);
    v3 = clap_builder::builder::arg::Arg::new("whitespace-delimited");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::help(&v1, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).");
    v1 = clap_builder::builder::arg::Arg::value_name(&v3, "WHITESPACE");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("fields");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 102);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "fields");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "filter field columns from the input source");
    memcpy(&v2, &v1, 584);
    v2.584 = v1.584 | 32;
    v2.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, "LIST");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("complement");
    v1 = clap_builder::builder::arg::Arg::long(&v3, "complement");
    v3 = clap_builder::builder::arg::Arg::help(&v1, "invert the filter - instead of displaying only the filtered columns, display all but those columns");
    v1 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("only-delimited");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 115);
    v2 = clap_builder::builder::arg::Arg::long(&v1, "only-delimited");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "in field mode, only print lines which contain the delimiter");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v3, 122);
    v3 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::help(&v3, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)");
    v4 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v3 = clap_builder::builder::command::Command::arg(&v2, &v4);
    v2 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "output-delimiter");
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::help(&v2, "in field mode, replace the delimiter in output lines with this option's argument");
    v4 = clap_builder::builder::arg::Arg::value_name(&v1, "NEW_DELIM");
    v2 = clap_builder::builder::command::Command::arg(&v3, &v4);
    v3 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v1, &v3, 584);
    v1.584 = v3.584 | 4;
    v1.588 = v3.588;
    v3 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v3, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
