fn uu_ls::colors::color_name(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32, a6: i64, a7: i8) -> : struct24 {
    let a0: void*;  // rsi
    let v0: u8;  // [bp-0x258]
    let v1: u64;  // [sp-0x240], Other Possible Types: struct16
    let v3: u8;  // [bp-0x230]
    let v4: struct16;  // [bp-0x190]
    let v6: u8;  // [bp-0x180]
    let v7: u8;  // [bp-0xe0]
    let v8: u8;  // [bp-0xd8]
    let v9: i64;  // rcx
    let v10: u64;  // rbp
    let v11: void*;  // rcx
    let v12: &mut [u8];  // rcx, Other Possible Types: u64
    let v13: u64;  // rdi

    if !*((a2 + 296) as &i8) && *((a2 + 0x100) as &i64) {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a3, a2 + 0x100, a0, a1, vvar_6, *(&v0 as &i32));
        return;
    }
    v9 = vvar_5;
    if v9 {
        uu_ls::get_metadata_with_deref_opt(*((v9 + 32) as &i64), *((v9 + 40) as &i64), *((a2 + 296) as &i8), a3);
        if *(&v7 as &i32) == 2 {
            v1 = uu_ls::colors::color_name::{{closure}}(*((a2 + 32) as &i64), *((a2 + 40) as &i64), *(&v8 as &i64));
        } else {
            memcpy(&v1 as u8, &v7, 176);
        }
        if v1 != 2 {
            memcpy(&v6, &v3, 160);
        }
    } else {
        v10 = uu_ls::PathData::get_metadata(a2, a4);
        v4 = std::fs::symlink_metadata();
        if v4.field_0 as i32 != 2 {
            memcpy(&v1, &v4, 176);
        }
        if v10 {
            v12 = v10;
        } else {
            v12 = v11;
        }
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v13, a3, a2, v12, a0, a1, v0);
    return;
}
