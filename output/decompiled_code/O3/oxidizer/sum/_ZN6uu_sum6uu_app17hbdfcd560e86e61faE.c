fn uu_sum::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v1: i32;  // [sp-0x5b0]
    let v2: i32;  // [sp-0x5ac]
    let v3: i4736;  // [sp-0x530], Other Possible Types: struct592, struct24
    let v4: i5696;  // [sp-0x2e0], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x24]
    let v6: i32;  // [sp-0x1c]
    let v8: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v0 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v3 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    v0 = clap_builder::builder::command::Command::about(&v4, &g_41c60e, 95);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v6 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("file");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 4;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v3);
    v4 = clap_builder::builder::arg::Arg::new("r");
    v3 = clap_builder::builder::arg::Arg::short(&v4, 0x72);
    v4 = clap_builder::builder::arg::Arg::help(&v3, "use the BSD sum algorithm, use 1K blocks (default)");
    v3 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v3);
    v0 = clap_builder::builder::arg::Arg::new("sysv");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::long(&v3, v8);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "use System V sum algorithm, use 512 bytes blocks");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
