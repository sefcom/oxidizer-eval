fn uu_seq::write_value_float(a0: u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0xd8]
    let v1: u64;  // [sp-0xd0]
    let v2: u64;  // [sp-0xc8], Other Possible Types: &u8
    let v3: u64;  // [sp-0xc0]
    let v4: void*;  // [sp-0xb8]
    let v5: u64;  // [sp-0xb0]
    let v6: u8;  // [sp-0xa8]
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98], Other Possible Types: &u8
    let v9: u64;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: void*;  // [sp-0x80]
    let v12: u64;  // [sp-0x78]
    let v13: void*;  // [sp-0x70]
    let v14: u64;  // [sp-0x68]
    let v15: u64;  // [sp-0x60]
    let v16: &u8;  // [sp-0x58]
    let v17: u64;  // [sp-0x50]
    let v18: &u8;  // [sp-0x48]
    let v19: u64;  // [sp-0x40]
    let v20: u8;  // [bp-0x38]
    let v22: &u64;  // r12

    v22 = a1;
    v7 = a1;
    if <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(v22) as i8 || <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(v22) as i8 {
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
    v14 = &g_4176c0;
    v15 = 1;
    v18 = &v0;
    v19 = 1;
    v16 = &v8;
    v17 = 3;
    core::option::Option<T>::map_or_else();
    v8 = &v20;
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_4176c0;
    v1 = 1;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    return std::io::Write::write_fmt(a0, &v0);
}
