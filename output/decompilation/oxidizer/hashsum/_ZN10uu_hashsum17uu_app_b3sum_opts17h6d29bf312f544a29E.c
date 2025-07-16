fn uu_hashsum::uu_app_b3sum_opts(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x778]
    let v1: u8;  // [bp-0x528]
    let v2: u8;  // [bp-0x2d8]

    memcpy(&v2, a1, 712);
    clap_builder::builder::arg::Arg::new(&v0, "no-names");
    clap_builder::builder::arg::Arg::long(&v1, &v0, "no-names");
    clap_builder::builder::arg::Arg::help(&v0, &v1, "Omits filenames in the output (option not present in GNU/Coreutils)");
    clap_builder::builder::arg::Arg::action(&v1, &v0, 2);
    return clap_builder::builder::command::Command::arg(a0, &v2, &v1);
}
