fn uu_users::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x840]
    let v1: struct437;  // [bp-0x828], Other Possible Types: struct712
    let v2: u64;  // [bp-0x56c]
    let v3: u32;  // [bp-0x564]
    let v4: struct640;  // [bp-0x560], Other Possible Types: struct712
    let v5: u64;  // [bp-0x2a4]
    let v6: u32;  // [bp-0x29c]
    let v7: struct24;  // [bp-0x298], Other Possible Types: struct640
    let v10: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v4 = clap_builder::builder::command::Command::version(&v1);
    v1 = clap_builder::builder::command::Command::about(&v4);
    v7 = uucore::format_usage("{} [FILE]");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v7);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | v5;
    v3 = v6;
    v4 = clap_builder::builder::arg::Arg::new();
    v7 = clap_builder::builder::arg::Arg::num_args(&v4);
    v4 = clap_builder::builder::arg::Arg::value_hint(&v7);
    v0 = 2;
    v7 = clap_builder::builder::arg::Arg::value_parser(&v4, &v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v7);
    return;
}
