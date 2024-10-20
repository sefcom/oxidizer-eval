fn uu_ls::display_uname(a0: void*, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [bp-0xf8]
    let v4: i32;  // [sp-0xec]
    let v5: i32;  // [sp-0xe8]
    let v6: i32;  // [sp-0xe4]
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0], Other Possible Types: Enum, struct24
    let v10: i8;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc0]
    let v12: i8;  // [bp-0xb8]
    let v13: i64;  // [sp-0xb0]
    let v14: i64;  // [sp-0xa8]
    let v15: i64;  // [sp-0xa0]
    let v16: i8;  // [sp-0x98]
    let v17: i64;  // [sp-0x50]
    let v18: i64;  // [sp-0x48]
    let v19: i64;  // [sp-0x40]
    let v20: i64;  // [sp-0x38]
    let v22: i64;  // rax
    let v23: i32;  // cc_dep2
    let v24: i64;  // r15
    let v26: i64;  // r13
    let v27: i64;  // rbp
    let v28: i64;  // r14
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rdx
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v37: i64;  // rsi
    let v38: i64;  // rdi
    let v39: i128;  // xmm0
    let v40: i64;  // rdi
    let v41: i64;  // rdi
    let v42: i8;  // dl
    let v43: i64;  // rdx
    let v44: i8;  // bpl
    let v45: i64;  // rdi
    let v46: i64;  // rsi

    if a2 {
        v3 = a1;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v15 = 32;
        v16 = 3;
        v9 = 0;
        v11 = 0;
        v13 = &v0;
        v14 = &g_5ac0e8;
        if !core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v3, &v9) as i8 {
            v22 = v2;
            *((a0 + 16) as &i64) = v22;
            *(a0 as &i64) = v0;
            return v22;
        }
        core::result::unwrap_failed(); /* do not return */
    }
    v6 = a1;
    if g_5b7c10 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN5uu_ls14cached_uid2usr9UID_CACHE17h2eda75cd10029a10E, &_ZN5uu_ls14cached_uid2usr9UID_CACHE17h2eda75cd10029a10E);
    }
    g_5b7bd8 = 1;
    if !g_5b7bd8 {
        g_5b7bd8 = 1;
        v23 = g_5b7bd8;
    } else {
        g_5b7bd8 = 1;
        v23 = g_5b7bd8;
    }
    if v23 {
        std::sys::sync::mutex::futex::Mutex::lock_contended(&g_5b7bd8);
    }
    if !_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1 {
        v24 = 0;
    } else {
        v24 = std::panicking::panic_count::is_zero_slow_path() as i32 | -0x100 | std::panicking::panic_count::is_zero_slow_path() as i32 ^ 1;
    }
    if g_5b7bdc {
        v9 = &g_5b7bd8;
        v10 = v24;
        core::result::unwrap_failed(); /* do not return */
    }
    v9 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&g_5b7be0, a1);
    if v9 {
        v26 = *((&v9 as &char + 8) as &i64);
        v27 = v11;
        v5 = v12;
        v9 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(a1);
        v28 = v9;
        if v28 != 0x8000000000000000 {
            v8 = *((&v9 as &char + 8) as &i64);
            v4 = v24;
            v7 = v11;
            v18 = *((&v9 as &char + 80) as &i64);
            v20 = *((&v9 as &char + 96) as &i64);
            v19 = *((&v9 as &char + 104) as &i64);
            if *((&v9 as &char + 24) as &i64) << 1 {
                v17 = *((&v9 as &char + 56) as &i64);
            }
            v24 = v4;
        } else {
            v3 = v8;
            v28 = 0;
            v1 = 1;
            v2 = 0;
            v15 = 32;
            v16 = 3;
            v9 = 0;
            v11 = 0;
            v13 = &v0;
            v14 = &g_5ac0e8;
            if core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v6, &v9) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v8 = v1;
            v7 = v2;
        }
        v31 = *(v26 as &i64);
        v32 = *((v26 + 8) as &i64);
        v33 = v32 & v27;
        v34 = *((v31 + v33) as &i128);
        vvar_81{reg 224} = ((vvar_325{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_324{reg 224}))
        v37 = UnaryOp GetMSBs;
        if !v37 {
            v38 = 16;
            do {
                v33 = v33 + v38 & v32;
                v39 = *((v31 + v33) as &i128);
                vvar_81{reg 224} = ((vvar_81{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_334{reg 224}))
                v37 = UnaryOp GetMSBs;
                v38 += 16;
            } while (!v37);
        }
        v40 = (!(v37 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v41 = v40 + v33 & v32;
        v42 = *((v31 + v41) as &i8);
        if v42 >= 0 {
            v43 = UnaryOp GetMSBs;
            v41 = (!(v43 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
            v42 = *((v31 + v41) as &i8);
        }
        v44 = v27 >> 57;
        *((v31 + v41) as &i8) = v44;
        *((v31 + (v41 - 16 & v32) + 16) as &i8) = v44;
        v45 = v41 * 32;
        v46 = v31 - v45;
        *((v26 + 16) as &u64) = *((v26 + 16) as &i64) - (v42 & 1);
        *((v31 + -(v45) - 32) as &i32) = v5;
        *((v46 - 24) as &i64) = v28;
        *((v46 - 16) as &i64) = v8;
        *((v46 - 8) as &i64) = v7;
        *((v26 + 24) as &i64) = *((v26 + 24) as &i64) + 1;
    }
    <alloc::string::String as core::clone::Clone>::clone(a0, v46 - 24);
    if !v24 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !std::panicking::panic_count::is_zero_slow_path() as i8 {
        g_5b7bdc = 1;
    }
    g_5b7bd8 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4d71fd;
    }
    v22 = g_5b7bd8;
    if v22 == 2 {
        goto LABEL_0x4d7252;
    }
    goto LABEL_0x4d7208;
}
