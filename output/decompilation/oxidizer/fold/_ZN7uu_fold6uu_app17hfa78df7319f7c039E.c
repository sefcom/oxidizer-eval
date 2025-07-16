fn uu_fold::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: i8;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u32;  // [bp-0x2e8]
    let v10: i8;  // [bp-0x2e4]
    let v11: u64;  // [bp-0x274]
    let v12: u32;  // [bp-0x26c]
    let v13: u8;  // [bp-0x268]
    let v16: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v16);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    clap_builder::builder::command::Command::about(&v3, &v8, "Writes each file (or standard input if no files are given)\nto standard output whilst breaking long lines");
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    clap_builder::builder::arg::Arg::new(&v3, "bytes");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "bytes");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v13);
    clap_builder::builder::arg::Arg::new(&v8, "spaces");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "spaces");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 115);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "break lines at word boundaries rather than a hard cut-off");
    clap_builder::builder::arg::Arg::action(&v13, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v13);
    clap_builder::builder::arg::Arg::new(&v3, "width");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "width");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 119);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "set WIDTH as the maximum line width rather than 80");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = v4 | 32;
    v2 = *(&v5 as &i32);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "file");
    memcpy(&v0, &v8, 584);
    v1 = v9 | 4;
    v2 = *(&v10 as &i32);
    clap_builder::builder::arg::Arg::action(&v8, &v0, 1);
    clap_builder::builder::arg::Arg::value_hint(&v0, &v8, 3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
