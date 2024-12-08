fn uu_hashsum::uu_app_custom(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0xae8]
    let v1: i5696;  // [sp-0xad8], Other Possible Types: struct712
    let v2: i5696;  // [sp-0x810], Other Possible Types: struct712
    let v3: i4736;  // [sp-0x548], Other Possible Types: struct592, struct712
    let v4: struct592;  // [sp-0x280], Other Possible Types: i4736
    let v6: i64;  // rax

    v2 = uu_hashsum::uu_app_common(a1, a2);
    v3 = uu_hashsum::uu_app_opt_bits(&v2);
    v1 = uu_hashsum::uu_app_b3sum_opts(&v3);
    v0 = struct16 {
        field_0: "md5"
        field_8: &g_73fe20
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v6 {
        do {
            memcpy(&v2, &v1, 712);
            v3 = clap_builder::builder::arg::Arg::new(*(v6 as &i64), *((v6 + 8) as &i64));
            v4 = clap_builder::builder::arg::Arg::long(&v3, v6);
            v3 = clap_builder::builder::arg::Arg::help(&v4, *((v6 + 16) as &i64), *((v6 + 24) as &i64));
            v4 = clap_builder::builder::arg::Arg::action(&v3, 2);
            v1 = clap_builder::builder::command::Command::arg(&v2, &v4);
            v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v6);
    }
    memcpy(a0, &v1, 712);
    return a0;
}
