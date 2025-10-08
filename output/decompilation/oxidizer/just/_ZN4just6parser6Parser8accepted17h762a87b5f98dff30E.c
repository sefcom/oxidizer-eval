fn just::parser::Parser::accepted(a0: i64, a1: u64, a2: u64) -> int {
    let v0: u32;  // [bp-0xa0]
    let v1: u32;  // [bp-0x9d]
    let v2: struct81;  // [bp-0x98]
    let v3: u128;  // [bp-0x88]
    let v4: u128;  // [bp-0x78]
    let v5: u128;  // [bp-0x68]
    let v6: struct24;  // [bp-0x58], Other Possible Types: struct80
    let v7: u32;  // [bp-0x54]
    let v8: struct24;  // [bp-0x50]
    let v9: u32;  // [bp-0x4c]
    let v10: iNone;  // [bp-0x48]
    let v11: struct32;  // [bp-0x38]
    let v12: struct12;  // [bp-0x28]
    let v13: struct16;  // [bp-0x18]

    v2 = just::parser::Parser::accept(a1, a2);
    if v8 != 37 {
        v13 = v5;
        v12 = v4;
        v11 = v3;
        v10 = v2.field_0;
        v0 = *((&v2.field_64 as &char + 1) as &i32);
        v1 = v7;
        return struct88 {
            field_0: v10
            field_16: v11
            field_32: v12
            field_48: v13
            field_64: v6
            field_65: v1
            field_68: v8
            field_72: v9
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    return struct24 {
        field_0: (v6 != 37) as u8 as u8
        padding_1: <UNKNOWN>
        field_72: <UNKNOWN>
    };
}
