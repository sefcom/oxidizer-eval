fn uu_factor::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa50], Other Possible Types: struct712, struct437
    let v1: i64;  // [sp-0x794]
    let v2: i32;  // [sp-0x78c]
    let v3: struct712;  // [sp-0x788], Other Possible Types: struct592
    let v4: struct592;  // [sp-0x4c0], Other Possible Types: struct24
    let v5: struct592;  // [sp-0x270]
    let v7: i64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v7);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v4 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v4);
    memcpy(&v0, &v3, 700);
    v1 = 1126484022657160 | *((&v3.field_0 as &char + 700) as &i64);
    v2 = *((&v3.field_0 as &char + 708) as &i32);
    v3 = clap_builder::builder::arg::Arg::new("NUMBER");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x1);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v4);
    v0 = clap_builder::builder::arg::Arg::new("exponents");
    v4 = clap_builder::builder::arg::Arg::short(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v4, "exponents");
    v4 = clap_builder::builder::arg::Arg::help(&v0, "Print factors in the form p^e");
    v5 = clap_builder::builder::arg::Arg::action(&v4, 0x2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v5);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v4, "Print help information.");
    v4 = clap_builder::builder::arg::Arg::action(&v3, 0x5);
    clap_builder::builder::command::Command::arg(a0, &v0, &v4);
    return a0;
}
