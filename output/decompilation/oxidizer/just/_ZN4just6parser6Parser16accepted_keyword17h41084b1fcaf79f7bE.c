fn just::parser::Parser::accepted_keyword(a0: i64, a1: u64, a2: u8) -> long long {
    let v0: u32;  // [bp-0x110]
    let v1: alloc::string::String;  // [bp-0x10d]
    let v2: struct80;  // [bp-0x108]
    let v3: struct73;  // [bp-0x108]
    let v4: struct16;  // [bp-0xd0]
    let v5: u8;  // [bp-0xc8]
    let v6: alloc::string::String;  // [bp-0xc4]
    let v7: u8;  // [bp-0xc0]
    let v8: alloc::string::String;  // [bp-0xbc], Other Possible Types: core::fmt::rt::Argument
    let v9: u32;  // [bp-0xb8]
    let v10: struct24;  // [bp-0xb5]
    let v11: iNone;  // [bp-0xa8]
    let v12: iNone;  // [bp-0x98]
    let v13: struct104;  // [bp-0x88]
    let v14: struct157;  // [bp-0x78]
    let v15: core::fmt::Arguments;  // [bp-0x68]
    let v16: core::fmt::rt::Argument;  // [bp-0x58]
    let v17: struct24;  // [bp-0x48]
    let v18: struct73;  // [bp-0x38]
    let v19: u32;  // [bp-0x37]
    let v20: alloc::string::String;  // [bp-0x34]
    let v22: struct24;  // xmm1
    let v23: iNone;  // xmm2
    let v24: struct192;  // xmm3
    let v25: struct80;  // rax
    let v26: u32;  // rdx
    let v27: core::fmt::rt::Argument;  // rax
    let v28: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // al
    let v30: iNone;  // xmm0
    let v31: struct24;  // xmm1
    let v32: struct89;  // xmm2
    let v33: struct24;  // edi
    let v34: core::fmt::rt::Argument;  // edx
    let v35: iNone;  // xmm0

    v2 = just::parser::Parser::next(a1);
    v22 = v2.field_16;
    v23 = v2.field_32;
    v24 = v2.field_48;
    v9 = v2.field_0;
    v11 = v22;
    v12 = v23;
    v13 = v24;
    v0 = *((&v2.field_64 as &char + 1) as &i32);
    v1 = v6;
    if v7 != 37 {
        v34 = *((&v2.field_64 as &char + 9) as &i32);
        v35 = v9;
        return struct88 {
            field_0: v35
            field_16: v11
            field_32: v12
            field_48: v13
            field_64: v18
            field_65: v1
            field_68: v7
            field_72: v8
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    v14 = v9;
    v15 = v11;
    v16 = v12;
    v17 = v13;
    v19 = v0;
    v20 = v1;
    v18 = v5;
    if v18 != 24 {
        return struct24 {
            field_0: v28
            padding_1: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v25 = just::token::Token::lexeme(&v14);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v26, just::keyword::Keyword::lexeme(a2), v26) {
        v3 = just::parser::Parser::advance(a1);
        v27 = v7;
        if v27 as u8 != 37 {
            v30 = *((&v3.field_0 as &char + 8) as &i128);
            v9 = *((&v3.field_64 as &char + 1) as &i32);
            v10 = v6;
            v31 = *((&v3.field_16 as &char + 8) as &i128);
            v32 = *((&v3.field_32 as &char + 8) as &i128);
            v33 = v9;
            return struct88 {
                field_0: v3.field_0 as i64
                field_8: v30
                field_24: v31
                field_40: v32
                field_56: v4
                field_64: v5
                field_65: v10
                field_68: v27 as u8
                field_72: v8
                field_73: <UNKNOWN>
                field_76: <UNKNOWN>
            };
        }
    }
    return struct24 {
        field_0: v28
        padding_1: <UNKNOWN>
        field_72: <UNKNOWN>
    };
}
