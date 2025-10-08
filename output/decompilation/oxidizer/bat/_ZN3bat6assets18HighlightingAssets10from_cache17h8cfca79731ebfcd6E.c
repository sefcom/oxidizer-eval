fn bat::assets::HighlightingAssets::from_cache(a0: i64, a1: void*, a2: u32) -> long long {
    let v0: struct24;  // [bp-0xb8]
    let v1: u64;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u32;  // [bp-0x90]
    let v5: struct40;  // [bp-0x88]
    let v6: struct16;  // [bp-0x81]
    let v7: u128;  // [bp-0x79]
    let v8: Result<struct24, struct16>;  // [bp-0x71]
    let v9: Result<struct80, struct25>;  // [bp-0x68]
    let v10: i64;  // [bp-0x50]
    let v11: core::fmt::Arguments;  // [bp-0x48]
    let v12: core::fmt::Arguments;  // [bp-0x38]
    let v14: struct16;  // xmm0
    let v15: struct40;  // xmm0

    v0 = std::path::Path::join(a1, a2, "syntaxes.bin");
    v2 = std::path::Path::join(a1, a2, "themes.bin");
    v9 = bat::assets::asset_from_cache(v3, v4);
    if &v9 != "\r" {
        v15 = *((&v9 as &char + 1) as &i128);
        v7 = *((&v9 as &char + 16) as &i128);
        v5 = v15;
        return struct96 {
            field_0: 9223372036854775809
            field_8: v9 as i8
            field_9: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v8 = v10;
    v14 = *((&v9 as &char + 8) as &i128);
    v6 = v14;
    return struct104 {
        field_0: v0.field_0
        field_16: v1
        field_24: 0x8000000000000000
        padding_32: <UNKNOWN>
        field_104: <UNKNOWN>
        padding_64: <UNKNOWN>
        field_120: <UNKNOWN>
        padding_88: <UNKNOWN>
        field_128: <UNKNOWN>
    };
}
