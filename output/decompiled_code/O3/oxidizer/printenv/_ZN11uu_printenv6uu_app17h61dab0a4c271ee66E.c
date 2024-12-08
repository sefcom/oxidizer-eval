fn uu_printenv::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i3496;  // [sp-0xa50], Other Possible Types: struct592, struct437, struct712
    let v1: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v2: i5696;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v3: struct592;  // [sp-0x270], Other Possible Types: i4736
    let v5: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v0, v5);
    v0 = clap_builder::builder::command::Command::about(&v2);
    v1 = uucore::format_usage("{} [OPTION]... [VARIABLE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    memcpy(&v0, &v2, 700);
    v0.700 = 549755814016 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v2 = clap_builder::builder::arg::Arg::new("null");
    v1 = clap_builder::builder::arg::Arg::short(&v2);
    v2 = clap_builder::builder::arg::Arg::long(&v1, v5);
    v1 = clap_builder::builder::arg::Arg::help(&v2);
    v3 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("variables");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v1);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
