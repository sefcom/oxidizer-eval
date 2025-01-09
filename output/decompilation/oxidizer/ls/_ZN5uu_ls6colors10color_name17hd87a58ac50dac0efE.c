fn uu_ls::colors::color_name(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u32;  // [sp-0x258]
    let v1: u8;  // [sp-0x240], Other Possible Types: struct16
    let v2: u8;  // [bp-0x230]
    let v3: u128;  // [sp-0x190], Other Possible Types: struct16
    let v4: u64;  // [sp-0x188]
    let v5: u8;  // [bp-0x180]
    let v6: u128;  // [sp-0xe0], Other Possible Types: struct16
    let v7: &u64;  // [bp+0x8]
    let v8: u8;  // [bp+0x10]
    let v9: u64;  // rax
    let v10: &u64;  // rcx
    let v12: &u8;  // rcx
    let v13: u64;  // r14
    let v15: &u8;  // rcx
    let v16: &struct24;  // 4096
    let v19: &u8;  // rcx

    v9 = a3->field_128;
    if !v9 && a3->field_100 {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0, a4, &a3->field_100 as &struct_0, a1, a2, v8);
        return a0;
    }
    v10 = v7;
    if !v10 {
        v3 = std::fs::symlink_metadata(a3->field_20, a3->field_28);
        if v3 as i32 == 2 {
            v12 = 0;
        } else {
            memcpy(&v1, &v3, 176);
            v12 = &v1;
            if v1 == 2 {
                v12 = 0;
            }
        }
LABEL_539fc9:
        v0 = v8;
        goto LABEL_539fc9;
    } else {
        v6 = uu_ls::get_metadata_with_deref_opt(v10[4], v10[5], v9 & 4294967295);
        if v6 as i32 != 2 {
            memcpy(&v1, &v6, 176);
        } else {
            v1 = uu_ls::colors::color_name::{{closure}}(a3->field_20, a3->field_28, *((&v6 as &char + 8) as &i64));
        }
        v13 = v1;
        if v13 == 2 {
            v15 = 0;
        } else {
            memcpy(&v5, &v2, 160);
            v3 = v13;
            v4 = *((&v1 as &char + 8) as &i64);
            v15 = &v3;
        }
        v0 = v8;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v16, a4, a3, v19, a1, a2);
    return a0;
}
