fn uu_pwd::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct437, struct712
    let v1: i5696;  // [sp-0x780], Other Possible Types: struct712, struct592
    let v2: i4736;  // [sp-0x4b8], Other Possible Types: struct592, struct24
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v1, "Display the full filename of the current working directory.");
    v2 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    memcpy(&v0, &v1, 700);
    v0.700 = 549755814016 | (stack_base)[1220] as i64;
    v0.708 = (stack_base)[1212] as i32;
    v1 = clap_builder::builder::arg::Arg::new("logical");
    v2 = clap_builder::builder::arg::Arg::short(&v1, 76);
    v1 = clap_builder::builder::arg::Arg::long(&v2, "logical");
    v2 = clap_builder::builder::arg::Arg::help(&v1, "use PWD from environment, even if it contains symlinks");
    v3 = clap_builder::builder::arg::Arg::action(&v2);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("physical");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 80);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "physical");
    v2 = clap_builder::builder::arg::Arg::overrides_with(&v0, "logical");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "avoid all symlinks");
    v2 = clap_builder::builder::arg::Arg::action(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v2);
    return a0;
}
