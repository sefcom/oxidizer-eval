fn bat::assets::HighlightingAssets::get_first_line_syntax(a0: &struct81, a1: i64, a2: i64, a3: i32) -> u64 {
    let v0: Result<struct80, struct9>;  // [bp-0xa8], Other Possible Types: struct24
    let v1: Result<struct40, struct32>;  // [bp-0xa8]
    let v2: i32;  // [bp-0xa4]
    let v3: core::fmt::Arguments;  // [bp-0x98], Other Possible Types: struct24
    let v4: u128;  // [bp-0x88]
    let v5: core::fmt::Arguments;  // [bp-0x78]
    let v6: core::fmt::rt::Argument;  // [bp-0x68]
    let v7: struct24;  // [bp-0x58]
    let v8: struct24;  // [bp-0x40]
    let v10: core::result::Result<alloc::string::String, std::env::VarError>;  // rax
    let v11: struct40;  // r14
    let v12: struct24;  // rax
    let v13: void*;  // rax
    let v14: u32;  // ecx

    v0 = bat::assets::HighlightingAssets::get_syntax_set(a1);
    v10 = v0 as i8;
    if v10 as u8 != 13 {
        v14 = *((&v0 as &char + 1) as &i32);
        return struct88 {
            field_0: v10 as u8
            field_1: v2
            field_4: *((&v0 as &char + 8) as &i64)
            field_8: v3
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v11 = *((&v0 as &char + 8) as &i64);
    v8 = <&str as alloc::string::SpecToString>::spec_to_string(a2, a3);
    v1 = alloc::string::String::from_utf8(&v8);
    if !((((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char) {
        return struct24 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v13
            field_16: v11
        };
    }
    v12 = *((&v1 as &char + 8) as &i64);
    v7 = v3;
    if v12 != 0x8000000000000000 {
        v0 = struct24 {
            field_0: v12
            field_8: v7
        };
        v13 = bat::assets::HighlightingAssets::get_first_line_syntax::{{closure}}(v11, &v0);
    }
    return struct24 {
        field_0: 13
        padding_1: <UNKNOWN>
        field_8: v13
        field_16: v11
    };
}
