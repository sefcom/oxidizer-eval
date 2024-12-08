fn uu_sum::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0x7f8], Other Possible Types: struct592, struct712
    let v1: i4736;  // [sp-0x530], Other Possible Types: struct592, struct24
    let v2: i4736;  // [sp-0x2e0], Other Possible Types: struct712, struct592, struct437
    let v4: i64;  // rdx

    v2 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v0 = clap_builder::builder::command::Command::version(&v2, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v2 = clap_builder::builder::command::Command::override_usage(&v0, &v1);
    v0 = clap_builder::builder::command::Command::about(&v2, &g_4136fe, 95);
    memcpy(&v2, &v0, 700);
    v2.700 = 549755814016 | (stack_base)[1340] as i64;
    v2.708 = (stack_base)[1332] as i32;
    v0 = clap_builder::builder::arg::Arg::new("file");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v1, 584);
    v0.584 = (stack_base)[744] as i32 | 4;
    v0.588 = (stack_base)[740] as i32;
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 3);
    v0 = clap_builder::builder::command::Command::arg(&v2, &v1);
    v2 = clap_builder::builder::arg::Arg::new("r");
    v1 = clap_builder::builder::arg::Arg::short(&v2, 114);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "use the BSD sum algorithm, use 1K blocks (default)");
    v1 = clap_builder::builder::arg::Arg::action(&v2, 2);
    v2 = clap_builder::builder::command::Command::arg(&v0, &v1);
    v0 = clap_builder::builder::arg::Arg::new("sysv");
    v1 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::long(&v1, v4);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "use System V sum algorithm, use 512 bytes blocks");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 2);
    clap_builder::builder::command::Command::arg(a0, &v2, &v0);
    return a0;
}
