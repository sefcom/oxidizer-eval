fn uu_expr::uu_app(a0: &struct712) -> u64 {
    let v0: i3504;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i32;  // [sp-0x5b8]
    let v2: i32;  // [sp-0x5b4]
    let v3: i4736;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v4: i64;  // [sp-0x27c]
    let v5: i32;  // [sp-0x274]
    let v6: i4736;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v8: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v8);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v6 = uucore::format_usage("{} [EXPRESSION]\n{} [OPTIONS]");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    v0 = clap_builder::builder::command::Command::after_help(&v3);
    memcpy(&v3, &v0, 700);
    v4 = 5630049291337856 | *((&v0 as &char + 700) as &i64);
    v5 = *((&v0 as &char + 708) as &i32);
    v0 = clap_builder::builder::arg::Arg::new("version");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "version");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "output version information and exit");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x8);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "display this help and exit");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 0x5);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("expression");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    memcpy(&v0, &v6, 584);
    v1 = *((&v6 as &char + 584) as &i32) | 32;
    v2 = *((&v6 as &char + 588) as &i32);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
