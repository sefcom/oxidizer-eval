fn bat::decorations::LineChangesDecoration::new(a0: i64, a1: i64) -> double {
    let v0: struct16;  // [bp-0xb8], Other Possible Types: struct32
    let v1: core::str::pattern::CharSearcher;  // [bp-0xb0]
    let v2: u8;  // [bp-0xab]
    let v3: u128;  // [bp-0xa8]
    let v4: struct32;  // [bp-0x98]
    let v5: struct48;  // [bp-0x88]
    let v6: struct32;  // [bp-0x78]
    let v7: u128;  // [bp-0x68]
    let v8: struct32;  // [bp-0x58]
    let v9: u128;  // [bp-0x48]
    let v10: struct32;  // [bp-0x38]
    let v12: u64;  // r15
    let v13: struct24;  // xmm1
    let v14: core::fmt::rt::Argument;  // xmm0

    v2 = 21;
    v1 = 0x1500;
    v0 = 0;
    v4 = bat::decorations::LineChangesDecoration::generate_cached(&v0, " ");
    v6 = bat::decorations::LineChangesDecoration::generate_cached(a1 + 51, "+");
    v12 = a1 + 68;
    v8 = bat::decorations::LineChangesDecoration::generate_cached(v12, "‾");
    v10 = bat::decorations::LineChangesDecoration::generate_cached(v12, "_");
    v0 = bat::decorations::LineChangesDecoration::generate_cached(a1 + 85, "~");
    v13 = *(&v10.field_16 as &i128);
    v14 = v0.field_0;
    return struct160 {
        field_0: v4.field_0
        field_16: v5
        field_32: v6.field_0
        field_48: v7
        field_64: v8.field_0
        field_80: v9
        field_96: v10.field_0
        field_112: v13
        field_128: v14
        field_144: v3
    };
}
