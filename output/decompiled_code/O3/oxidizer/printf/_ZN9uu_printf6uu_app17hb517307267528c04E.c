fn uu_printf::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i4736;  // [sp-0x800], Other Possible Types: struct592, struct712, struct437
    let v1: i8;  // [bp-0x544]
    let v2: i8;  // [bp-0x540]
    let v3: i32;  // [sp-0x53c]
    let v4: i4736;  // [bp-0x538], Other Possible Types: struct712, struct592
    let v5: i32;  // [sp-0x27c]
    let v6: i64;  // [sp-0x278]
    let v7: i192;  // [sp-0x270], Other Possible Types: struct592, struct24
    let v9: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    memcpy(&v4, &v0, 700);
    v5 = v1 | 2;
    v6 = v2;
    v0 = clap_builder::builder::command::Command::version(&v4, v9);
    v4 = clap_builder::builder::command::Command::about(&v0);
    v0 = clap_builder::builder::command::Command::after_help(&v4);
    v7 = uucore::format_usage(&g_416e9c, 33);
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v7);
    memcpy(&v0, &v4, 700);
    v1 = 0x14000000140000 | *((&v4 as &char + 700) as &i64);
    v3 = *((&v4 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("help");
    v7 = clap_builder::builder::arg::Arg::long(&v4, "help");
    v4 = clap_builder::builder::arg::Arg::help(&v7, "Print help information");
    v7 = clap_builder::builder::arg::Arg::action(&v4, 0x5);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("version");
    v7 = clap_builder::builder::arg::Arg::long(&v0, "version");
    v0 = clap_builder::builder::arg::Arg::help(&v7, "Print version information");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x8);
    v0 = clap_builder::builder::command::Command::arg(&v4, &v7);
    v7 = clap_builder::builder::arg::Arg::new("FORMAT");
    v4 = clap_builder::builder::command::Command::arg(&v0, &v7);
    v0 = clap_builder::builder::arg::Arg::new("ARGUMENT");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    clap_builder::builder::command::Command::arg(a0, &v4, &v7);
    return a0;
}
