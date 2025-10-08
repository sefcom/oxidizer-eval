fn uu_numfmt::format::transform_to(a0: i64, a1: u64, a2: u8, a3: u8, a4: u64) -> long long {
    let v0: u8;  // [bp-0xb8]
    let v1: u8;  // [bp-0xb7]
    let v2: u8;  // [bp-0xb6]
    let v3: i64;  // [bp-0xb0], Other Possible Types: &str, u8
    let v4: core::fmt::rt::Argument;  // [bp-0xb0]
    let v5: core::fmt::rt::Argument;  // [bp-0xa8], Other Possible Types: u64
    let v6: i64;  // [bp-0xa0], Other Possible Types: struct_6 *, u8
    let v7: struct32;  // [bp-0x9f]
    let v8: u32;  // [bp-0x9e]
    let v9: u16;  // [bp-0x9a]
    let v10: u64;  // [bp-0x98]
    let v11: void*;  // [bp-0x90], Other Possible Types: &str
    let v12: std::io::stdio::Stdin;  // [bp-0x88]
    let v13: u64;  // [bp-0x80]
    let v14: &str;  // [bp-0x78], Other Possible Types: struct_2 *, struct_8 *, struct_9 *, u64
    let v15: u16;  // [bp-0x74]
    let v16: u64;  // [bp-0x70]
    let v17: void*;  // [bp-0x68], Other Possible Types: struct_0 *, struct_1 *, struct_5 *
    let v18: std::io::stdio::Stdin;  // [bp-0x60], Other Possible Types: struct32, u64
    let v19: &str;  // [bp-0x58]
    let v20: u128;  // [bp-0x48]
    let v21: i8;  // [bp-0x38]
    let v23: u8;  // cl
    let v24: &mut [u8];  // rax
    let v25: i64;  // rdi
    let v26: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rsi
    let v27: core::fmt::rt::Argument;  // rax

    uu_numfmt::format::consider_suffix(&v3, a2);
    v23 = v6;
    v24 = v7 as u64;
    if !((((0 ^ v3) & (0 ^ -(v3))) >> 63) as char) {
        v15 = v9;
        v14 = v8;
        return struct40 {
            field_0: 1
            field_8: v3
            field_16: v5
            field_24: v23
            field_25: v24 as u8
            field_26: <UNKNOWN>
            field_30: <UNKNOWN>
        };
    }
    v13 = BinaryOp DivV;
    if v24 as u8 == 2 {
        uu_numfmt::format::round_with_precision(a3, a4);
        v0 = v13;
        if a4 > 65535 {
            panic!("Formatting argument out of range");
        }
        *(&v14 as &&u8) = &v0;
        v16 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v17 = 0;
        v18 = a4;
        v3 = "\x01";
        v11 = "\x01";
        goto LABEL_46a49b;
    } else {
        if a4 {
            v1 = v23;
            v2 = v24 as u8 & 1;
            if a4 > 65535 {
                panic!("Formatting argument out of range");
            }
            v3 = &v13;
            v5 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            *(&v6 as &&u8) = &v0;
            v10 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v11 = 0;
            v12 = a4;
            v14 = "\x01\x00";
            v19 = "\x01\x00";
            v17 = &v3;
            v18 = 3;
            v25 = &v20;
            v26 = &v14 as u8;
        } else {
            if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
                v1 = v23;
                v0 = a2;
                *(&v14 as &&u64) = &v13;
                v16 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v17 = &v0;
                v18 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
                v3 = "\x01\x00";
                v27 = &g_41abe8.ty;
            } else {
                v1 = v23;
                v0 = a2;
                *(&v14 as &&u64) = &v13;
                v16 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v17 = &v0;
                v18 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
                v3 = "\x01\x00";
                v27 = &g_41ab88.ty;
            }
LABEL_46a49b:
            *(&v6 as &&u8) = &v14;
            v10 = 2;
            v25 = &v20;
            v26 = &v4;
        }
        core::option::Option<T>::map_or_else(v25, v26);
        return struct32 {
            field_0: 0
            field_8: v20
            field_24: *(&v21 as &i64)
        };
    }
}
