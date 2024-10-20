fn uu_ls::colors::StyleManager::apply_style(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> u64 {
    let v0: struct16;  // [sp-0x110], Other Possible Types: i64
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [bp-0xf8]
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [bp-0xe8]
    let v6: i64;  // [sp-0xd8], Other Possible Types: struct24
    let v7: i64;  // [bp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98], Other Possible Types: Arguments
    let v16: i128;  // [bp-0x97]
    let v17: i64;  // [bp-0x88]
    let v18: i64;  // [sp-0x68]
    let v19: i64;  // [sp-0x60]
    let v20: i64;  // [sp-0x58]
    let v21: i64;  // [sp-0x50]
    let v22: i192;  // [sp-0x48], Other Possible Types: String
    let v24: i64;  // rbp
    let v25: i64;  // rax
    let v26: i64;  // r15
    let v29: i64;  // r15
    let v32: i64;  // rdi
    let v33: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v37: i64;  // rax
    let v38: i64;  // r15
    let v40: i64;  // r12
    let v41: i64;  // r13
    let v42: i64;  // r13
    let v43: i64;  // rax
    let v46: i64;  // rax

    v24 = a5;
    v18 = a3;
    v19 = a4;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if *((a1 + 8) as &i8) != 2 || (v25 = lscolors::LsColors::style_for_indicator(*(a1 as &i64), 0), !(v25) || !((v5 = *((v25 + 17) as &i32), v3 = *((v25 + 1) as &i128), v15 != 2))) {
        v26 = 0;
    } else {
        v15 = Arguments {
            pieces: &[&str] {
                ptr: v27 as i8
                len: 4
            }
            args: &[&Argument] {
                ptr: <UNKNOWN>
                len: 4
            }
            fmt: None
        };
        v16 = v3;
        v6 = uu_ls::colors::StyleManager::get_style_code(a1, &v15);
        v29 = v9;
        if v29 {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v29);
            v32 = v1;
            v33 = v2;
        }
        memcpy(v32 + v33, *((&v6 as &char + 8) as &i64), v29);
        v26 = v29 + v2;
        v2 = v26;
    }
    if a2 {
        if !uu_ls::colors::StyleManager::is_current_style(a1, a2) as i8 {
            if !*((a1 + 29) as &i8) || *((a1 + 8) as &i8) != 2 {
                *((a1 + 29) as &i8) = 1;
                *((a1 + 8) as &i8) = 2;
                v35 = __rust_alloc(4, 1);
                *(v35 as &i32) = 1831885595;
                if v0 - v26 <= 3 {
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v26, 4);
                    v36 = v2;
                }
                *((v1 + v36) as &i32) = *(v35 as &i32);
                v2 = v36 + 4;
            } else {
                v2 = v26;
            }
            v6 = uu_ls::colors::StyleManager::get_style_code(a1, a2);
            v40 = v9;
            v41 = v2;
            if v0 - v41 < v40 {
                v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v41, v40);
                v42 = v2;
            }
            memcpy(v1 + v42, *((&v6 as &char + 8) as &i64), v40);
            v2 = v42 + v40;
            goto LABEL_4e2c12;
        }
    } else {
        if !(lscolors::LsColors::style_for_indicator(*(a1 as &i64), 0)) || !(v6 != 2) || !(uu_ls::colors::StyleManager::is_current_style(a1, &v6) as i8) {
LABEL_4e2c12:
        } else if *((a1 + 8) as &i8) == 2 {
            v2 = v26;
        } else {
            *((a1 + 29) as &i8) = 1;
            *((a1 + 8) as &i8) = 2;
            v37 = __rust_alloc(4, 1);
            *(v37 as &i32) = 1831885595;
            if v0 - v26 <= 3 {
                v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v26, 4);
                v38 = v2;
            }
            *((v1 + v38) as &i32) = *(v37 as &i32);
            v2 = v38 + 4;
        }
    }
    v43 = 1;
    v20 = (!(v24 & 255 & 255) ? 1 : &g_42fbe8);
    v21 = (v24 & 4294967295) * 3;
    *((a1 + 29) as &i8) = 1;
    *((a1 + 8) as &i8) = 2;
    v43 = __rust_alloc(4, 1);
    *(v43 as &i32) = 1831885595;
    v3 = 4;
    v4 = v43;
    v5 = v3;
    v6 = &v0;
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &v18;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = &v3;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &v20;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &g_42fbf0;
    v17 = &v6;
    v22 = alloc::fmt::format::format_inner(&v15);
    v46 = *((&v22 as &char + 16) as &i64);
    *((a0 + 16) as &i64) = v46;
    *(a0 as &i192) = v22;
    return v46;
}
