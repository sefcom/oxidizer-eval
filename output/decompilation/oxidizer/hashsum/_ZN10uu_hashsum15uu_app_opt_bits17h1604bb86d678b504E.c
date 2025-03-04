fn uu_hashsum::uu_app_opt_bits(a0: &struct712, a1: u32) -> u64 {
    let v0: struct592;  // [sp-0x770]
    let v1: struct592;  // [sp-0x520]
    let v2: i8;  // [bp-0x2d0]

    memcpy(&v2, a1, 712);
    v0 = clap_builder::builder::arg::Arg::new("bits");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "bits");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "set the size of the output (only for SHAKE)");
    v1 = clap_builder::builder::arg::Arg::value_name(&v0, &g_468ec8);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v1);
    return clap_builder::builder::command::Command::arg(a0, &v2, &v0);
}
