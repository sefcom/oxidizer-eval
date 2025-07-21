fn uu_echo::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0xa48]
    let v1: u32;  // [bp-0x78c]
    let v2: core::fmt::rt::Argument;  // [bp-0x788]
    let v3: u8;  // [bp-0x780]
    let v4: core::fmt::Arguments;  // [bp-0x4c4]
    let v5: core::fmt::rt::Argument;  // [bp-0x4c0]
    let v6: u8;  // [bp-0x4b8]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    memcpy(&v3, &v0, 700);
    v4 = v1 | 34;
    v5 = v2;
    clap_builder::builder::command::Command::version(&v0, &v3);
    clap_builder::builder::command::Command::about(&v3, &v0);
    clap_builder::builder::command::Command::after_help(&v0, &v3);
    uucore::format_usage(&v6, "{} [OPTIONS]... [STRING]...");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "no_newline");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 110);
    clap_builder::builder::arg::Arg::help(&v0, &v6, "do not output the trailing newline");
    clap_builder::builder::arg::Arg::action(&v6, &v0, 2);
    clap_builder::builder::command::Command::arg(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new(&v3, "enable_backslash_escape");
    clap_builder::builder::arg::Arg::short(&v6, &v3, 101);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "enable interpretation of backslash escapes");
    clap_builder::builder::arg::Arg::action(&v6, &v3, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v7, &v6, "disable_backslash_escape");
    clap_builder::builder::command::Command::arg(&v3, &v0, &v7);
    clap_builder::builder::arg::Arg::new(&v0, "disable_backslash_escape");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 69);
    clap_builder::builder::arg::Arg::help(&v0, &v6, "disable interpretation of backslash escapes (default)");
    clap_builder::builder::arg::Arg::action(&v6, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v7, &v6, "enable_backslash_escape");
    clap_builder::builder::command::Command::arg(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new(&v3, "STRING");
    clap_builder::builder::arg::Arg::action(&v6, &v3, 1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v6, &v7);
    clap_builder::builder::command::Command::arg(a0, &v0, &v3);
    return a0;
}
