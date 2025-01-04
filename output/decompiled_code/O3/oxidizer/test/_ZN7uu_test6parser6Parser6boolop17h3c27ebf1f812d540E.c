fn uu_test::parser::Parser::boolop(a0: &Option<struct32>, a1: u32, a2: &struct40) -> u64 {
    let v0: i64;  // [sp-0x58], Other Possible Types: Option<struct32>
    let v1: i192;  // [bp-0x50]
    let v2: i128;  // [bp-0x48]
    let v3: i64;  // [sp-0x38]
    let v4: i192;  // [sp-0x30], Other Possible Types: struct24
    let v6: i64;  // rdx
    let v7: i64;  // rdx
    let v8: i128;  // xmm0
    let v9: i64;  // rax
    let v10: i128;  // xmm0

    v4 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v1 = v4;
    v0 = 2;
    if !<uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a2, &v0) as i8 {
        v0 = uu_test::parser::Parser::expr(a1, v7);
    } else {
        v0 = uu_test::parser::Parser::term(a1, v6);
    }
    match v0 {
        Some(_) => {
            v10 = v0;
            return struct32 {
                field_0: v10
                field_16: *((&v0 as &char + 16) as &i128)
            };
        },
        None => {
            v3 = *((a2 + 32) as &i64);
            v8 = *(a2 as &i128);
            v2 = *((a2 + 16) as &i128);
            v0 = v8;
            v9 = alloc::vec::Vec<T,A>::push(a1, &v0);
            *(a0 as &i64) = 7;
            return v9;
        },
    }
}
