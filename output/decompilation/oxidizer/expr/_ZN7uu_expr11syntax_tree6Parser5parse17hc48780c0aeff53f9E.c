fn uu_expr::syntax_tree::Parser::parse(a0: &Result<struct32, struct8>, a1: &struct32) -> u64 {
    let v0: iNone;  // [sp-0x78]
    let v1: iNone;  // [sp-0x68]
    let v2: iNone;  // [sp-0x58]
    let v3: iNone;  // [sp-0x48]
    let v4: struct24;  // [bp-0x38], Other Possible Types: char
    let v5: i8;  // [bp-0x30]
    let v6: i8;  // [bp-0x20]
    let v8: i64;  // rax
    let v9: i64;  // 4098
    let v10: i64;  // rsi
    let v11: i64;  // rax

    if !*((a1 + 8) as &i64) {
        return Err(struct8 {
            field_0: 3
        });
    }
    v8 = uu_expr::syntax_tree::Parser::parse_expression(&v4, a1);
    v9 = *(&v4 as &i64);
    v2 = *(&v5 as &i128);
    v3 = *(&v6 as &i128);
    if v9 {
        *((a0 + 24) as void*) = v3;
        *((a0 + 8) as void*) = v2;
    }
    v1 = v3;
    v0 = v2;
    v10 = *((a1 + 16) as &i64);
    if v10 < *((a1 + 8) as &i64) {
        v4 = <T as alloc::string::ToString>::to_string(v10 * 16 + *(a1 as &i64));
        v8 = v11;
    }
    *((a0 + 24) as void*) = v1;
    *((a0 + 8) as void*) = v0;
    *(a0 as &i64) = 0;
    v8 = v8;
}
