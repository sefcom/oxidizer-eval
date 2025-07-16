fn uu_pwd::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa48]
    let v1: u64;  // [bp-0x78c]
    let v2: u32;  // [bp-0x784]
    let v3: u8;  // [bp-0x780]
    let v4: u64;  // [bp-0x4c4]
    let v5: u32;  // [bp-0x4bc]
    let v6: u8;  // [bp-0x4b8]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v3, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v3, "Display the full filename of the current working directory.");
    uucore::format_usage(&v6, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    clap_builder::builder::arg::Arg::new(&v3, "logical");
    clap_builder::builder::arg::Arg::short(&v6, &v3, 76);
    clap_builder::builder::arg::Arg::long(&v3, &v6, "logical");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "use PWD from environment, even if it contains symlinks");
    clap_builder::builder::arg::Arg::action(&v7, &v6);
    clap_builder::builder::command::Command::arg(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new(&v0, "physical");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 80);
    clap_builder::builder::arg::Arg::long(&v0, &v6, "physical");
    clap_builder::builder::arg::Arg::overrides_with(&v6, &v0, "logical");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "avoid all symlinks");
    clap_builder::builder::arg::Arg::action(&v6, &v0);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return a0;
}
