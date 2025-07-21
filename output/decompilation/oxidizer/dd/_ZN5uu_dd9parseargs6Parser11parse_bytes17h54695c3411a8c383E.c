fn uu_dd::parseargs::Parser::parse_bytes(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: i8;  // [bp-0x28], Other Possible Types: u128
    let v1: i8;  // [bp-0x18]
    let v3: i64;  // rdi

    uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0, a1, a2);
    if *(&v0 as &i64) != 14 {
        *((v3 + 16) as &i128) = *(&v1 as &i128);
    }
    *(v3 as &u128) = v0;
    return;
}
