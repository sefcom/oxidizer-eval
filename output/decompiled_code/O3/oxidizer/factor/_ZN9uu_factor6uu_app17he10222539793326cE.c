fn uu_factor::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa50], Other Possible Types: struct592, struct712, struct437
    let v1: i5696;  // [sp-0x788], Other Possible Types: struct592, struct712
    let v2: i192;  // [sp-0x4c0], Other Possible Types: struct592, struct24
    let v3: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v0, v5);
    v0 = clap_builder::builder::command::Command::about(&v1);
    v2 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    memcpy(&v0, &v1, 700);
    v0.700 = 1126484022657160 | (stack_base)[1228] as i64;
    v0.708 = (stack_base)[1220] as i32;
    v1 = clap_builder::builder::arg::Arg::new("NUMBER");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v2);
    v0 = clap_builder::builder::arg::Arg::new("exponents");
    v2 = clap_builder::builder::arg::Arg::short(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v2, "exponents");
    v2 = clap_builder::builder::arg::Arg::help(&v0, "Print factors in the form p^e");
    v3 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("help");
    v2 = clap_builder::builder::arg::Arg::long(&v1, "help");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "Print help information.");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 5);
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
