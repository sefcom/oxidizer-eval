fn uu_expr::syntax_tree::Parser::parse_precedence(a0: &struct_0, a1: void*, a2: u64) -> u32 {
    let v0: u128;  // [bp-0xd8]
    let v1: u128;  // [sp-0xc8]
    let v2: u8;  // [bp-0xb8]
    let v4: u128;  // [bp-0xa8]
    let v5: u128;  // [bp-0x98]
    let v6: u128;  // [sp-0x98]
    let v7: u128;  // [sp-0x88]
    let v8: u64;  // [sp-0x68]
    let v9: u64;  // [sp-0x60]
    let v10: u128;  // [sp-0x58]
    let v11: u128;  // [sp-0x48]
    let v13: u64;  // r12
    let v14: u64;  // r13
    let v15: u64;  // rax
    let v16: u64;  // 4098
    let v17: u128;  // xmm0
    let v18: u128;  // xmm1
    let v19: u128;  // xmm0
    let v20: u64;  // rax
    let v21: u128;  // xmm0
    let v22: u256;  // ymm0
    let v23: u256;  // ymm0
    let v24: u128;  // xmm1
    let v25: u256;  // ymm1
    let v26: u256;  // ymm1
    let v27: &u8;  // rbx
    let v28: u64;  // rax
    let v29: u64;  // 4098
    let v30: u128;  // xmm0
    let v31: u128;  // xmm1
    let v32: u64;  // rax
    let v33: u128;  // xmm0
    let v34: u128;  // xmm1
    let v35: u128;  // xmm0
    let v36: u128;  // xmm1
    let v37: u64;  // rax
    let v38: u128;  // xmm0
    let v39: u128;  // xmm1
    let v40: u8;  // dl
    let v41: u128;  // xmm0

    v13 = a1;
    if a2 > 5 {
        return uu_expr::syntax_tree::Parser::parse_simple_expression(a0, a1);
    }
    v14 = a2 + 1;
    v15 = uu_expr::syntax_tree::Parser::parse_precedence(&v5, a1, v14) as i64;
    v16 = *(&v5 as &i64);
    v17 = *(&v5 as &i128);
    v18 = *(&v5 as &i128);
    v0 = v17;
    v1 = v18;
    if v16 {
        v19 = v0;
        *((&a0->field_8 as &char + 8) as &u128) = v1;
        (&a0->field_0)[1] = v19;
        a0->field_0 = 1;
        v20 = v15;
        return v20;
    }
    v21 = v0;
    v23 = (v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
    v24 = v1;
    v26 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    v4 = v24;
    v2 = v21;
    v27 = &v5;
    v9 = a1;
    v8 = v14;
    loop {
        v28 = uu_expr::syntax_tree::Parser::parse_op(v13, a2);
        if v28 == 3 {
            v41 = *(&v2 as &i128);
            *((&a0->field_8 as &char + 8) as &u128) = v4;
            (&a0->field_0)[1] = v41;
            a0->field_0 = 0;
            v20 = v28;
            return v20;
        }
        uu_expr::syntax_tree::Parser::parse_precedence(v27, v13, v14);
        v29 = *(&v5 as &i64);
        v30 = *(&v5 as &i128);
        v31 = *(&v5 as &i128);
        v0 = v30;
        v1 = v31;
        v20 = v32;
        if v29 {
            return v20;
        }
        v33 = v0;
        v34 = v1;
        v11 = v34;
        v10 = v33;
        v35 = *(&v2 as &i128);
        v36 = v4;
        v7 = v36;
        v6 = v35;
        v37 = alloc::boxed::Box<T>::new(v27);
        v0 = v37;
        v38 = v10;
        v23 = (((v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
        v39 = v11;
        v26 = (((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
        v5 = v39;
        v5 = v38;
        v2 = 1;
        v2 = v28 & 4294967295 & 4294967295;
        v2 = v40;
        v2 = v37;
        *(&v4 as &double) = alloc::boxed::Box<T>::new(v27);
        v14 = v8;
        v13 = v9;
    }
}
