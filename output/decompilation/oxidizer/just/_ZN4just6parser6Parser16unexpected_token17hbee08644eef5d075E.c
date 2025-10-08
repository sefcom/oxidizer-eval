fn just::parser::Parser::unexpected_token(a0: u64, a1: i64) -> int {
    let v0: u32;  // [bp-0x98]
    let v1: struct16;  // [bp-0x95]
    let v2: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x90], Other Possible Types: struct24, struct72
    let v3: struct80;  // [bp-0x90]
    let v4: iNone;  // [bp-0x88]
    let v5: struct80;  // [bp-0x78]
    let v6: struct80;  // [bp-0x70]
    let v7: struct80;  // [bp-0x58]
    let v8: u32;  // [bp-0x4c]
    let v9: u8;  // [bp-0x48]
    let v10: iNone;  // [bp-0x28], Other Possible Types: u8
    let v11: i8;  // [bp-0x18]
    let v13: struct24;  // rax
    let v14: struct24;  // rax
    let v16: u8;  // al
    let v17: struct80;  // xmm0
    let v18: struct24;  // sil
    let v19: core::fmt::Arguments;  // xmm1
    let v20: struct16;  // xmm2
    let v21: u32;  // edi

    v13 = *((a1 + 56) as &i64);
    v14 = v13;
    if v14 {
        v14 = *((a1 + 72) as &i64);
    }
    v2 = struct72 {
        field_0: (v13) as u8 as u64
        field_8: 0
        field_16: v13
        field_24: *((a1 + 64) as &i64)
        field_32: v2
        field_40: 0
        field_48: v13
        field_56: *((a1 + 64) as &i64)
        field_64: v14
    };
    core::iter::traits::iterator::Iterator::collect(&v10, &v2);
    v2 as u640 = just::parser::Parser::next(a1);
    if v9 != 37 {
        v17 = *((&v3.field_0 as &char + 8) as &i128);
        v18 = v3.field_64 as i8;
        v0 = *((&v3.field_64 as &char + 1) as &i32);
        v1 = v8;
        v19 = *((&v3.field_16 as &char + 8) as &i128);
        v20 = *((&v3.field_32 as &char + 8) as &i128);
        v21 = v0;
        return struct96 {
            field_0: 1
            field_8: v3.field_0 as i64
            field_16: v17
            field_32: v19
            field_48: v20
            field_64: v7
            field_72: v18
            field_73: v1
            field_76: v9
            field_80: *((&v3.field_64 as &char + 12) as &i32)
            field_81: <UNKNOWN>
            field_84: <UNKNOWN>
        };
    }
    v16 = v3.field_64;
    v4 = v10;
    v5 = *(&v11 as &i64);
    v6 = v16;
    v2 = 9223372036854775864;
    just::parser::Parser::error(a0, a1, &v2 as u640);
    return;
}
