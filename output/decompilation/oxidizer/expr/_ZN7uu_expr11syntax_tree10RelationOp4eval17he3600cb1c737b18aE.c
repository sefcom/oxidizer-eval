fn uu_expr::syntax_tree::RelationOp::eval(a0: &struct40, a1: i32, a2: i64, a3: i64) {
    let v0: struct24;  // [bp-0xa8], Other Possible Types: struct25
    let v2: struct24;  // [bp-0x88], Other Possible Types: struct25
    let v4: u128;  // [bp-0x68]
    let v5: u128;  // [bp-0x58]
    let v6: u128;  // [bp-0x48]
    let v7: u128;  // [bp-0x38]
    let v9: u64;  // r15
    let v10: u128;  // xmm0
    let v11: u64;  // r12
    let v12: u128;  // xmm0

    v9 = a2 + 8;
    if *(a2 as &i32) == 1 {
        v10 = *(v9 as &i128);
        return struct40 {
            field_0: 1
            field_8: v10
            field_24: *((v9 + 16) as &i128)
        };
    }
    v5 = *((v9 + 16) as &i128);
    v4 = *(v9 as &i128);
    v11 = a3 + 8;
    if !(*(a3 as &i8) & 1) {
        v7 = *((v11 + 16) as &i128);
        v6 = *(v11 as &i128);
        v2 = uu_expr::syntax_tree::NumOrStr::to_bigint(v9);
        v0 = uu_expr::syntax_tree::NumOrStr::to_bigint(v11);
        v2 = uu_expr::syntax_tree::NumOrStr::eval_as_string(v9);
        v0 = uu_expr::syntax_tree::NumOrStr::eval_as_string(v11);
    }
    v12 = *(v11 as &i128);
    return struct40 {
        field_0: 1
        field_8: v12
        field_24: *((v11 + 16) as &i128)
    };
}
