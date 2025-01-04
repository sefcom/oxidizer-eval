fn uu_ls::colors::color_name(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x258]
    let v1: i64;  // [sp-0x240], Other Possible Types: Result<struct176, struct16>
    let v2: i64;  // [sp-0x190], Other Possible Types: Result<struct176, struct16>
    let v3: i64;  // [sp-0x188]
    let v4: i8;  // [bp-0x180]
    let v5: i1408;  // [sp-0xe0], Other Possible Types: Result<struct176, struct16>
    let v6: i64;  // [bp+0x8]
    let v7: i8;  // [bp+0x10]
    let v8: i64;  // rax
    let v9: i64;  // rcx
    let v11: i64;  // r14
    let v13: i64;  // rcx
    let v14: i64;  // rcx
    let v15: i64;  // 4096
    let v18: i64;  // rcx

    v8 = *((a3 + 296) as &i8);
    if !v8 && *((a3 + 0x100) as &i64) {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0, a4, a3 + 0x100, a1, a2, v7);
        return a0;
    }
    v9 = v6;
    if !v9 {
        v2 = std::fs::symlink_metadata(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
        match v2 {
            Err(_) => {
                v1 = 2;
                v13 = 0;
            },
            Ok(_) => {
                memcpy(&v1, &v2, 176);
                v13 = &v1;
                if v1 == 2 {
                    v13 = 0;
                }
            },
        }
LABEL_539fc9:
        v0 = v7;
        goto LABEL_539fc9;
    } else {
        v5 = uu_ls::get_metadata_with_deref_opt(*((v9 + 32) as &i64), *((v9 + 40) as &i64), v8 & 4294967295);
        match v5 {
            Ok(_) => {
                memcpy(&v1, &v5, 176);
            },
            Err(_) => {
                v1 = uu_ls::colors::color_name::{{closure}}(*((a3 + 32) as &i64), *((a3 + 40) as &i64), *((&v5 as &char + 8) as &i64));
            },
        }
        v11 = v1;
        if v11 != 2 {
            memcpy(&v4, &v1, 160);
            v2 = v11;
            v3 = *((&v1 as &char + 8) as &i64);
            v14 = &v2;
        } else {
            v2 = 2;
            v14 = 0;
        }
        v0 = v7;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v15, a4, a3, v18, a1, a2);
    return a0;
}
