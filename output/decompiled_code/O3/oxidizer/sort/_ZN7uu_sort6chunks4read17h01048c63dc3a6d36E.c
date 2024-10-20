fn uu_sort::chunks::read(a0: void*, a1: u32, a2: void*, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: u8;  // [sp-0x269]
    let v1: u128;  // [sp-0x268], Other Possible Types: struct16
    let v2: u64;  // [sp-0x258]
    let v3: &struct_1;  // [bp-0x248]
    let v4: u64;  // [sp-0x240]
    let v5: u64;  // [sp-0x238]
    let v6: u64;  // [sp-0x230]
    let v7: u64;  // [sp-0x228]
    let v8: u64;  // [sp-0x220]
    let v9: u64;  // [sp-0x218]
    let v10: u64;  // [sp-0x210]
    let v11: u64;  // [sp-0x208]
    let v12: u32;  // [bp-0x200]
    let v13: u64;  // [sp-0x1f8]
    let v14: u64;  // [sp-0x1f0]
    let v15: u128;  // [bp-0x1e8], Other Possible Types: Enum, void*
    let v16: u64;  // [sp-0x1e0]
    let v17: u64;  // [sp-0x1d8], Other Possible Types: void*
    let v18: u64;  // [sp-0x1d0]
    let v19: u64;  // [sp-0x1c8]
    let v20: u64;  // [sp-0x1c0]
    let v21: u64;  // [sp-0x1b8]
    let v22: u64;  // [sp-0x1b0]
    let v23: u64;  // [sp-0x1a8]
    let v24: &u64;  // [sp-0x1a0]
    let v25: u128;  // [sp-0x198]
    let v26: u64;  // [sp-0x188]
    let v27: u64;  // [sp-0x180]
    let v28: u64;  // [sp-0x178]
    let v29: u64;  // [sp-0x170]
    let v30: u64;  // [sp-0x168]
    let v31: u64;  // [sp-0x160]
    let v32: u64;  // [sp-0x150]
    let v33: u64;  // [sp-0x148]
    let v34: u64;  // [sp-0x140]
    let v35: &struct_2;  // [sp-0x138]
    let v36: u64;  // [sp-0x130], Other Possible Types: void*
    let v37: u64;  // [sp-0x128]
    let v38: u64;  // [sp-0x120], Other Possible Types: void*
    let v39: u64;  // [sp-0x118]
    let v40: u64;  // [sp-0x110]
    let v41: u64;  // [sp-0x108]
    let v42: u64;  // [sp-0x100]
    let v43: u8;  // [bp-0xf8]
    let v44: u64;  // [sp-0xf0]
    let v45: u64;  // [sp-0xe8]
    let v46: u64;  // [sp-0xe0]
    let v47: u64;  // [sp-0xd8]
    let v48: u64;  // [sp-0xd0]
    let v49: u64;  // [sp-0xc8]
    let v50: u64;  // [sp-0xc0]
    let v51: u64;  // [bp-0xb8]
    let v52: u128;  // [sp-0xa8]
    let v53: u128;  // [sp-0x98]
    let v54: u128;  // [sp-0x88]
    let v55: u64;  // [sp-0x78]
    let v56: u128;  // [sp-0x68]
    let v57: u128;  // [sp-0x58]
    let v58: u128;  // [sp-0x48]
    let v59: u64;  // [sp-0x30]
    let v60: u64;  // [bp+0x8]
    let v61: u8;  // [bp+0x18]
    let v62: i8;  // [bp+0x20]
    let v63: u64;  // rbx
    let v64: u64;  // rcx
    let v65: u64;  // rbx
    let v66: u64;  // r15
    let v67: u64;  // r13
    let v68: u64;  // r13
    let v69: u64;  // rbx
    let v70: u64;  // r14
    let v71: &u8;  // rdi
    let v72: u64;  // rbx
    let v73: u64;  // r14
    let v74: u64;  // r14
    let v75: u64;  // r13
    let v76: u64;  // rbx
    let v77: u64;  // rbx
    let v78: u64;  // rdi
    let v79: u64;  // rsi
    let v80: u64;  // rdx
    let v81: u64;  // rdx
    let v82: u64;  // rax
    let v83: u64;  // rbx
    let v86: u64;  // r15
    let v87: u64;  // r14
    let v88: u64;  // r15
    let v89: u64;  // r15
    let v90: u64;  // rbx
    let v91: u64;  // rax
    let v92: u64;  // r14
    let v93: u64;  // rbp
    let v94: &u8;  // rdi
    let v95: u64;  // rbx
    let v96: u64;  // rbx
    let v97: &struct_1;  // rbp
    let v98: u64;  // rbx
    let v99: u64;  // r15
    let v100: u64;  // r14
    let v101: u64;  // r15
    let v103: &u8;  // rax
    let v104: &u8;  // rdi
    let v105: u64;  // rbx
    let v107: &struct_3;  // rax
    let v108: &u8;  // rcx
    let v110: &u64;  // r12
    let v111: u64;  // rax
    let v112: u64;  // r15
    let v113: u64;  // r14
    let v114: void*;  // rbp
    let v115: u64;  // r15
    let v116: &struct_2;  // rax
    let v117: &struct_2;  // rbx
    let v118: u64;  // rdx
    let v119: &u64;  // rax
    let v120: u64;  // rax
    let v121: u64;  // r14
    let v122: u128;  // xmm1
    let v123: u128;  // xmm2
    let v124: u128;  // xmm3
    let v125: u128;  // xmm0
    let v126: u128;  // xmm1
    let v127: u128;  // xmm2
    let v128: u128;  // xmm0
    let v129: u64;  // rax

    a5 = a5;
    v59 = v63;
    a4 = a4;
    v12 = a3;
    a0 = a0;
    v13 = a2->field_0;
    v14 = a2->field_8;
    v64 = a2->field_10;
    v6 = a2->field_18;
    v9 = a2->field_20;
    v29 = a2->field_28;
    v5 = a2->field_30;
    v8 = a2->field_38;
    v28 = a2->field_40;
    v4 = a2->field_48;
    v7 = a2->field_50;
    v27 = a2->field_58;
    v65 = a2->field_70;
    v2 = v65;
    v1 = a2->field_60;
    v66 = a5->field_10;
    v32 = a2->field_10;
    if v65 < v66 {
        v67 = v66 + 0x2800;
        v68 = v67 - v65;
        if v67 > v65 {
            if v1 - v65 < v68 {
                v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v65, v68);
                v69 = v2;
            }
            v70 = *((&v1 as &char + 8) as &i64);
            v71 = v70 + v69;
            if v68 >= 2 {
                a0 = a0;
                memset(v71, 0, v68 - 1);
                v72 = v69 + v68 - 1;
                v71 = v70 + v72;
            }
            *(v71) = 0;
            v67 = v72 + 1;
        }
        v65 = v67;
        v2 = v65;
    }
    v2 = v2;
    v73 = v65;
    v74 = v73 - v66;
    if v73 < v66 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v75 = v60;
    v76 = *((&v1 as &char + 8) as &i64);
    v24 = a5;
    memcpy(v76, a5->field_8, v66);
    v0 = v61;
    v77 = v76 + v66;
    v10 = a4;
    v34 = a4 >> 1;
    v11 = "src/uu/sort/src/chunks.rs";
    v33 = v74;
    loop {
        loop {
            loop {
                v78 = v75;
                v79 = v77;
                v80 = v74;
                if !<std::fs::File as std::io::Read>::read(v75, v79, v74) {
                    break;
                }
                if std::io::error::Error::kind(v81) as i8 != 35 {
                    v51 = v81;
                    v15 = 0;
                    v16 = 1;
                    v17 = 0;
                    v42 = 32;
                    v43 = 3;
                    v36 = 0;
                    v38 = 0;
                    v40 = &v15;
                    v41 = &g_594b28;
                    if !<std::io::error::Error as core::fmt::Display>::fmt(&v51, &v36) as i8 {
                        v107 = __rust_alloc(32, 8);
                        v107->field_0 = v15;
                        v107->field_8 = v16;
                        v107->field_10 = v17;
                        v107->field_18 = 2;
                        a0->field_0 = v107;
                        *(&a0->field_8 as &&u8) = &g_594ee8;
                        return a0;
                    }
                    core::result::unwrap_failed(); /* do not return */
                }
            }
            if !v81 {
                break;
            }
            v82 = v74;
            v74 = v82 - v81;
            if v82 < v81 {
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
            v77 = v79 + v81;
        }
        if v74 {
            break;
        }
        v83 = v2;
        if v12 == 1 && v83 < v10 {
            if v34 <= v83 {
                v10 = v10;
            }
            v87 = v10;
            v88 = v87;
            v89 = v88 - v83;
            if v88 > v83 {
                a0 = a0;
                if v1 - v83 < v89 {
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v83, v89);
                    v90 = v2;
                }
                v92 = v90;
                v93 = *((&v1 as &char + 8) as &i64);
                v94 = v92 + v93;
                if v89 >= 2 {
                    memset(v94, 0, v89 - 1);
                    v92 = v92 + v89 - 1;
                    v94 = v93 + v92;
                }
                *(v94) = 0;
                v87 = v92 + 1;
            }
            v2 = v87;
            v99 = v2;
            v74 = v99 - v83;
            if v99 < v83 {
                vvar_1398{stack -520} = "src/uu/sort/src/chunks.rs";
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
            v77 = v83 + *((&v1 as &char + 8) as &i64);
            continue;
        }
        v3 = a0;
        v86 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        if v86 {
            v31 = v81 - *((&v1 as &char + 8) as &i64);
        }
        v91 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        a0 = v3;
        if !v91 || v91 != 1 {
            v95 = v2;
            if v95 <= -10241 {
                if v1 - v95 <= 10239 {
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v95, 0x2800);
                    v97 = v3;
                    v98 = v2;
                }
                v100 = v98;
                memset(*((&v1 as &char + 8) as &i64) + v100, 0, 0x2800);
            }
            v2 = v96 + 0x2800;
            v101 = v2;
            v74 = v101 - v95;
            if v101 < v95 {
                v11 = "src/uu/sort/src/chunks.rs";
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
            v77 = v95 + *((&v1 as &char + 8) as &i64);
        } else {
            if !v86 {
                core::option::unwrap_failed(); /* do not return */
            }
            v105 = v31 + 1;
            v12 = v91 | -0x100 | 1;
            v24 = v24;
            goto LABEL_519016;
            goto LABEL_519016;
        }
    }
    v2 = v2;
    v74 = v33;
    if v74 != v74 {
        v103 = v2 - v74;
        v104 = v103 + 1;
        if v104 >= v2 {
            goto LABEL_519623;
        } else {
            v108 = *((&v1 as &char + 8) as &i64);
            if *((v108 + v104) as &i8) != v0 {
                if v2 >= v74 {
                    *((v108 + v103) as &u8) = v0;
                    v74 -= 1;
                } else {
LABEL_519623:
                    core::panicking::panic_bounds_check(); /* do not return */
                }
            }
            if v2 < v74 {
                vvar_1394{stack -520} = "src/uu/sort/src/chunks.rs";
                core::slice::index::slice_start_index_len_fail(); /* do not return */
            }
        }
    }
    v105 = v2 - v74;
    v12 = 0;
    v24 = v24;
LABEL_519016:
    v110 = v24;
    v30 = v105;
    v110[2] = 0;
    if v30 > v2 {
        v11 = "src/uu/sort/src/chunks.rs";
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v111 = *((&v1 as &char + 8) as &i64);
    v112 = v111 + v30;
    v10 = v111;
    v113 = v111 + v2 - v112;
    v3 = a0;
    if vvar_1277 >= v113 {
        v114 = 0;
    } else {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v110, 0, v113);
        v110 = v24;
        v114 = v110[2];
    }
    memcpy(v110[1] + v114, v112, v113);
    v110[2] = v114 + v113;
    if !v30 {
        a0 = v3;
        a0->field_8 = v12;
        a0->field_0 = 0;
        return a0;
    }
    v115 = v1;
    v36 = v6;
    v37 = v9;
    v38 = v29;
    v39 = v13;
    v40 = v14;
    v41 = v32;
    v48 = &v30;
    v42 = v5;
    v43 = v8;
    v44 = v28;
    v45 = v4;
    v46 = v7;
    v47 = v27;
    v49 = &v61;
    v50 = v62;
    v116 = __rust_alloc(120, 8);
    a0 = v3;
    if !v116 {
        core::option::unwrap_failed(); /* do not return */
    }
    v117 = v116;
    v116->field_0 = v115;
    v116->field_8 = v10;
    v116->field_10 = v2;
    v35 = v116;
    v58 = *(&v40 as &i128);
    v57 = *(&v38 as &i128);
    v56 = *(&v36 as &i128);
    v26 = *((&v58 as &char + 8) as &i64);
    v25 = *((&v57 as &char + 8) as &i128);
    v118 = v30;
    if v118 > v2 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v15 = core::str::converts::from_utf8(v10, v118);
    if !v15 as i64 {
        v15 = v6;
        v16 = v9;
        v17 = v29;
        v18 = v5;
        v19 = v8;
        v20 = v28;
        v21 = v4;
        v22 = v7;
        v23 = v27;
        uu_sort::chunks::parse_lines(v16, v17, &v25, &v15, *(&v61 as &i32), v50);
        v120 = v25;
        v119 = *((&v25 as &char + 8) as &i64);
        v121 = v26;
        v122 = *(&v17 as &i128);
        v123 = *(&v19 as &i128);
        v124 = *(&v21 as &i128);
        v51 = *(&v15 as &i128);
        v52 = v122;
        v53 = v123;
        v54 = v124;
        v55 = v23;
        if v120 == 0x8000000000000000 {
            a0->field_0 = v119;
            a0->field_8 = v121;
            return a0;
        }
        v117->field_70 = v55;
        v128 = v51;
        v117->field_60 = v54;
        v117->field_50 = v53;
        v117->field_40 = v52;
        v117->field_30 = v128;
        v117->field_18 = v120;
        v117->field_20 = v119;
        v117->field_28 = v121;
        v129 = std::sync::mpmc::Sender<T>::send(a1, v117, v81);
        if !v129 {
            a0->field_8 = v12;
            a0->field_0 = 0;
            return a0;
        }
        v36 = v129;
        core::result::unwrap_failed(); /* do not return */
    }
    v15 = 8;
    v16 = v16;
    v17 = v17;
    v119 = __rust_alloc(64, 8);
    v125 = v15;
    v126 = *(&v17 as &i128);
    v127 = *(&v19 as &i128);
    *(&v119[6] as &i128) = *(&v21 as &i128);
    v119[4] = v127;
    v119[2] = v126;
    *(v119) = v125;
    a0->field_0 = v119;
    *(&a0->field_8 as &&u8) = &g_594d38;
    return a0;
}
