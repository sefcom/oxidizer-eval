fn uu_comm::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x794]
    let v2: i32;  // [sp-0x78c]
    let v3: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v4: i32;  // [sp-0x540]
    let v5: i32;  // [sp-0x53c]
    let v6: i4736;  // [sp-0x538], Other Possible Types: struct592, struct712
    let v7: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v6 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v6, "Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.");
    v3 = uucore::format_usage("{} [OPTION]... FILE1 FILE2");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 584115552392 | *((&v6 as &char + 700) as &i64);
    v2 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("1");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x31);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "suppress column 1 (lines unique to FILE1)");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("2");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x32);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "suppress column 2 (lines unique to FILE2)");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("3");
    v3 = clap_builder::builder::arg::Arg::short(&v6, 0x33);
    v6 = clap_builder::builder::arg::Arg::help(&v3, "suppress column 3 (lines that appear in both files)");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("output-delimiter");
    v3 = clap_builder::builder::arg::Arg::long(&v0, "output-delimiter");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "separate columns with STR");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v3);
    memcpy(&v3, &v0, 584);
    v4 = *((&v0 as &char + 584) as &i32) | 32;
    v5 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    memcpy(&v3, &v0, 584);
    v4 = 0x400 | *((&v0 as &char + 584) as &i32);
    v5 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v3);
    v6 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v3 = clap_builder::builder::arg::Arg::long(&v6, "zero-terminated");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 0x7a);
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v6, "zero-terminated");
    v6 = clap_builder::builder::arg::Arg::help(&v3, "line delimiter is NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("FILE1");
    memcpy(&v3, &v0, 584);
    v4 = *((&v0 as &char + 584) as &i32) | 1;
    v5 = *((&v0 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v0 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("FILE2");
    memcpy(&v3, &v6, 584);
    v4 = *((&v6 as &char + 584) as &i32) | 1;
    v5 = *((&v6 as &char + 588) as &i32);
    v7 = clap_builder::builder::arg::Arg::value_hint(&v3, 0x3);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("total");
    v3 = clap_builder::builder::arg::Arg::long(&v0, "total");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "output a summary");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
