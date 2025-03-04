fn uu_numfmt::format::transform_from(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v2: i64;  // rbp
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm1
    let v9: iNone;  // xmm1
    let v10: i64;  // xmm1lq
    let v11: iNone;  // ymm1
    let v13: iNone;  // ymm0
    let v14: iNone;  // ymm0

    v2 = a4 as u64;
    v0 = uu_numfmt::format::parse_suffix(a1, a2);
    if v0.field_0 as i64 != 0x8000000000000000 {
        return struct24 {
            field_0: v3
            field_8: v4
            field_16: v5 as u8
            field_17: v6 as u8
            field_18: *((&v0.field_16 as &char + 2) as &i32)
            field_22: *((&v0.field_16 as &char + 6) as &i16)
        };
    }
    v7 = a3 as u128;
    v8 = BinaryOp InterleaveLOV;
    v9 = v8 - 0x45300000000000004330000000000000;
    uu_numfmt::format::remove_suffix(v0.field_16 & 4294967295, *((&v0.field_16 as &char + 1) as &i8) & 4294967295, v2 & 4294967295);
    if v0.field_0 as i64 != 0x8000000000000000 {
        return struct24 {
            field_0: v0.field_0
            field_16: v6
        };
    }
    v10 = *((&v0.field_0 as &char + 8) as &i64);
    v14 = ((v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((&v0.field_0 as &char + 8) as &i64)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp MulV) as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if v2 as u8 == 5 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v15 as u64
        };
    }
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        ceil(v14 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((((v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10 as u256) & 340282366920938463463374607431768211455);
    } else {
        ceil(v14);
    }
}
