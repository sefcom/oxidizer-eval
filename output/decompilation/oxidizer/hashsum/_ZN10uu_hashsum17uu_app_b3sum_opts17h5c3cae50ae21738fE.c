fn uu_hashsum::uu_app_b3sum_opts(a0: i64, a1: i64) -> u64 {
    let v0: struct640;  // [bp-0x7e8]
    let v1: u8;  // [bp-0x568]
    let v2: struct640;  // [bp-0x2a0]

    memcpy(&v1, a1, 712);
    v0 = clap_builder::builder::arg::Arg::new("no-names");
    v2 = clap_builder::builder::arg::Arg::long(&v0, "no-names");
    v0 = clap_builder::builder::arg::Arg::help(&v2, "Omits filenames in the output (option not present in GNU/Coreutils)");
    v2 = clap_builder::builder::arg::Arg::action(&v0, 2);
    return clap_builder::builder::command::Command::arg(a0, &v1, &v2);
}
