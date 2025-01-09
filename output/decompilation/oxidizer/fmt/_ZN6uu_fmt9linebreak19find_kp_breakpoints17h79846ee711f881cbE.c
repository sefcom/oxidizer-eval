fn uu_fmt::linebreak::find_kp_breakpoints(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i8;  // [sp-0x1b2]
    let v1: i8;  // [sp-0x1b1]
    let v2: i64;  // [sp-0x1b0]
    let v3: i192;  // [sp-0x1a8], Other Possible Types: struct16, struct24
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: struct16;  // [sp-0x180], Other Possible Types: i128
    let v7: i64;  // [sp-0x178]
    let v8: i64;  // [sp-0x170]
    let v9: struct16;  // [sp-0x168], Other Possible Types: i64
    let v10: i64;  // [sp-0x160]
    let v11: i64;  // [sp-0x158]
    let v12: i64;  // [sp-0x150]
    let v13: i64;  // [sp-0x148]
    let v14: i64;  // [sp-0x140]
    let v15: i64;  // [sp-0x138]
    let v16: i64;  // [sp-0x130]
    let v17: i64;  // [sp-0x128]
    let v18: i192;  // [sp-0x120], Other Possible Types: struct24
    let v19: i64;  // [sp-0x100]
    let v20: i64;  // [sp-0xf8]
    let v21: i64;  // [sp-0xf0]
    let v22: i64;  // [sp-0xe8]
    let v23: i64;  // [sp-0xe0]
    let v24: i64;  // [sp-0xd8]
    let v25: i192;  // [sp-0xd0], Other Possible Types: struct24
    let v26: i64;  // [sp-0xb0]
    let v27: i64;  // [sp-0xa8]
    let v28: i64;  // [sp-0xa0]
    let v29: i64;  // [sp-0x98]
    let v30: i32;  // [sp-0x90]
    let v31: i16;  // [sp-0x8c]
    let v32: i128;  // [sp-0x88]
    let v33: i128;  // [bp-0x78]
    let v34: i64;  // [sp-0x6b]
    let v35: i8;  // [sp-0x63]
    let v36: i16;  // [sp-0x62]
    let v37: i304;  // [sp-0x58], Other Possible Types: struct38
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v41: i256;  // ymm0
    let v42: i256;  // ymm0
    let v43: i64;  // rax
    let v44: i64;  // rax
    let v45: i64;  // rdi
    let v46: i32;  // ebx
    let v48: i256;  // ymm1
    let v49: i64;  // r14
    let v50: i64;  // 4099
    let v52: i64;  // rax
    let v53: struct8;  // rax
    let v54: i64;  // r13
    let v55: i64;  // rbx
    let v56: i64;  // rcx
    let v57: i64;  // r15
    let v58: i64;  // rbp
    let v59: i64;  // r13
    let v60: i64;  // rdx
    let v61: i64;  // rcx
    let v62: i64;  // rbx
    let v63: i64;  // r14
    let v64: i64;  // r15
    let v65: i64;  // r12
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // r14
    let v69: i64;  // rax
    let v70: i64;  // rcx
    let v71: i64;  // rdx
    let v72: i8;  // al
    let v73: i64;  // rcx
    let v74: i16;  // dx
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i64;  // rax
    let v78: i64;  // r9
    let v79: i64;  // rax

    v25 = core::iter::traits::iterator::Iterator::peekable(a1, a2);
    v39 = alloc::alloc::Global::alloc_impl();
    v40 = *((a3 + 32) as &i64);
    v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *(v39 as &i128) = 0;
    *((v39 + 16) as &i64) = 0;
    *((v39 + 24) as &i64) = v40;
    *((v39 + 32) as &i32) = 0;
    *((v39 + 36) as &i16) = 0;
    v3 = alloc::slice::hack::into_vec(v39, 1);
    v43 = alloc::alloc::Global::alloc_impl();
    *(v43 as &i64) = 0;
    v18 = alloc::slice::hack::into_vec(v43, 1);
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v44 = *(a3 as &i64);
    v16 = v44;
    v45 = *((v44 + 56) as &i64);
    v22 = *((v44 + 48) as &i64);
    v20 = v45;
    v19 = v22 - v45;
    v15 = core::cmp::max_by(v45, v19 + 1) - v19;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v0 = *((a3 + 48) as &i8);
    v13 = *((a3 + 40) as &i64);
    v46 = 0;
    v12 = "src/uu/fmt/src/linebreak.rs";
    v4 = 0;
    loop {
        v49 = *((&v25 as &char + 8) as &i64);
        v50 = v25;
        v25 = 0;
        if !v50 {
            v49 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v25);
        }
        if !v49 {
            uu_fmt::linebreak::build_best_path(a0, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64), *((&v18 as &char + 8) as &i64), *((&v18 as &char + 16) as &i64));
            return;
        }
        v1 = 1;
        v52 = (v46 & 1) + 1;
        v5 = v49;
        if !(*((v49 + 58) as &i8) || v0) {
            v52 = 0;
        }
        v17 = v52;
        v11 = 0;
        v8 = 0;
        v23 = *((&v18 as &char + 8) as &i64);
        v24 = v23 + *((&v18 as &char + 16) as &i64) * 8;
        v53 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v53 {
            v21 = *(core::option::Option<T>::get_or_insert_with(&v25, &v25) as &i64);
            v2 = 0;
            v54 = 9223372036854775807;
            v14 = 9223372036854775807;
            do {
                v55 = *(v53 as &i64);
                v56 = v54;
                v57 = *((&v3 as &char + 8) as &i64);
                v58 = v55 * 5;
                v59 = *((v57 + v58 * 8 + 16) as &i64) - v4;
                v60 = *((v57 + v58 * 8 + 24) as &i64);
                *((v57 + v58 * 8 + 16) as &i64) = v59;
                if v56 <= v59 {
                    v61 = v56;
                } else {
                    v61 = v59;
                }
                v54 = v61;
                if v59 >= v56 {
                    v62 = v2;
                } else {
                    v62 = v55;
                }
                v2 = v62;
                v63 = *((v5 + 40) as &i64);
                v64 = v57 + v58 * 8;
                v65 = uu_fmt::linebreak::BreakArgs::compute_width(v16, v5, v60, *((v57 + v58 * 8 + 37) as &i8)) + v17 + v63 + *((v64 + 24) as &i64);
                if v65 <= v22 {
                    v6 = alloc::vec::Vec<T,A>::push(v55);
                    *((v64 + 37) as &i8) = 0;
                    *((v64 + 24) as &i64) = v65;
                    if v65 >= v15 {
                        if !v21 {
                            v42 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            v66 = 0;
                        } else {
                            v66 = uu_fmt::linebreak::compute_demerits(v20 - v65, v19, v63);
                        }
                        if v66 <= 99999999999999 {
                            v67 = *((v64 + 16) as &i64);
                            v68 = v67 + v66;
                            if v68 < v14 && (v67 < 0 || !v66 < 0 && !(!v66 & v67)) {
                                v26 = v55;
                                v27 = v5;
                                v31 = 0x100;
                                v28 = v68;
                                v30 = *((v64 + 32) as &i32);
                                v29 = v13;
                                v9 = alloc::vec::Vec<T,A>::push(&v26);
                                v14 = v68;
                            }
                        }
                    }
                }
                v53 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v53);
            v69 = v11;
            if v69 {
                v11 = v69 - 1;
                v70 = v10;
                v71 = v11 * 5;
                v72 = *((v70 + v71 * 8 + 37) as &i8);
                if v35 != 2 {
                    v73 = v70 + v71 * 8;
                    v74 = *((v73 + 38) as &i16);
                    v34 = *((v73 + 29) as &i64);
                    v75 = *(v73 as &i128);
                    v42 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
                    v76 = *((v73 + 16) as &i128);
                    v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
                    v33 = v76;
                    v32 = v75;
                    v35 = v72;
                    v36 = v74;
                    v6 = alloc::vec::Vec<T,A>::push(*((&v3 as &char + 16) as &i64));
                    v3 = alloc::vec::Vec<T,A>::push(&v32);
                }
            }
            if !v8 {
                goto LABEL_4bbfbd;
            }
            goto LABEL_4bbc20;
        } else {
            v2 = 0;
            v54 = 9223372036854775807;
            if v8 {
LABEL_4bbc20:
                v77 = core::cmp::max_by(v54);
                goto LABEL_4bbc28;
            } else {
LABEL_4bbfbd:
                v78 = v2;
                if v78 >= *((&v3 as &char + 16) as &i64) {
                    v12 = "src/uu/fmt/src/linebreak.rs";
                }
                v79 = *((&v3 as &char + 8) as &i64);
                v37 = uu_fmt::linebreak::restart_active_breaks(v16, v13, *((v79 + v78 * 40 + 24) as &i64), *((v79 + v78 * 40 + 37) as &i8), v78, v5, v17, v15);
                v6 = alloc::vec::Vec<T,A>::push(*((&v3 as &char + 16) as &i64));
                v3 = alloc::vec::Vec<T,A>::push(&v37);
                v77 = 0;
LABEL_4bbc28:
                v4 = v77;
                v18 = core::intrinsics::typed_swap(&v6);
                v46 = v1;
            }
        }
    }
}
