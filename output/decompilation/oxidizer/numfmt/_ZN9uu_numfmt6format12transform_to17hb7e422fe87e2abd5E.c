fn uu_numfmt::format::transform_to(a0: &struct32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: u8;  // [bp-0x128]
    let v1: u8;  // [sp-0x127]
    let v2: u64;  // [sp-0x120], Other Possible Types: &u8
    let v3: u64;  // [sp-0x118]
    let v4: &u8;  // [sp-0x110]
    let v5: u64;  // [sp-0x108]
    let v6: &u8;  // [sp-0x100], Other Possible Types: u64
    let v7: u64;  // [sp-0xf8], Other Possible Types: void*
    let v8: u64;  // [sp-0xf0]
    let v9: &u8;  // [sp-0xe8], Other Possible Types: u64
    let v10: u64;  // [sp-0xe0]
    let v11: &u8;  // [sp-0xd8], Other Possible Types: u64, &&struct_0
    let v12: u64;  // [sp-0xd0], Other Possible Types: void*
    let v13: &u8;  // [sp-0xc8]
    let v14: u64;  // [sp-0xc0]
    let v15: u64;  // [bp-0xb8], Other Possible Types: void*
    let v16: u64;  // [sp-0xb0]
    let v17: u64;  // [bp-0xa8]
    let v18: u8;  // [bp-0xa7]
    let v21: void*;  // [sp-0x98]
    let v22: u64;  // [sp-0x90]
    let v23: u8;  // [sp-0x88]
    let v24: u64;  // [sp-0x80]
    let v25: u64;  // [sp-0x70]
    let v26: u64;  // [sp-0x60]
    let v27: u64;  // [sp-0x58]
    let v28: u8;  // [sp-0x50]
    let v34: u256;  // ymm0
    let v35: u256;  // ymm0
    let v36: u8;  // cl
    let v37: u64;  // rax
    let v38: u128;  // xmm0
    let v39: u256;  // ymm0

    uu_numfmt::format::consider_suffix(&v15, a2);
    v35 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v16;
    v36 = v17;
    v37 = v18;
    if v15 != 0x8000000000000000 {
        return struct32 {
            field_0: 1
            field_8: v32
            field_16: v33
            field_24: v36
            field_25: v37 as u8
            field_26: v19
            field_30: v20
        };
    }
    v38 = BinaryOp DivV;
    v39 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
    v8 = v39;
    if v37 == 2 {
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
        v2 = &g_416000;
        v3 = 1;
        v6 = &v15;
        v7 = 1;
        goto LABEL_4c40f0;
    } else if a4 {
        v0 = v36;
        v1 = v37 & 1;
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
        v9 = &g_41a370;
        v10 = 2;
        v13 = &v15;
        v14 = 2;
        v11 = &v2;
        v12 = 3;
    } else {
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
            v0 = v36;
            v1 = v1;
            v9 = &v8;
            v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v11 = &v0;
            v12 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v15 = 0;
            v16 = 1;
        } else {
            v0 = v36;
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
        v2 = &g_41a370;
        v3 = 2;
        v6 = &v15;
        v7 = 2;
LABEL_4c40f0:
        v4 = &v9;
        v5 = 2;
    }
    core::option::Option<T>::map_or_else();
    return struct32 {
        field_0: 0
        field_8: v29
        field_24: v37
    };
}
