fn uu_ls::colors::color_name(a0: u32, a1: u32, a2: u32, a3: void*, a4: u32, a5: u64) -> u64 {
    let v0: i32;  // [sp-0x258]
    let v1: i8;  // [bp-0x240]
    let v2: i8;  // [bp-0x238]
    let v3: i8;  // [bp-0x230]
    let v4: i1408;  // [sp-0x190], Other Possible Types: Result<struct176, struct16>
    let v5: i64;  // [sp-0x188]
    let v6: i8;  // [bp-0x180]
    let v7: i1408;  // [sp-0xe0], Other Possible Types: Result<struct176, struct16>
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i64;  // rax
    let v11: i64;  // rcx
    let v13: i64;  // r14
    let v15: i64;  // rcx
    let v16: i64;  // rcx
    let v17: i64;  // 4096
    let v20: i64;  // rcx

    v10 = *((a3 + 296) as &i8);
    if !v10 && *((a3 + 0x100) as &i64) {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0, a4, a3 + 0x100, a1, a2, v9);
        return a0;
    }
    v11 = v8;
    if !v11 {
        v4 = std::fs::symlink_metadata(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
        match v4 {
            Err(_) => {
                v1 = 2;
                v15 = 0;
            },
            Ok(_) => {
                memcpy(&v1, &v4, 176);
                v15 = &v1;
                if v1 == 2 {
                    v15 = 0;
                }
            },
        }
        v0 = v9;
    } else {
        v7 = uu_ls::get_metadata_with_deref_opt(*((v11 + 32) as &i64), *((v11 + 40) as &i64), v10 & 4294967295);
        match v7 {
            Ok(_) => {
                memcpy(&v1, &v7, 176);
            },
            Err(_) => {
                uu_ls::colors::color_name::{{closure}}(&v1, *((a3 + 32) as &i64), *((a3 + 40) as &i64), *((&v7 as &char + 8) as &i64));
            },
        }
        v13 = v1;
        if v13 != 2 {
            memcpy(&v6, &v3, 160);
            v4 = v13;
            v5 = v2;
            v16 = &v4;
        } else {
            v4 = 2;
            v16 = 0;
        }
        v0 = v9;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v17, a4, a3, v20, a1, a2);
    return a0;
}
