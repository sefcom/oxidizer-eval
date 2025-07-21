fn uu_printf::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0x800]
    let v1: i8;  // [bp-0x544], Other Possible Types: u64
    let v2: i8;  // [bp-0x540]
    let v3: core::fmt::Arguments;  // [bp-0x53c]
    let v4: u8;  // [bp-0x538]
    let v5: u32;  // [bp-0x27c]
    let v6: u64;  // [bp-0x278]
    let v7: core::fmt::Arguments;  // [bp-0x274]
    let v8: u8;  // [bp-0x270]
    let v11: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v11);
    memcpy(&v4, &v0, 700);
    v5 = *(&v1 as &i32) | 2;
    v6 = *(&v2 as &i64);
    clap_builder::builder::command::Command::version(&v0, &v4);
    clap_builder::builder::command::Command::about(&v4, &v0);
    clap_builder::builder::command::Command::after_help(&v0, &v4);
    uucore::format_usage(&v8, "{} FORMAT [ARGUMENT]...\n{} OPTION");
    clap_builder::builder::command::Command::override_usage(&v4, &v0, &v8);
    memcpy(&v0, &v4, 700);
    v1 = 0x14000000140000 | *(&v5 as &i64);
    v3 = v7;
    clap_builder::builder::arg::Arg::new(&v4, "help");
    clap_builder::builder::arg::Arg::long(&v8, &v4, "help");
    clap_builder::builder::arg::Arg::help(&v4, &v8, "Print help information");
    clap_builder::builder::arg::Arg::action(&v8, &v4, 5);
    clap_builder::builder::command::Command::arg(&v4, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "version");
    clap_builder::builder::arg::Arg::long(&v8, &v0, "version");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Print version information");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 8);
    clap_builder::builder::command::Command::arg(&v0, &v4, &v8);
    clap_builder::builder::arg::Arg::new(&v8, "FORMAT");
    clap_builder::builder::command::Command::arg(&v4, &v0, &v8);
    clap_builder::builder::arg::Arg::new(&v0, "ARGUMENT");
    clap_builder::builder::arg::Arg::action(&v8, &v0, 1);
    clap_builder::builder::command::Command::arg(a0, &v4, &v8);
    return a0;
}
