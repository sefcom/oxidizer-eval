fn uu_ls::colors::StyleManager::apply_style(a0: &struct24, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x108], Other Possible Types: int
    let v2: i64;  // [sp-0xf8]
    let v3: struct16;  // [sp-0xc0], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: struct24;  // [sp-0xa8], Other Possible Types: int
    let v7: i32;  // [sp-0x98]
    let v8: i8;  // [bp-0x88], Other Possible Types: struct16
    let v9: i32;  // [sp-0x77]
    let v10: i64;  // [sp-0x58]
    let v11: i64;  // [sp-0x50]
    let v12: i64;  // [sp-0x48]
    let v13: i64;  // [sp-0x40]
    let v14: String;  // [sp-0x38]
    let v16: i64;  // rbp
    let v17: i64;  // rax

    v16 = a5 as u64;
    v10 = a3;
    v11 = a4;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    if *((a1 + 8) as &i8) == 2 {
        v17 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v17 {
            v7 = *((v17 + 17) as &i32);
            v6 = *((v17 + 1) as &i128);
            if v8 != 2 {
                v8 = struct16 {
                    field_0: v18
                };
                v9 = v7;
                v0 = uu_ls::colors::StyleManager::get_style_code(a1, &v8);
                v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64), v2 + *((&v0.field_0 as &char + 8) as &i64)), a2);
            }
        }
    }
    if a2 {
        if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
            v0 = uu_ls::colors::StyleManager::reset(a1, !*((a1 + 29) as &i8));
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64), v2 + *((&v0.field_0 as &char + 8) as &i64)), a2);
            v0 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64), v2 + *((&v0.field_0 as &char + 8) as &i64)), a2);
            goto LABEL_5399e1;
        }
    } else {
        if !(uu_ls::colors::StyleManager::get_normal_style(a1)) || !(v0 as i8 != 2) || !(uu_ls::colors::StyleManager::is_current_style(a1, &v0) as i8) {
LABEL_5399e1:
        } else {
            v0 = uu_ls::colors::StyleManager::reset(a1, None);
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64), v2 + *((&v0.field_0 as &char + 8) as &i64)), a2);
        }
    }
    v12 = ((v16 & 255 & 255) ? &g_436d68 : 1);
    v13 = (v16 & 4294967295) * 3;
    v6 = uu_ls::colors::StyleManager::reset(a1, 0x1);
    v14 = format!("{}{}{}{}", &v3, &v10, &v6, &v12);
    return v14;
}
