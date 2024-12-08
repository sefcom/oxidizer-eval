fn uu_echo::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa48], Other Possible Types: struct712, struct592, struct437
    let v1: i8;  // [bp-0x78c]
    let v2: i8;  // [bp-0x788]
    let v3: i5696;  // [bp-0x780], Other Possible Types: struct592, struct712
    let v4: i32;  // [sp-0x4c4]
    let v5: i64;  // [sp-0x4c0]
    let v6: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v7: struct8;  // [bp-0x268], Other Possible Types: i8
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    memcpy(&v3, &v0, 700);
    v4 = v1 | 34;
    v5 = v2;
    v0 = clap_builder::builder::command::Command::version(&v3, v9);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::after_help(&v3);
    v6 = uucore::format_usage("{} [OPTIONS]... [STRING]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("no_newline");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 110);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "do not output the trailing newline");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("enable_backslash_escape");
    v6 = clap_builder::builder::arg::Arg::short(&v3, 101);
    v3 = clap_builder::builder::arg::Arg::help(&v6, "enable interpretation of backslash escapes");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v7, &v6, "disable_backslash_escape");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("disable_backslash_escape");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 69);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "disable interpretation of backslash escapes (default)");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v7, &v6, "enable_backslash_escape");
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("STRING");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v7 = struct8 {
        field_0: 2
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v6, &v7);
    clap_builder::builder::command::Command::arg(a0, &v0, &v3);
    return a0;
}
