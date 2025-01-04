fn uu_hashsum::uu_app_opt_length(a0: &struct712, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x790]
    let v1: i64;  // [sp-0x788]
    let v2: i64;  // [sp-0x780]
    let v3: i4736;  // [sp-0x778], Other Possible Types: struct592
    let v4: i4736;  // [sp-0x528], Other Possible Types: struct592
    let v5: i8;  // [bp-0x2d8]

    memcpy(&v5, a1, 712);
    v3 = clap_builder::builder::arg::Arg::new("length");
    v4 = clap_builder::builder::arg::Arg::long(&v3, "length");
    v0 = 4;
    v1 = alloc::boxed::Box<T>::new();
    v2 = &g_73ec80;
    v3 = clap_builder::builder::arg::Arg::value_parser(&v4, &v0);
    v4 = clap_builder::builder::arg::Arg::short(&v3, 0x6c);
    v3 = clap_builder::builder::arg::Arg::help(&v4, "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8");
    v4 = clap_builder::builder::arg::Arg::overrides_with(&v3, "length");
    v3 = clap_builder::builder::arg::Arg::action(&v4, None);
    return clap_builder::builder::command::Command::arg(a0, &v5, &v3);
}
