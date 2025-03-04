fn uu_expr::syntax_tree::RelationOp::eval(a0: &struct40, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: iNone;  // [sp-0x108], Other Possible Types: struct25
    let v1: iNone;  // [sp-0xf8]
    let v2: struct25;  // [sp-0xe8]
    let v3: struct24;  // [sp-0xc8]
    let v4: struct24;  // [sp-0xb0]
    let v5: iNone;  // [bp-0x98], Other Possible Types: char
    let v6: i8;  // [bp-0x90]
    let v7: iNone;  // [sp-0x88]
    let v8: i8;  // [bp-0x80]
    let v9: iNone;  // [sp-0x68]
    let v10: iNone;  // [sp-0x58]
    let v11: iNone;  // [sp-0x48]
    let v12: iNone;  // [sp-0x38]
    let v15: i64;  // 4098
    let v16: i64;  // rax
    let v17: i64;  // 4098
    let v18: i64;  // rax

    v15 = *(&v5 as &i64);
    v0 = *(&v6 as &i128);
    v1 = *(&v8 as &i128);
    if v15 {
        *((a0 + 24) as void*) = v1;
        *((a0 + 8) as void*) = v0;
        *(a0 as &i64) = 1;
        v16 = uu_expr::syntax_tree::AstNode::eval(&v5, a2);
        return v16;
    }
    v10 = v1;
    v9 = v0;
    uu_expr::syntax_tree::AstNode::eval(&v5, a3);
    v17 = *(&v5 as &i64);
    v0 = *(&v6 as &i128);
    v1 = *(&v8 as &i128);
    if v17 {
        *((a0 + 24) as void*) = v1;
        *((a0 + 8) as void*) = v0;
        *(a0 as &i64) = 1;
        v16 = v18;
        return v16;
    }
    v12 = v1;
    v11 = v0;
    v2 = uu_expr::syntax_tree::NumOrStr::to_bigint(&v9);
    v0 = uu_expr::syntax_tree::NumOrStr::to_bigint(&v11);
    if v2.field_0 as i64 != 0x8000000000000000 && v0.field_0 as i64 != 0x8000000000000000 {
        goto *((4583484 + vvar_1 * 4) as &i32) + 4583484;
    }
    v7 = v10;
    v5 = v9;
    v3 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v5);
    v7 = v12;
    v5 = v11;
    v4 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v5);
    goto *((4583508 + vvar_1 * 4) as &i32) + 4583508;
}
