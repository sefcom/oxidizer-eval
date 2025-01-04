fn uu_dd::parseargs::Parser::parse(a0: &struct164, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x1e8]
    let v1: i128;  // [sp-0x1d8]
    let v2: i320;  // [sp-0x1c0], Other Possible Types: struct40
    let v3: i8;  // [bp-0x198]
    let v4: struct40;  // [bp-0xe8]
    let v5: i8;  // [bp-0xc0]

    v2 = uu_dd::parseargs::Parser::read(a1, a2, a3);
    v0 = *((&v2 as &char + 8) as &i128);
    v1 = *((&v2 as &char + 24) as &i128);
    if v2 == 2 {
        return struct40 {
            field_0: 3
            field_8: v0
            field_24: v1
        };
    }
    memcpy(&v5, &v3, 176);
    v4 = struct40 {
        field_0: v7
        field_8: v0
        field_24: v1
    };
    uu_dd::parseargs::Parser::validate(a0, &v4);
    return struct40 {
        field_0: 3
        field_8: v0
        field_24: v1
    };
}
