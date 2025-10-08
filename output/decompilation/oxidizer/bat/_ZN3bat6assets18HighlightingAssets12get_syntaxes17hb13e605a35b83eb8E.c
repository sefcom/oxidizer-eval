fn bat::assets::HighlightingAssets::get_syntaxes(a1: &struct144) -> : struct81 {
    let a0: i64;  // rdi
    let v0: Result<struct80, struct9>;  // [bp-0x58]
    let v1: struct24;  // [bp-0x54]
    let v2: i64;  // [bp-0x50], Other Possible Types: unsigned long
    let v3: std::io::stdio::Stdout;  // [bp-0x48]
    let v4: u128;  // [bp-0x38]
    let v5: iNone;  // [bp-0x28]
    let v7: u64;  // rcx
    let v8: u32;  // ecx
    let v9: core::result::Result<(), std::io::error::Error>;  // rcx
    let v10: u64;  // rcx

    v0 = bat::assets::HighlightingAssets::get_syntax_set(a1);
    if &v0 != "\r" {
        v8 = *((&v0 as &char + 1) as &i32);
        v9 = v2;
        return struct88 {
            field_0: v0 as i8
            field_1: v1
            field_4: v10
            field_8: v3
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v7 = *((v2 + 8) as &i64);
    *((a0 + 16) as &i64) = *((v2 + 16) as &i64);
}
