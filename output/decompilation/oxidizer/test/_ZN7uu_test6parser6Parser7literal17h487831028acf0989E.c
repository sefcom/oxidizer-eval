fn uu_test::parser::Parser::literal(a0: &struct32, a1: i64, a2: &struct16) {
    let v0: u64;  // [bp-0x118], Other Possible Types: struct8, struct24
    let v1: u64;  // [bp-0x110]
    let v2: i64;  // [bp-0x108], Other Possible Types: u128
    let v3: u64;  // [bp-0x100]
    let v4: u64;  // [bp-0xf8], Other Possible Types: void*
    let v5: i64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: u8;  // [bp-0xd8]
    let v8: u128;  // [bp-0xc8]
    let v9: u64;  // [bp-0xb8]
    let v10: u8;  // [bp-0xb0]
    let v11: u128;  // [bp-0xa0]
    let v12: u64;  // [bp-0x90]
    let v13: u8;  // [bp-0x88]
    let v14: u128;  // [bp-0x60]
    let v15: u64;  // [bp-0x50]
    let v16: u64;  // [bp-0x48]
    let v17: u128;  // [bp-0x38]
    let v18: u64;  // [bp-0x28]

    uu_test::parser::Symbol::into_literal(&v0, a2);
    v0 = alloc::vec::Vec<T,A>::push(a2);
    uu_test::parser::Parser::peek(&v13, a1);
    if *(&v13 as &i32) != 4 {
        return struct8 {
            field_0: 7
        };
    }
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
        v0 = core::option::Option<T>::map_or_else(a2);
        return struct40 {
            field_0: 3
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    v18 = v9;
    v17 = v8;
    v16 = v7;
    uu_test::parser::Symbol::into_literal(&v0, &v16);
    v0 = alloc::vec::Vec<T,A>::push(a2);
    v4 = v12;
    v2 = v11;
    v0 = v10;
    v0 = alloc::vec::Vec<T,A>::push(a2);
    return struct8 {
        field_0: 7
    };
}
