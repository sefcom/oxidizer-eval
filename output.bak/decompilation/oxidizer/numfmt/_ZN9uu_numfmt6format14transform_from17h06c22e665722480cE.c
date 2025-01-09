fn uu_numfmt::format::transform_from(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i200;  // [sp-0x38], Other Possible Types: Result<struct24, struct10>
    let v2: i64;  // rbp
    let v7: i128;  // xmm1
    let v8: i128;  // xmm1
    let v9: i128;  // xmm1
    let v10: i64;  // xmm1lq
    let v11: i256;  // ymm1
    let v13: i256;  // ymm0
    let v14: i256;  // ymm0

    v2 = a4;
    v0 = uu_numfmt::format::parse_suffix(a1, a2);
    match v0 {
        Ok(_) => {
            return struct24 {
                field_0: v3
                field_8: v4
                field_16: v5 as i8
                field_17: v6 as i8
                field_18: *((&v0 as &char + 18) as &i32)
                field_22: *((&v0 as &char + 22) as &i16)
            };
        },
        Err(_) => {
            v7 = a3 as u64 as u128;
            v8 = BinaryOp InterleaveLOV;
            v9 = v8 - 0x45300000000000004330000000000000;
            uu_numfmt::format::remove_suffix(*((&v0 as &char + 16) as &i8) as u8 as u64 & 4294967295, *((&v0 as &char + 17) as &i8) as u8 as u64 & 4294967295, v2 & 4294967295);
            return struct24 {
                field_0: v0
                field_16: v6
            };
            v10 = *((&v0 as &char + 8) as &i64);
            v14 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((&v0 as &char + 8) as &i64) as u64 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp MulV) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            if v2 as i8 == 5 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v15 as i64
                };
            }
            if (((BinaryOp CmpF & 69) as u32 as u64 as u8 | ((BinaryOp CmpF & 69) as u32 as u64 >> 6) as u8) & 1) == 1 {
                ceil(v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10 as u64 as u256) & 340282366920938463463374607431768211455);
            } else {
                ceil(v14);
            }
        },
    }
}
