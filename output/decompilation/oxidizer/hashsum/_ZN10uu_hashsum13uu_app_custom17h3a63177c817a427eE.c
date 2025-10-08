fn uu_hashsum::uu_app_custom(a0: i64) -> long long {
    let v0: void*;  // [bp-0xb10]
    let v1: struct640;  // [bp-0x888], Other Possible Types: u8
    let v2: u8;  // [bp-0x5c0]
    let v3: struct712;  // [bp-0x2f8], Other Possible Types: u8
    let v5: struct712;  // rbx
    let v6: i64;  // r12
    let v7: u64;  // r14
    let v8: struct712;  // r15
    let v9: i64;  // r13
    let v10: struct640;  // [bp-0xb08]

    v5 = &v3;
    v3 = uu_hashsum::uu_app_common();
    uu_hashsum::uu_app_opt_bits(&v1, &v3);
    v6 = &v2;
    uu_hashsum::uu_app_b3sum_opts(&v2, &v1);
    do {
        v8 = v5;
        v9 = v6;
        memcpy(v5, v6, 712);
        v1 = clap_builder::builder::arg::Arg::new(*((v7 - -5577136) as &i64), *((v7 - -5577144) as &i64));
        v10 = clap_builder::builder::arg::Arg::long(&v1, *((v7 - -5577136) as &i64), *((v7 - -5577144) as &i64));
        v1 = clap_builder::builder::arg::Arg::help(&v10, *((v7 - -5577152) as &i64), *((v7 + "md5") as &i64));
        v10 = clap_builder::builder::arg::Arg::action(&v1, 2);
        clap_builder::builder::command::Command::arg(v9, v8, &v10);
        v7 += 32;
        v6 = v9;
        v5 = v8;
    } while (v7 != 504);
    memcpy(v0, &v2, 712);
    return a0;
}
