fn just::parser::Parser::expect_keyword(a0: i64, a1: u64, a2: i192) -> long long {
    let v0: struct24;  // [bp-0x161]
    let v1: u32;  // [bp-0x160]
    let v2: core::fmt::Arguments;  // [bp-0x15d]
    let v3: u32;  // [bp-0x158]
    let v4: core::fmt::Arguments;  // [bp-0x155]
    let v5: struct24;  // [bp-0x150], Other Possible Types: struct73
    let v6: struct16;  // [bp-0x150]
    let v7: struct104;  // [bp-0x138]
    let v8: iNone;  // [bp-0x130], Other Possible Types: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>
    let v9: iNone;  // [bp-0x120], Other Possible Types: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>
    let v10: core::fmt::rt::Argument;  // [bp-0x110]
    let v11: u32;  // [bp-0x10c]
    let v12: u8;  // [bp-0x108]
    let v13: struct40;  // [bp-0x104]
    let v14: iNone;  // [bp-0x100]
    let v15: struct8;  // [bp-0xf0]
    let v16: u32;  // [bp-0xef]
    let v17: struct157;  // [bp-0xec]
    let v18: struct24;  // [bp-0xe8]
    let v19: struct24;  // [bp-0xd8]
    let v20: iNone;  // [bp-0xc8]
    let v21: iNone;  // [bp-0xb8]
    let v22: core::fmt::rt::Argument;  // [bp-0xa8]
    let v23: core::fmt::rt::Argument;  // [bp-0x98]
    let v24: iNone;  // [bp-0x88]
    let v25: iNone;  // [bp-0x78]
    let v26: struct144;  // [bp-0x68]
    let v27: u32;  // [bp-0x67]
    let v28: core::fmt::Arguments;  // [bp-0x64]
    let v29: core::fmt::rt::Argument;  // [bp-0x58]
    let v30: core::fmt::rt::Argument;  // [bp-0x48]
    let v31: core::fmt::rt::Argument;  // [bp-0x38]
    let v32: struct16;  // [bp-0x28]
    let v34: u64;  // rax
    let v35: struct144;  // r14b
    let v36: u64;  // rdx
    let v37: core::option::Option<u32>;  // rax
    let v38: struct80;  // rax
    let v39: struct24;  // ecx

    v0 = a2;
    v5 = just::parser::Parser::advance(a1);
    v34 = v12;
    v18 = v5.field_0;
    v19 = v5.field_16;
    v20 = v8;
    v21 = v9;
    v35 = v5.field_64 as i8;
    v1 = *((&v5.field_64 as &char + 1) as &i32);
    v2 = v11;
    if v34 != 37 {
        v39 = *(&(&v5.field_72)[1] as &i32);
        return struct88 {
            field_0: v18
            field_16: v19
            field_32: v20
            field_48: v21
            field_64: v35
            field_65: v2
            field_68: v34 as u8
            field_72: v13
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    v29 = v18;
    v30 = v19;
    v31 = v20;
    v32 = v21;
    v3 = v1;
    v4 = v2;
    v22 = v29;
    v23 = v30;
    v24 = v31;
    v25 = v32;
    v26 = v35;
    v27 = v1;
    v28 = v2;
    if v35 == 24 {
        v6 = struct16 {
            field_0: just::token::Token::lexeme(&v22)
            field_8: v36
        };
        v37 = <just::keyword::Keyword as core::cmp::PartialEq<&str>>::eq(&v0, &v6);
        if v37 as u8 {
            *((a0 + 72) as &i8) = 37;
            return v37;
        }
    }
    v38 = alloc::alloc::Global::alloc_impl(1, 1);
    *(v38 as &struct24) = v0;
    v7 = 1;
    v8 = v29;
    v9 = v30;
    v10 = v31;
    v14 = v32;
    v15 = v35;
    v16 = v3;
    v17 = v4;
    v5 = struct24 {
        field_0: 9223372036854775841
        field_8: 1
        field_16: v38
    };
    return just::token::Token::error(a0, &v22, &v5);
}
