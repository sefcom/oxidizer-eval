fn uu_test::parser::Parser::uop(a0: i64, a1: &struct16) {
    let v0: u64;  // [bp-0xb8], Other Possible Types: struct8
    let v1: u128;  // [bp-0xa8]
    let v2: u64;  // [bp-0x98]
    let v3: struct8;  // [bp-0x90], Other Possible Types: u8
    let v4: std::sys::os_str::bytes::Buf;  // [bp-0x80]
    let v5: u64;  // [bp-0x70]
    let v6: struct8;  // [bp-0x68]
    let v7: std::sys::os_str::bytes::Buf;  // [bp-0x58]
    let v8: u64;  // [bp-0x48]
    let v9: struct8;  // [bp-0x40], Other Possible Types: u8
    let v11: void*;  // rdx
    let v12: void*;  // rdx

    uu_test::parser::Parser::next_token(&v3, a0);
    if *(&v3 as &i32) != 6 {
        v8 = v5;
        v7 = v4;
        v6 = v3;
        uu_test::parser::Symbol::into_literal(&v0, &v6);
        v0 = alloc::vec::Vec<T,A>::push(v12);
        v0 = alloc::vec::Vec<T,A>::push(v12);
        return;
    }
    v2 = *((a1 + 32) as &i64);
    v1 = *((a1 + 16) as &i128);
    v0 = *(a1 as &i128);
    uu_test::parser::Symbol::into_literal(&v9, &v0);
    v9 = alloc::vec::Vec<T,A>::push(v11);
    return;
}
