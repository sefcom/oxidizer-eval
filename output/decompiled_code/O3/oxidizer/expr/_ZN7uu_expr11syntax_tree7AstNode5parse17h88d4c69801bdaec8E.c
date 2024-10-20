fn uu_expr::syntax_tree::AstNode::parse(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [bp-0xa8]
    let v1: i64;  // [sp-0xa0]
    let v2: i128;  // [bp-0x98]
    let v3: i8;  // [bp-0x80]
    let v4: i64;  // [sp-0x70]
    let v5: i128;  // [sp-0x68]
    let v6: i128;  // [sp-0x58]
    let v7: i64;  // [sp-0x48], Other Possible Types: Enum
    let v8: i64;  // [sp-0x38]
    let v9: i64;  // [sp-0x28]
    let v10: i64;  // [sp-0x20]
    let v11: i64;  // [sp-0x18]
    let v12: i8;  // [sp-0x10]
    let v14: i128;  // xmm1
    let v15: i128;  // xmm0
    let v16: i64;  // rax

    v4 = 0;
    if !a2 {
        *((a0 + 8) as &i64) = 3;
    } else {
        v7 = uu_expr::syntax_tree::Parser::parse_precedence(&v3, 0);
        v14 = *((&v7 as &char + 24) as &i128);
        v0 = *((&v7 as &char + 8) as &i128);
        v2 = v14;
        if vvar_131 {
            v15 = v0;
            *((a0 + 24) as &i128) = v2;
            *((a0 + 8) as &i128) = v15;
        } else {
            v6 = v2;
            v5 = v0;
            v16 = v4;
            if v16 >= a2 {
                *((a0 + 24) as &i128) = v6;
                *((a0 + 8) as &i128) = v5;
                *(a0 as &i64) = 0;
                return a0;
            }
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v11 = 32;
            v12 = 3;
            v7 = 0;
            v8 = 0;
            v9 = &v0;
            v10 = &g_56a8b8;
            if !<str as core::fmt::Display>::fmt(*((a1 + (v16 << 4)) as &i64), *((a1 + (v16 << 4) + 8) as &i64), &v7) as i8 {
                *((a0 + 32) as &i64) = v2;
                *((a0 + 16) as &i64) = v0;
                *((a0 + 8) as &i64) = 0;
                *(a0 as &i64) = 1;
                return a0;
            }
            core::result::unwrap_failed(); /* do not return */
        }
    }
    *(a0 as &i64) = 1;
    return a0;
}
