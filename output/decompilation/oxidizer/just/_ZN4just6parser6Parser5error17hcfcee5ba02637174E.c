fn just::parser::Parser::error(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct80;  // [bp-0xa8]
    let v1: struct80;  // [bp-0x98]
    let v2: struct80;  // [bp-0x88]
    let v3: iNone;  // [bp-0x78]
    let v4: Result<struct24, struct16>;  // [bp-0x68]
    let v5: struct80;  // [bp-0x60]
    let v6: iNone;  // [bp-0x50]
    let v7: struct80;  // [bp-0x40]
    let v8: iNone;  // [bp-0x30]
    let v9: i64;  // [bp-0x20]
    let v10: core::fmt::rt::Argument;  // [bp-0x18]
    let v13: struct24;  // ecx
    let v14: u64;  // rax

    v5 = just::parser::Parser::next(a1);
    v0 = v5.field_0;
    v1 = v6;
    v2 = v7;
    v3 = v8;
    v4 = v9;
    if v10 != 37 {
        v13 = *((&v5.field_64 as &char + 9) as &i32);
        return struct96 {
            field_0: v14
            field_8: v0
            field_24: v1
            field_40: v2
            field_56: v3
            field_72: v4
            field_80: v10
            field_81: *((&v5.field_64 as &char + 12) as &i32)
            field_84: <UNKNOWN>
        };
    }
    just::token::Token::error(a0 + 8, &v0, a2);
}
