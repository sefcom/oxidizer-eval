fn uu_dd::parseargs::Parser::parse(a1: i64, a2: i64, a3: i64) -> : struct164 {
    let a0: void*;  // rsi
    let v0: u128;  // [bp-0x1e8]
    let v1: u128;  // [bp-0x1d8]
    let v2: Result<struct216, struct40>;  // [bp-0x1c0]
    let v3: u128;  // [bp-0x1b8]
    let v4: u128;  // [bp-0x1a8]
    let v5: struct40;  // [bp-0xe8]
    let v6: u8;  // [bp-0xc0]
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    v2 = uu_dd::parseargs::Parser::read(a0, a1, a2);
    v0 = v3;
    v1 = v4;
    match v2 {
        Ok(_) => {
            memcpy(&v6, &v2 as u8, 176);
            v5 = struct40 {
                field_0: v2 as i64
                field_8: v0
                field_24: v1
            };
            v5 = struct40 {
                field_0: v2 as i64
                field_8: v0
                field_24: v1
            };
            uu_dd::parseargs::Parser::validate(v9, &v5);
            return;
        },
        Err(_) => {
            *((v8 + 24) as &u128) = v1;
            *((v8 + 8) as &u128) = v0;
            *(v8 as &i64) = 3;
            return;
        },
    }
}
