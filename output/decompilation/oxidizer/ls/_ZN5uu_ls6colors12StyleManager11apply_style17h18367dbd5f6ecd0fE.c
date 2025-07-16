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
    let v9: u8;  // [bp-0x88]
    let v10: u128;  // [bp-0x87]
    let v11: u32;  // [bp-0x77]
    let v12: u64;  // [bp-0x58]
    let v13: u64;  // [bp-0x50]
    let v14: i64;  // [bp-0x48]
    let v15: u64;  // [bp-0x40]
    let v16: alloc::string::String;  // [bp-0x38]
    let v18: u64;  // rbp
    let v19: i64;  // rax
    let v21: i64;  // rax
    let v22: u8;  // al
    let v23: &[u8];  // rax:rdx
    let v24: &[u8];  // rax:rdx
    let v25: &[u8];  // rax:rdx
    let v26: &[u8];  // rax:rdx

    v18 = a5;
    v12 = a3;
    v13 = a4;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    if *((a1 + 8) as &i8) == 2 {
        v19 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v19 {
            v8 = *((v19 + 17) as &i32);
            v7 = *((v19 + 1) as &i128);
            if *(v19 as &i8) != 2 {
                v9 = *(v19 as &i8);
                v10 = v7;
                v11 = v8;
                v0 = uu_ls::colors::StyleManager::get_style_code(a1, &v9);
                v24 = core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v4, v24.ptr, a2);
            }
        }
    }
    if !a2 {
        v21 = uu_ls::colors::StyleManager::get_normal_style(a1);
        if v21 {
            v1 = *(v21 as &i128);
            v3 = *((v21 + 13) as &i64);
            if v1 as i8 != 2 && uu_ls::colors::StyleManager::is_current_style(a1, &v1) as i8 {
                uu_ls::colors::StyleManager::reset(a1, 0, a3);
                v26 = core::slice::iter::Iter<T>::make_slice(*((&v1 as &char + 8) as &i64));
                alloc::vec::Vec<T,A>::append_elements(&v4, v26.ptr, a2);
            }
        }
    } else if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
        uu_ls::colors::StyleManager::reset(a1, !*((a1 + 29) as &i8), a3);
        v23 = core::slice::iter::Iter<T>::make_slice(*((&v0.field_0 as &char + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(&v4, v23.ptr, a2);
        v2 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
        v25 = core::slice::iter::Iter<T>::make_slice(*((&v2.field_0 as &char + 8) as &i64));
        alloc::vec::Vec<T,A>::append_elements(&v4, v25.ptr, a2);
    }
    v14 = ((v18 & 255) ? &g_436d68 : 1);
    v15 = (v18 & 4294967295) * 3;
    uu_ls::colors::StyleManager::reset(a1, v22, v18 * 3);
    v16 = format!("{}{}{}{}", &v4, &v12, &v7, &v14);
    return struct24 {
        field_0: *(&v16.vec.buf.ptr as &i128)
        field_16: v16.vec.len
    };
}
