fn uu_ls::colors::StyleManager::apply_style(a0: i64, a1: i64, a2: void*, a3: &u64, a4: u8) -> long long {
    let v0: struct24;  // [bp-0xa8]
    let v1: u128;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa8]
    let v3: u64;  // [bp-0x9b]
    let v4: u64;  // [bp-0x98]
    let v5: struct24;  // [bp-0x88]
    let v6: i64;  // [bp-0x70]
    let v7: u128;  // [bp-0x68]
    let v8: u32;  // [bp-0x58]
    let v9: u8;  // [bp-0x45]
    let v10: u128;  // [bp-0x44]
    let v11: u32;  // [bp-0x34]
    let v13: i64;  // rax
    let v14: u64;  // rdx
    let v15: u64;  // rsi
    let v16: i64;  // rax
    let v17: u64;  // rsi
    let v18: u64;  // rdx
    let v19: u8;  // bl
    let v20: u64;  // r14
    let v21: u64;  // rdx

    v5 = struct24 {
        field_0: 0
        field_8: ""
    };
    if *((a1 + 8) as &i8) == 2 {
        v13 = uu_ls::colors::StyleManager::get_normal_style(*(a1 as &i64));
        if v13 {
            v8 = *((v13 + 17) as &i32);
            v7 = *((v13 + 1) as &i128);
            if *(v13 as &i8) != 2 {
                v9 = *(v13 as &i8);
                v10 = v7;
                v11 = v8;
                v2 = uu_ls::colors::StyleManager::get_style_code(a1, &v9);
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v2.field_8, v4 + v2.field_8);
            }
        }
    }
    if !a2 {
        v16 = uu_ls::colors::StyleManager::get_normal_style(*(a1 as &i64));
        if v16 {
            v1 = *(v16 as &i128);
            v3 = *((v16 + 13) as &i64);
            if v1 as i8 != 2 && uu_ls::colors::StyleManager::is_current_style(a1, &v2) {
                if *((a1 + 8) as &i8) != 2 {
                    *((a1 + 29) as &i8) = 1;
                    *((a1 + 8) as &i8) = 2;
                    v17 = &g_4cfea8;
                    v18 = 4;
                }
                v19 = 1;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v17, v18 + v17);
            }
        }
    } else if !uu_ls::colors::StyleManager::is_current_style(a1, a2) {
        if *((a1 + 8) as &i8) != 2 || !*((a1 + 29) as &i8) {
            *((a1 + 29) as &i8) = 1;
            *((a1 + 8) as &i8) = 2;
            v15 = &g_4cfea8;
            v14 = 4;
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v15, v14 + v15);
        v0 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v5, v0.field_8, v4 + v0.field_8);
    }
    v0 = struct24 {
        field_0: *(&v5.field_0 as &i128)
        field_16: 0
    };
    std::ffi::os_str::OsString::push(&v0, a3);
    if !(*((a1 + 8) as &i8) == 2 & ~(v19)) {
        *((a1 + 29) as &i8) = 1;
        *((a1 + 8) as &i8) = 2;
        v20 = &g_4cfea8;
        v21 = 4;
    }
    std::ffi::os_str::OsString::push(&v0, v20, v21);
    std::ffi::os_str::OsString::push(&v0, (!a4 ? 1 : &g_4d2861), a4 * 3);
    *((v6 + 16) as &i64) = 0;
    *(v6 as &i128) = *(&v0.field_0 as &i128);
    return 0;
}
