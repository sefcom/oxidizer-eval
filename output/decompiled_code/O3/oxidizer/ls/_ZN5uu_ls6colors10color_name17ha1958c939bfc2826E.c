fn uu_ls::colors::color_name(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v1: i64;  // [bp-0x240]
    let v2: i1408;  // [sp-0x230], Other Possible Types: Enum
    let v3: i64;  // [sp-0x228]
    let v4: i64;  // [bp-0x180]
    let v5: i64;  // [sp-0x178]
    let v6: i8;  // [bp-0x170]
    let v7: i8;  // [bp-0xd0]
    let v8: i64;  // [bp+0x8]
    let v9: i8;  // [bp+0x10]
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // r9
    let v14: i64;  // rbp
    let v15: i64;  // r15
    let v16: i64;  // r15
    let v17: i64;  // rbx
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // 4096

    v10 = v8;
    if !*((a3 + 296) as &i8) {
        if *((a3 + 0x100) as &i64) {
            v11 = lscolors::LsColors::style_for(*(a4 as &i64), a3 + 0x100);
            v12 = v9;
            goto LABEL_4e35bd;
        }
        if v10 {
            a1 = a1;
            v2 = std::sys::pal::unix::fs::lstat(*((v10 + 32) as &i64), *((v10 + 40) as &i64));
            goto LABEL_4e3383;
        } else {
LABEL_4e3480:
            v1 = a1;
            a2 = a2;
            v14 = a3 + 72;
            v15 = *((a3 + 72) as &i64);
            if v15 == 3 {
                core::cell::once::OnceCell<T>::try_init(v14, a3, a5, a3, a4, a5);
                v15 = *((a3 + 72) as &i64);
            }
            v2 = std::sys::pal::unix::fs::lstat(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
            v17 = v2;
            if v17 != 2 {
                memcpy(&v6, &v2, 160);
                v4 = v17;
                v5 = v3;
                v18 = &v4;
            } else {
                v4 = 2;
                v18 = 0;
            }
            v11 = lscolors::LsColors::style_for_path_with_metadata(*(a4 as &i64), a3 + 24, v19);
            v12 = v9;
        }
    } else {
        if !v10 {
            goto LABEL_4e3480;
        }
        a1 = a1;
        v2 = std::sys::pal::unix::fs::stat(*((v10 + 32) as &i64), *((v10 + 40) as &i64));
LABEL_4e3383:
        v16 = v2;
        if v16 != 2 {
            memcpy(&v7, &v2, 160);
        }
        if v16 != 2 {
            memcpy(&v4, &v7, 160);
            goto LABEL_4e356f;
        } else {
            a2 = a2;
            v2 = std::sys::pal::unix::fs::lstat(*((a3 + 32) as &i64), *((a3 + 40) as &i64));
            v16 = v2;
            if v16 == 2 {
                v2 = 2;
                v20 = 0;
            } else {
                memcpy(&v4, &v2, 160);
LABEL_4e356f:
                memcpy(&v2, &v4, 160);
                v2 = v16;
                v3 = v3;
                v20 = &v2;
            }
        }
        v11 = lscolors::LsColors::style_for_path_with_metadata(*(a4 as &i64), a3 + 24, v20);
        v12 = v9;
LABEL_4e35bd:
    }
    uu_ls::colors::StyleManager::apply_style(v21, a4, v11, v1, a2, v12);
    return a0;
}
