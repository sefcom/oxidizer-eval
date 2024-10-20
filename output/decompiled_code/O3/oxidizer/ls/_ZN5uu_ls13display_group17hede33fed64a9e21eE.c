fn uu_ls::display_group(a0: void*, a1: u32, a2: u8, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0xa0]
    let v1: i32;  // [sp-0x9c]
    let v2: i64;  // [sp-0x98]
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [bp-0x80]
    let v6: i32;  // [sp-0x74]
    let v7: i64;  // [sp-0x70], Other Possible Types: struct24, Enum
    let v8: i8;  // [sp-0x68]
    let v9: i64;  // [sp-0x60]
    let v10: i8;  // [bp-0x58]
    let v11: i64;  // [sp-0x50]
    let v12: i64;  // [sp-0x48]
    let v13: i64;  // [sp-0x40]
    let v14: i8;  // [sp-0x38]
    let v16: i64;  // rax
    let v17: i32;  // cc_dep2
    let v18: i64;  // rax
    let v19: i64;  // r13
    let v20: i64;  // r15
    let v21: i64;  // r12
    let v22: i64;  // rbp
    let v23: i64;  // rax
    let v24: i64;  // rcx
    let v25: i64;  // rdx
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i64;  // rsi
    let v30: i64;  // rdi
    let v31: i128;  // xmm0
    let v32: i64;  // rdi
    let v33: i64;  // rdi
    let v34: i8;  // dl
    let v35: i64;  // rdx
    let v36: i8;  // r15b
    let v37: i64;  // rdi
    let v38: i64;  // rsi

    if a2 {
        v5 = a1;
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v13 = 32;
        v14 = 3;
        v7 = 0;
        v9 = 0;
        v11 = &v2;
        v12 = &g_5ac0e8;
        if !core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v5, &v7) as i8 {
            v16 = v4;
            *((a0 + 16) as &i64) = v16;
            *(a0 as &i64) = v2;
            return v16;
        }
        core::result::unwrap_failed(); /* do not return */
    }
    v6 = a1;
    if g_5b7c60 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN5uu_ls14cached_gid2grp9GID_CACHE17h2b3be3e674243d9eE, &_ZN5uu_ls14cached_gid2grp9GID_CACHE17h2b3be3e674243d9eE);
    }
    g_5b7c28 = 1;
    if !g_5b7c28 {
        g_5b7c28 = 1;
        v17 = g_5b7c28;
    } else {
        g_5b7c28 = 1;
        v17 = g_5b7c28;
    }
    if v17 {
        std::sys::sync::mutex::futex::Mutex::lock_contended(&g_5b7c28);
    }
    if !_ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1 {
        v0 = 0;
    } else {
        v18 = std::panicking::panic_count::is_zero_slow_path();
        v0 = v18 | -0x100 | v18 ^ 1;
    }
    if g_5b7c2c {
        v7 = &g_5b7c28;
        v8 = v0;
        core::result::unwrap_failed(); /* do not return */
    }
    v7 = hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&g_5b7c30, a1);
    if v7 {
        v19 = *((&v7 as &char + 8) as &i64);
        v20 = v9;
        v1 = v10;
        v7 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(a1);
        v21 = v7;
        v22 = *((&v7 as &char + 8) as &i64);
        if v21 == 0x8000000000000000 {
            v5 = v22;
            v21 = 0;
            v22 = 1;
            v4 = 0;
            v13 = 32;
            v14 = 3;
            v7 = 0;
            v9 = 0;
            v11 = &v2;
            v12 = &g_5ac0e8;
            if core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt(&v6, &v7) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
        }
        v23 = *(v19 as &i64);
        v24 = *((v19 + 8) as &i64);
        v25 = v24 & v20;
        v26 = *((v23 + v25) as &i128);
        vvar_63{reg 224} = ((vvar_261{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_260{reg 224}))
        v29 = UnaryOp GetMSBs;
        if !v29 {
            v30 = 16;
            do {
                v25 = v25 + v30 & v24;
                v31 = *((v23 + v25) as &i128);
                vvar_63{reg 224} = ((vvar_63{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_270{reg 224}))
                v29 = UnaryOp GetMSBs;
                v30 += 16;
            } while (!v29);
        }
        v32 = (!(v29 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
        v33 = v32 + v25 & v24;
        v34 = *((v23 + v33) as &i8);
        if v34 >= 0 {
            v35 = UnaryOp GetMSBs;
            v33 = (!(v35 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
            v34 = *((v23 + v33) as &i8);
        }
        v36 = v20 >> 57;
        *((v23 + v33) as &i8) = v36;
        *((v23 + (v33 - 16 & v24) + 16) as &i8) = v36;
        v37 = v33 * 32;
        v38 = v23 - v37;
        *((v19 + 16) as &u64) = *((v19 + 16) as &i64) - (v34 & 1);
        *((v23 + -(v37) - 32) as &i32) = v1;
        *((v38 - 24) as &i64) = v21;
        *((v38 - 16) as &i64) = v22;
        *((v38 - 8) as &i64) = v4;
        *((v19 + 24) as &i64) = *((v19 + 24) as &i64) + 1;
    }
    <alloc::string::String as core::clone::Clone>::clone(a0, v38 - 24);
    if !v0 && (9223372036854775807 & _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE) && !std::panicking::panic_count::is_zero_slow_path() as i8 {
        g_5b7c2c = 1;
    }
    g_5b7c28 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4d7648;
    }
    v16 = g_5b7c28;
    if v16 == 2 {
        goto LABEL_0x4d7699;
    }
    goto LABEL_0x4d7653;
}
