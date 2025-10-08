fn uu_dd::parseargs::Parser::parse(a0: u64, a1: u64, a2: u64) -> int {
    let v0: iNone;  // [bp-0x1e8]
    let v1: iNone;  // [bp-0x1d8]
    let v2: Result<struct216, struct40>;  // [bp-0x1c0]
    let v3: iNone;  // [bp-0x1b8]
    let v4: iNone;  // [bp-0x1a8]
    let v5: struct40;  // [bp-0xe8]
    let v6: u8;  // [bp-0xc0]

    v2 = uu_dd::parseargs::Parser::read(a1, a2);
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
            uu_dd::parseargs::Parser::validate(a0, &v5);
            return;
        },
        Err(_) => {
            return struct40 {
                field_0: 3
                field_8: v0
                field_24: v1
            };
        },
    }
}
