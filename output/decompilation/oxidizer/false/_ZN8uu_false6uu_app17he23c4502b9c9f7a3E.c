fn uu_false::uu_app(a0: &struct712) -> long long {
    let v0: struct437;  // [bp-0x800]
    let v1: u64;  // [bp-0x544]
    let v2: u32;  // [bp-0x53c]
    let v3: u8;  // [bp-0x538]
    let v4: u64;  // [bp-0x27c]
    let v5: u32;  // [bp-0x274]
    let v6: u8;  // [bp-0x270]
    let v9: u64;  // rdx

    v0 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    clap_builder::builder::command::Command::version(&v3, &v0);
    clap_builder::builder::command::Command::about(&v0, &v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x14000000140000 | v1;
    v5 = v2;
    clap_builder::builder::arg::Arg::new(&v0, "help");
    clap_builder::builder::arg::Arg::long(&v6, &v0, "help");
    clap_builder::builder::arg::Arg::help(&v0, &v6, "Print help information");
    clap_builder::builder::arg::Arg::action(&v6, &v0, 5);
    clap_builder::builder::command::Command::arg(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new(&v3, "version");
    clap_builder::builder::arg::Arg::long(&v6, &v3, "version");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "Print version information");
    clap_builder::builder::arg::Arg::action(&v6, &v3, 8);
    clap_builder::builder::command::Command::arg(a0, &v0, &v6);
    return a0;
}
