fn bat::assets::HighlightingAssets::find_syntax_by_extension(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: Result<struct80, struct9>;  // [bp-0x70]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x70]
    let v2: u32;  // [bp-0x6c]
    let v3: u64;  // [bp-0x68]
    let v4: u64;  // [bp-0x68]
    let v5: u128;  // [bp-0x60]
    let v6: u128;  // [bp-0x50]
    let v7: core::fmt::Arguments;  // [bp-0x40]
    let v9: Result<struct24, struct16>;  // rax
    let v10: struct160;  // rdx
    let v12: u64;  // rsi
    let v13: u64;  // rax
    let v14: core::str::pattern::CharSearcher;  // ecx

    v0 = bat::assets::HighlightingAssets::get_syntax_set(a1);
    v9 = v0 as i8;
    if v9 as u8 != 13 {
        v14 = *((&v0 as &char + 1) as &i32);
        return struct88 {
            field_0: v9 as u8
            field_1: v2
            field_4: v3
            field_8: v5
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    if a2 {
        v1 = core::str::converts::from_utf8(a2, a3);
        match v1 {
            Ok(_) => {
                v4 = v3;
            },
            Err(_) => {
                v4 = 1;
            },
        }
        v12 = v4;
    }
    v13 = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_extension(v3, v12, v10);
    return struct24 {
        field_0: 13
        padding_1: <UNKNOWN>
        field_8: v13
        field_16: v3
    };
}
