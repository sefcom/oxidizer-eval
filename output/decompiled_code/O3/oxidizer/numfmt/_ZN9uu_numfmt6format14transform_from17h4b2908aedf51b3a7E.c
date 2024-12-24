fn uu_numfmt::format::transform_from(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: struct24;  // [sp-0x38], Other Possible Types: i192
    let v2: i64;  // rbp
    let v3: i64;  // rdx
    let v4: i64;  // xmm0lq
    let v5: i64;  // rcx
    let v6: Result<struct24, struct16>;  // rax
    let v7: i128;  // xmm1
    let v8: i128;  // xmm1
    let v9: i128;  // xmm1
    let v10: i64;  // xmm1lq
    let v11: i256;  // ymm1
    let v12: i256;  // ymm1
    let v13: i256;  // ymm0
    let v14: i256;  // ymm0
    let v15: i256;  // ymm0

    v2 = a4;
    v0 = uu_numfmt::format::parse_suffix(a1, a2);
    v3 = v0;
    v4 = *((&v0 as &char + 8) as &i64);
    v5 = *((&v0 as &char + 16) as &i8);
    v6 = *((&v0 as &char + 17) as &i8);
    if v3 != 0x8000000000000000 {
        return struct24 {
            field_0: v3
            field_8: v4
            field_16: v5 as i8
            field_17: v6 as u8
            field_18: *((&v0 as &char + 18) as &i32)
            field_22: *((&v0 as &char + 22) as &i16)
        };
    }
    v7 = a3;
    v8 = BinaryOp InterleaveLOV;
    v9 = v8 - 0x45300000000000004330000000000000;
    v6 = uu_numfmt::format::remove_suffix(v5 & 4294967295, v6 & 4294967295, v2 & 4294967295);
    if v0 != 0x8000000000000000 {
        v6 = *((&v0 as &char + 16) as &i64);
        return struct24 {
            field_0: v0
            field_16: v6
        };
    }
    v10 = *((&v0 as &char + 8) as &i64);
    v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10;
    v14 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if v2 == 5 {
        v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp CmpEQV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(BinaryOp CmpEQV) & v12;
    } else if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 & 340282366920938463463374607431768211455;
        v6 = ceil(v15);
    } else {
        v6 = ceil(v14);
        v15 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 & 170141183460469231722463931679029329919 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 & 170141183460469231722463931679029329919 ^ 0x80000000000000008000000000000000;
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v15 as i64
    };
}
