fn uu_ptx::get_output_chunks(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x1c0]
    let v1: i64;  // [sp-0x1b8]
    let v2: i64;  // [sp-0x1b0], Other Possible Types: Enum, struct16, Arguments
    let v3: i64;  // [sp-0x1a8]
    let v4: i64;  // [sp-0x1a0]
    let v5: i64;  // [sp-0x178], Other Possible Types: struct16
    let v6: i64;  // [sp-0x170]
    let v7: i64;  // [sp-0x168]
    let v8: i128;  // [sp-0x160], Other Possible Types: struct16
    let v9: i64;  // [bp-0x158]
    let v10: i64;  // [bp-0x150]
    let v11: i64;  // [sp-0x148], Other Possible Types: struct16
    let v12: i64;  // [sp-0x140]
    let v13: i64;  // [sp-0x138]
    let v14: i128;  // [sp-0x128], Other Possible Types: struct16
    let v15: i64;  // [sp-0x120]
    let v16: i64;  // [sp-0x118]
    let v17: i64;  // [sp-0x110]
    let v18: i64;  // [sp-0x108]
    let v19: i64;  // [sp-0x100]
    let v20: i64;  // [sp-0xf8]
    let v21: i64;  // [sp-0xf0]
    let v22: i64;  // [sp-0xe8]
    let v23: i64;  // [sp-0xe0]
    let v24: i64;  // [sp-0xd8]
    let v25: i64;  // [sp-0xd0]
    let v26: i64;  // [sp-0xc8]
    let v27: i64;  // [sp-0xc0]
    let v28: i64;  // [sp-0xb0]
    let v29: i64;  // [sp-0xa8]
    let v30: i64;  // [sp-0xa0]
    let v31: Argument;  // [bp-0x98]
    let v32: Argument;  // [bp-0x90]
    let v33: i64;  // [sp-0x80]
    let v34: i64;  // [sp-0x78]
    let v35: i192;  // [sp-0x60], Other Possible Types: String
    let v36: String;  // [sp-0x48], Other Possible Types: i192
    let v37: i64;  // [bp+0x8]
    let v38: i64;  // rsi
    let v39: i64;  // rax
    let v40: i64;  // r12
    let v41: i64;  // r13
    let v42: i64;  // rbp
    let v43: i64;  // rcx
    let v44: i64;  // r15
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // r15
    let v50: i64;  // r12
    let v51: i64;  // r15
    let v52: i64;  // r13
    let v53: i64;  // r12
    let v54: i64;  // r12
    let v55: i64;  // rbx
    let v56: i64;  // rbp
    let v58: i64;  // r13
    let v59: i64;  // r12
    let v61: i64;  // r13
    let v62: i64;  // r12
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // r13
    let v67: i64;  // rax
    let v68: i64;  // rsi
    let v69: i64;  // r14
    let v70: i64;  // r12
    let v71: i64;  // r14
    let v72: i64;  // r13
    let v73: i64;  // r13
    let v74: i64;  // r12
    let v75: i64;  // rbx
    let v76: i64;  // rbp
    let v77: i64;  // rdx
    let v78: i64;  // rdi
    let v79: i64;  // r12
    let v80: i64;  // rax
    let v81: i64;  // rbp
    let v82: i64;  // r12
    let v83: i64;  // r14
    let v84: i64;  // rbx
    let v85: i64;  // rbx
    let v86: i64;  // rax
    let v87: i64;  // r12
    let v88: i64;  // rbx
    let v89: i64;  // rdx
    let v90: i64;  // rdx
    let v91: i64;  // rdx
    let v93: i64;  // rax

    v1 = a2;
    v38 = v37;
    v39 = *((v38 + 72) as &i64);
    v40 = v39 >> 1;
    v24 = *((v38 + 80) as &i64);
    v41 = v40 - v24;
    if v41 <= 0 {
        v41 = 0;
    }
    v26 = *((v38 + 40) as &i64);
    v42 = ~(a3 + v26 * 2) + v40;
    if v42 <= 0 {
        v42 = 0;
    }
    if v39 < 2 {
        v11 = 0;
        v12 = 1;
        v13 = 0;
        v5 = 0;
        v6 = 1;
        v7 = 0;
        v8 = 0;
        v25 = &v9;
        v9 = 1;
        v17 = &v10;
        v10 = 0;
        v43 = 1;
        v27 = 0;
    } else {
        v11 = v40;
        v12 = __rust_alloc(v40, 1);
        v13 = 0;
        v5 = v40;
        v6 = __rust_alloc(v40, 1);
        v7 = 0;
        v8 = v40;
        v9 = __rust_alloc(v40, 1);
        v10 = 0;
        v43 = __rust_alloc(v40, 1);
        v25 = &v9;
        v17 = &v10;
        v27 = v40;
    }
    v28 = v40;
    v14 = v40;
    v21 = v43;
    v15 = v21;
    v16 = 0;
    v44 = v1;
    uu_ptx::trim_idx(a1, v44, None, v44);
    v46 = v45 - v41;
    if v46 <= 0 {
        v46 = 0;
    }
    v47 = uu_ptx::trim_idx(a1, v44, uu_ptx::trim_broken_word_left(a1, v44, v46, v45), v45);
    if v45 < v47 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    }
    v48 = a1;
    if v45 > v1 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v0 = v41;
    v30 = v47;
    if v45 == v47 {
        v23 = 1;
        v20 = 0;
        v49 = 0;
        goto LABEL_53aa58;
    } else {
        v50 = v48 + v47 * 4;
        v51 = v48 + v45 * 4 - v50 >> 2;
        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v51);
        v52 = 0;
        do {
            v2 = alloc::string::String::push(*((v50 + v52 * 4) as &i32));
            v52 += 1;
        } while (v51 != v52);
        v20 = v2;
        v23 = v3;
        v49 = v4;
        v53 = v7;
        if v27 - v53 < v49 {
            v5 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v53, v49);
