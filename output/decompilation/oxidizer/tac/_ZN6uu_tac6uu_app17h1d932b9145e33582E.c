fn uu_tac::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct640;  // [bp-0x830], Other Possible Types: struct712
    let v4: u64;  // [bp-0x574]
    let v5: u32;  // [bp-0x56c]
    let v6: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v7: struct712;  // [bp-0x568]
    let v8: struct640;  // [bp-0x568]
    let v9: u32;  // [bp-0x2f0]
    let v10: u64;  // [bp-0x2ac]
    let v11: u32;  // [bp-0x2a4]
    let v12: struct640;  // [bp-0x2a0]
    let v15: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v15);
    v3 = clap_builder::builder::command::Command::version(&v6);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::command::Command::about(&v6);
    memcpy(&v6, &v3, 700);
    v10 = 549755814016 | v4;
    v11 = v5;
    v3 = clap_builder::builder::arg::Arg::new("before");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 98);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "before");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "attach the separator before instead of after");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v6, &v12);
    v6 = clap_builder::builder::arg::Arg::new("regex");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 114);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "regex");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "interpret the sequence as a regular expression");
    v12 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v7 = clap_builder::builder::command::Command::arg(&v3, &v12);
    v3 = clap_builder::builder::arg::Arg::new("separator");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "separator");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "use STRING as the separator instead of newline");
    v12 = clap_builder::builder::arg::Arg::value_name(&v0);
    v3 = clap_builder::builder::command::Command::arg(&v7, &v12);
    v8 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v8, 632);
    v1 = v9 | 4;
    v2 = v9;
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v6);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return;
}
