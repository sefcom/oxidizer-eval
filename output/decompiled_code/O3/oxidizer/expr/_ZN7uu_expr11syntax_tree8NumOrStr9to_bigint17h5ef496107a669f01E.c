fn uu_expr::syntax_tree::NumOrStr::to_bigint(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i72;  // [sp-0x48], Other Possible Types: Enum
    let v2: i8;  // [bp-0x3f]
    let v3: i32;  // [bp-0x3c]
    let v4: i8;  // [bp-0x38]
    let v6: i64;  // rsi
    let v7: i64;  // rdx
    let v8: i8;  // bpl
    let v10: i64;  // r13
    let v11: i64;  // rsi
    let v12: i64;  // r14
    let v15: i64;  // r14
    let v16: i64;  // r12
    let v17: i64;  // rax
    let v18: i64;  // rcx
    let v21: i8;  // cc_dep1
    let v22: i64;  // rax
    let v23: i8;  // cl
    let v24: i32;  // edx
    let v25: i64;  // rdx

    if *(a1 as &i64) == 0x8000000000000000 {
        v6 = *((a1 + 16) as &i64);
        v7 = *((a1 + 24) as &i64);
        if !v7 {
            v7 = 0;
        } else if *(v6 as &i8) == 45 {
            v17 = v6 + 1;
            v18 = v7;
            if v18 == 1 {
                v7 = 0;
            } else {
                v21 = *((v6 + 1) as &i8);
            }
        }
        v1 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(v11, v7, 10);
        v22 = v1;
        v23 = *((&v1 as &char + 8) as &i8);
        if v22 != 0x8000000000000000 {
            v24 = v2;
            *((a0 + 12) as &i32) = v3;
            *((a0 + 9) as &i32) = v24;
            v25 = v4;
            *((a0 + 16) as &i64) = v25;
            *((a0 + 24) as &i32) = (v25 ? 2 : 1);
        }
        *((a0 + 8) as &i8) = v23;
        *(a0 as &i64) = v22;
        return v22;
    } else {
        v8 = *((a1 + 24) as &i8);
        v10 = *((a1 + 16) as &i64);
        if v10 {
            v12 = v10 * 8;
            if v10 >> 60 {
                v0 = 0;
            }
            v0 = 8;
        }
        v22 = memcpy(v16, *((a1 + 8) as &i64), v15);
        *(a0 as &i64) = v10;
        *((a0 + 8) as &i64) = v16;
        *((a0 + 16) as &i64) = v10;
        *((a0 + 24) as &i8) = v8;
        return v22;
    }
}
