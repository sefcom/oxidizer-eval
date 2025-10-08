fn bat::assets::HighlightingAssets::get_syntax_for_file_extension(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct81, struct17> {
    let a0: i64;  // rdi
    let v0: Result<struct81, struct17>;  // [bp-0x78]
    let v1: struct81;  // [bp-0x78]
    let v2: u8;  // [bp-0x78]
    let v3: i32;  // [bp-0x74]
    let v4: core::fmt::rt::Argument;  // [bp-0x70], Other Possible Types: struct81
    let v5: u128;  // [bp-0x60]
    let v6: struct40;  // [bp-0x50]
    let v7: u128;  // [bp-0x40]
    let v10: u64;  // rdx

    v0 = bat::assets::HighlightingAssets::find_syntax_by_extension(a1, std::path::Path::extension(), v10);
    if &v0 != "\r" {
        return Ok(struct88 {
            field_0: v2
            field_1: v3
            field_4: v4
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
        });
    }
    if *((&v0 as &char + 8) as &i64) {
        return struct24 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v4
        };
    }
    v1 = bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(a4, a2, a3, a1, a4);
    if &v1 != "\r" {
        return Ok(struct88 {
            field_0: v2
            field_1: v3
            field_4: v4
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
        });
    }
    return struct24 {
        field_0: 13
        padding_1: <UNKNOWN>
        field_8: v4
    };
}
