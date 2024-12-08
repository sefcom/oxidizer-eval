fn uu_expr::syntax_tree::Parser::parse(a0: void*, a1: &u64) -> u64 {
    let v0: i128;  // [sp-0x78]
    let v1: i128;  // [sp-0x68]
    let v2: i128;  // [sp-0x58]
    let v3: i128;  // [sp-0x48]
    let v4: i192;  // [bp-0x38], Other Possible Types: struct24
    let v5: i8;  // [bp-0x30]
    let v6: i8;  // [bp-0x20]
    let v8: i64;  // rax
    let v9: i64;  // 4098
    let v10: i64;  // rsi

    if !*((a1 + 8) as &i64) {
        *((a0 + 8) as &i64) = 3;
    } else {
        v8 = uu_expr::syntax_tree::Parser::parse_expression(&v4, a1);
        v9 = v4;
        v2 = v5;
        v3 = v6;
        if v9 {
            *((a0 + 24) as &i128) = v3;
            *((a0 + 8) as &i128) = v2;
        } else {
            v1 = v3;
            v0 = v2;
            v10 = *((a1 + 16) as &i64);
            if v10 >= *((a1 + 8) as &i64) {
                return struct40 {
                    field_0: 0
                    field_8: v0
                    field_24: v1
                };
            }
            v4 = <T as alloc::string::ToString>::to_string(v10 * 16 + *(a1 as &i64));
            *((a0 + 32) as &i64) = *((&v4 as &char + 16) as &i64);
            *((a0 + 16) as &i192) = v4;
            *((a0 + 8) as &i64) = 0;
            *(a0 as &i64) = 1;
            return v8;
        }
    }
    return struct8 {
        field_0: 1
    };
}
