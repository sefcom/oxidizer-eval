fn uu_hashsum::uu_app_opt_bits(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x770]
    let v1: u8;  // [bp-0x520]
    let v2: u8;  // [bp-0x2d0]

    memcpy(&v2, a1, 712);
    clap_builder::builder::arg::Arg::new(&v0, "bits");
    clap_builder::builder::arg::Arg::long(&v1, &v0, "bits");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "set the size of the output (only for SHAKE)");
    clap_builder::builder::arg::Arg::value_name(&v1, &v0, &g_468ec8);
    clap_builder::builder::arg::Arg::value_parser(&v0, &v1);
    return clap_builder::builder::command::Command::arg(a0, &v2, &v0);
}
