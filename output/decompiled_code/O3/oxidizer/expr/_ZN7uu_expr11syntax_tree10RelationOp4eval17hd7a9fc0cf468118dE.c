fn uu_expr::syntax_tree::RelationOp::eval() -> u32 {
    let v0: i128;  // [sp-0x108], Other Possible Types: struct25
    let v1: i128;  // [sp-0xf8]
    let v2: struct25;  // [sp-0xe8], Other Possible Types: i200
    let v3: struct24;  // [sp-0xc8]
    let v4: struct24;  // [sp-0xb0]
    let v5: i8;  // [bp-0x98]
    let v6: i8;  // [bp-0x90]
    let v7: i128;  // [sp-0x88]
    let v8: i8;  // [bp-0x80]
    let v9: i128;  // [sp-0x68]
    let v10: i128;  // [sp-0x58]
    let v11: i128;  // [sp-0x48]
    let v12: i128;  // [sp-0x38]
    let v14: i64;  // rdx
    let v15: i64;  // 4098
    let v16: i64;  // rdi
    let v17: i64;  // rcx
    let v18: i64;  // 4098
    let v19: i64;  // rdi

    uu_expr::syntax_tree::AstNode::eval(&v5, v14);
    v15 = v5;
    v0 = v6;
    v1 = v8;
    if v15 {
        *((v16 + 24) as &i128) = v1;
        *((v16 + 8) as &i128) = v0;
        *(v16 as &i64) = 1;
    } else {
        v10 = v1;
        v9 = v0;
        uu_expr::syntax_tree::AstNode::eval(&v5, v17);
        v18 = v5;
        v0 = v6;
        v1 = v8;
        if !v18 {
            v12 = v1;
            v11 = v0;
            v2 = uu_expr::syntax_tree::NumOrStr::to_bigint(&v9);
            v0 = uu_expr::syntax_tree::NumOrStr::to_bigint(&v11);
            if v2 != 0x8000000000000000 && v0 != 0x8000000000000000 {
                goto *((4583484 + vvar_28{reg 64} * 4) as &i32) + 4583484;
            }
            v7 = v10;
            v5 = v9;
            v3 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v5);
            v7 = v12;
            v5 = v11;
            v4 = uu_expr::syntax_tree::NumOrStr::eval_as_string(&v5);
            goto *((4583508 + vvar_28{reg 64} * 4) as &i32) + 4583508;
        } else {
            *((v19 + 24) as &i128) = v1;
            *((v19 + 8) as &i128) = v0;
            *(v19 as &i64) = 1;
        }
    }
    return;
}
