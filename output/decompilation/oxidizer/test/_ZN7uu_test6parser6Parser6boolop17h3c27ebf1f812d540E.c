fn uu_test::parser::Parser::boolop(a1: i64, a2: &struct40) -> Option<struct32> {
    let a0: u64;  // rsi
    let v0: alloc::raw_vec::Cap;  // [bp-0x58], Other Possible Types: struct32, u128
    let v1: u128;  // [bp-0x48]
    let v2: struct24;  // [bp-0x38]
    let v3: std::sys::os_str::bytes::Buf;  // [bp-0x30]
    let v5: u128;  // xmm0
    let v6: struct437;  // xmm0
    let v7: i64;  // rdi
    let v8: i64;  // rdi

    v3 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v0 = struct32 {
        field_0: 2
        field_8: *(&v3.inner.buf.cap as &i128)
        field_24: v3.inner.len
    };
    if <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a1, &v0) as i8 {
        uu_test::parser::Parser::term(&v0, a0);
    } else {
        uu_test::parser::Parser::expr(a0, a1);
    }
    if v0.field_0 as i32 != 7 {
        v6 = *(&v0.field_0 as &i128);
        *((v7 + 16) as &i128) = *((&v0.field_8 as &char + 8) as &i128);
        *(v7 as &struct437) = v6;
        return;
    }
    v2 = *((a1 + 32) as &i64);
    v5 = *(a1 as &i128);
    v1 = *((a1 + 16) as &i128);
    v0 = v5;
    v0 = alloc::vec::Vec<T,A>::push(a1);
    *(v8 as &i64) = 7;
    return;
}
