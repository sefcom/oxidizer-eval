fn uu_cp::file_mode_for_interactive_overwrite(a0: &Option<struct48>, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x16c]
    let v1: i128;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x158]
    let v4: i64;  // [bp-0x148]
    let v5: i64;  // [sp-0x138]
    let v6: struct24;  // [sp-0x130], Other Possible Types: i64
    let v7: i64;  // [sp-0x128]
    let v8: i64;  // [sp-0x120]
    let v9: i8;  // [sp-0x118]
    let v10: struct24;  // [sp-0x108], Other Possible Types: i64
    let v11: i64;  // [sp-0x100]
    let v12: i64;  // [sp-0xf8]
    let v13: i64;  // [sp-0xf0]
    let v14: i64;  // [sp-0xe8]
    let v15: i64;  // [sp-0xe0]
    let v16: i8;  // [bp-0xd8]
    let v17: i8;  // [bp-0xc8]
    let v18: struct16;  // [sp-0xc0]
    let v19: i8;  // [bp-0x88]
    let v21: i64;  // rbp
    let v22: i64;  // rax

    v18 = std::fs::metadata(a1, a2);
    return struct8 {
        field_0: 0x8000000000000000
    };
    v21 = v19;
    if v21 >= 0 {
        v0 = v21 & 3967;
        v1 = &v0;
        v2 = core::fmt::num::<impl core::fmt::Octal for i32>::fmt;
        v4 = 2;
        v5 = 0;
        v6 = 4;
        v7 = 0;
        v8 = 34359738400;
        v9 = 3;
        v10 = &g_41e7f0;
        v11 = 1;
        v14 = &v4;
        v15 = 1;
        v12 = &v1;
        v13 = 1;
        core::option::Option<T>::map_or_else();
        v1 = v16;
        v3 = v17;
        v10 = uucore::features::fs::display_permissions_unix(v21 & 4294967295, 0);
        v5 = v3;
        v4 = v1;
        v6 = v10;
        v22 = v6;
        return Some(struct48 {
            field_0: v23
            field_16: v5
            field_24: v22
            field_32: v7
            field_40: v8
        });
    }
    v22 = 0x8000000000000000;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
