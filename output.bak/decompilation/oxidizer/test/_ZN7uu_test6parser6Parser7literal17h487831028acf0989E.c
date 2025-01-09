fn uu_test::parser::Parser::literal(a0: &Option<struct24>, a1: u32, a2: &struct40) -> u64 {
    let v0: u8;  // [bp-0x118]
    let v1: u64;  // [sp-0x110]
    let v2: &&struct_0;  // [sp-0x108], Other Possible Types: u128
    let v3: u64;  // [sp-0x100]
    let v4: u64;  // [sp-0xf8], Other Possible Types: void*
    let v5: &u8;  // [sp-0xe8]
    let v6: u64;  // [sp-0xe0]
    let v7: u8;  // [bp-0xd8]
    let v8: i8;  // [bp-0xc8]
    let v9: i8;  // [bp-0xb8]
    let v10: u8;  // [bp-0xb0]
    let v11: i8;  // [bp-0xa0]
    let v12: i8;  // [bp-0x90]
    let v13: u8;  // [bp-0x88]
    let v16: u128;  // [sp-0x48]
    let v17: u128;  // [sp-0x38]
    let v18: u64;  // [sp-0x28]
    let v20: u128;  // xmm0

    uu_test::parser::Symbol::into_literal(&v0, a2);
    alloc::vec::Vec<T,A>::push(a1, &v0);
    uu_test::parser::Parser::peek(&v13, a1);
    return struct8 {
        field_0: 7
    };
    uu_test::parser::Parser::next_token(&v10, a1);
    uu_test::parser::Parser::next_token(&v7, a1);
    if *(&v7 as &i32) == 6 {
        v5 = &v10;
        v6 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
        v0 = &g_413dc0;
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        return Some(struct24 {
            field_0: v14
            field_16: v15
        });
    }
    v18 = v9;
    v17 = v8;
    v16 = *(&v7 as &i128);
    uu_test::parser::Symbol::into_literal(&v0, &v16);
    alloc::vec::Vec<T,A>::push(a1, &v0);
    v4 = v12;
    v20 = *(&v10 as &i128);
    *(&v2 as &i8) = v11;
    v0 = v20;
    alloc::vec::Vec<T,A>::push(a1, &v0);
}
