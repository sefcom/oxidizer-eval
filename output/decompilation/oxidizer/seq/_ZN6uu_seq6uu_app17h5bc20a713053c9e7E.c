fn uu_seq::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u64;  // [bp-0x78c]
    let v2: u32;  // [bp-0x784]
    let v3: struct437;  // [bp-0x780]
    let v4: u64;  // [bp-0x4c4]
    let v5: u32;  // [bp-0x4bc]
    let v6: u8;  // [bp-0x4b8]
    let v7: u8;  // [bp-0x268]
    let v10: u64;  // rdx

    v3 = clap_builder::builder::command::Command::new(uucore::util_name(), v10);
    memcpy(&v0, &v3, 700);
    v1 = 549755814052 | v4;
    v2 = v5;
    clap_builder::builder::command::Command::version(&v3, &v0, "0.0.28");
    clap_builder::builder::command::Command::about(&v0, &v3, "Display numbers from FIRST to LAST, in steps of INCREMENT.");
    uucore::format_usage(&v6, "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LAST");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "separator");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::long(&v0, &v6, "separator");
    clap_builder::builder::arg::Arg::help(&v6, &v0, "Separator character (defaults to \\n)");
    clap_builder::builder::command::Command::arg(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new(&v3, "terminator");
    clap_builder::builder::arg::Arg::short(&v6, &v3, 116);
    clap_builder::builder::arg::Arg::long(&v3, &v6, "terminator");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "Terminator character (defaults to \\n)");
    clap_builder::builder::command::Command::arg(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "equal-width");
    clap_builder::builder::arg::Arg::short(&v6, &v0, 119);
    clap_builder::builder::arg::Arg::long(&v0, &v6, "equal-width");
    clap_builder::builder::arg::Arg::help(&v6, &v0, "Equalize widths of all numbers by padding with zeros");
    clap_builder::builder::arg::Arg::action(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new(&v3, "format");
    clap_builder::builder::arg::Arg::short(&v6, &v3, 102);
    clap_builder::builder::arg::Arg::long(&v3, &v6, "format");
    clap_builder::builder::arg::Arg::help(&v6, &v3, "use printf style floating-point FORMAT");
    clap_builder::builder::command::Command::arg(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "numbers");
    clap_builder::builder::arg::Arg::action(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::num_args(&v0, &v6);
    clap_builder::builder::command::Command::arg(a0, &v3, &v0);
    return a0;
}
