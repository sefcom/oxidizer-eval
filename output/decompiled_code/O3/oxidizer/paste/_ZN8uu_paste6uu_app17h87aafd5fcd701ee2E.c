fn uu_paste::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i64;  // [sp-0x53c]
    let v3: i32;  // [sp-0x534]
    let v4: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v5: i4736;  // [sp-0x268], Other Possible Types: struct592
    let v6: i32;  // [sp-0x20]
    let v7: i32;  // [sp-0x1c]
    let v9: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v4 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v4, &g_413165, 121);
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((&v4 as &char + 700) as &i64);
    v3 = *((&v4 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("serial");
    v0 = clap_builder::builder::arg::Arg::long(&v4, "serial");
    v4 = clap_builder::builder::arg::Arg::short(&v0, 0x73);
    v0 = clap_builder::builder::arg::Arg::help(&v4, "paste one file at a time instead of in parallel");
    v5 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("delimiters");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "delimiters");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x64);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "reuse characters from LIST instead of TABs");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_40a4dc);
    v0 = clap_builder::builder::arg::Arg::default_value(&v1, &g_41325d);
    memcpy(&v5, &v0, 584);
    v6 = 0x400 | *((&v0 as &char + 584) as &i32);
    v7 = *((&v0 as &char + 588) as &i32);
    v1 = clap_builder::builder::command::Command::arg(&v4, &v5);
    v4 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::value_name(&v4, &g_40a510);
    v4 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::default_value(&v4, &g_41325e);
    v5 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    v4 = clap_builder::builder::command::Command::arg(&v1, &v5);
    v1 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 0x7a);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "line delimiter is NUL, not newline");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    clap_builder::builder::command::Command::arg(a0, &v4, &v1);
    return a0;
}
