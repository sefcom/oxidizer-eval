fn uu_hashsum::uu_app_b3sum_opts(a0: &struct712, a1: u32) -> u64 {
    let v0: struct592;  // [sp-0x778]
    let v1: struct592;  // [sp-0x528]
    let v2: i8;  // [bp-0x2d8]

    memcpy(&v2, a1, 712);
    v0 = clap_builder::builder::arg::Arg::new("no-names");
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-names");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Omits filenames in the output (option not present in GNU/Coreutils)");
    v1 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    return clap_builder::builder::command::Command::arg(a0, &v2, &v1);
}
