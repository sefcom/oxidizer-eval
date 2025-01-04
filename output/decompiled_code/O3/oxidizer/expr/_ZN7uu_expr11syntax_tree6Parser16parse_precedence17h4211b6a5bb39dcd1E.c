fn uu_expr::syntax_tree::Parser::parse_precedence(a0: &struct_0, a1: void*, a2: u64) -> u32 {
    let v0: u128;  // [bp-0xd8]
    let v1: u128;  // [sp-0xc8]
    let v2: u8;  // [bp-0xb8]
    let v3: i8;  // [sp-0xb7]
    let v4: u8;  // [sp-0xb6]
    let v5: u64;  // [sp-0xb0]
    let v6: u128;  // [bp-0xa8]
    let v7: u128;  // [bp-0x98]
    let v8: u8;  // [bp-0x90]
    let v9: u128;  // [sp-0x88]
    let v10: u8;  // [bp-0x80]
    let v11: u64;  // [sp-0x68]
    let v12: u128;  // [sp-0x58]
    let v13: u128;  // [sp-0x48]
    let v15: u64;  // r13
    let v17: u64;  // 4098
    let v18: u128;  // xmm0
    let v19: u128;  // xmm1
    let v20: u128;  // xmm0
    let v21: u64;  // rax
    let v22: u128;  // xmm0
    let v23: u256;  // ymm0
    let v24: u256;  // ymm0
    let v25: u128;  // xmm1
    let v26: u256;  // ymm1
    let v27: u256;  // ymm1
    let v28: &u8;  // rbx
    let v29: u64;  // r13
    let v30: u64;  // 4096
    let v31: u64;  // r12
    let v33: u64;  // rax
    let v34: u64;  // 4098
    let v35: u128;  // xmm0
    let v36: u128;  // xmm1
    let v37: u128;  // xmm0
    let v38: u128;  // xmm1
    let v39: u128;  // xmm0
    let v40: u128;  // xmm1
    let v41: u64;  // rax
    let v42: u128;  // xmm0
    let v43: u128;  // xmm1
    let v44: u8;  // dl
    let v46: u128;  // xmm0
    let v47: u128;  // xmm0
    let v48: u64;  // rax

    if a2 > 5 {
        return uu_expr::syntax_tree::Parser::parse_simple_expression(a0, a1);
    }
    v15 = a2 + 1;
    v17 = *(&v7 as &i64);
    v18 = *(&v8 as &i128);
    v19 = *(&v10 as &i128);
    v0 = v18;
    v1 = v19;
    if v17 {
        v20 = v0;
        v21 = uu_expr::syntax_tree::Parser::parse_precedence(&v7, a1, v15) as i64;
        return struct40 {
            field_0: 1
            field_8: v20
            field_24: v1
        };
    }
    v22 = v0;
    v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
    v25 = v1;
    v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    v6 = v25;
    v2 = v22;
    v28 = &v7;
    v11 = v15;
    v29 = v15;
    v30 = a1;
    loop {
        v31 = v30;
        v33 = uu_expr::syntax_tree::Parser::parse_op(v31, a2);
        if v33 == 3 {
            v46 = *(&v2 as &i128);
            *((&a0->field_8 as &char + 8) as &u128) = v6;
            (&a0->field_0)[1] = v46;
            a0->field_0 = 0;
            v21 = v33;
            return v21;
        }
        uu_expr::syntax_tree::Parser::parse_precedence(v28, v31, v29);
        v34 = *(&v7 as &i64);
        v35 = *((&v7 as &char + 8) as &i128);
        v36 = *((&v9 as &char + 8) as &i128);
        v0 = v35;
        v1 = v36;
        if v34 {
            v47 = v0;
            *((&a0->field_8 as &char + 8) as &u128) = v1;
            (&a0->field_0)[1] = v47;
            a0->field_0 = 1;
            v21 = v48;
            return v21;
        }
        v37 = v0;
        v38 = v1;
        v13 = v38;
        v12 = v37;
        v39 = *(&v2 as &i128);
        v40 = v6;
        v9 = v40;
        v7 = v39;
        v41 = alloc::boxed::Box<T>::new(v28);
        v0 = v41;
        v42 = v12;
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
        v43 = v13;
        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
        v9 = v43;
        v7 = v42;
        v2 = 1;
        v3 = v33 & 4294967295 & 4294967295;
        v4 = v44;
        v5 = v41;
        *(&v6 as &double) = alloc::boxed::Box<T>::new(v28);
        v29 = v11;
    }
}
