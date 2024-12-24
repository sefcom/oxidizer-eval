fn uu_expr::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i3496;  // [sp-0x800], Other Possible Types: struct712, struct592, struct437
    let v1: i5696;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v2: i4736;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v4: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v4);
    v1 = clap_builder::builder::command::Command::version(&v0, v4);
    v0 = clap_builder::builder::command::Command::about(&v1);
    v2 = uucore::format_usage(&g_4692ad, 28);
    v1 = clap_builder::builder::command::Command::override_usage(&v0, &v2);
    v0 = clap_builder::builder::command::Command::after_help(&v1);
    memcpy(&v1, &v0, 700);
    v1.700 = 5630049291337856 | (stack_base)[1348] as i64;
    v1.708 = (stack_base)[1340] as i32;
    v0 = clap_builder::builder::arg::Arg::new("version");
    v2 = clap_builder::builder::arg::Arg::long(&v0, "version");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "output version information and exit");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 8);
    v0 = clap_builder::builder::command::Command::arg(&v1, &v2);
    v1 = clap_builder::builder::arg::Arg::new("help");
    v2 = clap_builder::builder::arg::Arg::long(&v1, "help");
    v1 = clap_builder::builder::arg::Arg::help(&v2, "display this help and exit");
    v2 = clap_builder::builder::arg::Arg::action(&v1, 5);
    v1 = clap_builder::builder::command::Command::arg(&v0, &v2);
    v0 = clap_builder::builder::arg::Arg::new("expression");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v2, 584);
    v0.584 = (stack_base)[40] as i32 | 32;
    v0.588 = (stack_base)[36] as i32;
    clap_builder::builder::command::Command::arg(a0, &v1, &v0);
    return a0;
}
