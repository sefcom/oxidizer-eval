fn uu_test::parser::Parser::uop(a0: &struct8, a1: &struct40) -> u64 {
    let v0: u64;  // [sp-0xb8]
    let v1: u128;  // [sp-0xa8]
    let v2: u64;  // [sp-0x98]
    let v3: u8;  // [bp-0x90]
    let v4: i8;  // [bp-0x80]
    let v5: i8;  // [bp-0x70]
    let v6: u64;  // [sp-0x68]
    let v7: u128;  // [sp-0x58]
    let v8: u64;  // [sp-0x48]
    let v9: u8;  // [bp-0x40]
    let v11: u64;  // rax

    uu_test::parser::Parser::next_token(&v3, a0);
    if *(&v3 as &i32) == 6 {
        v2 = a1->field_20;
        v1 = a1->field_10;
        v0 = a1->field_0;
        uu_test::parser::Symbol::into_literal(&v9, &v0);
        alloc::vec::Vec<T,A>::push(a0, &v9);
        return v11;
    }
    v8 = v5;
    v7 = v4;
    v6 = *(&v3 as &i128);
    uu_test::parser::Symbol::into_literal(&v0, &v6);
    alloc::vec::Vec<T,A>::push(a0, &v0);
    v2 = a1->field_20;
    v1 = a1->field_10;
    v0 = a1->field_0;
    v11 = alloc::vec::Vec<T,A>::push(a0, &v0);
    return v11;
}
