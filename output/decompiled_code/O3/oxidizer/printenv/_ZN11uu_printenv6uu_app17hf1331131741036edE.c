fn uu_printenv::uu_app(a0: &struct712, a1: u32, a2: u32) -> u64 {
    let v0: i5696;  // [sp-0xa50], Other Possible Types: struct592, struct437, struct712
    let v1: i64;  // [sp-0x794]
    let v2: i32;  // [sp-0x78c]
    let v3: i4736;  // [sp-0x788], Other Possible Types: struct592, struct24
    let v4: i5696;  // [sp-0x538], Other Possible Types: struct712, struct592
    let v5: i4736;  // [sp-0x270], Other Possible Types: struct592
    let v7: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v4 = clap_builder::builder::command::Command::version(&v0, v7);
    v0 = clap_builder::builder::command::Command::about(&v4);
    v3 = uucore::format_usage("{} [OPTION]... [VARIABLE]...");
    v4 = clap_builder::builder::command::Command::override_usage(&v0, &v3);
    memcpy(&v0, &v4, 700);
    v1 = 549755814016 | *((&v4 as &char + 700) as &i64);
    v2 = *((&v4 as &char + 708) as &i32);
    v4 = clap_builder::builder::arg::Arg::new("null");
    v3 = clap_builder::builder::arg::Arg::short(&v4);
    v4 = clap_builder::builder::arg::Arg::long(&v3, v7);
    v3 = clap_builder::builder::arg::Arg::help(&v4);
    v5 = clap_builder::builder::arg::Arg::action(&v3, 0x2);
    v4 = clap_builder::builder::command::Command::arg(&v0, &v5);
    v0 = clap_builder::builder::arg::Arg::new("variables");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0x1);
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    clap_builder::builder::command::Command::arg(a0, &v4, &v0);
    return a0;
}
