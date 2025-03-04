fn uu_seq::write_value_float(a0: u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xd8]
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: i8;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i64;  // [sp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i64;  // [sp-0x78]
    let v13: i64;  // [sp-0x70]
    let v14: struct48;  // [bp-0x68]
    let v15: struct24;  // [sp-0x38]

    v7 = a1;
    if <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a1) as i8 || <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a1) as i8 {
        v8 = &v7;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = a3;
        v11 = 0;
        v12 = a2;
        v13 = 0;
        v0 = 1;
        v1 = 1;
        v2 = 1;
        v3 = 2;
        v4 = 0;
        v5 = 32;
    } else {
        v8 = &v7;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = a3;
        v11 = 0;
        v12 = a2;
        v13 = 0;
        v0 = 1;
        v1 = 1;
        v2 = 1;
        v3 = 2;
        v4 = 0;
        v5 = 34359738400;
    }
    v6 = 1;
    v14 = struct48 {
        field_0: &g_4176c0
        field_8: 1
        field_16: &v8
        field_24: 3
        field_32: &v0
        field_40: 1
    };
    v15 = core::option::Option<T>::map_or_else(&v14);
    v8 = &v15;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_4176c0;
    v1 = 1;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    return std::io::Write::write_fmt(a0, &v0);
}
