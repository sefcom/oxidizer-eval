fn uu_paste::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v4: u64;  // [bp-0x574]
    let v5: u32;  // [bp-0x56c]
    let v6: struct640;  // [bp-0x568], Other Possible Types: struct712
    let v7: u64;  // [bp-0x2ac]
    let v8: u32;  // [bp-0x2a4]
    let v9: struct640;  // [bp-0x2a0]
    let v10: u32;  // [bp-0x28]
    let v11: u32;  // [bp-0x24]
    let v14: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v6 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v6);
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | v7;
    v5 = v8;
    v6 = clap_builder::builder::arg::Arg::new("serial");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "serial");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "paste one file at a time instead of in parallel");
    v9 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("delimiters");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "delimiters");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "reuse characters from LIST instead of TABs");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, &g_417348);
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, &g_418a14);
    memcpy(&v9, &v0, 632);
    v10 = 0x400 | v1;
    v11 = v2;
    v3 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, &g_417384);
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::default_value(&v6, &g_418a15);
    v9 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v6 = clap_builder::builder::command::Command::arg(&v3, &v9);
    v3 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "zero-terminated");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "line delimiter is NUL, not newline");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return;
}
