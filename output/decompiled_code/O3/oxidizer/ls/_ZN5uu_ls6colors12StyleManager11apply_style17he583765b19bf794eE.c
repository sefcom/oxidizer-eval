fn uu_ls::colors::StyleManager::apply_style(a0: void*, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x108], Other Possible Types: struct24
    let v2: struct16;  // [sp-0xc0], Other Possible Types: i64
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v6: i32;  // [sp-0x98]
    let v7: struct16;  // [bp-0x88]
    let v8: i32;  // [sp-0x77]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: i64;  // [sp-0x48]
    let v12: i64;  // [sp-0x40]
    let v13: i192;  // [sp-0x38]
    let v15: i64;  // rbp
    let v16: i64;  // rax
    let v18: i64;  // rdx

    v15 = a5;
    v9 = a3;
    v10 = a4;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    if *((a1 + 8) as &i8) == 2 {
        v16 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v16 {
            v6 = *((v16 + 17) as &i32);
            v5 = *((v16 + 1) as &i128);
            if *(v16 as &i8) != 2 {
                *(&v7.field_0 as &struct16) = struct16 {
                    field_0: v17
                };
                v8 = v6;
                v0 = uu_ls::colors::StyleManager::get_style_code(a1, &v7);
                v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v0.field_16 + *((&v0 as &char + 8) as &i64)), v18);
            }
        }
    }
    if a2 {
        if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
            v0 = uu_ls::colors::StyleManager::reset(a1, -0x100 | !*((a1 + 29) as &i8));
            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v0.field_16 + *((&v0 as &char + 8) as &i64)), v18);
            v0 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v0.field_16 + *((&v0 as &char + 8) as &i64)), v18);
            goto LABEL_53b941;
        }
    } else {
        if !(uu_ls::colors::StyleManager::get_normal_style(a1)) || !(v0 != 2) || !(uu_ls::colors::StyleManager::is_current_style(a1, &v0) as i8) {
LABEL_53b941:
        } else {
            v0 = uu_ls::colors::StyleManager::reset(a1, 0);
            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v0.field_16 + *((&v0 as &char + 8) as &i64)), v18);
        }
    }
    v11 = ((v15 & 255 & 255) ? &g_436f14 : 1);
    v12 = (v15 & 4294967295) * 3;
    v5 = uu_ls::colors::StyleManager::reset(a1, 1);
    v13 = format!("{:?}{:?}{:?}{:?}", &v2, &v9, &v5, &v11);
    *((a0 + 16) as &i64) = *((&v13 as &char + 16) as &i64);
    *(a0 as &i192) = v13;
}
