fn bat::assets::build_assets::build(a0: &struct81, a1: i64, a2: i64, a3: i32, a4: i32, a5: i64, a6: i64, a7: i64, a8: i64) -> u64 {
    let v0: u8;  // [bp-0x168]
    let v1: i8;  // [bp-0x167]
    let v2: struct24;  // [bp-0x160]
    let v3: i8;  // [bp-0x148]
    let v4: i8;  // [bp-0x147]
    let v5: i8;  // [bp-0x140]
    let v6: u64;  // [bp-0x138]
    let v7: i8;  // [bp-0x128]
    let v8: u64;  // [bp-0x120]
    let v9: struct24;  // [bp-0x118]
    let v10: u128;  // [bp-0xf8]
    let v11: u128;  // [bp-0xe9]
    let v12: iNone;  // [bp-0xe8]
    let v13: u128;  // [bp-0xd8]
    let v14: u64;  // [bp-0xc9]
    let v15: struct24;  // [bp-0xa8]
    let v16: u128;  // [bp-0x88]
    let v17: iNone;  // [bp-0x79]
    let v18: iNone;  // [bp-0x68]
    let v19: struct72;  // [bp-0x58]
    let v20: Option<struct8>;  // [bp-0x48]
    let v21: iNone;  // xmm2
    let v22: Result<struct24, struct16>;  // xmm3
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm1
    let v25: iNone;  // xmm0
    let v26: Result<struct40, struct16>;  // xmm0
    let v27: iNone;  // xmm2
    let v28: iNone;  // xmm3

    bat::assets::build_assets::build_theme_set(&v0, a1, a2, a3);
    if v0 != 13 {
        v26 = *(&v1 as &i128);
        v27 = *(&v3 as &i128);
        v28 = v6;
        v11 = v2.field_0;
        *(&v10 as &Result<struct40, struct16>) = v26;
        return struct88 {
            field_0: v0
            field_1: <UNKNOWN>
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v9 = v2;
    bat::assets::build_assets::build_syntax_set_builder(&v0, a1, a2, a3, a4, a5);
    if v0 != 13 {
        v14 = v6;
        v23 = *(&v1 as &i128);
        v24 = v2.field_0;
        v13 = *(&v4 as &i128);
        v12 = v24;
        *(&v10 as void*) = v23;
        v25 = v10;
        return struct88 {
            field_0: v0
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_48: v6
            field_56: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v18 = v2.field_0;
    v19 = v2.field_0;
    v20 = *(&v5 as &i128);
    syntect::parsing::syntax_set::SyntaxSetBuilder::build();
    bat::assets::build_assets::acknowledgements::build_acknowledgements(&v0, a1, a2, a4);
    if v0 != 13 {
        v21 = (&v2)[1].field_0;
        v22 = v6;
        v17 = *((&v2.field_0 as &char + 8) as &i128);
        v16 = *(&v1 as &i128);
        return struct88 {
            field_0: v0
            field_1: <UNKNOWN>
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
        };
    }
    v15 = v2;
    bat::assets::build_assets::print_unlinked_contexts(&v10);
    bat::assets::build_assets::write_assets(a0, &v9, &v10, &v15, a5, a6, a7, a8);
}