LABEL_53aa58:
            v54 = v7;
        }
    }
    memcpy(v6 + v54, v23, v49);
    v7 = v54 + v49;
    if v0 < v7 {
        core::panicking::panic(); /* do not return */
    }
    v55 = a5;
    uu_ptx::trim_idx(a4, v55, None, uu_ptx::trim_broken_word_right(a4, v55, None, v56));
    if v45 > v55 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v2 = 0;
    v3 = 1;
    v4 = 0;
    if !v45 {
        v22 = 1;
        v19 = 0;
        v58 = 0;
        goto LABEL_53ab70;
    } else {
        v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v45);
        v59 = 0;
        do {
            v2 = alloc::string::String::push(*((a4 + v59 * 4) as &i32));
            v59 += 1;
        } while (v45 != v59);
        v19 = v2;
        v22 = v3;
        v58 = v4;
        if v28 >= v58 {
LABEL_53ab70:
        } else {
            v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v58);
            v10 = v10;
        }
    }
    memcpy(0 + v9, v22, v58);
    v10 += v58;
    v29 = v10;
    if v42 < v10 {
        core::panicking::panic(); /* do not return */
    }
    v61 = a5;
    v62 = uu_ptx::trim_idx(a4, v61, v45, v61);
    v63 = v0 - (v7 + v24);
    if v63 <= 0 {
        v63 = 0;
    }
    v64 = v63 + v62;
    v67 = uu_ptx::trim_idx(a4, v61, v62, uu_ptx::trim_broken_word_right(a4, v61, v62, v65));
    if v45 < v67 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    } else if v45 > a5 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    } else {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v34 = v67;
        if v45 == v67 {
            v18 = 0;
            v69 = 0;
            v16 = 0;
        } else {
            v70 = a4 + v67 * 4;
            v71 = a4 + v45 * 4 - v70 >> 2;
            v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v71);
            v72 = 0;
            do {
                v2 = alloc::string::String::push(*((v70 + v72 * 4) as &i32));
                v72 += 1;
            } while (v71 != v72);
            v18 = v2;
            v68 = v3;
            v69 = v4;
            if v28 >= v69 {
                v16 = 0;
            } else {
                v14 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v69);
                v21 = v15;
            }
        }
        v0 = 1;
        memcpy(v21 + v16, v0, v69);
        v73 = v16 + v69;
        v16 = v73;
        v74 = a1;
        v75 = v1;
        uu_ptx::trim_idx(v74, v75, None, v30);
        v76 = v42 - (v24 + v29);
        if v76 <= 0 {
            v76 = 0;
        }
        v77 = v45 - v76;
        if v77 <= 0 {
            v77 = 0;
        }
        v78 = uu_ptx::trim_idx(v74, v75, uu_ptx::trim_broken_word_left(v74, v75, v77, v45), v45);
        if v45 < v78 {
            core::slice::index::slice_index_order_fail(); /* do not return */
        } else if v45 > v1 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        } else {
            v2 = 0;
            v3 = 1;
            v4 = 0;
            v24 = v45;
            v21 = v78;
            if v45 == v78 {
                v1 = 1;
                v79 = 0;
                goto LABEL_53ae79;
            } else {
                v80 = a1;
                v81 = v80 + v78 * 4;
                v82 = v80 + v45 * 4 - v81 >> 2;
                v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v82);
                v83 = 0;
                do {
                    v2 = alloc::string::String::push(*((v81 + v83 * 4) as &i32));
                    v83 += 1;
                } while (v82 != v83);
                v1 = v3;
                v79 = v4;
                v84 = v13;
                if v27 - v84 < v79 {
                    v11 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v84, v79);
LABEL_53ae79:
                    v85 = v13;
                }
            }
            memcpy(v12 + v85, v1, v79);
            v13 = v85 + v79;
            v86 = v37;
            v87 = v21;
            if v45 != a5 {
                if v45 != v34 {
                    if v45 == a5 {
                        goto LABEL_53afb9;
                    }
                    v25 = &v14;
                    v17 = &v16;
                    v88 = *((v86 + 32) as &i64);
                    v91 = v26;
                    if v14 - v16 >= v91 {
                        v17 = &v16;
                    } else {
                        v14 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v16, v91);
                        goto LABEL_53af68;
                    }
                } else {
                    v88 = *((v86 + 32) as &i64);
                    v73 = v29;
                    v89 = v26;
                    if v8 - v73 < v89 {
                        v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v73, v89);
LABEL_53af68:
                        v17 = v17;
                        v73 = *(v17 as &i64);
                        v90 = v26;
                    }
                }
                memcpy(v73 + *(v25 as &i64), v88, v90);
                *(v17 as &i64) = *(v17 as &i64) + v90;
            }
