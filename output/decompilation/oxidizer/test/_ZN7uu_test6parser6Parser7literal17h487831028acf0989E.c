fn uu_test::parser::Parser::literal(a0: &struct32, a1: i64, a2: &struct40) {
    let v0: struct24;  // [bp-0x118], Other Possible Types: struct8, u64
    let v1: u64;  // [bp-0x110]
    let v2: core::fmt::Arguments;  // [bp-0x108], Other Possible Types: struct_0 *
    let v3: u64;  // [bp-0x100]
    let v4: void*;  // [bp-0xf8], Other Possible Types: core::fmt::rt::Argument
    let v5: i64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: struct40;  // [bp-0xd8], Other Possible Types: u8
    let v8: u128;  // [bp-0xb0]
    let v9: core::fmt::Arguments;  // [bp-0xa0]
    let v10: u64;  // [bp-0x90]
    let v11: u8;  // [bp-0x88]
    let v12: struct40;  // [bp-0x60]
    let v13: u64;  // [bp-0x50]
    let v14: struct40;  // [bp-0x48]

    uu_test::parser::Symbol::into_literal(&v0, a2);
    v0 = alloc::vec::Vec<T,A>::push(a2);
    uu_test::parser::Parser::peek(&v11, a1);
    if *(&v11 as &i32) != 4 {
        return struct8 {
            field_0: 7
        };
    }
    uu_test::parser::Parser::next_token(&v8, a1);
    uu_test::parser::Parser::next_token(&v7, a1);
    if *(&v7 as &i32) == 6 {
        v5 = &v8;
        v6 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
        v0 = &g_413dc0;
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        v0 = core::option::Option<T>::map_or_else(a2);
        return struct32 {
            field_0: 3
            field_8: v12
            field_24: v13
        };
    }
    v14 = v7;
    uu_test::parser::Symbol::into_literal(&v0, &v14);
    v0 = alloc::vec::Vec<T,A>::push(a2);
    v4 = v10;
    v2 = v9;
    v0 = v8;
    v0 = alloc::vec::Vec<T,A>::push(a2);
    return struct8 {
        field_0: 7
    };
}
