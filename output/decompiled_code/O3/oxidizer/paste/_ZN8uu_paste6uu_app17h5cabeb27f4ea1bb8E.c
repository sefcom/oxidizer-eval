fn uu_paste::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0xa48], Other Possible Types: struct592, struct24
    let v1: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712, struct437
    let v2: i4736;  // [sp-0x530], Other Possible Types: struct592, struct712
    let v3: struct592;  // [sp-0x268], Other Possible Types: i4736
    let v5: i64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v5);
    v2 = clap_builder::builder::command::Command::version(&v1, "0.0.28");
    v1 = clap_builder::builder::command::Command::about(&v2, &g_41c6fd, 121);
    v0 = uucore::format_usage("{} [OPTIONS] [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v2, 700);
    v1.700 = 549755814016 | (stack_base)[628] as i64;
    v1.708 = (stack_base)[620] as i32;
    v2 = clap_builder::builder::arg::Arg::new("serial");
    v0 = clap_builder::builder::arg::Arg::long(&v2, "serial");
    v2 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::help(&v2, "paste one file at a time instead of in parallel");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("delimiters");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "delimiters");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "reuse characters from LIST instead of TABs");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_4137dc);
    v0 = clap_builder::builder::arg::Arg::default_value(&v1, &g_41c7f5);
    memcpy(&v3, &v0, 584);
    v3.584 = 0x400 | (stack_base)[0x800] as i32;
    v3.588 = (stack_base)[2044] as i32;
    v1 = clap_builder::builder::command::Command::arg(&v2, &v3);
    v2 = clap_builder::builder::arg::Arg::new("file");
    v0 = clap_builder::builder::arg::Arg::value_name(&v2, &g_413810);
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::default_value(&v2, &g_41c7f6);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v2 = clap_builder::builder::command::Command::arg(&v1, &v3);
    v1 = clap_builder::builder::arg::Arg::new("zero-terminated");
    v0 = clap_builder::builder::arg::Arg::long(&v1, "zero-terminated");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 122);
    v0 = clap_builder::builder::arg::Arg::help(&v1, "line delimiter is NUL, not newline");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 2);
    clap_builder::builder::command::Command::arg(a0, &v2, &v1);
    return a0;
}
