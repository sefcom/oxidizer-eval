fn uu_unexpand::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: i8;  // [bp-0x7fc]
    let v3: u64;  // [bp-0x78c]
    let v4: u32;  // [bp-0x784]
    let v5: u8;  // [bp-0x780]
    let v6: u32;  // [bp-0x538]
    let v7: u32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v0, &v8, "0.0.28");
    uucore::format_usage(&v5, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v0, &v5);
    clap_builder::builder::command::Command::about(&v0, &v8, "Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.");
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    clap_builder::builder::arg::Arg::new(&v0, "file");
    memcpy(&v5, &v0, 584);
    v6 = v1 | 4;
    v7 = *(&v2 as &i32);
    clap_builder::builder::arg::Arg::action(&v0, &v5, 1);
    clap_builder::builder::arg::Arg::value_hint(&v5, &v0, 3);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "all");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 97);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "all");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "convert all blanks, instead of just initial blanks");
    clap_builder::builder::arg::Arg::action(&v11, &v5, 2);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "first-only");
    clap_builder::builder::arg::Arg::long(&v5, &v0, "first-only");
    clap_builder::builder::arg::Arg::help(&v0, &v5, "convert only leading sequences of blanks (overrides -a)");
    clap_builder::builder::arg::Arg::action(&v5, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v8, &v5);
    clap_builder::builder::arg::Arg::new(&v8, "tabs");
    clap_builder::builder::arg::Arg::short(&v5, &v8, 116);
    clap_builder::builder::arg::Arg::long(&v8, &v5, "tabs");
    clap_builder::builder::arg::Arg::help(&v5, &v8, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)");
    clap_builder::builder::arg::Arg::action(&v8, &v5, 1);
    clap_builder::builder::arg::Arg::value_name(&v5, &v8);
    clap_builder::builder::command::Command::arg(&v8, &v0, &v5);
    clap_builder::builder::arg::Arg::new(&v0, "no-utf8");
    clap_builder::builder::arg::Arg::short(&v5, &v0, 85);
    clap_builder::builder::arg::Arg::long(&v0, &v5, "no-utf8");
    clap_builder::builder::arg::Arg::help(&v5, &v0, "interpret input file as 8-bit ASCII rather than UTF-8");
    clap_builder::builder::arg::Arg::action(&v0, &v5, 2);
    clap_builder::builder::command::Command::arg(a0, &v8, &v0);
    return a0;
}
