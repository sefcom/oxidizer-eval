fn uu_basenc::uu_app(a0: &struct712) -> u64 {
    let v0: struct16;  // [bp-0xcc0]
    let v1: struct712;  // [sp-0xcb0], Other Possible Types: int
    let v2: struct592;  // [sp-0x9e8]
    let v3: struct592;  // [sp-0x798]
    let v4: struct592;  // [sp-0x548]
    let v5: struct592;  // [sp-0x2f8]
    let v7: i64;  // rax
    let v8: i64;  // rbx
    let v9: i64;  // r15
    let v10: i64;  // r12

    v1 = uu_base32::base_common::base_app("Encode/decode data and print to standard output
With no FILE, or when FILE is -, read standard input.

When decoding, the input may contain newlines in addition to the bytes of
the formal alphabet. Use --ignore-garbage to attempt to recover
from any other non-alphabet bytes in the encoded stream.", "{} [OPTION]... [FILE]");
    v0 = struct16 {
        field_0: "base64"
        field_8: &g_54fbf0
    };
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v7 {
        memcpy(a0, &v1, 712);
        return a0;
    }
    v8 = v7;
    do {
        v9 = *(v8 as &i64);
        v10 = *((v8 + 8) as &i64);
        v5 = clap_builder::builder::arg::Arg::new(v9, v10);
        v3 = clap_builder::builder::arg::Arg::long(&v5, v9, v10);
        v5 = clap_builder::builder::arg::Arg::help(&v3, *((v8 + 24) as &i64), *((v8 + 32) as &i64));
        v2 = clap_builder::builder::arg::Arg::action(&v5);
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(&v2);
        memcpy(&v5, &v1, 712);
        v1 = clap_builder::builder::command::Command::arg(&v5, &v4);
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v8);
}
