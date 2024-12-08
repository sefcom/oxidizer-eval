fn uu_dd::parseargs::Parser::parse(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u128;  // [sp-0x1e8]
    let v1: u128;  // [sp-0x1d8]
    let v2: u8;  // [bp-0x1c0]
    let v3: i8;  // [bp-0x1b8]
    let v4: i8;  // [bp-0x1a8]
    let v5: u8;  // [bp-0x198]
    let v6: struct40;  // [bp-0xe8]
    let v7: u8;  // [bp-0xc0]

    uu_dd::parseargs::Parser::read(&v2, a1, a2, a3);
    v0 = v3;
    v1 = v4;
    if *(&v2 as &i64) == 2 {
        return struct40 {
            field_0: 3
            field_8: v0
            field_24: v1
        };
    }
    memcpy(&v7, &v5, 176);
    *(&v6 as &struct40) = struct40 {
        field_0: v9
        field_8: v0
        field_24: v1
    };
    uu_dd::parseargs::Parser::validate(a0, &v6);
    return struct40 {
        field_0: 3
        field_8: v0
        field_24: v1
    };
}
