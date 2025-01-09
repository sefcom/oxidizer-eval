fn uu_pwd::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0xa48], Other Possible Types: struct592, struct712, struct437
    let v1: i64;  // [sp-0x78c]
    let v2: i32;  // [sp-0x784]
    let v3: i4736;  // [sp-0x780], Other Possible Types: struct712, struct592
    let v4: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v5: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v7: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v3 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v3, "Display the full filename of the current working directory.");
    v4 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v2 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("logical");
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x4c);
    v3 = clap_builder::builder::arg::Arg::long(&v4, "logical");
    v4 = clap_builder::builder::arg::Arg::help(&v3, "use PWD from environment, even if it contains symlinks");
    v5 = clap_builder::builder::arg::Arg::action(&v4);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("physical");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x50);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "physical");
    v4 = clap_builder::builder::arg::Arg::overrides_with(&v0, "logical");
    v0 = clap_builder::builder::arg::Arg::help(&v4, "avoid all symlinks");
    v4 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v3, &v4);
    return a0;
}
