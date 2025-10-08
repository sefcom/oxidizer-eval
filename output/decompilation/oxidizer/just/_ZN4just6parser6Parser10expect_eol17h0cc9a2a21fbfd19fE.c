fn just::parser::Parser::expect_eol(a0: i64, a1: i64) -> double {
    let v0: struct81;  // [bp-0xa8]
    let v1: struct82;  // [bp-0xa8]
    let v2: iNone;  // [bp-0x98], Other Possible Types: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>
    let v3: alloc::string::String;  // [bp-0x88], Other Possible Types: u128
    let v4: iNone;  // [bp-0x78], Other Possible Types: u128
    let v5: u64;  // [bp-0x68]
    let v6: struct80;  // [bp-0x60]
    let v7: struct81;  // [bp-0x5c]
    let v8: struct89;  // [bp-0x58]
    let v9: iNone;  // [bp-0x48]
    let v10: struct24;  // [bp-0x38]
    let v11: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x28]
    let v12: core::fmt::rt::Argument;  // [bp-0x18]
    let v14: u64;  // xmm0lq

    v0 = just::parser::Parser::accept(a1, 16);
    if v6 != 37 {
        v12 = v5;
        v11 = v4;
        v10 = v3;
        v9 = v2;
        v8 = v0.field_0;
        return struct88 {
            field_0: v8
            field_16: v9
            field_32: v10
            field_48: v11
            field_64: v12
            field_72: v6
            field_73: v7
            field_76: <UNKNOWN>
        };
    }
    if !just::parser::Parser::next_is(a1, 19) {
        v1 = just::parser::Parser::expect(a1, 20);
        if v6 != 37 {
            return struct80 {
                field_0: v1.field_0
                field_16: v2
                field_32: v3
                field_48: v4
                field_64: *(&v1.field_64 as &i128)
            };
        }
    }
    *((a0 + 72) as &i8) = 37;
    return v14;
}
