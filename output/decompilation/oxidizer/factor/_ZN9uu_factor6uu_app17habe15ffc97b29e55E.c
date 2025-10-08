fn uu_factor::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0xab0], Other Possible Types: struct640, struct712
    let v1: u64;  // [bp-0x7f4]
    let v2: u32;  // [bp-0x7ec]
    let v3: struct640;  // [bp-0x7e8], Other Possible Types: struct712
    let v4: u64;  // [bp-0x52c]
    let v5: u32;  // [bp-0x524]
    let v6: struct24;  // [bp-0x520], Other Possible Types: struct640
    let v7: struct640;  // [bp-0x2a0]
    let v10: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    v6 = uucore::format_usage("{} [OPTION]... [NUMBER]...");
    v3 = clap_builder::builder::command::Command::override_usage(&v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 2252383929761928 | v4;
    v2 = v5;
    v3 = clap_builder::builder::arg::Arg::new("NUMBER");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::command::Command::arg(&v0, &v6);
    v0 = clap_builder::builder::arg::Arg::new("exponents");
    v6 = clap_builder::builder::arg::Arg::short(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "exponents");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Print factors in the form p^e");
    v7 = clap_builder::builder::arg::Arg::action(&v6, 2);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v7);
    v3 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "help");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "Print help information.");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 5);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return;
}
