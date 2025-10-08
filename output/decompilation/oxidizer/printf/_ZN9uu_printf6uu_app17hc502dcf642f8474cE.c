fn uu_printf::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x848]
    let v1: struct437;  // [bp-0x830], Other Possible Types: struct712, struct640
    let v2: i8;  // [bp-0x574], Other Possible Types: u64
    let v3: i8;  // [bp-0x570]
    let v4: core::fmt::Arguments;  // [bp-0x56c]
    let v5: struct640;  // [bp-0x568], Other Possible Types: struct712, u8
    let v6: u32;  // [bp-0x2ac]
    let v7: u64;  // [bp-0x2a8]
    let v8: core::fmt::Arguments;  // [bp-0x2a4]
    let v9: struct24;  // [bp-0x2a0], Other Possible Types: struct640
    let v12: u64;  // rdx

    v1 = clap_builder::builder::command::Command::new(uucore::util_name(), v12);
    memcpy(&v5, &v1, 700);
    v6 = *(&v2 as &i32) | 2;
    v7 = *(&v3 as &i64);
    v1 = clap_builder::builder::command::Command::version(&v5);
    v5 = clap_builder::builder::command::Command::about(&v1);
    v1 = clap_builder::builder::command::Command::after_help(&v5);
    v9 = uucore::format_usage("{} FORMAT [ARGUMENT]...\n{} OPTION");
    v5 = clap_builder::builder::command::Command::override_usage(&v1, &v9);
    memcpy(&v1, &v5, 700);
    v2 = 0x28000000280000 | *(&v6 as &i64);
    v4 = v8;
    v5 = clap_builder::builder::arg::Arg::new("help");
    v9 = clap_builder::builder::arg::Arg::long(&v5, "help");
    v5 = clap_builder::builder::arg::Arg::help(&v9, "Print help information");
    v9 = clap_builder::builder::arg::Arg::action(&v5, 5);
    v5 = clap_builder::builder::command::Command::arg(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::new("version");
    v9 = clap_builder::builder::arg::Arg::long(&v1, "version");
    v1 = clap_builder::builder::arg::Arg::help(&v9, "Print version information");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 8);
    v1 = clap_builder::builder::command::Command::arg(&v5, &v9);
    v5 = clap_builder::builder::arg::Arg::new("FORMAT");
    v0 = 2;
    v9 = clap_builder::builder::arg::Arg::value_parser(&v5, &v0);
    v5 = clap_builder::builder::command::Command::arg(&v1, &v9);
    v1 = clap_builder::builder::arg::Arg::new("ARGUMENT");
    v9 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v9, &v0);
    clap_builder::builder::command::Command::arg(a0, &v5, &v1);
    return;
}
