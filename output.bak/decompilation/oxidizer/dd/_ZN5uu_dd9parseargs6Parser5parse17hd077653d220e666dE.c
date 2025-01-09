fn uu_dd::parseargs::Parser::parse(a0: &struct164, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x1e8]
    let v1: i128;  // [sp-0x1d8]
    let v2: i1736;  // [sp-0x1c0], Other Possible Types: Result<struct216, struct32>
    let v3: struct40;  // [bp-0xe8]
    let v4: i8;  // [bp-0xc0]

    v2 = uu_dd::parseargs::Parser::read(a1, a2, a3);
    v0 = *((&v2 as &char + 8) as &i128);
    v1 = *((&v2 as &char + 24) as &i128);
    match v2 {
        Err(_) => {
            return struct40 {
                field_0: 3
                field_8: v0
                field_24: v1
            };
        },
        Ok(_) => {
            memcpy(&v4, &v2, 176);
            v3 = struct40 {
                field_0: v6
                field_8: v0
                field_24: v1
            };
            uu_dd::parseargs::Parser::validate(a0, &v3);
        },
    }
}
