fn just::parser::Parser::parse_string_literal(a1: i64) -> : struct81 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v1: u64;  // [bp-0xc1]
    let v2: struct192;  // [bp-0xb8]
    let v3: u128;  // [bp-0xa8]
    let v4: u64;  // [bp-0xa1]
    let v5: u64;  // [bp-0x99]
    let v6: u8;  // [bp-0x88]
    let v7: core::fmt::Arguments;  // [bp-0x80]
    let v8: struct24;  // [bp-0x78]
    let v9: iNone;  // [bp-0x68]
    let v10: struct72;  // [bp-0x58]
    let v11: core::fmt::rt::Argument;  // [bp-0x48]
    let v12: struct40;  // [bp-0x40]
    let v13: i8;  // [bp-0x3f]
    let v14: u64;  // [bp-0x38]
    let v15: struct192;  // [bp-0x2f]
    let v16: i8;  // [bp-0x1f]
    let v17: i8;  // [bp-0x10]
    let v19: core::option::Option<&str>;  // rsi
    let v20: struct24;  // xmm0

    just::parser::Parser::parse_string_literal_token(&v6);
    if *(&v6 as &i32) != 1 {
        v5 = *(&v17 as &i64);
        v20 = *(&v13 as &i128);
        v3 = *(&v16 as &i128);
        v2 = v15;
        v0 = v20;
        return struct56 {
            field_0: *((&v0.field_0 as &char + 7) as &i128)
            field_16: *((&v2.field_0 as &char + 7) as &i128)
            field_32: v4
            field_40: v5
            padding_48: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v0 = *(&v13 as &i64);
    v1 = v14;
    v19 = v0;
    return struct88 {
        field_0: v7
        field_8: v8
        field_24: v9
        field_40: v10
        field_56: v11
        field_64: v12
        field_65: v1
        field_72: <UNKNOWN>
    };
}
