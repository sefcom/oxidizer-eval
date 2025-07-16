fn uu_printenv::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u64;  // [bp-0x794]
    let v2: u32;  // [bp-0x78c]
    let v3: u8;  // [bp-0x788]
    let v4: u8;  // [bp-0x538]
    let v5: u64;  // [bp-0x27c]
    let v6: u32;  // [bp-0x274]
    let v7: u8;  // [bp-0x270]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v4, &v0);
    clap_builder::builder::command::Command::about(&v0, &v4);
    uucore::format_usage(&v3, "{} [OPTION]... [VARIABLE]...");
    clap_builder::builder::command::Command::override_usage(&v4, &v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | v5;
    v2 = v6;
    clap_builder::builder::arg::Arg::new(&v4, "null");
    clap_builder::builder::arg::Arg::short(&v3, &v4);
    clap_builder::builder::arg::Arg::long(&v4, &v3);
    clap_builder::builder::arg::Arg::help(&v3, &v4);
    clap_builder::builder::arg::Arg::action(&v7, &v3, 2);
    clap_builder::builder::command::Command::arg(&v4, &v0, &v7);
    clap_builder::builder::arg::Arg::new(&v0, "variables");
    clap_builder::builder::arg::Arg::action(&v3, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
