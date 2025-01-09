fn uu_dd::uu_app(a0: &struct712) -> u64 {
    let v0: i5696;  // [sp-0x7f8], Other Possible Types: struct712, struct437, struct592
    let v1: struct712;  // [sp-0x530], Other Possible Types: i5696
    let v2: i64;  // [sp-0x274]
    let v3: i32;  // [sp-0x26c]
    let v4: i192;  // [sp-0x268], Other Possible Types: struct592, struct24
    let v6: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v6);
    v1 = clap_builder::builder::command::Command::version(&v0, "0.0.28");
    v0 = clap_builder::builder::command::Command::about(&v1, "Copy, and optionally convert, a file system resource");
    v4 = uucore::format_usage(&g_423e4c, 25);
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    v0 = clap_builder::builder::command::Command::after_help(&v1, &g_423e65, 5047);
    memcpy(&v1, &v0, 700);
    v2 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v3 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("operands");
    v4 = clap_builder::builder::arg::Arg::num_args(&v0);
    clap_builder::builder::command::Command::arg(a0, &v1, &v4);
    return a0;
}
