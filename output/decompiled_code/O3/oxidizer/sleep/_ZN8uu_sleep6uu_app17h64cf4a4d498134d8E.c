fn uu_sleep::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct712;  // [sp-0x7f8], Other Possible Types: i5696
    let v1: i5696;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v2: i192;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v4: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v0 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v0, "Pause for NUMBER seconds.");
    v0 = clap_builder::builder::command::Command::after_help(&v1, &g_41ca6f, 335);
    v2 = uucore::format_usage(&g_41cbc4, 30);
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    memcpy(&v0, &v1, 700);
    v0.700 = 549755814016 | (stack_base)[628] as i64;
    v0.708 = (stack_base)[620] as i32;
    v1 = clap_builder::builder::arg::Arg::new("NUMBER");
    v2 = clap_builder::builder::arg::Arg::help(&v1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v2, v4);
    v2 = clap_builder::builder::arg::Arg::action(&v1);
    clap_builder::builder::command::Command::arg(a0, &v0, &v2);
    return a0;
}
