fn uu_fmt::linebreak::find_kp_breakpoints(a1: core::str::iter::Bytes, a2: i64) -> Result<struct24, struct24> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x1b1]
    let v1: u32;  // [bp-0x1a4]
    let v2: i64;  // [bp-0x1a0]
    let v3: u64;  // [bp-0x198]
    let v4: i64;  // [bp-0x188]
    let v5: struct16;  // [bp-0x180], Other Possible Types: u64
    let v6: i64;  // [bp-0x178]
    let v7: u64;  // [bp-0x170]
    let v9: struct16;  // [bp-0x168]
    let v10: struct16;  // [bp-0x168]
    let v11: void*;  // [bp-0x168]
    let v12: u64;  // [bp-0x160]
    let v13: void*;  // [bp-0x158]
    let v14: void*;  // [bp-0x150]
    let v15: void*;  // [bp-0x148], Other Possible Types: struct16
    let v16: u64;  // [bp-0x140]
    let v17: void*;  // [bp-0x138], Other Possible Types: u64
    let v18: u64;  // [bp-0x130]
    let v19: i64;  // [bp-0x128]
    let v20: u64;  // [bp-0x120]
    let v21: u64;  // [bp-0x118]
    let v22: u64;  // [bp-0x110]
    let v23: u64;  // [bp-0x108]
    let v24: u64;  // [bp-0x100]
    let v25: u64;  // [bp-0xf8]
    let v26: u64;  // [bp-0xe8]
    let v27: i64;  // [bp-0xe0]
    let v28: u64;  // [bp-0xd8]
    let v29: core::iter::adapters::peekable::Peekable<core::str::iter::Bytes>;  // [bp-0xd0]
    let v30: void*;  // [bp-0xd0]
    let v31: i64;  // [bp-0xc8]
    let v32: Result<struct24, struct24>;  // [bp-0xb0]
    let v33: i64;  // [bp-0xa8]
    let v34: u64;  // [bp-0xa0]
    let v35: u64;  // [bp-0x98]
    let v36: u32;  // [bp-0x90]
    let v37: u16;  // [bp-0x8c]
    let v38: u128;  // [bp-0x88]
    let v39: u128;  // [bp-0x78]
    let v40: u64;  // [bp-0x6b]
    let v41: u8;  // [bp-0x63]
    let v42: u16;  // [bp-0x62]
    let v43: struct38;  // [bp-0x58]
    let v45: u64;  // rsi
    let v46: u64;  // rdx
    let v48: i64;  // r14
    let v49: u64;  // rax
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: core::option::Option<&str>;  // r14
    let v53: u32;  // ebx
    let v54: u64;  // rbp
    let v55: i64;  // rsi
    let v56: u64;  // rdx
    let v57: u64;  // rdx
    let v58: struct9;  // r12
    let v59: Result<struct24, struct24>;  // rbx, Other Possible Types: unsigned long
    let v60: struct16;  // r14
    let v61: i64;  // r13
    let v62: Result<struct24, struct24>;  // rbx
    let v63: struct9;  // rax
    let v64: u64;  // r15
    let v65: u64;  // rdx
    let v66: u64;  // rax
    let v67: i64;  // r15
    let v68: u64;  // rbp
    let v69: void*;  // rax
    let v70: u64;  // r15
    let v71: u64;  // rdx
    let v72: u8;  // al
    let v73: u64;  // rcx
    let v74: u16;  // dx
    let v75: u128;  // xmm0
    let v76: u32;  // ymm0

    v29 = core::iter::traits::iterator::Iterator::peekable(v45, v46);
    v48 = alloc::alloc::Global::alloc_impl(8, 40);
    v49 = *((a2 + 32) as &i64);
    *(v48 as &i128) = 0;
    *((v48 + 16) as &i64) = 0;
    *((v48 + 24) as &u64) = v49;
    *((v48 + 32) as &i32) = 0;
    *((v48 + 36) as &i16) = 0;
    v5 = 1;
    v6 = v48;
    v7 = 1;
    v50 = alloc::alloc::Global::alloc_impl(8, 8);
    *(v50 as &i64) = 0;
    v18 = 1;
    v19 = v50;
    v20 = 1;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v51 = *(a2 as &i64);
    v4 = v51;
    v26 = *((v51 + 48) as &i64) - *((v51 + 56) as &i64);
    v24 = core::cmp::Ord::max(*((v51 + 56) as &i64), v26 + 1) - v26;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v52 = &v29 as u8;
    v0 = *((a2 + 48) as &i8);
    v22 = *((a2 + 40) as &i64);
    v14 = 0;
    v21 = "src/uu/fmt/src/linebreak.rs";
    v53 = 0;
    loop {
        v30 = 0;
        if !(v30 as i8 & 1) {
            v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v52);
        }
        if !v31 {
            break;
        }
        v55 = *(core::option::Option<T>::get_or_insert_with(&v30, v52) as &i64);
        v54 = v54 & -0x100 | 1;
        v56 = ((v0 & 1) ? (v53 & 1) + 1 : 0);
        if v0 != *((v31 + 58) as &i8) {
            v57 = v46;
        } else {
            v57 = v56;
        }
        v25 = v57;
        v17 = 0;
        v13 = 0;
        v2 = v19;
        v58 = 9223372036854775807;
        v59 = 0;
        if v20 {
            v27 = v55;
            v1 = v54;
            v60 = v6;
            v3 = v7;
            v28 = v20 * 8;
            v61 = 0;
            v23 = 9223372036854775807;
            v59 = 0;
            do {
                v62 = *((v2 + v61) as &i64);
                v63 = v58;
                v64 = v62 * 5;
                v58 = *((v60 + v64 * 8 + 16) as &i64) - v14;
                v65 = *((v60 + v64 * 8 + 24) as &i64);
                *((v60 + v64 * 8 + 16) as &struct9) = v58;
                if v58 < v63 {
                    v59 = v62;
                }
                if _ccall(13, 8, v58, v63, 0) as char {
                    v58 = v63;
                }
                v66 = uu_fmt::linebreak::BreakArgs::compute_width(v4, v31, v65, *((v60 + v64 * 8 + 37) as &i8));
                v67 = v60 + v64 * 8;
                v68 = *((v31 + 40) as &i64) + v25 + v66 + *((v67 + 24) as &i64);
                if v68 > *((v4 + 48) as &i64) {
                    continue;
                }
                v9 = alloc::vec::Vec<T,A>::push(v62, "src/uu/fmt/src/linebreak.rs");
                *((v67 + 37) as &i8) = 0;
                *((v67 + 24) as &u64) = v68;
                if v68 < v24 {
                    continue;
                }
                if v27 {
                    v76 = *((v67 + 32) as &i32);
                    v69 = uu_fmt::linebreak::compute_demerits(*((v4 + 56) as &i64) - v68, v26, *((v31 + 40) as &i64));
                    if v69 > 99999999999999 {
                        continue;
                    }
                } else {
                    v69 = 0;
                    if !(1) {
                        continue;
                    }
                }
                v70 = *((v67 + 16) as &i64) + v69;
                if v70 < v23 && (*((v67 + 16) as &i64) > 0) - (*((v67 + 16) as &i64) < 0) <= (v69 > 0) - (v69 < 0) {
                    v32 = v62;
                    v33 = v31;
                    v37 = 0x100;
                    v34 = v70;
                    v36 = v76;
                    v35 = v22;
                    v15 = alloc::vec::Vec<T,A>::push(&v32, "src/uu/fmt/src/linebreak.rs");
                    v23 = v70;
                }
                v61 += 8;
            } while (v28 != v61);
            if v17 {
                v17 -= 1;
                v71 = v17 * 5;
                v72 = *((v16 + v71 * 8 + 37) as &i8);
                v52 = &v29 as u8;
                v54 = v1;
                if v72 != 2 {
                    v73 = v16 + v71 * 8;
                    v74 = *((v73 + 38) as &i16);
                    v40 = *((v73 + 29) as &i64);
                    v75 = *(v73 as &i128);
                    v39 = *((v73 + 16) as &i128);
                    v38 = v75;
                    v41 = v72;
                    v42 = v74;
                    v9 = alloc::vec::Vec<T,A>::push(v7, "src/uu/fmt/src/linebreak.rs");
                    v5 = alloc::vec::Vec<T,A>::push(&v38, "src/uu/fmt/src/linebreak.rs");
                }
            }
        }
        v3 = v7;
        v43 = uu_fmt::linebreak::restart_active_breaks(v4, v22, *((v6 + v59 * 40 + 24) as &i64), *((v6 + v59 * 40 + 37) as &i8), v59, v31, v25, v24);
        v10 = alloc::vec::Vec<T,A>::push(v3, "src/uu/fmt/src/linebreak.rs");
        v5 = alloc::vec::Vec<T,A>::push(&v43, "src/uu/fmt/src/linebreak.rs");
        core::intrinsics::typed_swap_nonoverlapping(&v18, &v9);
    }
    uu_fmt::linebreak::build_best_path(a0, v6, v7, v19, v20);
    return;
}
