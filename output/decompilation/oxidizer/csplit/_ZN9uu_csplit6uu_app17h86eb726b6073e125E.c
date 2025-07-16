fn uu_csplit::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa50]
    let v1: u32;  // [bp-0x808]
    let v2: i8;  // [bp-0x804]
    let v3: u64;  // [bp-0x794]
    let v4: u32;  // [bp-0x78c]
    let v5: u8;  // [bp-0x788]
    let v6: u32;  // [bp-0x540]
    let v7: u32;  // [bp-0x53c]
    let v8: struct437;  // [bp-0x538]
    let v9: u32;  // [bp-0x2f0]
    let v10: i8;  // [bp-0x2ec]
    let v11: u64;  // [bp-0x27c]
    let v12: u32;  // [bp-0x274]
    let v13: u8;  // [bp-0x270]
    let v16: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v0, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v0, "Split a file into sections determined by context lines");
    uucore::format_usage(&v5, "{} [OPTION]... FILE PATTERN...");
    clap_builder::builder::command::Command::override_usage(&v0, &v8, &v5);
    memcpy(&v8, &v0, 700);
    v11 = 584115552392 | v3;
    v12 = v4;
    clap_builder::builder::arg::Arg::new(&v0, "suffix-format");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 98);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "suffix-format");
    clap_builder::builder::arg::Arg::value_name(&v5, &v0, &g_470611);
    clap_builder::builder::arg::Arg::help(&v13, &v5, "use sprintf FORMAT instead of %02d");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "prefix");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 102);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "prefix");
    clap_builder::builder::arg::Arg::value_name(&v5, &v8, &g_470639);
    clap_builder::builder::arg::Arg::help(&v13, &v5, "use PREFIX instead of 'xx'");
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "keep-files");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 107);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "keep-files");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "do not remove output files on errors");
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "suppress-matched");
    clap_builder::builder::arg::Arg::long(&v5, &v8, "suppress-matched");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "suppress the lines matching PATTERN");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "digits");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 110);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "digits");
    clap_builder::builder::arg::Arg::value_name(&v5, &v0, &g_4706a0);
    clap_builder::builder::arg::Arg::help(&v13, &v5, "use specified number of digits instead of 2");
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "quiet");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 115);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "quiet");
    clap_builder::builder::arg::Arg::visible_alias(&v5, &v8, "silent");
    clap_builder::builder::arg::Arg::help(&v8, &v5, "do not print counts of output file sizes");
    clap_builder::builder::arg::Arg::action(&v5, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "elide-empty-files");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 122);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "elide-empty-files");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "remove empty output files");
    clap_builder::builder::arg::Arg::action(&v13, &v5, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "file");
    memcpy(&v5, &v8, 584);
    v6 = v9 | 5;
    v7 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::value_hint(&v13, &v5, 3);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v13);
    clap_builder::builder::arg::Arg::new(&v0, "pattern");
    memcpy(&v5, &v0, 584);
    v6 = v1 | 4;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v5, 1);
    memcpy(&v5, &v0, 584);
    v6 = v1 | 1;
    v7 = *(&v2 as &i32);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::command::Command::after_help(a0, &v0, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ..., and output byte counts of each piece to standard output.");
    return a0;
}
