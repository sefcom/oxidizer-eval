fn fd::regex_helper::pattern_has_uppercase_char(a0: u64, a1: i64) -> long long {
    let v0: struct15;  // [bp-0x208]
    let v1: struct128;  // [bp-0x208]
    let v2: iNone;  // [bp-0x1d8]
    let v3: iNone;  // [bp-0x1c8]
    let v4: struct17;  // [bp-0x1b8]
    let v5: std::time::SystemTime;  // [bp-0x1a8]
    let v6: iNone;  // [bp-0x198]
    let v7: u128;  // [sp-0x188]
    let v8: core::option::Option<&str>;  // [bp-0x178]
    let v9: iNone;  // [bp-0x168], Other Possible Types: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>
    let v10: iNone;  // [bp-0x158]
    let v11: iNone;  // [bp-0x148]
    let v12: struct17;  // [bp-0x138]
    let v13: std::time::SystemTime;  // [bp-0x128]
    let v14: iNone;  // [bp-0x118]
    let v15: struct196;  // [bp-0x108]
    let v17: i64;  // rbx
    let v18: iNone;  // xmm1
    let v19: iNone;  // xmm2

    v0 = struct15 {
        field_0: 0
        field_1: 33686018
        field_5: 514
        field_7: 10
        field_8: 250
        field_12: 0
        field_14: 0
    };
    v15 = regex_syntax::parser::ParserBuilder::build(&v0);
    v1 = regex_syntax::parser::Parser::parse(&v15, a0);
    if v1.field_0 == 9223372036854775809 {
        v9 = v1.field_40;
        v8 = v1.field_24;
        v7 = *(&v1.field_8 as &i128);
        v17 = fd::regex_helper::pattern_has_uppercase_char::{{closure}}(&v7);
    } else {
        v18 = *(&v1.field_16 as &i128);
        v19 = *((&v1.field_24 as &char + 8) as &i128);
        v7 = *(&v1.field_0 as &i128);
        v14 = v6;
        v13 = v5;
        v12 = v4;
        v11 = v3;
        v10 = v2;
        v9 = v19;
        v8 = v18;
    }
    return v17 as u32 & -0x100 | v17 as u8 & 1;
}
