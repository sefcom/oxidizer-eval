fn uu_expr::syntax_tree::NumericOp::eval(a0: &struct40, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x138]
    let v1: i128;  // [sp-0x128]
    let v2: i8;  // [bp-0x118], Other Possible Types: struct40
    let v3: i8;  // [bp-0x110]
    let v4: i8;  // [bp-0x100]
    let v5: i8;  // [bp-0xe8]
    let v6: i8;  // [bp-0xe0]
    let v7: i8;  // [bp-0xd0]
    let v8: i128;  // [sp-0xb8]
    let v9: i128;  // [sp-0xa8]
    let v10: i128;  // [sp-0x98]
    let v11: i128;  // [sp-0x88]
    let v12: i128;  // [sp-0x58]
    let v13: i128;  // [sp-0x48]
    let v14: i128;  // [sp-0x38]
    let v15: i128;  // [sp-0x28]
    let v17: struct40;  // rax
    let v18: i64;  // 4098
    let v19: i64;  // 4098
    let v20: i64;  // 4098
    let v21: i64;  // 4098

    v17 = uu_expr::syntax_tree::AstNode::eval(&v5, a2);
    v18 = v5;
    v12 = v6;
    v13 = v7;
    if v18 {
        return struct40 {
            field_0: 1
            field_8: v12
            field_24: v13
        };
    }
    v17 = uu_expr::syntax_tree::NumOrStr::eval_as_bigint(&v12);
    v19 = v2;
    v0 = v3;
    v1 = v4;
    if !v19 {
        v11 = v1;
        v10 = v0;
        uu_expr::syntax_tree::AstNode::eval(&v5, a3);
        v20 = v5;
        v14 = v6;
        v15 = v7;
        if v20 {
            return struct40 {
                field_0: 1
                field_8: v14
                field_24: v15
            };
        }
        v2 = uu_expr::syntax_tree::NumOrStr::eval_as_bigint(&v14);
        v21 = v2;
        v0 = *((&v2 as &char + 8) as &i128);
        v1 = *((&v2 as &char + 24) as &i128);
        if !v21 {
            v9 = v1;
            v8 = v0;
            goto *((4583532 + vvar_1 * 4) as &i32) + 4583532;
        }
    }
}
