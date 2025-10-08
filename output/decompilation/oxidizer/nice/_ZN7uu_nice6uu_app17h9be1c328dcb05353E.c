fn uu_nice::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0xaa8], Other Possible Types: struct640
    let v1: u64;  // [bp-0x7ec]
    let v2: u32;  // [bp-0x7e4]
    let v3: struct24;  // [bp-0x7e0], Other Possible Types: struct640
    let v4: u32;  // [bp-0x568]
    let v5: u32;  // [bp-0x564]
    let v6: struct437;  // [bp-0x560], Other Possible Types: struct640, struct712
    let v7: u64;  // [bp-0x2a4]
    let v8: u32;  // [bp-0x29c]
    let v9: u8;  // [bp-0x298]
    let v10: u32;  // [bp-0x20]
    let v11: u32;  // [bp-0x1c]
    let v14: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v0 = clap_builder::builder::command::Command::about(&v6);
    v3 = uucore::format_usage("{} [OPTIONS] [COMMAND [ARGS]]");
    v6 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 549755814048 | v7;
    v2 = v8;
    v6 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::arg::Arg::new("adjustment");
    v3 = clap_builder::builder::arg::Arg::short(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v0);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0);
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0);
    memcpy(&v9, &v3, 632);
    v10 = v4 | 32;
    v11 = v5;
    v0 = clap_builder::builder::command::Command::arg(&v6, &v9);
    v6 = clap_builder::builder::arg::Arg::new("COMMAND");
    v3 = clap_builder::builder::arg::Arg::action(&v6, 1);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return;
}
