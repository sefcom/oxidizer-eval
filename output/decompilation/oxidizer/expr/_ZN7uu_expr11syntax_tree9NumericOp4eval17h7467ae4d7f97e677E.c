fn uu_expr::syntax_tree::NumericOp::eval(a0: &struct40, a1: i32, a2: i64, a3: i64) {
    let v0: iNone;  // [bp-0xe8]
    let v1: iNone;  // [bp-0xd8]
    let v2: Option<struct40>;  // [bp-0xc8]
    let v3: Option<struct40>;  // [bp-0xc8]
    let v4: iNone;  // [bp-0xc0]
    let v7: u128;  // [bp-0x78]
    let v8: Result<struct36, struct40>;  // [bp-0x68]
    let v10: u64;  // rsi
    let v11: u128;  // xmm0
    let v12: Result<struct36, struct40>;  // xmm1
    let v13: u64;  // rsi

    v10 = a2 + 8;
    if *(a2 as &i32) == 1 {
        return struct40 {
            field_0: 1
            field_8: v11
            field_24: v12
        };
    }
    v2 = uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v10);
    v11 = v4;
    v12 = *((&v2 as &char + 24) as &i128);
    if let None = v2 {
        v8 = v12;
        v7 = v11;
        v13 = a3 + 8;
        if (*(a3 as &i8) & 1) {
            return struct40 {
                field_0: 1
                field_8: v0
                field_24: v1
            };
        }
        v3 = uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v13);
        v0 = v4;
        v1 = *((&v3 as &char + 24) as &i128);
        return struct40 {
            field_0: 1
            field_8: v0
            field_24: v1
        };
    }
    return struct40 {
        field_0: 1
        field_8: v11
        field_24: v12
    };
}
