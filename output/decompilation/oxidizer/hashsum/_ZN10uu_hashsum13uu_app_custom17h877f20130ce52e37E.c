fn uu_hashsum::uu_app_custom(a0: i64) -> long long {
    let v0: u64;  // [bp-0xaf0]
    let v1: struct16;  // [bp-0xae8]
    let v2: u8;  // [bp-0xad8]
    let v3: u8;  // [bp-0x810]
    let v4: u8;  // [bp-0x548]
    let v5: u8;  // [bp-0x280]
    let v7: i64;  // rax

    uu_hashsum::uu_app_common(&v3);
    uu_hashsum::uu_app_opt_bits(&v4, &v3);
    uu_hashsum::uu_app_b3sum_opts(&v2, &v4);
    v1 = struct16 {
        field_0: "md5"
        field_8: &g_73eeb0
    };
    v1 = struct16 {
        field_0: "md5"
        field_8: &g_73eeb0
    };
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v7 {
        do {
            memcpy(&v3, &v2, 712);
            clap_builder::builder::arg::Arg::new(&v4, *(v7 as &i64), *((v7 + 8) as &i64));
            clap_builder::builder::arg::Arg::long(&v5, &v4, v7);
            clap_builder::builder::arg::Arg::help(&v4, &v5, *((v7 + 16) as &i64), *((v7 + 24) as &i64));
            clap_builder::builder::arg::Arg::action(&v5, &v4, 2);
            clap_builder::builder::command::Command::arg(&v2, &v3, &v5);
            v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
        } while (v7);
    }
    memcpy(v0, &v2, 712);
    return a0;
}
