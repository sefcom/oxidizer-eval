fn just::parser::Parser::presume_keyword(a0: i64, a1: u64, a2: u8) -> long long {
    let v0: u8;  // [bp-0x169]
    let v1: i64;  // [bp-0x168], Other Possible Types: u32
    let v2: core::fmt::Arguments;  // [bp-0x165]
    let v3: u64;  // [bp-0x160]
    let v4: i64;  // [bp-0x158], Other Possible Types: struct_3 *
    let v6: u64;  // [bp-0x150]
    let v7: struct64;  // [bp-0x148], Other Possible Types: u64
    let v8: u64;  // [bp-0x148]
    let v9: core::fmt::Arguments;  // [bp-0x148]
    let v10: u64;  // [bp-0x140]
    let v11: u64;  // [bp-0x140]
    let v12: struct81;  // [bp-0x138]
    let v13: struct24;  // [bp-0x128]
    let v14: u128;  // [bp-0x118]
    let v15: iNone;  // [bp-0x110]
    let v16: i8;  // [bp-0x100]
    let v17: core::fmt::Arguments;  // [bp-0xe8], Other Possible Types: struct73
    let v18: struct16;  // [bp-0xe8], Other Possible Types: u64
    let v19: iNone;  // [bp-0xd8], Other Possible Types: struct81
    let v20: struct24;  // [bp-0xc8], Other Possible Types: struct4
    let v21: iNone;  // [bp-0xb8], Other Possible Types: u128
    let v22: alloc::string::String;  // [bp-0xa8]
    let v23: u32;  // [bp-0xa4]
    let v24: u8;  // [bp-0xa0]
    let v25: struct24;  // [bp-0x78]
    let v26: u64;  // [bp-0x70]
    let v27: struct64;  // [bp-0x68]
    let v28: struct24;  // [bp-0x28]
    let v29: u32;  // [bp-0x27]
    let v30: struct24;  // [bp-0x24]
    let v32: struct24;  // al
    let v33: u64;  // rdx
    let v34: u64;  // rdx
    let v35: core::fmt::rt::Argument;  // rax
    let v36: u64;  // rdx
    let v37: struct89;  // rax
    let v38: alloc::string::String;  // xmm0
    let v39: core::fmt::Arguments;  // xmm1
    let v40: struct89;  // edx
    let v41: core::result::Result<usize, core::num::error::ParseIntError>;  // xmm0
    let v42: struct81;  // xmm1
    let v43: struct24;  // xmm2
    let v44: struct24;  // edx
    let v45: struct24;  // [bp-0xe0]

    v0 = a2;
    v17 = just::parser::Parser::advance(a1);
    v7 = v17.field_0;
    v12 = v19;
    v13 = v20;
    v14 = v21;
    v32 = v17.field_64 as i8;
    v1 = *((&v17.field_64 as &char + 1) as &i32);
    v2 = v23;
    if v24 != 37 {
        v40 = *(&(&v17.field_72)[1] as &i32);
        v41 = v7;
        v42 = v12.field_0;
        v43 = v13.field_0;
        v44 = v1;
        return struct88 {
            field_0: v41
            field_16: v42
            field_32: v43
            field_48: v14
            field_64: v28
            field_65: v2
            field_68: v24
            field_72: *(&(&v17.field_72)[4] as &i32)
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    v27 = v7;
    v33 = v2 as u64;
    v29 = v1;
    v30 = v33;
    v28 = v32;
    if v28 == 24 {
        v18 = struct16 {
            field_0: just::token::Token::lexeme(&v27)
            field_8: v34
        };
        v35 = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&v0, &v18);
        if v35 as u8 {
            *((a0 + 72) as &i8) = 37;
            return v35;
        }
        v25 = just::token::Token::lexeme(&v27);
        v26 = v34;
        *(&v1 as &&u8) = &v0;
        v3 = <just::keyword::Keyword as core::fmt::Display>::fmt;
        v4 = &v25;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = "Presumed next token would have lexeme \"";
        v10 = 3;
        v36 = v34;
    } else {
        v1 = &g_46e88e;
        v3 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v4 = &v28;
        v6 = <just::token_kind::TokenKind as core::fmt::Display>::fmt;
        v8 = "Presumed next token would have kind ";
        v11 = 2;
        v36 = v33;
    }
    vvar_263{stack -328} = core::fmt::Arguments OrderedDict([(0, &[&str] OrderedDict([(0, 𝜙@64b [((6778452, None), vvar_237{stack -328}), ((6778531, None), vvar_232{stack -328})]), (8, 𝜙@64b [((6778452, None), vvar_238{stack -320}), ((6778531, None), vvar_233{stack -320})])])), (16, [vvar_261{stack -360}, vvar_262{stack -344}]), (32, 0x0<64>)])
    v45 = core::option::Option<T>::map_or_else(None, v36, &v9);
    v18 = 9223372036854775848;
    v37 = just::parser::Parser::error(a1, &v18);
    v38 = *(&v16 as &i128);
    v22 = v38;
    v39 = *(&v9.pieces.len as &i128);
    v21 = v15;
    v20 = *((&v9.fmt as &char + 8) as &i128);
    v19 = *(&v9.args.len as &i128);
    v17 = v39;
    return struct80 {
        field_0: v39
        field_16: v19
        field_32: v20
        field_48: v15
        field_64: v38
    };
}
