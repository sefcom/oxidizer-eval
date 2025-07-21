fn uu_basenc::uu_app(a0: i64) -> long long {
    let v0: void*;  // [bp-0xcc8]
    let v1: struct16;  // [bp-0xcc0]
    let v2: u8;  // [bp-0xcb0]
    let v3: u4736;  // [bp-0x9e8]
    let v4: u4736;  // [bp-0x798]
    let v5: u4736;  // [bp-0x548]
    let v6: u8;  // [bp-0x2f8]
    let v8: i64;  // rax

    uu_base32::base_common::base_app(&v2, "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.", "{} [OPTION]... [FILE]");
    v1 = struct16 {
        field_0: "base64"
        field_8: &g_54fbf0
    };
    v1 = struct16 {
        field_0: "base64"
        field_8: &g_54fbf0
    };
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v8 {
        do {
            clap_builder::builder::arg::Arg::new(&v6, *(v8 as &i64), *((v8 + 8) as &i64));
            clap_builder::builder::arg::Arg::long(&v4, &v6, *(v8 as &i64), *((v8 + 8) as &i64));
            clap_builder::builder::arg::Arg::help(&v6, &v4, *((v8 + 24) as &i64), *((v8 + 32) as &i64));
            clap_builder::builder::arg::Arg::action(&v3, &v6);
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v5, &v3);
            memcpy(&v6, &v2, 712);
            clap_builder::builder::command::Command::arg(&v2, &v6, &v5);
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
        } while (v8);
    }
    memcpy(v0, &v2, 712);
    return a0;
}
