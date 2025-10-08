fn uu_nohup::uu_app() -> : struct700 {
    let a0: i64;  // rdi
    let v0: struct640;  // [bp-0x828], Other Possible Types: struct712
    let v1: struct712;  // [bp-0x828]
    let v2: struct640;  // [bp-0x828]
    let v3: u32;  // [bp-0x5b0]
    let v4: u64;  // [bp-0x56c]
    let v5: u32;  // [bp-0x564]
    let v6: struct24;  // [bp-0x560], Other Possible Types: struct640
    let v7: u32;  // [bp-0x2e8]
    let v8: u32;  // [bp-0x2e4]
    let v9: struct437;  // [bp-0x2e0], Other Possible Types: struct712
    let v12: u64;  // rdx

    v9 = clap_builder::builder::command::Command::new(uucore::util_name(), v12);
    v0 = clap_builder::builder::command::Command::version(&v9);
    v9 = clap_builder::builder::command::Command::about(&v0);
    v1 = clap_builder::builder::command::Command::after_help(&v9);
    v6 = uucore::format_usage("{} COMMAND [ARG]...\n{} OPTION");
    v9 = clap_builder::builder::command::Command::override_usage(&v1, &v6);
    v2 = clap_builder::builder::arg::Arg::new();
    memcpy(&v6, &v2, 632);
    v7 = v3 | 5;
    v8 = v3;
    v0 = clap_builder::builder::arg::Arg::action(&v6);
    v6 = clap_builder::builder::arg::Arg::value_hint(&v0);
    v0 = clap_builder::builder::command::Command::arg(&v9, &v6);
    memcpy(a0, &v0, 700);
    *((a0 + 700) as &u64) = 549755814048 | v4;
    *((a0 + 708) as &u32) = v5;
    return;
}
