fn uu_shuf::find_seps(a0: u32, a1: u32) -> u64 {
    let v0: i32;  // [sp-0x5c]
    let v1: i64;  // [sp-0x58]
    let v2: i64;  // [sp-0x50]
    let v3: i32;  // [sp-0x44]
    let v5: i64;  // [sp-0x38]
    let v7: i64;  // r12
    let v8: i64;  // rbp
    let v9: i64;  // rax
    let v10: i256;  // ymm0
    let v11: i64;  // rsi
    let v12: i64;  // rcx
    let v13: i64;  // rbx
    let v14: i64;  // rdx
    let v15: i64;  // rdi
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v18: i64;  // r8
    let v19: i64;  // rdx
    let v20: i64;  // rsi
    let v21: i128;  // xmm0
    let v22: i64;  // r12
    let v24: i64;  // rdx
    let v25: i64;  // r13
    let v26: i64;  // rbp
    let v27: i64;  // r13
    let v28: i64;  // r13
    let v29: i64;  // rdi
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // r13
    let v34: i64;  // rbx
    let v35: i64;  // r13
    let v36: i64;  // rcx

    v7 = *((a0 + 16) as &i64);
    if !v7 {
        return v9;
    }
    v8 = a1;
    if v7 == 1 {
        v9 = *((a0 + 8) as &i64);
        if !*((v9 + 8) as &i64) {
            *((a0 + 16) as &i64) = 0;
            return v9;
        }
    }
    v0 = v8;
    v3 = v8;
    loop {
        v7 -= 1;
        v11 = *((a0 + 16) as &i64);
        if v7 >= v11 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v12 = *((a0 + 8) as &i64);
        v13 = v7 * 16;
        v9 = *((v12 + v13) as &i64);
        v14 = *((v12 + v13 + 8) as &i64);
        if v14 <= 15 {
            if !v14 {
                goto LABEL_48dde3;
            }
            v16 = 0;
            while (*((v9 + v16) as &i8) != v8) {
                v16 += 1;
                if v14 == v16 {
                    goto LABEL_48dde3;
                }
            }
        } else {
            v15 = v0;
            v9 = core::slice::memchr::memchr_aligned(v0, v9);
            if !(v9 == 1) {
                goto LABEL_48dde3;
            }
            v11 = *((a0 + 16) as &i64);
        }
        if v11 <= v7 {
            alloc::vec::Vec<T,A>::swap_remove::assert_failed(); /* do not return */
        }
        v7 = v7;
        v17 = *((a0 + 8) as &i64);
        v18 = *((v17 + v13) as &i64);
        v19 = *((v17 + v13 + 8) as &i64);
        v20 = v11 - 1;
        v21 = *((v17 + v20 * 16) as &i128);
        vvar_23{reg 224} = ((vvar_23{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_188{reg 224}))
        *((v17 + v13) as &i128) = v21;
        *((a0 + 16) as &i64) = v20;
        v2 = v19;
        v1 = v18;
        v5 = v19 + v18;
        v9 = _ZN6memchr4arch6x86_646memchr10memchr_raw2FN17h131809aa972751e4E();
        if !v9 {
            v22 = 0;
            v1 = v1;
        } else {
            v22 = 0;
            v1 = v1;
            do {
                v25 = v1;
                v26 = v24 - v25;
                if v26 < v22 {
                    core::slice::index::slice_index_order_fail(); /* do not return */
                }
                if v26 > v2 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
                v27 = *((a0 + 16) as &i64);
                if v27 == *(a0 as &i64) {
                    v29 = a0;
                    alloc::raw_vec::RawVec<T,A>::grow_one(a0);
                    v28 = v1;
                }
                v30 = *((a0 + 8) as &i64);
                v31 = v27 * 16;
                *((v30 + v31) as &i64) = v22 + v28;
                *((v30 + v31 + 8) as &i64) = v26 - v22;
                *((a0 + 16) as &i64) = v27 + 1;
                v22 = v26 + 1;
                v32 = v28;
                v9 = _ZN6memchr4arch6x86_646memchr10memchr_raw2FN17h131809aa972751e4E();
            } while (v9);
        }
        v2 -= v22;
        v8 = v3;
        if vvar_353 > v22 {
            v34 = *((a0 + 16) as &i64);
            if v34 == *(a0 as &i64) {
                alloc::raw_vec::RawVec<T,A>::grow_one(a0);
                v35 = v1;
            }
            v9 = *((a0 + 8) as &i64);
            v36 = v34 * 16;
            *((v9 + v36) as &i64) = v35 + v22;
            *((v9 + v36 + 8) as &i64) = v2;
            *((a0 + 16) as &i64) = v34 + 1;
        }
LABEL_48dde3:
        if !v7 {
            return v9;
        }
    }
}