LABEL_53afb9:
            if v30 {
                if v24 == v87 {
                    v31 = Argument {
                        value: v92 + 24
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v32 = Argument {
                        value: <alloc::string::String as core::fmt::Display>::fmt
                        formatter: &v5
                    };
                    v33 = <alloc::string::String as core::fmt::Display>::fmt;
                    v2 = Arguments {
                        pieces: [&g_461260, &g_461270]
                        args: [&v31, &v32]
                        fmt: None
                    };
                    v4 = &v31;
                    v35 = alloc::fmt::format::format_inner(&v2);
                    v7 = *((&v35 as &char + 16) as &i64);
                    v5 = v35;
                } else if v87 {
                    v31 = Argument {
                        value: v31
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v32 = Argument {
                        value: <alloc::string::String as core::fmt::Display>::fmt
                        formatter: &v11
                    };
                    v33 = <alloc::string::String as core::fmt::Display>::fmt;
                    v2 = Arguments {
                        pieces: [&g_461260, &g_461270]
                        args: [&v31, &v32]
                        fmt: None
                    };
                    v36 = alloc::fmt::format::format_inner(&v2);
                    v13 = *((&v36 as &char + 16) as &i64);
                    v11 = v36;
                }
            }
            *((a0 + 16) as &i64) = v16;
            *(a0 as &i128) = v14;
            *((a0 + 40) as &i64) = v7;
            *((a0 + 24) as &i128) = v5;
            *((a0 + 64) as &i64) = v10;
            *((a0 + 48) as &i128) = v8;
            *((a0 + 72) as &i128) = v11;
            v93 = v13;
            *((a0 + 88) as &i64) = v93;
            return v93;
        }
    }
}
