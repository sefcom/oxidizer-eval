fn uu_test::parser::Parser::literal(a0: &struct8, a1: u32, a2: &struct40) -> u64 {
    let v0: iNone;  // [bp-0x118], Other Possible Types: char
    let v1: iNone;  // [bp-0x108]
    let v2: i64;  // [sp-0xf8]
    let v3: i8;  // [bp-0xd8]
    let v4: i8;  // [bp-0xc8]
    let v5: i8;  // [bp-0xb8]
    let v6: i8;  // [bp-0xb0]
    let v7: i8;  // [bp-0xa0]
    let v8: i8;  // [bp-0x90]
    let v9: Option<Result<struct24, struct32>>;  // [sp-0x88]
    let v10: String;  // [sp-0x60]
    let v11: iNone;  // [sp-0x48]
    let v12: iNone;  // [sp-0x38]
    let v13: i64;  // [sp-0x28]
    let v15: iNone;  // xmm0

    uu_test::parser::Symbol::into_literal(&v0, a2);
    alloc::vec::Vec<T,A>::push(a1, &v0);
    v9 = uu_test::parser::Parser::peek(a1);
    if v9 as i32 != 4 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v6, a1);
    uu_test::parser::Parser::next_token(&v3, a1);
    if *(&v3 as &i32) != 6 {
        v13 = *(&v5 as &i64);
        v12 = *(&v4 as &i128);
        v11 = *(&v3 as &i128);
        uu_test::parser::Symbol::into_literal(&v0, &v11);
        alloc::vec::Vec<T,A>::push(a1, &v0);
        v2 = *(&v8 as &i64);
        v15 = *(&v6 as &i128);
        *(&v1 as &i128) = *(&v7 as &i128);
        v0 = v15;
        alloc::vec::Vec<T,A>::push(a1, &v0);
    } else {
        v10 = format!("{}", &v6);
    }
}
