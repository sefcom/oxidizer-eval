fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint(a0: i64, a1: i64) -> u64 {
    let v0: Enum;  // [sp-0x40], Other Possible Types: i72
    let v1: i8;  // [bp-0x37]
    let v2: i8;  // [bp-0x34]
    let v3: i8;  // [bp-0x30]
    let v5: i64;  // rbx
    let v6: i64;  // rdx
    let v7: i128;  // xmm0
    let v8: i64;  // rax
    let v9: i64;  // rcx
    let v11: i64;  // rbx
    let v12: i8;  // cc_dep1
    let v14: i64;  // r15
    let v15: i64;  // rax
    let v16: i64;  // rcx
    let v17: i8;  // cl
    let v18: i64;  // rdx

    if *(a1 as &i64) != 0x8000000000000000 {
        v7 = *(a1 as &i128);
        *((a0 + 24) as &i128) = *((a1 + 16) as &i128);
        *((a0 + 8) as &i128) = v7;
        *(a0 as &i64) = 0;
        return v15;
    }
    v5 = *((a1 + 16) as &i64);
    v6 = *((a1 + 24) as &i64);
    if !v6 {
        v6 = 0;
        goto LABEL_4fdb74;
    } else if *(v5 as &i8) != 45 {
LABEL_4fdb74:
    } else {
        v8 = v5 + 1;
        v9 = v6;
        if v9 == 1 {
            v6 = 0;
        } else {
            v12 = *((v5 + 1) as &i8);
        }
    }
    v14 = *((a1 + 8) as &i64);
    v0 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(v11, v6, 10);
    v15 = v0;
    if v15 == 0x8000000000000000 {
        v16 = 1;
        v15 = 2;
    } else {
        v17 = *((&v0 as &char + 8) as &i8);
        *((a0 + 20) as &i8) = v2;
        *((a0 + 17) as &i8) = v1;
        v18 = v3;
        *((a0 + 16) as &i8) = v17;
        *((a0 + 24) as &i64) = v18;
        *((a0 + 32) as &i32) = (v18 ? 2 : 1);
        v16 = 0;
    }
    *((a0 + 8) as &i64) = v15;
    *(a0 as &i64) = v16;
    if !v14 {
        return v15;
    }
}
