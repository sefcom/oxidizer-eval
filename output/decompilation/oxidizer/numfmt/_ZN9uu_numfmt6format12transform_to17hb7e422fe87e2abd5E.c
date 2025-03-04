fn uu_numfmt::format::transform_to(a0: &struct32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x128], Other Possible Types: unsigned long
    let v1: i8;  // [sp-0x127]
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x120]
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: i64;  // [sp-0x100]
    let v8: i64;  // [sp-0xf8]
    let v9: i64;  // [sp-0xf0]
    let v10: i64;  // [sp-0xe8]
    let v11: i64;  // [sp-0xe8]
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [bp-0xb8], Other Possible Types: char
    let v18: iNone;  // [sp-0xb8], Other Possible Types: unsigned long
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa8], Other Possible Types: char
    let v21: i8;  // [bp-0xa7]
    let v24: i64;  // [sp-0x98]
    let v25: i64;  // [sp-0x90]
    let v26: i8;  // [sp-0x88]
    let v27: i64;  // [sp-0x80]
    let v28: i64;  // [sp-0x70]
    let v29: i64;  // [sp-0x60]
    let v30: i64;  // [sp-0x58]
    let v31: i8;  // [sp-0x50]
    let v32: struct24;  // [sp-0x40]
    let v36: iNone;  // ymm0
    let v37: iNone;  // ymm0
    let v38: i8;  // cl
    let v39: i64;  // rax
    let v40: iNone;  // xmm0
    let v41: iNone;  // ymm0
    let v42: i64;  // rsi

    uu_numfmt::format::consider_suffix(&v17, a2 as u64);
    v37 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v19 as u256;
    v38 = v20;
    v39 = v21;
    if v17 != 0x8000000000000000 {
        return struct32 {
            field_0: 1
            field_8: v34
            field_16: v35
            field_24: v38
            field_25: v39 as u8
            field_26: *(&v22 as &i32)
            field_30: *(&v23 as &i16)
        };
    }
    v40 = BinaryOp DivV;
    v41 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256;
    v9 = v41 as u64;
    if v39 as u8 == 2 {
        uu_numfmt::format::round_with_precision(a3 as u64, a4);
        v0 = v9;
        v10 = &v0;
        v12 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v13 = a4;
        v14 = 0;
        v17 = 1;
        v19 = 1;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v2 = &g_416000;
        v4 = 1;
        v7 = &v18;
        v8 = 1;
        goto LABEL_4c40f0;
    } else if a4 {
        v0 = v38;
        v1 = v39 as u8 & 1;
        v3 = &v9;
        v4 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v5 = &v0;
        v6 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v7 = a4;
        v8 = 0;
        v17 = 1;
        v19 = 2;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v11 = &g_41a370;
        v12 = 2;
        v15 = &v18;
        v16 = 2;
        v13 = &v3;
        v14 = 3;
        v42 = &v11;
    } else {
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
            v0 = v38;
            v1 = v1;
            v10 = &v9;
            v12 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v13 = &v0;
            v14 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v18 = 0;
            v18 = 1;
        } else {
            v0 = v38;
            v1 = v1;
            v10 = &v9;
            v12 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v13 = &v0;
            v14 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            *(&v18 as &i128) = 0;
        }
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v2 = &g_41a370;
        v4 = 2;
        v7 = &v18;
        v8 = 2;
LABEL_4c40f0:
        v5 = &v10;
        v6 = 2;
        v42 = &v2;
    }
    v32 = core::option::Option<T>::map_or_else(v42);
    return struct32 {
        field_0: 0
        field_8: v32.field_0
        field_24: v39
    };
}
