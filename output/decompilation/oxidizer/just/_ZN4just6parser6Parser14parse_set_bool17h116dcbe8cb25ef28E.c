fn just::parser::Parser::parse_set_bool(a0: u64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0x170], Other Possible Types: struct82, struct16
    let v1: struct82;  // [bp-0x170]
    let v2: u64;  // [bp-0x158]
    let v3: u128;  // [bp-0x150]
    let v4: u128;  // [bp-0x140]
    let v5: core::fmt::Arguments;  // [bp-0x130]
    let v6: u8;  // [bp-0x128]
    let v7: struct40;  // [bp-0x124], Other Possible Types: struct80
    let v8: iNone;  // [bp-0x120]
    let v9: struct56;  // [bp-0x110]
    let v10: iNone;  // [bp-0x108]
    let v11: iNone;  // [bp-0xf8]
    let v12: core::fmt::Arguments;  // [bp-0xe8]
    let v13: iNone;  // [bp-0xd8]
    let v14: u64;  // [bp-0xc8]
    let v15: iNone;  // [bp-0xb8]
    let v16: iNone;  // [bp-0xa8]
    let v17: core::fmt::Arguments;  // [bp-0x98]
    let v18: struct24;  // [bp-0x88]
    let v19: struct73;  // [bp-0x78]
    let v20: u128;  // [bp-0x68]
    let v21: iNone;  // [bp-0x58]
    let v22: core::fmt::Arguments;  // [bp-0x48]
    let v23: struct16;  // [bp-0x38]
    let v24: struct64;  // [bp-0x28]
    let v26: struct80;  // rax
    let v27: u64;  // rax
    let v28: u64;  // rdx
    let v29: struct72;  // rax
    let v30: struct32;  // rax
    let v32: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v34: struct24;  // xmm0
    let v35: struct24;  // xmm1
    let v36: struct24;  // xmm2

    v0 = just::parser::Parser::accepted(a1, 14);
    v26 = v0.field_0;
    if v6 != 37 {
        v34 = *((&v0.field_0 as &char + 1) as &i128);
        v35 = *((&v0.field_16 as &char + 1) as &i128);
        v36 = *((&v0.field_32 as &char + 1) as &i128);
        return struct96 {
            field_0: v26 as u8
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_49: <UNKNOWN>
            field_64: v6
            field_72: <UNKNOWN>
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    } else if (v26 as u8 & 1) {
        v1 = just::parser::Parser::expect(a1, 24);
        v27 = v6;
        v10 = v1.field_0;
        v11 = v1.field_16;
        v12 = v1.field_32;
        v13 = v1.field_48;
        v14 = *(&v1.field_64 as &i64);
        if v27 != 37 {
            return struct88 {
                field_0: v10
                field_16: v11
                field_32: v12
                field_48: v13
                field_64: v14
                field_72: v27 as u8
                field_73: v7
                field_76: <UNKNOWN>
            };
        }
        v15 = v10;
        v16 = v11;
        v17 = v12;
        v18 = v13;
        v19 = v14;
        v20 = v15;
        v21 = v16;
        v22 = v17;
        v23 = v18;
        v24 = v19;
        v0 = struct16 {
            field_0: just::token::Token::lexeme(&v20)
            field_8: v28
        };
        v29 = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&g_46e88e, &v0);
        v30 = v29;
        if v30 as u8 {
            return struct24 {
                field_0: v29 as u8
                padding_1: <UNKNOWN>
                field_72: <UNKNOWN>
            };
        }
        v0 = struct16 {
            field_0: just::token::Token::lexeme(&v20)
            field_8: v28
        };
        v30 = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&g_46e311, &v0);
        if !v30 as u8 {
            v32 = alloc::alloc::Global::alloc_impl(1, 2);
            *(v32 as &i16) = 3096;
            v2 = 2;
            *(&v3 as void*) = v15;
            *(&v4 as void*) = v16;
            v5 = v17;
            v8 = v18;
            v9 = v19;
            v0 = struct24 {
                field_0: 9223372036854775841
                field_8: 2
                field_16: v32
            };
            return just::token::Token::error(a0, &v20, &v0);
        }
        return struct24 {
            field_0: v29 as u8
            padding_1: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    } else {
        return struct1 {
            field_0: 1
        };
    }
}
