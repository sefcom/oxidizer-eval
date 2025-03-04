fn uu_fmt::linebreak::find_kp_breakpoints(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i8;  // [sp-0x1b2]
    let v1: i8;  // [sp-0x1b1]
    let v2: i64;  // [sp-0x1b0]
    let v3: iNone;  // [sp-0x1a8], Other Possible Types: struct16, struct24
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: struct16;  // [sp-0x180], Other Possible Types: unsigned long, int
    let v7: i64;  // [sp-0x170]
    let v8: i64;  // [sp-0x168], Other Possible Types: struct16
    let v9: i64;  // [sp-0x160]
    let v10: i64;  // [sp-0x158]
    let v11: i64;  // [sp-0x150]
    let v12: i64;  // [sp-0x148]
    let v13: i64;  // [sp-0x140]
    let v14: i64;  // [sp-0x138]
    let v15: i64;  // [sp-0x130]
    let v16: i64;  // [sp-0x128]
    let v17: struct24;  // [sp-0x120], Other Possible Types: int
    let v18: i64;  // [sp-0x100]
    let v19: i64;  // [sp-0xf8]
    let v20: i64;  // [sp-0xf0]
    let v21: i64;  // [sp-0xe8]
    let v22: i64;  // [sp-0xe0]
    let v23: i64;  // [sp-0xd8]
    let v24: i64;  // [sp-0xd0], Other Possible Types: struct24
    let v25: i64;  // [sp-0xb0]
    let v26: i64;  // [sp-0xa8]
    let v27: i64;  // [sp-0xa0]
    let v28: i64;  // [sp-0x98]
    let v29: i32;  // [sp-0x90]
    let v30: i16;  // [sp-0x8c]
    let v31: iNone;  // [sp-0x88]
    let v32: iNone;  // [bp-0x78]
    let v33: i64;  // [sp-0x6b]
    let v34: i8;  // [sp-0x63]
    let v35: i16;  // [sp-0x62]
    let v36: struct38;  // [sp-0x58]
    let v38: i64;  // rax
    let v39: i64;  // rcx
    let v40: iNone;  // ymm0
    let v41: iNone;  // ymm0
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i64;  // rdi
    let v45: i32;  // ebx
    let v47: iNone;  // ymm1
    let v48: i64;  // r14
    let v49: i64;  // 4099
    let v51: i64;  // rcx
    let v52: struct8;  // rax
    let v53: i64;  // r13
    let v54: i64;  // rbx
    let v55: i64;  // r15
    let v56: i64;  // rbp
    let v57: i64;  // r13
    let v58: i64;  // rdx
    let v59: i64;  // r13
    let v60: i64;  // r13
    let v61: i64;  // r13
    let v62: i64;  // rax
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
    let v75: iNone;  // xmm0
    let v76: iNone;  // xmm1
    let v77: i64;  // rax
    let v78: i64;  // rbx
    let v79: i64;  // rax
    let v80: i64;  // rbx

    v24 = core::iter::traits::iterator::Iterator::peekable(a1, a2);
    v38 = alloc::alloc::Global::alloc_impl(40);
    v39 = *((a3 + 32) as &i64);
    v41 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *(v38 as &i128) = 0;
    *((v38 + 16) as &i64) = 0;
    *((v38 + 24) as &unsigned long) = v39;
    *((v38 + 32) as &i32) = 0;
    *((v38 + 36) as &i16) = 0;
    v3 = alloc::slice::hack::into_vec(v38, 1);
    v42 = alloc::alloc::Global::alloc_impl(8);
    *(v42 as &i64) = 0;
    v17 = alloc::slice::hack::into_vec(v42, 1);
    v6 = 0;
    v6 = 8;
    v7 = 0;
    v43 = *(a3 as &i64);
    v15 = v43;
    v44 = *((v43 + 56) as &i64);
    v21 = *((v43 + 48) as &i64);
    v19 = v44;
    v18 = v21 - v44;
    v14 = core::cmp::max_by(v44, v18 + 1) - v18;
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v0 = *((a3 + 48) as &i8);
    v12 = *((a3 + 40) as &i64);
    v45 = 0;
    v11 = "src/uu/fmt/src/linebreak.rs";
    v4 = 0;
    loop {
        v48 = v24.field_16;
        v49 = v24;
        v24 = 0;
        if !v49 {
            v48 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v24);
        }
        if !v48 {
            uu_fmt::linebreak::build_best_path(a0, (&v3)[8] as i64, v3.field_24, (&v17)[8] as i64, (&v17)[16] as i64);
            return;
        }
        v1 = 1;
        v5 = v48;
        v51 = (*((v48 + 58) as &i8) || v0 ? ((v45 & 1) + 1) as u64 : 0);
        v16 = v51;
        v10 = 0;
        v7 = 0;
        v22 = v17.field_16;
        v23 = v22 + (&v17)[16] as i64 * 8;
        v52 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v52 {
            v20 = *(core::option::Option<T>::get_or_insert_with(&v24, &v24) as &i64);
            v2 = 0;
            v53 = 9223372036854775807;
            v13 = 9223372036854775807;
            do {
                v54 = *(v52 as &i64);
                v55 = v3.field_16;
                v56 = v54 * 5;
                v57 = *((v55 + v56 * 8 + 16) as &i64) - v4;
                v58 = *((v55 + v56 * 8 + 24) as &i64);
                *((v55 + v56 * 8 + 16) as &unsigned long) = v57;
                if v59 <= v57 {
                    v60 = v53;
                    v61 = v60;
                } else {
                    v61 = v57;
                }
                v53 = v61;
                v62 = v2;
                if v57 < v60 {
                    v62 = v54;
                }
                v2 = v62;
                v63 = *((v5 + 40) as &i64);
                v64 = v55 + v56 * 8;
                v65 = uu_fmt::linebreak::BreakArgs::compute_width(v15, v5, v58, *((v55 + v56 * 8 + 37) as &i8)) + v16 + v63 + *((v64 + 24) as &i64);
                if v65 <= v21 {
                    v6 = alloc::vec::Vec<T,A>::push(v54);
                    *((v64 + 37) as &i8) = 0;
                    *((v64 + 24) as &unsigned long) = v65;
                    if v65 >= v14 {
                        if v20 {
                            v66 = uu_fmt::linebreak::compute_demerits(v19 - v65, v18, v63);
                        } else {
                            v41 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            v66 = 0;
                        }
                        if v66 <= 99999999999999 {
                            v67 = *((v64 + 16) as &i64);
                            v68 = v67 + v66;
                            if v68 < v13 && (v67 < 0 || !v66 < 0 && !(!v66 & v67)) {
                                v25 = v54;
                                v26 = v5;
                                v30 = 0x100;
                                v27 = v68;
                                v29 = *((v64 + 32) as &i32);
                                v28 = v12;
                                v8 = alloc::vec::Vec<T,A>::push(&v25);
                                v13 = v68;
                            }
                        }
                    }
                }
                v52 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v52);
            v69 = v10;
            if v69 {
                v10 = v69 - 1;
                v70 = v9;
                v71 = v10 * 5;
                v72 = *((v70 + v71 * 8 + 37) as &i8);
                if v34 != 2 {
                    v73 = v70 + v71 * 8;
                    v74 = *((v73 + 38) as &i16);
                    v33 = *((v73 + 29) as &i64);
                    v75 = *(v73 as &i128);
                    v41 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u256;
                    v76 = *((v73 + 16) as &i128);
                    v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256;
                    v32 = v76;
                    v31 = v75;
                    v34 = v72;
                    v35 = v74;
                    v6 = alloc::vec::Vec<T,A>::push(v3.field_24);
                    v3 = alloc::vec::Vec<T,A>::push(&v31);
                }
            }
            if !v7 {
                goto LABEL_4bbfbd;
            }
            goto LABEL_4bbc20;
        } else {
            v2 = 0;
            v53 = 9223372036854775807;
            if v7 {
LABEL_4bbc20:
                v77 = core::cmp::max_by(v53);
                goto LABEL_4bbc28;
            } else {
LABEL_4bbfbd:
                if v78 >= v3.field_24 {
                    v80 = v2;
                    v11 = "src/uu/fmt/src/linebreak.rs";
                }
                v79 = (&v3)[8] as i64;
                v36 = uu_fmt::linebreak::restart_active_breaks(v15, v12, *((v79 + v78 * 40 + 24) as &i64), *((v79 + v78 * 40 + 37) as &i8), v78, v5, v16, v14);
                v6 = alloc::vec::Vec<T,A>::push(v3.field_24);
                v3 = alloc::vec::Vec<T,A>::push(&v36);
                v77 = 0;
LABEL_4bbc28:
                v4 = v77;
                v17 = core::intrinsics::typed_swap(&v6);
                v45 = v1;
            }
        }
    }
}
