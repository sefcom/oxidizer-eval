fn uu_test::parser::Parser::uop(a0: i64, a1: &struct40) {
    let v0: struct40;  // [bp-0xb8], Other Possible Types: struct8, u64
    let v3: struct40;  // [bp-0x90], Other Possible Types: u8
    let v4: struct40;  // [bp-0x68]
    let v5: struct8;  // [bp-0x40], Other Possible Types: u8
    let v7: void*;  // rdx
    let v8: void*;  // rdx

    uu_test::parser::Parser::next_token(&v3, a0);
    if *(&v3 as &i32) != 6 {
        v4 = v3;
        uu_test::parser::Symbol::into_literal(&v0 as u8, &v4);
        v0 = alloc::vec::Vec<T,A>::push(v8);
        v0 = alloc::vec::Vec<T,A>::push(v8);
        return;
    }
    v0 = struct40 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i128)
        field_32: *((a1 + 32) as &i64)
    };
    uu_test::parser::Symbol::into_literal(&v5, &v0);
    v5 = alloc::vec::Vec<T,A>::push(v7);
    return;
}
