fn uu_basenc::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xcc0]
    let v1: i64;  // [sp-0xcb8]
    let v2: struct712;  // [sp-0xcb0], Other Possible Types: i5696
    let v3: struct592;  // [sp-0x9e8]
    let v4: i4736;  // [sp-0x798], Other Possible Types: struct592
    let v5: struct592;  // [sp-0x548], Other Possible Types: i4736
    let v6: struct592;  // [sp-0x2f8], Other Possible Types: i4736
    let v8: struct8;  // rax
    let v9: i64;  // r15
    let v10: i64;  // r12

    v2 = uu_base32::base_common::base_app(&g_41954c, 297, "{} [OPTION]... [FILE]");
    v0 = "base64";
    v1 = &g_550000;
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v8 {
        memcpy(a0, &v2, 712);
        return a0;
    }
    do {
        v9 = *(v8 as &i64);
        v10 = *((v8 + 8) as &i64);
        v6 = clap_builder::builder::arg::Arg::new(v9, v10);
        v4 = clap_builder::builder::arg::Arg::long(&v6, v9, v10);
        v6 = clap_builder::builder::arg::Arg::help(&v4, *((v8 + 24) as &i64), *((v8 + 32) as &i64));
        v3 = clap_builder::builder::arg::Arg::action(&v6);
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold();
        memcpy(&v6, &v2, 712);
        v2 = clap_builder::builder::command::Command::arg(&v6, &v5);
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v8);
}
