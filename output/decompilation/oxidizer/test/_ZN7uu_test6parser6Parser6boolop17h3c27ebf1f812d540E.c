fn uu_test::parser::Parser::boolop(a1: i64, a2: &struct40) -> Option<struct32> {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x58], Other Possible Types: alloc::raw_vec::Cap
    let v1: u128;  // [bp-0x58]
    let v2: u8;  // [bp-0x50]
    let v3: u128;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0x30]
    let v8: u128;  // xmm0
    let v9: i64;  // rdi
    let v10: i64;  // rdi

    v6 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v4 = v6.inner.len;
    memcpy(&v2, &v6, 16);
    v0 = 2;
    v0 = struct16 {
        field_0: v1 & 0xffffffffffffffff0000000000000000 | 2
    };
    if <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a1, &v0) as i8 {
        uu_test::parser::Parser::term(&v0, a0);
    } else {
        uu_test::parser::Parser::expr(a0, a1);
    }
    if v0 as i32 != 7 {
        *((v9 + 16) as &u128) = v3;
        *(v9 as &u128) = v0;
        return;
    }
    v5 = *((a1 + 32) as &i64);
    v8 = *(a1 as &i128);
    v3 = *((a1 + 16) as &i128);
    v0 = v8;
    v0 = alloc::vec::Vec<T,A>::push(a1);
    *(v10 as &i64) = 7;
    return;
}
