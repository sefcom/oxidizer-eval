fn uu_hashsum::uu_app_opt_bits(a0: i64, a1: i64) -> u64 {
    let v0: struct640;  // [bp-0x7e8]
    let v1: struct640;  // [bp-0x568]
    let v2: u8;  // [bp-0x2e8]

    memcpy(&v2, a1, 712);
    v0 = clap_builder::builder::arg::Arg::new("bits");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "bits");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "set the size of the output (only for SHAKE)");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_411dcc);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1);
    return clap_builder::builder::command::Command::arg(a0, &v2, &v0);
}
