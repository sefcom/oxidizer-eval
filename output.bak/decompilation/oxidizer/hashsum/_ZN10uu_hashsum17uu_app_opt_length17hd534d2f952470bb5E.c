fn uu_hashsum::uu_app_opt_length(a0: &struct712, a1: u32) -> u64 {
    let v0: struct24;  // [bp-0x790]
    let v1: i64;  // [sp-0x788]
    let v2: i4736;  // [sp-0x778], Other Possible Types: struct592
    let v3: i4736;  // [sp-0x528], Other Possible Types: struct592
    let v4: i8;  // [bp-0x2d8]

    memcpy(&v4, a1, 712);
    v2 = clap_builder::builder::arg::Arg::new("length");
    v3 = clap_builder::builder::arg::Arg::long(&v2, "length");
    v0 = struct24 {
        field_0: 4
        field_8: v1
        field_16: &g_73ec80
    };
    v1 = alloc::boxed::Box<T>::new();
    v2 = clap_builder::builder::arg::Arg::value_parser(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::short(&v2, 0x6c);
    v2 = clap_builder::builder::arg::Arg::help(&v3, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v2, "length");
    v2 = clap_builder::builder::arg::Arg::action(&v3, None);
    return clap_builder::builder::command::Command::arg(a0, &v4, &v2);
}
