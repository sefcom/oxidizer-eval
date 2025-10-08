fn uu_expr::syntax_tree::Parser<S>::parse_precedence(a1: i64, a2: i64) -> Result<struct36, struct40> {
    let a0: u64;  // rdi
    let v0: void*;  // [bp-0x108]
    let v1: u64;  // [bp-0x100]
    let v2: u64;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf0]
    let v4: u128;  // [bp-0xe8]
    let v5: u8;  // [bp-0xe7]
    let v6: u32;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: Result<struct36, struct40>;  // [bp-0xd8]
    let v9: u128;  // [bp-0xd8]
    let v10: u128;  // [bp-0xd8]
    let v11: u128;  // [bp-0xc8]
    let v12: u64;  // [bp-0xb8]
    let v13: u64;  // [bp-0xa8]
    let v14: u128;  // [bp-0xa8]
    let v15: u128;  // [bp-0xa0]
    let v16: u128;  // [bp-0x98]
    let v17: u128;  // [bp-0x90]
    let v18: u128;  // [bp-0x78]
    let v19: u64;  // [bp-0x78]
    let v20: iNone;  // [bp-0x68]
    let v21: u64;  // [bp-0x50]
    let v22: void*;  // [bp-0x48]
    let v23: u64;  // [bp-0x40]
    let v24: u64;  // [bp-0x38]
    let v26: void*;  // r15
    let v27: u64;  // rbx
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm0
    let v30: u128;  // xmm0
    let v31: u128;  // xmm0
    let v32: u256;  // ymm0
    let v33: u256;  // ymm0
    let v34: i64;  // r12
    let v35: u8;  // al
    let v36: u256;  // ymm0
    let v37: u32;  // eax
    let v38: u128;  // xmm0
    let v39: u128;  // xmm0
    let v40: u8;  // dl
    let v41: iNone;  // xmm0

    v26 = a1;
    if a2 > 5 {
        uu_expr::syntax_tree::Parser<S>::parse_simple_expression(a0, a1);
        return;
    }
    v27 = a2;
    v24 = a2 + 1;
    v8 = uu_expr::syntax_tree::Parser<S>::parse_precedence(a1, a2 + 1);
    v28 = *((&v8 as &char + 8) as &i128);
    *(&v14 as void*) = v28;
    v29 = *((&v8 as &char + 24) as &i128);
    v16 = *((&v8 as &char + 24) as &i128);
    match v8 {
        Err(_) => {
            v30 = v14;
            *(&v0[24] as &u128) = v16;
            *(&v0[8] as &u128) = v30;
            *(v0 as &i64) = 9223372036854775813;
            return;
        },
        Ok(_) => {
            v31 = v14;
            v33 = ((v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u256;
            v4 = v16;
            v2 = v31;
            v1 = v8 as i64;
            v34 = &v8;
            v21 = 9223372036854775810;
            v23 = a2;
            v22 = a1;
            loop {
                v7 = v23;
                v35 = uu_expr::syntax_tree::Parser<S>::accept(v26, v34) as u8;
                if v35 == 3 {
                    *(&v0[32] as &i64) = *((&v4 as &char + 8) as &i64);
                    v41 = *(&v1 as &i128);
                    *(&v0[16] as &i128) = *(&v3 as &i128);
                    *(v0) = v41;
                    return;
                }
                uu_expr::syntax_tree::Parser<S>::parse_precedence(v34, v26, v24);
                v36 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v8 as &char + 8) as &i128) as u128 as u256;
                v18 = *((&v8 as &char + 8) as &i128);
                v20 = *((&v8 as &char + 24) as &i128);
                if v7 == 9223372036854775813 {
                    v0[24] = v20;
                    *(&v0[8] as &u128) = v18;
                    *(v0 as &i64) = 9223372036854775813;
                    return;
                }
                *(&v17 as void*) = v20;
                v15 = v18;
                v13 = v7;
                v37 = uu_expr::syntax_tree::get_next_id() as u32;
                v12 = *((&v4 as &char + 8) as &i64);
                v38 = *(&v1 as &i128);
                v11 = *(&v3 as &i128) as u128;
                v9 = v38;
                v19 = alloc::boxed::Box<T>::new(v34) as u64;
                v12 = *((&v17 as &char + 8) as &i64);
                v39 = *(&v13 as &i128);
                v33 = ((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256;
                v11 = *((&v15 as &char + 8) as &i128) as u128;
                v10 = v39;
                v1 = 9223372036854775810;
                v2 = v19;
                v3 = alloc::boxed::Box<T>::new(v34) as u64;
                v4 = v35;
                v5 = v40;
                v6 = v37;
                v26 = v22;
            }
        },
    }
}
