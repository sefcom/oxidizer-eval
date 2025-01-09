fn uu_tsort::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0x7f8], Other Possible Types: struct712, struct592
    let v1: i32;  // [sp-0x5b0]
    let v2: i32;  // [sp-0x5ac]
    let v3: i192;  // [sp-0x530], Other Possible Types: struct592, struct24
    let v4: i3496;  // [sp-0x2e0], Other Possible Types: struct712, struct437
    let v5: i64;  // [sp-0x24]
    let v6: i32;  // [sp-0x1c]
    let v8: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v0 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v3 = uucore::format_usage("{} [OPTIONS] FILE");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    v0 = clap_builder::builder::command::Command::about(&v4, &g_41d71b, 309);
    memcpy(&v4, &v0, 700);
    v5 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v6 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("file");
    v3 = clap_builder::builder::arg::Arg::default_value(&v0);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 4;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v3);
    return a0;
}
