fn uu_test::parser::Parser::boolop(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: i64;  // [sp-0x58], Other Possible Types: Option<struct32>
    let v1: i128;  // [bp-0x50]
    let v2: i128;  // [bp-0x48]
    let v3: i64;  // [sp-0x40]
    let v4: i64;  // [sp-0x38]
    let v5: struct24;  // [sp-0x30], Other Possible Types: i192
    let v7: i64;  // rdx
    let v8: i64;  // rdx
    let v9: i128;  // xmm0
    let v10: i64;  // rax
    let v11: i128;  // xmm0

    v5 = std::sys::os_str::bytes::Slice::to_owned("-a");
    v3 = *((&v5 as &char + 16) as &i64);
    v1 = v5;
    v0 = 2;
    if !<uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a2, &v0) as i8 {
        v0 = uu_test::parser::Parser::expr(a1, v8);
    } else {
        v0 = uu_test::parser::Parser::term(a1, v7);
    }
    match v0 {
        Some(_) => {
            v11 = v0;
            return struct32 {
                field_0: v11
                field_16: *((&v0 as &char + 16) as &i128)
            };
        },
        None => {
            v4 = *((a2 + 32) as &i64);
            v9 = *(a2 as &i128);
            v2 = *((a2 + 16) as &i128);
            v0 = v9;
            v10 = alloc::vec::Vec<T,A>::push(a1, &v0);
            *(a0 as &i64) = 7;
            return v10;
        },
    }
}
