fn uu_numfmt::format::transform_to(a1: i64, a2: i32, a3: i8, a4: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x128], Other Possible Types: u64
    let v1: u8;  // [bp-0x127]
    let v2: core::fmt::rt::Argument;  // [bp-0x120], Other Possible Types: struct_0 *
    let v3: u64;  // [bp-0x118]
    let v4: i64;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: i64;  // [bp-0x100], Other Possible Types: u64
    let v7: void*;  // [bp-0xf8], Other Possible Types: u64
    let v8: u64;  // [bp-0xf0]
    let v9: i64;  // [bp-0xe8], Other Possible Types: u64
    let v10: u64;  // [bp-0xe0]
    let v11: struct16;  // [bp-0xd8], Other Possible Types: struct_0 *, u64
    let v12: void*;  // [bp-0xd0], Other Possible Types: u64
    let v13: i64;  // [bp-0xc8]
    let v14: u64;  // [bp-0xc0]
    let v15: void*;  // [bp-0xb8], Other Possible Types: u64
    let v16: u64;  // [bp-0xb0]
    let v17: struct16;  // [sp-0xa8], Other Possible Types: u64
    let v18: u8;  // [bp-0xa7]
    let v19: u32;  // [bp-0xa6]
    let v20: i8;  // [bp-0xa2]
    let v21: core::fmt::Arguments;  // [sp-0x98], Other Possible Types: void*
    let v22: core::fmt::rt::Argument;  // [sp-0x90], Other Possible Types: u64
    let v23: u8;  // [sp-0x88]
    let v24: u64;  // [sp-0x80]
    let v25: u64;  // [sp-0x70]
    let v26: u64;  // [sp-0x60]
    let v27: u64;  // [sp-0x58]
    let v28: u8;  // [sp-0x50]
    let v29: struct24;  // [bp-0x40], Other Possible Types: u64
    let v30: i8;  // [bp-0x30]
    let v32: struct16;  // cl
    let v33: u64;  // rax
    let v34: i64;  // rdi
    let v35: i64;  // rsi

    uu_numfmt::format::consider_suffix(&v15, a2);
    v32 = v17.field_0 as i8;
    v33 = v18;
    if v15 != 0x8000000000000000 {
        return struct40 {
            field_0: 1
            field_8: v15
            field_16: v16
            field_24: v32
            field_25: v33 as u8
            field_26: <UNKNOWN>
            field_30: <UNKNOWN>
        };
    }
    v8 = BinaryOp DivV;
    if v33 == 2 {
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
        v2 = &g_416000.ty;
        v3 = 1;
        v6 = &v15;
        v7 = 1;
    } else if a4 {
        v0 = v32;
        v1 = v33 & 1;
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
        v9 = &g_41a370.ty;
        v10 = 2;
        v13 = &v15;
        v14 = 2;
        v11 = &v2;
        v12 = 3;
        v34 = &v29;
        v35 = &v9;
    } else {
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
            v0 = v32;
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
        v2 = &g_41a370.ty;
        v3 = 2;
        v6 = &v15;
        v7 = 2;
    }
    core::option::Option<T>::map_or_else(v34, v35);
    return Ok(struct24 {
        field_0: v29
        field_16: *(&v30 as &i64)
    });
}
