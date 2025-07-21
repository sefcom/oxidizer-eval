fn uu_ls::colors::StyleManager::apply_style(a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x108]
    let v1: u128;  // [bp-0x108]
    let v2: struct24;  // [bp-0x108]
    let v3: u64;  // [bp-0xfb]
    let v4: void*;  // [bp-0xc0]
    let v5: u64;  // [bp-0xb8]
    let v6: std::io::stdio::Stdout;  // [bp-0xb0]
    let v7: u128;  // [bp-0xa8]
    let v8: u32;  // [bp-0x98]
    let v9: struct16;  // [bp-0x88]
    let v10: u32;  // [bp-0x77]
    let v11: u64;  // [bp-0x58]
    let v12: u64;  // [bp-0x50]
    let v13: struct16;  // [bp-0x48]
    let v14: alloc::string::String;  // [bp-0x38]
    let v16: u64;  // rbp
    let v17: i64;  // rax
    let v19: i64;  // rax
    let v20: struct48;  // al
    let v21: &[u8];  // rax:rdx
    let v22: &[u8];  // rax:rdx
    let v23: &[u8];  // rax:rdx
    let v24: &[u8];  // rax:rdx

    v16 = a5;
    v11 = a3;
    v12 = a4;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    if *((a1 + 8) as &i8) == 2 {
        v17 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v17 {
            v8 = *((v17 + 17) as &i32);
            v7 = *((v17 + 1) as &i128);
            if *(v17 as &i8) != 2 {
                v9 = struct16 {
                    field_0: *(v17 as &i8)
                };
                v10 = v8;
                v0 = uu_ls::colors::StyleManager::get_style_code(a1, &v9);
                v21 = core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v4, v21.ptr, a2);
            }
        }
    }
    if !a2 {
        v19 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v19 {
            v1 = *(v19 as &i128);
            v3 = *((v19 + 13) as &i64);
            if v1 as i8 != 2 && uu_ls::colors::StyleManager::is_current_style(a1, &v1) as i8 {
                uu_ls::colors::StyleManager::reset(a1, 0, a3);
                v23 = core::slice::iter::Iter<T>::make_slice(*((&v1 as &char + 8) as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v4, v23.ptr, a2);
            }
        }
    } else if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
        uu_ls::colors::StyleManager::reset(a1, !*((a1 + 29) as &i8), a3);
        v22 = core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(&v4, v22.ptr, a2);
        v2 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
        v24 = core::slice::iter::Iter<T>::make_slice(*((&v2.field_0 as &char + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(&v4, v24.ptr, a2);
    }
    v13 = struct16 {
        field_0: ((v16 & 255) ? &g_436d68 : 1)
        field_8: (v16 & 4294967295) * 3
    };
    uu_ls::colors::StyleManager::reset(a1, v20 as u64, v16 * 3);
    v14 = format!("{}{}{}{}", &v4, &v11, &v7, &v13);
    return struct24 {
        field_0: *(&v14.vec.buf.cap as &i128)
        field_16: v14.vec.len
    };
}
