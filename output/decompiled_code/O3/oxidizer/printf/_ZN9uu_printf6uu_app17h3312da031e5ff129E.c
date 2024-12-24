fn uu_printf::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i8;  // [bp-0x544]
    let v2: i8;  // [bp-0x540]
    let v3: i5696;  // [bp-0x538], Other Possible Types: struct712, struct592
    let v4: i32;  // [sp-0x27c]
    let v5: i64;  // [sp-0x278]
    let v6: i4736;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v8: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    memcpy(&v3, &v0, 700);
    v4 = v1 | 2;
    v5 = v2;
    v0 = clap_builder::builder::command::Command::version(&v3, v8);
    v3 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::after_help(&v3);
    v6 = uucore::format_usage(&g_41fe24, 33);
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v0.700 = 0x14000000140000 | (stack_base)[636] as i64;
    v0.708 = (stack_base)[628] as i32;
    v3 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "Print help information");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 5);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("version");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "version");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Print version information");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 8);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v6 = clap_builder::builder::arg::Arg::new("FORMAT");
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("ARGUMENT");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 1);
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return a0;
}
