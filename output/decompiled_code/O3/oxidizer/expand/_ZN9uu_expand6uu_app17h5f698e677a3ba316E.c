fn uu_expand::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712, struct437
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v1 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v2 = clap_builder::builder::command::Command::about(&v1, &g_41d339, 126);
    v1 = clap_builder::builder::command::Command::after_help(&v2, 1, 0);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 584115552392 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("initial");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "initial");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 105);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "do not convert tabs after non blanks");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("tabs");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "tabs");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 116);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, v5);
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positions");
    v1 = clap_builder::builder::command::Command::arg(&v2, &v0);
    v2 = clap_builder::builder::arg::Arg::new("no-utf8");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "no-utf8");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 85);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "interpret input file as 8-bit ASCII rather than UTF-8");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("FILES");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 1);
    memcpy(&v1, &v0, 584);
    v1.584 = (stack_base)[0x800] as i32 | 4;
    v1.588 = (stack_base)[2044] as i32;
    v0 = clap_builder::builder::arg::Arg::value_hint(&v1, 3);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
