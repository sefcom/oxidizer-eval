fn uu_tac::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u64;  // [bp-0x78c]
    let v2: u32;  // [bp-0x784]
    let v3: u8;  // [bp-0x780]
    let v4: u32;  // [bp-0x538]
    let v5: u32;  // [bp-0x534]
    let v6: struct437;  // [bp-0x530]
    let v7: u32;  // [bp-0x2e8]
    let v8: i8;  // [bp-0x2e4]
    let v9: u64;  // [bp-0x274]
    let v10: u32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v0, &v6, "0.0.28");
    uucore::format_usage(&v3, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v6, &v0, &v3);
    clap_builder::builder::command::Command::about(&v0, &v6, "Write each file to standard output, last line first.");
    memcpy(&v6, &v0, 700);
    v9 = 549755814016 | v1;
    v10 = v2;
    clap_builder::builder::arg::Arg::new(&v0, "before");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 98);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "before");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "attach the separator before instead of after");
    clap_builder::builder::arg::Arg::action(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "regex");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 114);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "regex");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "interpret the sequence as a regular expression");
    clap_builder::builder::arg::Arg::action(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v0, &v11);
    clap_builder::builder::arg::Arg::new(&v0, "separator");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v3, "separator");
    clap_builder::builder::arg::Arg::help(&v3, &v0, "use STRING as the separator instead of newline");
    clap_builder::builder::arg::Arg::value_name(&v11, &v3);
    clap_builder::builder::command::Command::arg(&v0, &v6, &v11);
    clap_builder::builder::arg::Arg::new(&v6, "file");
    memcpy(&v3, &v6, 584);
    v4 = v7 | 4;
    v5 = *(&v8 as &i32);
    clap_builder::builder::arg::Arg::action(&v6, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v6, 3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v3);
    return a0;
}
