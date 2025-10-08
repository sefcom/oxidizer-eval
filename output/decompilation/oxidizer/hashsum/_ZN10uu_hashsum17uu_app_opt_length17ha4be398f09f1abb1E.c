fn uu_hashsum::uu_app_opt_length(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x7f8]
    let v1: struct640;  // [bp-0x7e0]
    let v2: struct640;  // [bp-0x560]
    let v3: u8;  // [bp-0x2e0]

    memcpy(&v3, a1, 712);
    v2 = clap_builder::builder::arg::Arg::new("length");
    v1 = clap_builder::builder::arg::Arg::long(&v2, "length");
    v0 = struct24 {
        field_0: 4
        field_8: alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str)
        field_16: &g_5515d8
    };
    v2 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::short(&v2, 108);
    v2 = clap_builder::builder::arg::Arg::help(&v1, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v2);
    v2 = clap_builder::builder::arg::Arg::action(&v1, 0);
    return clap_builder::builder::command::Command::arg(a0, &v3, &v2);
}
