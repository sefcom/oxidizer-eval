fn uu_test::uu_app(a0: &struct712) -> u64 {
    let v0: i192;  // [sp-0x5c0], Other Possible Types: struct24
    let v1: i3496;  // [sp-0x5a8], Other Possible Types: struct712, struct437
    let v2: struct712;  // [sp-0x2e0], Other Possible Types: i5696
    let v4: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, "Check file types and compare values.");
    v0 = uucore::format_usage(&g_41c48c, 47);
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    clap_builder::builder::command::Command::after_help(a0, &v2, &g_41c4bb, 3055);
    return a0;
}
