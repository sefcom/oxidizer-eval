fn uu_test::parser::parse(a1: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0x80], Other Possible Types: char
    let v1: u128;  // [bp-0x70]
    let v2: struct32;  // [bp-0x60]
    let v3: u64;  // [bp-0x50]
    let v5: i64;  // rdi
    let v6: i64;  // rdi

    uu_test::parser::Parser::new(a0, a1);
    v2 = uu_test::parser::Parser::parse(a1);
    if *(&v0 as &i32) != 7 {
        *((v6 + 16) as &u128) = v1;
        *(v6 as &u128) = v0;
        return;
    }
    *((v5 + 24) as &u64) = v3;
    *((v5 + 8) as &u128) = v2.field_0;
    *(v5 as &i64) = 7;
    return;
}
