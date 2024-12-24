fn uu_numfmt::format::transform_to(a0: i64, a1: i64, a2: i32, a3: i32, a4: i64) -> u64 {
    let v0: i8;  // [bp-0x128]
    let v1: i8;  // [sp-0x127]
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v5: i64;  // [sp-0x108]
    let v6: i64;  // [sp-0x100]
    let v7: i64;  // [sp-0xf8]
    let v8: i64;  // [sp-0xf0]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xc8]
    let v14: i64;  // [sp-0xc0]
    let v15: i64;  // [bp-0xb8]
    let v16: i64;  // [sp-0xb0]
    let v17: i8;  // [bp-0xa8]
    let v18: i8;  // [bp-0xa7]
    let v21: i64;  // [sp-0x98]
    let v22: i64;  // [sp-0x90]
    let v23: i8;  // [sp-0x88]
    let v24: i64;  // [sp-0x80]
    let v25: i64;  // [sp-0x70]
    let v26: i64;  // [sp-0x60]
    let v27: i64;  // [sp-0x58]
    let v28: i8;  // [sp-0x50]
    let v29: i192;  // [sp-0x40], Other Possible Types: struct24
    let v31: i64;  // rdx
    let v32: i64;  // xmm0lq
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i8;  // cl
    let v36: i64;  // rax
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i64;  // rsi

    uu_numfmt::format::consider_suffix(&v15, a2);
    v31 = v15;
    v32 = v16;
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v32;
    v35 = v17;
    v36 = v18;
    if v31 != 0x8000000000000000 {
        return struct32 {
            field_0: 1
            field_8: v31
            field_16: v32
            field_24: v35
            field_25: v36 as i8
            field_26: v19
            field_30: v20
        };
    }
    v37 = BinaryOp DivV;
    v38 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
    v8 = v38;
    if v36 == 2 {
        uu_numfmt::format::round_with_precision(a3, a4);
        v0 = v8;
        v9 = &v0;
        v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v11 = a4;
        v12 = 0;
        v15 = 1;
        v16 = 1;
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v2 = &g_416200;
        v3 = 1;
        v6 = &v15;
        v7 = 1;
        goto LABEL_4c4540;
    } else if a4 {
        v0 = v35;
        v1 = v36 & 1;
        v2 = &v8;
        v3 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v4 = &v0;
        v5 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v6 = a4;
        v7 = 0;
        v15 = 1;
        v16 = 2;
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v24 = 2;
        v25 = 2;
        v26 = 1;
        v27 = 32;
        v28 = 3;
        v9 = &g_41a4f0;
        v10 = 2;
        v13 = &v15;
        v14 = 2;
        v11 = &v2;
        v12 = 3;
        v39 = &v9;
    } else {
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
            v0 = v35;
            v1 = v1;
            v9 = &v8;
            v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v11 = &v0;
            v12 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v15 = 0;
            v16 = 1;
        } else {
            v0 = v35;
            v1 = v1;
            v9 = &v8;
            v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v11 = &v0;
            v12 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v15 = 0;
        }
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v24 = 2;
        v25 = 2;
        v26 = 1;
        v27 = 32;
        v28 = 3;
        v2 = &g_41a4f0;
        v3 = 2;
        v6 = &v15;
        v7 = 2;
LABEL_4c4540:
        v4 = &v9;
        v5 = 2;
        v39 = &v2;
    }
    v29 = core::option::Option<T>::map_or_else(v39);
    v36 = *((&v29 as &char + 16) as &i64);
    *((a0 + 24) as &i64) = v36;
    *((a0 + 8) as &i192) = v29;
    *(a0 as &i64) = 0;
    return v36;
}
