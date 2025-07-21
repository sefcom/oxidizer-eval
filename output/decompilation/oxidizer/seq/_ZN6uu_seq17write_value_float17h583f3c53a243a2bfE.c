fn uu_seq::write_value_float(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: u64
    let v6: u8;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: core::fmt::rt::Argument;  // [bp-0x98], Other Possible Types: struct_0 *
    let v9: u128;  // [bp-0x98]
    let v15: struct48;  // [bp-0x68]
    let v16: struct24;  // [bp-0x38]

    v7 = a1;
    v6 = 1;
    v15 = struct48 {
        field_0: &g_4176c0
        field_8: 1
        field_16: &v8
        field_24: 3
        field_32: &v0
        field_40: 1
    };
    v16 = core::option::Option<T>::map_or_else(&v15);
    v8 = core::fmt::rt::Argument {
        ty: &v16
    };
    v0 = core::fmt::Arguments {
        pieces: [&g_4176c0]
        args: [v9]
        fmt: 0
    };
    return std::io::Write::write_fmt(a0, &v0);
}
