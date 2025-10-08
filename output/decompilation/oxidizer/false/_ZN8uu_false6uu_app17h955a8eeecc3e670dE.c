fn uu_false::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct437;  // [bp-0x830], Other Possible Types: struct640, struct712
    let v1: u64;  // [bp-0x574]
    let v2: u32;  // [bp-0x56c]
    let v3: struct712;  // [bp-0x568], Other Possible Types: struct640
    let v4: u64;  // [bp-0x2ac]
    let v5: u32;  // [bp-0x2a4]
    let v6: struct640;  // [bp-0x2a0]
    let v9: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v3 = clap_builder::builder::command::Command::version(&v0);
    v0 = clap_builder::builder::command::Command::about(&v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x28000000280000 | v1;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::new("help");
    v6 = clap_builder::builder::arg::Arg::long(&v0, "help");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Print help information");
    v6 = clap_builder::builder::arg::Arg::action(&v0, 5);
    v0 = clap_builder::builder::command::Command::arg(&v3, &v6);
    v3 = clap_builder::builder::arg::Arg::new("version");
    v6 = clap_builder::builder::arg::Arg::long(&v3, "version");
    v3 = clap_builder::builder::arg::Arg::help(&v6, "Print version information");
    v6 = clap_builder::builder::arg::Arg::action(&v3, 8);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return;
}
