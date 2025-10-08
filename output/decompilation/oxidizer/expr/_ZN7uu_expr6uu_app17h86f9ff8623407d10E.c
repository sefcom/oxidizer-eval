fn uu_expr::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0x830], Other Possible Types: struct640, struct712
    let v1: core::fmt::rt::Argument;  // [bp-0x5b8]
    let v2: u32;  // [bp-0x5b4]
    let v3: u64;  // [bp-0x574]
    let v4: u32;  // [bp-0x56c]
    let v5: struct640;  // [bp-0x568], Other Possible Types: struct712
    let v6: u64;  // [bp-0x2ac]
    let v7: u32;  // [bp-0x2a4]
    let v8: struct24;  // [bp-0x2a0], Other Possible Types: struct640
    let v9: core::fmt::Arguments;  // [bp-0x28]
    let v10: i8;  // [bp-0x24]
    let v13: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v13);
    v5 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v5);
    v8 = uucore::format_usage("{} [EXPRESSION]\n{} [OPTIONS]");
    v5 = clap_builder::builder::command::Command::override_usage(&v0, &v8);
    v0 = clap_builder::builder::command::Command::after_help(&v5);
    memcpy(&v5, &v0, 700);
    v6 = 11259548826861696 | v3;
    v7 = v4;
    v0 = clap_builder::builder::arg::Arg::new("version");
    v8 = clap_builder::builder::arg::Arg::long(&v0, "version");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "output version information and exit");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 8);
    v0 = clap_builder::builder::command::Command::arg(&v5, &v8);
    v5 = clap_builder::builder::arg::Arg::new("help");
    v8 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v8, "display this help and exit");
    v8 = clap_builder::builder::arg::Arg::action(&v5, 5);
    v5 = clap_builder::builder::command::Command::arg(&v0, &v8);
    v0 = clap_builder::builder::arg::Arg::new("expression");
    v8 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 32;
    v2 = *(&v10 as &i32);
    clap_builder::builder::command::Command::arg(a0, &v5, &v0);
    return;
}
