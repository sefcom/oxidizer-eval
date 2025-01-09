fn uu_test::parser::Parser::literal(a0: &struct8, a1: u32, a2: &struct40) -> u64 {
    let v0: i128;  // [bp-0x118]
    let v1: i64;  // [sp-0x110]
    let v2: i128;  // [sp-0x108]
    let v3: i64;  // [sp-0x100]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i8;  // [bp-0xd8]
    let v8: i8;  // [bp-0xc8]
    let v9: i8;  // [bp-0xb8]
    let v10: i8;  // [bp-0xb0]
    let v11: i8;  // [bp-0xa0]
    let v12: i8;  // [bp-0x90]
    let v13: Option<Result<struct24, struct32>>;  // [sp-0x88], Other Possible Types: i320
    let v14: i128;  // [sp-0x48]
    let v15: i128;  // [sp-0x38]
    let v16: i64;  // [sp-0x28]
    let v18: i128;  // xmm0

    uu_test::parser::Symbol::into_literal(&v0, a2);
    alloc::vec::Vec<T,A>::push(a1, &v0);
    v13 = uu_test::parser::Parser::peek(a1);
    if v13 != 4 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v10, a1);
    uu_test::parser::Parser::next_token(&v7, a1);
    if v7 != 6 {
        v16 = v9;
        v15 = v8;
        v14 = v7;
        uu_test::parser::Symbol::into_literal(&v0, &v14);
        alloc::vec::Vec<T,A>::push(a1, &v0);
        v4 = v12;
        v18 = v10;
        v2 = v11;
        v0 = v18;
        alloc::vec::Vec<T,A>::push(a1, &v0);
    } else {
        v5 = &v10;
        v6 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
        v0 = &g_413dc0;
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        core::option::Option<T>::map_or_else();
    }
}
