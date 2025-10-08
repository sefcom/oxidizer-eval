fn uu_tty::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct712;  // [bp-0x828], Other Possible Types: struct640
    let v1: u64;  // [bp-0x56c]
    let v2: u32;  // [bp-0x564]
    let v3: struct437;  // [bp-0x560], Other Possible Types: struct712
    let v4: u64;  // [bp-0x2a4]
    let v5: u32;  // [bp-0x29c]
    let v6: struct24;  // [bp-0x298], Other Possible Types: struct640
    let v9: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v0 = clap_builder::builder::command::Command::version(&v3);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v6 = uucore::format_usage("{} [OPTION]...");
    v0 = clap_builder::builder::command::Command::override_usage(&v3, &v6);
    memcpy(&v3, &v0, 700);
    v4 = 549755814016 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::new();
    v6 = clap_builder::builder::arg::Arg::long(&v0);
    v0 = clap_builder::builder::arg::Arg::visible_alias(&v6);
    v6 = clap_builder::builder::arg::Arg::short(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v6);
    v6 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return;
}
