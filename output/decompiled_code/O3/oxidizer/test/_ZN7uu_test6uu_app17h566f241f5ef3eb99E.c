fn uu_test::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x5c0], Other Possible Types: i192
    let v1: i3496;  // [sp-0x5a8], Other Possible Types: struct437, struct712
    let v2: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v4: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, "Check file types and compare values.");
    v0 = uucore::format_usage(&g_41c50c, 47);
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    clap_builder::builder::command::Command::after_help(a0, &v2, &g_41c53b, 3055);
    return a0;
}
