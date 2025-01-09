fn uu_ls::colors::StyleManager::apply_style(a0: &struct24, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x108], Other Possible Types: struct24
    let v1: i64;  // [bp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: struct16;  // [sp-0xc0], Other Possible Types: i128
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v13: i32;  // [sp-0x98]
    let v14: i64;  // [bp-0x88], Other Possible Types: struct16
    let v15: i64;  // [sp-0x80]
    let v16: i64;  // [bp-0x78]
    let v17: i32;  // [sp-0x77]
    let v18: i64;  // [sp-0x70]
    let v19: i64;  // [sp-0x68]
    let v20: i64;  // [sp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: i64;  // [sp-0x48]
    let v23: i64;  // [sp-0x40]
    let v27: i64;  // rbp
    let v28: i64;  // rax
    let v30: i64;  // rdx

    v27 = a5;
    v20 = a3;
    v21 = a4;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    if *((a1 + 8) as &i8) == 2 {
        v28 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v28 {
            v13 = *((v28 + 17) as &i32);
            v12 = *((v28 + 1) as &i128);
            if *(v28 as &i8) != 2 {
                v14 = struct16 {
                    field_0: v29
                };
                v17 = v13;
                v0 = uu_ls::colors::StyleManager::get_style_code(a1, &v14);
                v9 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v3 + *((&v0 as &char + 8) as &i64)), v30);
            }
        }
    }
    if a2 {
        if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
            v0 = uu_ls::colors::StyleManager::reset(a1, -0x100 | !*((a1 + 29) as &i8));
            v9 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v3 + *((&v0 as &char + 8) as &i64)), v30);
            v0 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
            v9 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v3 + *((&v0 as &char + 8) as &i64)), v30);
            goto LABEL_5399e1;
        }
    } else {
        if !(uu_ls::colors::StyleManager::get_normal_style(a1)) || !(v0 != 2) || !(uu_ls::colors::StyleManager::is_current_style(a1, &v0) as i8) {
LABEL_5399e1:
        } else {
            v0 = uu_ls::colors::StyleManager::reset(a1, None);
            v9 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v0 as &char + 8) as &i64), v3 + *((&v0 as &char + 8) as &i64)), v30);
        }
    }
    v22 = ((v27 & 255 & 255) ? &g_436d68 : 1);
    v23 = (v27 & 4294967295) * 3;
    v12 = uu_ls::colors::StyleManager::reset(a1, 0x1);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &v20;
    v4 = <&T as core::fmt::Display>::fmt;
    v5 = &v12;
    v6 = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &v22;
    v8 = <&T as core::fmt::Display>::fmt;
    v14 = &g_436d28;
    v15 = 4;
    v19 = 0;
    v16 = &v0;
    v18 = 4;
    core::option::Option<T>::map_or_else();
    return struct24 {
        field_0: v24
        field_16: v25
    };
}
