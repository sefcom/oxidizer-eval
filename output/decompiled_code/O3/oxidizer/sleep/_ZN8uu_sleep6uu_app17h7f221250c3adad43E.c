fn uu_sleep::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: struct712;  // [sp-0x7f8], Other Possible Types: i5696
    let v1: i64;  // [sp-0x53c]
    let v2: i32;  // [sp-0x534]
    let v3: i3496;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v4: i4736;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v6: i64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v0 = clap_builder::builder::command::Command::version(&v3, "0.0.28");
    v3 = clap_builder::builder::command::Command::about(&v0, "Pause for NUMBER seconds.");
    v0 = clap_builder::builder::command::Command::after_help(&v3, &g_413a50, 335);
    v4 = uucore::format_usage(&g_413ba5, 30);
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v2 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("NUMBER");
    v4 = clap_builder::builder::arg::Arg::help(&v3);
    v3 = clap_builder::builder::arg::Arg::value_name(&v4, v6);
    v4 = clap_builder::builder::arg::Arg::action(&v3);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
