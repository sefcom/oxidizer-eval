fn bat::assets::HighlightingAssets::from_binary(a0: i64) -> long long {
    let v0: u64;  // [bp-0x40]
    let v1: struct24;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]

    v1 = &g_4a0048.field_0;
    v2 = 989809;
    v0 = 0x8000000000000000;
    v3 = bat::assets::get_integrated_themeset();
    return struct104 {
        field_0: *(&v0 as &i128)
        field_16: 989809
        field_24: 0x8000000000000000
        padding_32: <UNKNOWN>
        field_104: <UNKNOWN>
        padding_64: <UNKNOWN>
        field_120: <UNKNOWN>
        padding_88: <UNKNOWN>
        field_128: <UNKNOWN>
    };
}
