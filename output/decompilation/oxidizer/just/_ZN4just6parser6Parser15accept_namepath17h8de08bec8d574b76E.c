fn just::parser::Parser::accept_namepath(a0: i64, a1: i64) -> double {
    let v0: iNone;  // [bp-0xa8], Other Possible Types: struct89
    let v1: struct16;  // [bp-0x98]
    let v2: struct72;  // [bp-0x88]
    let v3: struct40;  // [bp-0x78]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x68]
    let v5: struct81;  // [bp-0x60]
    let v6: u128;  // [bp-0x50]
    let v7: u128;  // [bp-0x40]
    let v8: u128;  // [bp-0x30]
    let v9: i64;  // [bp-0x20]
    let v10: struct80;  // [bp-0x18]
    let v12: struct24;  // xmm0
    let v13: struct24;  // xmm0lq

    if !just::parser::Parser::next_is(a1, 24) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v5 = just::parser::Parser::parse_namepath(a1);
    if v10 != 37 {
        v4 = v9;
        v3 = v8;
        v2 = v7;
        v1 = v6;
        v0 = v5.field_0;
        return struct88 {
            field_0: v0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: v4
            field_72: v10
            field_73: v5.field_73
            field_76: <UNKNOWN>
        };
    }
    v1 = v5.field_16 as i64;
    v12 = v5.field_0;
    v13 = v12 as u64;
    v0 = v12;
    return struct32 {
        field_0: v0
        field_16: v5.field_16 as i64
        padding_24: <UNKNOWN>
        field_72: <UNKNOWN>
    };
}
