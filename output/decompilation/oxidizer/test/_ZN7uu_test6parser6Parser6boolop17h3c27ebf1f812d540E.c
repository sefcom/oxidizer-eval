fn uu_test::parser::Parser::boolop(a0: &struct8, a1: u32, a2: &struct40) -> u64 {
    let v0: i64;  // [sp-0x58], Other Possible Types: Option<struct32>
    let v1: struct24;  // [sp-0x50]
    let v2: i128;  // [bp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: struct24;  // [sp-0x30]
    let v6: i128;  // xmm0
    let v7: i64;  // rax

    v4 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v1 = v4;
    v0 = 2;
    if !<uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a2, &v0) as i8 {
        v0 = uu_test::parser::Parser::expr(a1);
    } else {
        v0 = uu_test::parser::Parser::term(a1);
    }
    v3 = *((a2 + 32) as &i64);
    v6 = *(a2 as &i128);
    v2 = *((a2 + 16) as &i128);
    v0 = v6;
    v7 = alloc::vec::Vec<T,A>::push(a1, &v0);
    return struct8 {
        field_0: 7
    };
}
