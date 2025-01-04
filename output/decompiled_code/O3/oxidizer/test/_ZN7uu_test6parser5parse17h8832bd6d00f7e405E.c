fn uu_test::parser::parse(a0: &struct32, a1: &struct24, a2: u32) -> u64 {
    let v0: Option<struct32>;  // [sp-0x80], Other Possible Types: u256
    let v1: struct32;  // [sp-0x60], Other Possible Types: u256
    let v3: u64;  // rdx
    let v4: u128;  // xmm0

    v1 = uu_test::parser::Parser::new(a1);
    v0 = uu_test::parser::Parser::parse(&v1, v3);
    match v0 {
        Some(_) => {
            v4 = v0 as i128;
            return struct32 {
                field_0: 7
                field_8: v1 as i128
                field_24: *((&v1 as &char + 16) as &i64)
            };
        },
        None => {
            return struct32 {
                field_0: 7
                field_8: v1 as i128
                field_24: *((&v1 as &char + 16) as &i64)
            };
        },
    }
}
