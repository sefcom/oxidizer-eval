fn uu_comm::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: i8;  // [bp-0x804]
    let v3: u64;  // [bp-0x794]
    let v4: u32;  // [bp-0x78c]
    let v5: u8;  // [bp-0x788]
    let v6: u32;  // [bp-0x540]
    let v7: u32;  // [bp-0x53c]
    let v8: u8;  // [bp-0x538]
    let v9: u32;  // [bp-0x2f0]
    let v10: i8;  // [bp-0x2ec]
    let v11: u64;  // [bp-0x27c]
    let v12: u32;  // [bp-0x274]
    let v13: u8;  // [bp-0x270]
    let v16: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v8, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v8, "Compare two sorted files line by line.\n\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n\nWith no options, produce three-column output. Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.");
    uucore::format_usage(&v5, "{} [OPTION]... FILE1 FILE2");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v11;
    v4 = v12;
    clap_builder::builder::arg::Arg::new(&v8, "1");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 49);
    clap_builder::builder::arg::Arg::help(&v8, &v5, "suppress column 1 (lines unique to FILE1)");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "2");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 50);
    clap_builder::builder::arg::Arg::help(&v0, &v5, "suppress column 2 (lines unique to FILE2)");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "3");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 51);
    clap_builder::builder::arg::Arg::help(&v8, &v5, "suppress column 3 (lines that appear in both files)");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "output-delimiter");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "output-delimiter");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "separate columns with STR");
    clap_builder::builder::arg::Arg::value_name(&v5, &v0);
    clap_builder::builder::arg::Arg::default_value(&v0, &v5);
    memcpy(&v5, &v0, 584);
    v6 = v1 | 32;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v5, 1);
    memcpy(&v5, &v0, 584);
    v6 = 0x400 | v1;
    v7 = *(&v2 as &i32);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "zero-terminated");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v8, &v5, 122);
    clap_builder::builder::arg::Arg::overrides_with(&v5, &v8, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "FILE1");
    memcpy(&v5, &v0, 584);
    v6 = v1 | 1;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::value_hint(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "FILE2");
    memcpy(&v5, &v8, 584);
    v6 = v9 | 1;
    v7 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::value_hint(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "total");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "total");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "output a summary");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v5);
    return a0;
}
