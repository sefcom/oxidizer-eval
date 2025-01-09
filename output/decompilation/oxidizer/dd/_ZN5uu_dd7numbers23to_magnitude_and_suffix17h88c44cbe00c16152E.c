fn uu_dd::numbers::to_magnitude_and_suffix(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x118]
    let v1: u64;  // [sp-0x110]
    let v2: &u8;  // [sp-0x108], Other Possible Types: u64
    let v3: u64;  // [sp-0x100]
    let v4: &u8;  // [sp-0xf8]
    let v5: u64;  // [sp-0xf0]
    let v6: &u8;  // [sp-0xe8]
    let v7: u64;  // [sp-0xe0]
    let v8: u64;  // [sp-0xd8], Other Possible Types: i64
    let v9: u64;  // [sp-0xd0]
    let v10: &u8;  // [sp-0xc8]
    let v11: u64;  // [sp-0xc0]
    let v12: u64;  // [sp-0xb8], Other Possible Types: void*, struct32
    let v13: u64;  // [sp-0xb0]
    let v14: &&struct_0;  // [sp-0xa8], Other Possible Types: u64
    let v15: u64;  // [sp-0xa0]
    let v16: void*;  // [sp-0x98]
    let v17: u64;  // [sp-0x90]
    let v18: u8;  // [sp-0x88]
    let v19: u64;  // [sp-0x80]
    let v20: u64;  // [sp-0x70]
    let v21: u64;  // [sp-0x60]
    let v22: u64;  // [sp-0x58]
    let v23: u8;  // [sp-0x50]
    let v24: u128;  // [sp-0x40]
    let v26: u128;  // xmm0
    let v27: u256;  // ymm0
    let v28: u256;  // ymm1
    let v29: u256;  // ymm1
    let v30: u128;  // xmm1

    v12 = uu_dd::numbers::SuffixType::base_and_suffix(a3, a1, a2);
    v26 = *((&v12 as &char + 16) as &i128);
    v24 = v26;
    __floatuntidf(a1, a2);
    v0 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    __floatuntidf(v12, v13);
    v29 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
    v30 = BinaryOp DivV;
    v1 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
        v8 = &v1;
        v9 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v10 = &v24;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = 0;
        v13 = 1;
        v14 = 2;
        v16 = 0;
        v17 = 32;
        v18 = 3;
        v19 = 2;
        v20 = 2;
        v21 = 1;
        v22 = 32;
        v23 = 3;
        v2 = &g_561a88;
        v3 = 2;
        v6 = &v12;
        v7 = 2;
        v4 = &v8;
        v5 = 2;
    } else {
        round(v0);
        v8 = (v0 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v2 = &v8;
        v3 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v4 = &v24;
        v5 = <&T as core::fmt::Display>::fmt;
        v12 = &g_561a88;
        v13 = 2;
        v16 = 0;
        v14 = &v2;
        v15 = 2;
    }
    core::option::Option<T>::map_or_else();
    return a0;
}
