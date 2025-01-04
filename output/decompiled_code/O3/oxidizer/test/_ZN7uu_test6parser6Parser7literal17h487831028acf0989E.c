fn uu_test::parser::Parser::literal(a0: &Option<struct24>, a1: &u64, a2: &struct40) -> u64 {
    let v0: u8;  // [bp-0x118]
    let v1: u128;  // [bp-0x108]
    let v2: u64;  // [sp-0xf8]
    let v3: u8;  // [bp-0xd8]
    let v4: i8;  // [bp-0xc8]
    let v5: i8;  // [bp-0xb8]
    let v6: u8;  // [bp-0xb0]
    let v7: i8;  // [bp-0xa0]
    let v8: i8;  // [bp-0x90]
    let v9: u8;  // [bp-0x88]
    let v10: i192;  // [sp-0x60]
    let v11: u128;  // [sp-0x48]
    let v12: u128;  // [sp-0x38]
    let v13: u64;  // [sp-0x28]
    let v15: u128;  // xmm0
    let v16: u64;  // rax

    uu_test::parser::Symbol::into_literal(&v0, a2);
    alloc::vec::Vec<T,A>::push(a1, &v0);
    uu_test::parser::Parser::peek(&v9, a1);
    if *(&v9 as &i32) == 4 {
        uu_test::parser::Parser::next_token(&v6, a1);
        uu_test::parser::Parser::next_token(&v3, a1);
        if *(&v3 as &i32) == 6 {
            v10 = format!("{:?}", &v6);
            *((&a0->field_8 as &char + 8) as &i64) = *((&v10 as &char + 16) as &i64);
            *(&(&a0->field_0)[1] as &i192) = v10;
            a0->field_0 = 3;
            return v16;
        }
        v13 = v5;
        v12 = v4;
        v11 = *(&v3 as &i128);
        uu_test::parser::Symbol::into_literal(&v0, &v11);
        alloc::vec::Vec<T,A>::push(a1, &v0);
        v2 = v8;
        v15 = *(&v6 as &i128);
        *(&v1 as &i8) = v7;
        v0 = v15;
        alloc::vec::Vec<T,A>::push(a1, &v0);
    }
    return struct8 {
        field_0: 7
    };
}
