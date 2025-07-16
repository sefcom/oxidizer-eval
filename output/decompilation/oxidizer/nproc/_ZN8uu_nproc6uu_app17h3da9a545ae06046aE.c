fn uu_nproc::uu_app(a0: &struct712) -> long long {
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
    uucore::format_usage(&v6, "{} [OPTIONS]...");
    clap_builder::builder::command::Command::override_usage(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 549755814016 | v4;
    v2 = v5;
    clap_builder::builder::arg::Arg::new(&v3, "all");
    clap_builder::builder::arg::Arg::long(&v6, &v3, "all");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "print the number of cores available to the system");
    clap_builder::builder::arg::Arg::action(&v6, &v3);
    clap_builder::builder::command::Command::arg(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new(&v0, "ignore");
    clap_builder::builder::arg::Arg::long(&v6, &v0, "ignore");
    clap_builder::builder::arg::Arg::value_name(&v0, &v6);
    clap_builder::builder::arg::Arg::help(&v6, &v0, "ignore up to N cores");
    clap_builder::builder::command::Command::arg(a0, &v3, &v6);
    return a0;
}
