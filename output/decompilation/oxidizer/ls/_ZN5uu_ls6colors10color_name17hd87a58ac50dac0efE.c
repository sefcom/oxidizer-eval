fn uu_ls::colors::color_name(a1: i64, a2: i64, a3: i320, a4: i64, a5: i32, a6: i64, a7: i8) -> : struct24 {
    let a0: void*;  // rsi
    let v0: u32;  // [bp-0x258]
    let v1: u64;  // [bp-0x240]
    let v2: struct16;  // [bp-0x240], Other Possible Types: u64
    let v3: u8;  // [bp-0x230]
    let v4: struct16;  // [bp-0x190]
    let v5: u8;  // [bp-0x180]
    let v6: u8;  // [bp-0xe0]
    let v7: u8;  // [bp-0xd8]
    let v8: i64;  // rcx
    let v9: std::sys::os_str::bytes::Buf;  // rbp
    let v10: void*;  // rcx
    let v11: struct40;  // rcx, Other Possible Types: u64
    let v12: u64;  // rdi

    if !*((a2 + 296) as &i8) && *((a2 + 0x100) as &i64) {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a3, a2 + 0x100, a0, a1, vvar_6, *(&v0 as &i32));
        return;
    }
    v8 = vvar_5;
    if v8 {
        uu_ls::get_metadata_with_deref_opt(*((v8 + 32) as &i64), *((v8 + 40) as &i64), *((a2 + 296) as &i8), a3);
        if *(&v6 as &i32) == 2 {
            v2 = uu_ls::colors::color_name::{{closure}}(*((a2 + 32) as &i64), *((a2 + 40) as &i64), *(&v7 as &i64));
        } else {
            memcpy(&v2 as u8, &v6, 176);
        }
        if v2 != 2 {
            memcpy(&v5, &v3, 160);
        }
    } else {
        v9 = uu_ls::PathData::get_metadata(a2, a4);
        v4 = std::fs::symlink_metadata();
        if v4.field_0 as i32 != 2 {
            memcpy(&v1, &v4, 176);
        }
        if v9 {
            v11 = v9;
        } else {
            v11 = v10;
        }
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v12, a3, a2, v11, a0, a1, v0);
    return;
}
