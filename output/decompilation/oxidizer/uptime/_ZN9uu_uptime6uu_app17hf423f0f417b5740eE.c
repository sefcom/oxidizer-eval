fn uu_uptime::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xaf0], Other Possible Types: struct640
    let v1: u64;  // [bp-0x834]
    let v2: u32;  // [bp-0x82c]
    let v3: struct712;  // [bp-0x828], Other Possible Types: struct640
    let v4: u64;  // [bp-0x56c]
    let v5: u32;  // [bp-0x564]
    let v6: struct437;  // [bp-0x560], Other Possible Types: struct640, struct712
    let v7: struct640;  // [bp-0x298], Other Possible Types: u64
    let v10: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v3 = clap_builder::builder::command::Command::version(&v6);
    v6 = clap_builder::builder::command::Command::about(&v3);
    v0 = uucore::format_usage("{} [OPTION]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v6, &v0);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    v6 = clap_builder::builder::arg::Arg::new("since");
    v3 = clap_builder::builder::arg::Arg::short(&v6);
    v6 = clap_builder::builder::arg::Arg::long(&v3);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "system up since");
    v7 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v6 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v3 = clap_builder::builder::arg::Arg::new("path");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "file to search boot time from");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3, None, 1);
    v7 = 2;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return;
}
