fn just::parser::Parser::forbid(a0: i64, a1: i64) -> double {
    let v0: u32;  // [bp-0xe8]
    let v1: struct40;  // [bp-0xe5]
    let v2: u32;  // [bp-0xe0]
    let v3: struct80;  // [bp-0xdd]
    let v4: struct69;  // [bp-0xd8], Other Possible Types: struct80
    let v5: u128;  // [bp-0xc8]
    let v6: struct80;  // [bp-0xb8]
    let v7: iNone;  // [bp-0xa8]
    let v8: struct80;  // [bp-0x98]
    let v9: u32;  // [bp-0x94]
    let v10: struct80;  // [bp-0x90]
    let v11: core::fmt::rt::Argument;  // [bp-0x8c]
    let v12: struct72;  // [bp-0x88]
    let v13: struct89;  // [bp-0x78]
    let v14: struct80;  // [bp-0x68]
    let v15: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x58]
    let v16: struct72;  // [bp-0x48]
    let v17: struct16;  // [bp-0x38]
    let v18: iNone;  // [bp-0x28]
    let v19: core::fmt::Arguments;  // [bp-0x18]
    let v21: core::result::Result<&str, core::str::error::Utf8Error>;  // edx

    v4 = just::parser::Parser::next(a1);
    v12 = v4.field_0;
    v13 = v5;
    v14 = v6;
    v15 = v7;
    v0 = *((&v4.field_64 as &char + 1) as &i32);
    v1 = v9;
    if v10 != 37 {
        v21 = *((&v4.field_64 as &char + 9) as &i32);
        return struct88 {
            field_0: v12
            field_16: v13
            field_32: v14
            field_48: v15
            field_64: v8
            field_65: v1
            field_68: v10
            field_72: v11
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    v16 = v12;
    v17 = v13;
    v18 = v14;
    v19 = v15;
    v2 = v0;
    v3 = v1;
    if v8 != 24 {
        *((a0 + 72) as &i8) = 37;
        return v12 as u64;
    }
    v4 = struct69 {
        field_0: v16
        field_16: v17
        field_32: v18
        field_48: v19
        field_64: 24
        field_65: v2
    };
    just::parser::Parser::parse_recipe::{{closure}}(a0, &v4);
    return v16 as u64;
}
