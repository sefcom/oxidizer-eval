fn uu_ls::colors::color_name(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u8) -> u64 {
    let v0: i8;  // [bp-0x258]
    let v1: i64;  // [sp-0x248]
    let v2: i8;  // [sp-0x240], Other Possible Types: unsigned long, Result<struct176, struct8>
    let v3: Result<struct176, struct8>;  // [sp-0x190], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x188]
    let v5: i8;  // [bp-0x180]
    let v6: Result<struct176, struct8>;  // [sp-0xe0]
    let v7: i64;  // rax
    let v8: i64;  // rbp
    let v9: i64;  // r15
    let v10: i64;  // rcx
    let v11: i64;  // r14
    let v13: i64;  // rdi
    let v14: i64;  // rsi
    let v15: i64;  // rdx
    let v16: i64;  // r8
    let v17: i64;  // r9

    v7 = *((a3 + 296) as &i8);
    if !v7 as u8 && *((a3 + 0x100) as &i64) {
        uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(a0, a4, a3 + 0x100, a1, a2, a7);
        return a0;
    }
    if !a6 {
        v8 = uu_ls::PathData::get_metadata(a3, a5);
        v3 = std::fs::symlink_metadata(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
        match v3 {
            Err(_) => {
                v10 = 0;
            },
            Ok(_) => {
                memcpy(&v2, &v3, 176);
                v10 = (v2 != 2 ? &v2 : 0);
            },
        }
LABEL_539fc9:
        if v8 {
            v10 = v8;
        }
        v13 = a0;
        v14 = a4;
        v15 = a3;
        v16 = a1;
        v17 = a2;
        goto LABEL_539fc9;
    } else {
        v1 = a1;
        v6 = uu_ls::get_metadata_with_deref_opt(*((a6 + 32) as &i64), *((a6 + 40) as &i64), v7 & 4294967295);
        match v6 {
            Ok(_) => {
                v9 = a2;
                memcpy(&v2, &v6, 176);
            },
            Err(_) => {
                v9 = a2;
                v2 = uu_ls::colors::color_name::{{closure}}(*((a3 + 32) as &i64), *((a3 + 40) as &i64), *((&v6 as &char + 8) as &i64));
            },
        }
        v11 = v2;
        if v11 == 2 {
            v10 = 0;
        } else {
            memcpy(&v5, &v2, 160);
            v3 = v11;
            v4 = *((&v2 as &char + 8) as &i64);
            v10 = &v3;
        }
        v13 = a0;
        v14 = a4;
        v15 = a3;
        v16 = v1;
        v17 = v9;
    }
    uu_ls::colors::StyleManager::apply_style_based_on_metadata(v13, v14, v15, v10, v16, v17, v0);
    return a0;
}
