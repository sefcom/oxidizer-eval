fn uu_tsort::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0x7f8], Other Possible Types: struct712, struct592
    let v1: i4736;  // [sp-0x530], Other Possible Types: struct592, struct24
    let v2: i3496;  // [sp-0x2e0], Other Possible Types: struct712, struct437
    let v4: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v0 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v1 = uucore::format_usage("{} [OPTIONS] FILE");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::command::Command::about(&v2, &g_41d8a3, 309);
    memcpy(&v2, &v0, 700);
    v2.700 = 549755814016 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v0 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::default_value(&v0, v4);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
