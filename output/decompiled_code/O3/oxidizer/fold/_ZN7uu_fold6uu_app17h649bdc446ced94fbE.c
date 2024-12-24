fn uu_fold::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i5696;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i3496;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    v1 = clap_builder::builder::command::Command::about(&v2, &g_41d0f8, 104);
    memcpy(&v2, &v1, 700);
    v2.700 = 549755814016 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v1 = clap_builder::builder::arg::Arg::new("bytes");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "bytes");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 98);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("spaces");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "spaces");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "break lines at word boundaries rather than a hard cut-off");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "width");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 119);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "set WIDTH as the maximum line width rather than 80");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, v5);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[1456] as i32 | 32;
    v0.588 = (stack_base)[1452] as i32;
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("file");
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_hint(&v2, 3);
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
