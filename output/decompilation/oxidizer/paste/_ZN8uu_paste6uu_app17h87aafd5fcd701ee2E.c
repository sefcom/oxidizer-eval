fn uu_paste::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: struct437;  // [bp-0x7f8]
    let v4: u64;  // [bp-0x53c]
    let v5: u32;  // [bp-0x534]
    let v6: u8;  // [bp-0x530]
    let v7: u64;  // [bp-0x274]
    let v8: u32;  // [bp-0x26c]
    let v9: u8;  // [bp-0x268]
    let v10: u32;  // [bp-0x20]
    let v11: u32;  // [bp-0x1c]
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v6, &v3, "0.0.28");
    clap_builder::builder::command::Command::about(&v3, &v6, "Write lines consisting of the sequentially corresponding lines from each\n`FILE`, separated by `TAB`s, to standard output.");
    uucore::format_usage(&v0, "{} [OPTIONS] [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v6, &v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | v7;
    v5 = v8;
    clap_builder::builder::arg::Arg::new(&v6, "serial");
    clap_builder::builder::arg::Arg::long(&v0, &v6, "serial");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::help(&v0, &v6, "paste one file at a time instead of in parallel");
    clap_builder::builder::arg::Arg::action(&v9, &v0, 2);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new(&v3, "delimiters");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "delimiters");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 100);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "reuse characters from LIST instead of TABs");
    clap_builder::builder::arg::Arg::value_name(&v3, &v0, &g_40a4dc);
    clap_builder::builder::arg::Arg::default_value(&v0, &v3, &g_41325d);
    memcpy(&v9, &v0, 584);
    v10 = 0x400 | v1;
    v11 = v2;
    clap_builder::builder::command::Command::arg(&v3, &v6, &v9);
    clap_builder::builder::arg::Arg::new(&v6, "file");
    clap_builder::builder::arg::Arg::value_name(&v0, &v6, &g_40a510);
    clap_builder::builder::arg::Arg::action(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::default_value(&v0, &v6, &g_41325e);
    clap_builder::builder::arg::Arg::value_hint(&v9, &v0, 3);
    clap_builder::builder::command::Command::arg(&v6, &v3, &v9);
    clap_builder::builder::arg::Arg::new(&v3, "zero-terminated");
    clap_builder::builder::arg::Arg::long(&v0, &v3, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v3, &v0, 122);
    clap_builder::builder::arg::Arg::help(&v0, &v3, "line delimiter is NUL, not newline");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
