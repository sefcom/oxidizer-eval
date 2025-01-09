fn uu_fold::uu_app(a0: &struct712) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i32;  // [sp-0x800]
    let v2: i32;  // [sp-0x7fc]
    let v3: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v5: i64;  // [sp-0x274]
    let v6: i32;  // [sp-0x26c]
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v9: i64;  // rdx

    v4 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v3 = clap_builder::builder::command::Command::version(&v4, "0.0.28");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    v3 = clap_builder::builder::command::Command::about(&v4, &g_41d000, 104);
    memcpy(&v4, &v3, 700);
    v5 = 549755814016 | *((&v3 as &char + 700) as &i64);
    v6 = *((&v3 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("bytes");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "bytes");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x62);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v4 = clap_builder::builder::arg::Arg::new("spaces");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "spaces");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "break lines at word boundaries rather than a hard cut-off");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "width");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 0x77);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "set WIDTH as the maximum line width rather than 80");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0);
    memcpy(&v0, &v3, 584);
    v1 = *((&v3 as &char + 584) as &i32) | 32;
    v2 = *((&v3 as &char + 588) as &i32);
    v3 = clap_builder::builder::command::Command::arg(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v4, 584);
    v1 = *((&v4 as &char + 584) as &i32) | 4;
    v2 = *((&v4 as &char + 588) as &i32);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v4, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
