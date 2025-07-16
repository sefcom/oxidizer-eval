fn uu_dd::parseargs::Parser::parse(a1: i64, a2: i64, a3: i64) -> : struct164 {
    let a0: void*;  // rsi
    let v0: u128;  // [bp-0x1e8]
    let v1: u8;  // [bp-0x1d8]
    let v2: Result<struct216, struct40>;  // [bp-0x1c0]
    let v3: u128;  // [bp-0x1b8]
    let v4: u64;  // [bp-0xe8]
    let v5: u8;  // [bp-0xe0]
    let v6: u8;  // [bp-0xd0]
    let v7: u8;  // [bp-0xc0]
    let v9: i64;  // rdi
    let v10: u64;  // rdi

    v2 = uu_dd::parseargs::Parser::read(a0, a1, a2);
    v0 = v3;
    memcpy(&v1, &v2 as u128, 16);
    match v2 {
        Ok(_) => {
            memcpy(&v7, &v2 as u8, 176);
            v4 = v2 as i64;
            memcpy(&v5, &v0, 16);
            memcpy(&v6, &v1, 16);
            uu_dd::parseargs::Parser::validate(v10, &v4);
            return;
        },
        Err(_) => {
            *((v9 + 24) as &i128) = *(&v1 as &i128);
            *((v9 + 8) as &u128) = v0;
            *(v9 as &i64) = 3;
            return;
        },
    }
}
