fn just::lexer::Lexer::accepted(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct80;  // [bp-0x58]
    let v1: struct24;  // [bp-0x48]
    let v2: struct24;  // [bp-0x38]
    let v3: struct24;  // [bp-0x28]

    if *((a1 + 192) as &i32) != a2 {
        return struct24 {
            field_0: 0
            padding_1: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v0 = just::lexer::Lexer::advance(a1);
    if &v0 as u8 != "%" {
        return struct80 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: *((&v0.field_56 as &char + 8) as &i128)
        };
    }
    return struct24 {
        field_0: 1
        padding_1: <UNKNOWN>
        field_72: <UNKNOWN>
    };
}
