fn uu_factor::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa50]
    let v1: u64;  // [bp-0x794]
    let v2: u32;  // [bp-0x78c]
    let v3: u8;  // [bp-0x788]
    let v4: u64;  // [bp-0x4cc]
    let v5: u32;  // [bp-0x4c4]
    let v6: u8;  // [bp-0x4c0]
    let v7: u8;  // [bp-0x270]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    clap_builder::builder::command::Command::version(&v3, &v0);
    clap_builder::builder::command::Command::about(&v0, &v3);
    uucore::format_usage(&v6, "{} [OPTION]... [NUMBER]...");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 1126484022657160 | v4;
    v2 = v5;
    clap_builder::builder::arg::Arg::new(&v3, "NUMBER");
    clap_builder::builder::arg::Arg::action(&v6, &v3, 1);
    clap_builder::builder::command::Command::arg(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "exponents");
    clap_builder::builder::arg::Arg::short(&v6, &v0);
    clap_builder::builder::arg::Arg::long(&v0, &v6, "exponents");
    clap_builder::builder::arg::Arg::help(&v6, &v0, "Print factors in the form p^e");
    clap_builder::builder::arg::Arg::action(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new(&v3, "help");
    clap_builder::builder::arg::Arg::long(&v6, &v3, "help");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v6, &v3, 5);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return a0;
}
