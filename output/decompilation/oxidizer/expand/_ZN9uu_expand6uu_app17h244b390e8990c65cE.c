fn uu_expand::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: u32;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "Convert tabs in each `FILE` to spaces, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.");
    clap_builder::builder::command::Command::after_help(&v3, &v8, 1, 0);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "initial");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "initial");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 105);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "do not convert tabs after non blanks");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "tabs");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "tabs");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 116);
    clap_builder::builder::arg::Arg::value_name(&v0, &v3);
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "no-utf8");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "no-utf8");
    clap_builder::builder::arg::Arg::short(&v8, &v0, 85);
    clap_builder::builder::arg::Arg::help(&v0, &v8, "interpret input file as 8-bit ASCII rather than UTF-8");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "FILES");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    memcpy(&v3, &v0, 584);
    v4 = v1 | 4;
    v5 = v2;
    clap_builder::builder::arg::Arg::value_hint(&v0, &v3, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
