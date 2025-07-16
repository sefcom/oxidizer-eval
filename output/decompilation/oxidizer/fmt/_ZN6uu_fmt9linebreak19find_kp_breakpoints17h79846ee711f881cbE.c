fn uu_fmt::linebreak::find_kp_breakpoints(a1: i64, a2: i64, a3: i64) -> Result<struct24, struct24> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x1b2]
    let v1: u8;  // [bp-0x1b1]
    let v2: struct16;  // [bp-0x1a8], Other Possible Types: struct24
    let v3: alloc::string::String;  // [bp-0x1a0]
    let v4: alloc::string::String;  // [bp-0x198]
    let v5: void*;  // [bp-0x190]
    let v6: i64;  // [bp-0x188]
    let v7: struct16;  // [bp-0x180]
    let v9: struct16;  // [bp-0x180]
    let v10: struct16;  // [bp-0x180]
    let v11: u64;  // [bp-0x178]
    let v12: void*;  // [bp-0x170]
    let v13: void*;  // [bp-0x168], Other Possible Types: struct16
    let v14: u64;  // [bp-0x160]
    let v15: void*;  // [bp-0x158], Other Possible Types: u64
    let v16: u64;  // [bp-0x150]
    let v17: u64;  // [bp-0x148]
    let v18: u64;  // [bp-0x140]
    let v19: u64;  // [bp-0x138]
    let v20: i64;  // [bp-0x130]
    let v21: u32;  // [bp-0x128]
    let v22: struct24;  // [bp-0x120]
    let v23: u64;  // [bp-0x118]
    let v24: u64;  // [bp-0x110]
    let v25: u64;  // [bp-0x100]
    let v26: u64;  // [bp-0xf8]
    let v27: i64;  // [bp-0xf0]
    let v28: u64;  // [bp-0xe8]
    let v29: u64;  // [bp-0xe0]
    let v30: u64;  // [bp-0xd8]
    let v31: core::iter::adapters::peekable::Peekable<core::str::iter::Bytes>;  // [bp-0xd0], Other Possible Types: u64
    let v32: void*;  // [bp-0xd0]
    let v33: i64;  // [bp-0xc8]
    let v34: u128;  // [bp-0xc0]
    let v35: struct41;  // [bp-0xb0]
    let v36: i64;  // [bp-0xa8]
    let v37: u64;  // [bp-0xa0]
    let v38: u64;  // [bp-0x98]
    let v39: i64;  // [bp-0x90]
    let v40: u16;  // [bp-0x8c]
    let v41: u128;  // [bp-0x88]
    let v42: u128;  // [bp-0x78]
    let v43: u64;  // [bp-0x6b]
    let v44: u8;  // [bp-0x63]
    let v45: u16;  // [bp-0x62]
    let v46: struct38;  // [bp-0x58]
    let v48: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v49: u64;  // rcx
    let v50: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v51: i64;  // rax
    let v52: u64;  // rdi
    let v53: u32;  // ebx
    let v54: i64;  // r15
    let v55: Result<struct2, struct8>;  // rax
    let v56: u64;  // r13
    let v57: struct41;  // rbx
    let v58: u64;  // rcx
    let v59: alloc::string::String;  // r15
    let v60: u64;  // rbp
    let v61: u64;  // r13
    let v62: u64;  // rdx
    let v64: u64;  // r13
    let v65: u64;  // rax
    let v66: u64;  // r14
    let v67: u64;  // rax
    let v68: i64;  // r15
    let v69: u64;  // r12
    let v70: void*;  // rax
    let v71: u64;  // rcx
    let v72: u64;  // r14
    let v73: u64;  // rdx
    let v74: u8;  // al
    let v75: i64;  // rcx
    let v76: u16;  // dx
    let v77: u128;  // xmm0
    let v78: void*;  // rax
    let v79: u64;  // rdi
    let v81: i64;  // ymm0

    v31 = core::iter::traits::iterator::Iterator::peekable(a0, a1);
    v48 = alloc::alloc::Global::alloc_impl(0x28, a0, a1) as u64;
    v49 = *((a2 + 32) as &i64);
    *(v48 as &i128) = 0;
    *((v48 + 16) as &i64) = 0;
    *((v48 + 24) as &u64) = v49;
    *((v48 + 32) as &i32) = 0;
    *((v48 + 36) as &i16) = 0;
    v2 = alloc::slice::hack::into_vec(v48, 1);
    v50 = alloc::alloc::Global::alloc_impl(0x8, a0, a1) as u64;
    *(v50 as &i64) = 0;
    v22 = alloc::slice::hack::into_vec(v50, 1);
    v7 as u64 = 0;
    v11 = 8;
    v12 = 0;
    v51 = *(a2 as &i64);
    v20 = v51;
    v52 = *((v51 + 56) as &i64);
    v28 = *((v51 + 48) as &i64);
    v26 = v52;
    v25 = *((v51 + 48) as &i64) - v52;
    v19 = core::cmp::max_by(v52, v25 + 1) - v25;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v0 = *((a2 + 48) as &i8);
    v17 = *((a2 + 40) as &i64);
    v53 = 0;
    v16 = "src/uu/fmt/src/linebreak.rs";
    v5 = 0;
    loop {
        v32 = 0;
        if !v31 {
            v33 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v34);
        }
        if !v33 {
            break;
        }
        v54 = *(core::option::Option<T>::get_or_insert_with(&v32, &v34) as &i64);
        v1 = 1;
        v6 = v33;
        v21 = ((*((v33 + 58) as &i8) || v0) == 1 ? (v53 & 1) + 1 : 0);
        v15 = 0;
        v12 = 0;
        v29 = v23;
        v30 = v23 + v24 * 8;
        v55 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
        match v55 {
            Err(_) => {
                v27 = v54;
                v65 = 0;
                v56 = 9223372036854775807;
                v18 = 9223372036854775807;
                do {
                    v57 = *(v55 as &i64);
                    v58 = v56;
                    v59 = v3;
                    v60 = v57 * 5;
                    v61 = *((v59 + v60 * 8 + 16) as &i64) - v5;
                    v62 = *((v59 + v60 * 8 + 24) as &i64);
                    *((v59 + v60 * 8 + 16) as &u64) = v61;
                    if v58 <= v61 {
                        v64 = v58;
                    } else {
                        v64 = v61;
                    }
                    v56 = v64;
                    v66 = *((v6 + 40) as &i64);
                    v67 = uu_fmt::linebreak::BreakArgs::compute_width(v20, v6, v62, *((v59 + v60 * 8 + 37) as &i8) as u8 as u32);
                    v68 = v59 + v60 * 8;
                    v69 = v67 + v21 + v66 + *((v68 + 24) as &i64);
                    if v69 <= v28 {
                        v7 = alloc::vec::Vec<T,A>::push(v57);
                        *((v68 + 37) as &i8) = 0;
                        *((v68 + 24) as &u64) = v69;
                        if v69 >= v19 {
                            if v27 {
                                v81 = *((v68 + 32) as &i32);
                                v70 = uu_fmt::linebreak::compute_demerits(v26 - v69, v25, v66);
                            }
                            if v70 <= 99999999999999 {
                                v71 = *((v68 + 16) as &i64);
                                v72 = v71 + v70;
                                if v72 < v18 && (v71 < 0 || !v70 < 0 && !((!v70) as u8 as u8 & (v71) as u8 as u8)) {
                                    v35 = v57;
                                    v36 = v6;
                                    v40 = 0x100;
                                    v37 = v72;
                                    v39 = v81;
                                    v38 = v17;
                                    v13 = alloc::vec::Vec<T,A>::push(&v35);
                                    v18 = v72;
                                }
                            }
                        }
                    }
                    v55 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
                } while (v55);
                if v15 {
                    v15 -= 1;
                    v73 = v15 * 5;
                    v74 = *((8 + v73 * 8 + 37) as &i8);
                    if v74 != 2 {
                        v75 = 8 + v73 * 8;
                        v76 = *((v75 + 38) as &i16);
                        v43 = *((v75 + 29) as &i64);
                        v77 = *(v75 as &i128);
                        v42 = *((v75 + 16) as &i128) as u128;
                        v41 = v77;
                        v44 = v74;
                        v45 = v76;
                        v9 = alloc::vec::Vec<T,A>::push(v4);
                        v2 = alloc::vec::Vec<T,A>::push(&v41);
                    }
                }
                if !v12 {
                    goto LABEL_4bbfd0;
                }
                goto LABEL_4bbc20;
            },
            Ok(_) => {
                v65 = 0;
                v56 = 9223372036854775807;
                if v12 {
LABEL_4bbc20:
                    v78 = core::cmp::max_by(v56);
                    goto LABEL_4bbc28;
                } else {
LABEL_4bbfd0:
                    v46 = uu_fmt::linebreak::restart_active_breaks(v20, v17, *((v3 + v65 * 40 + 24) as &i64), *((v3 + v65 * 40 + 37) as &i8), v65, v6, v21, v19);
                    v10 = alloc::vec::Vec<T,A>::push(v4);
                    v2 = alloc::vec::Vec<T,A>::push(&v46);
LABEL_4bbc28:
                    v5 = v78;
                    v22 = core::intrinsics::typed_swap(&v7 as u64);
                    v53 = 1;
                    v31 = v32;
                }
            },
        }
    }
    uu_fmt::linebreak::build_best_path(v79, v3, v4, v23, v24);
    return;
}
