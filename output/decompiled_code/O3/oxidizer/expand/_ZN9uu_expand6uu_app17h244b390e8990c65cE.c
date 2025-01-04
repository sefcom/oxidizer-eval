fn uu_expand::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i32;  // [sp-0x5b0]
    let v3: i32;  // [sp-0x5ac]
    let v4: i64;  // [sp-0x53c]
    let v5: i32;  // [sp-0x534]
    let v6: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v7: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v9: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v1 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v1, &g_41d0b9, 126);
    v1 = clap_builder::builder::command::Command::after_help(&v6, 0x1, 0);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v6, 700);
    v4 = 584115552392 | *((&v6 as &char + 700) as &i64);
    v5 = *((&v6 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("initial");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "initial");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 0x69);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "do not convert tabs after non blanks");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("tabs");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "tabs");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x74);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, v9);
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions");
    v1 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("no-utf8");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "no-utf8");
    v6 = clap_builder::builder::arg::Arg::short(&v0, 0x55);
    v0 = clap_builder::builder::arg::Arg::help(&v6, "interpret input file as 8-bit ASCII rather than UTF-8");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("FILES");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    memcpy(&v1, &v0, 584);
    v2 = *((&v0 as &char + 584) as &i32) | 4;
    v3 = *((&v0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v0);
    return a0;
}
