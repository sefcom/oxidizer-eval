fn uu_hashsum::uu_app_opt_length(a0: i64, a1: i64) -> long long {
    let v0: u192;  // [bp-0x790]
    let v1: u8;  // [bp-0x778]
    let v2: u8;  // [bp-0x528]
    let v3: u8;  // [bp-0x2d8]

    memcpy(&v3, a1, 712);
    clap_builder::builder::arg::Arg::new(&v1, "length");
    clap_builder::builder::arg::Arg::long(&v2, &v1, "length");
    v0 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new()
        field_16: &g_73ec80
    };
    clap_builder::builder::arg::Arg::value_parser(&v1, &v2, &v0);
    clap_builder::builder::arg::Arg::short(&v2, &v1, 108);
    clap_builder::builder::arg::Arg::help(&v1, &v2, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    clap_builder::builder::arg::Arg::overrides_with(&v2, &v1, "length");
    clap_builder::builder::arg::Arg::action(&v1, &v2, 0);
    return clap_builder::builder::command::Command::arg(a0, &v3, &v1);
}
