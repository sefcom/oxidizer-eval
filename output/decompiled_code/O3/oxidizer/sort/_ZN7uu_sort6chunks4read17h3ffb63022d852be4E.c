fn uu_sort::chunks::read(a0: void*, a1: u32, a2: void*, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: u8;  // [sp-0x259]
    let v1: u128;  // [sp-0x258], Other Possible Types: struct16
    let v2: u64;  // [sp-0x248]
    let v3: u64;  // [sp-0x240]
    let v4: u64;  // [sp-0x238]
    let v5: u64;  // [sp-0x230]
    let v6: u64;  // [sp-0x228]
    let v7: u64;  // [sp-0x220]
    let v8: u64;  // [sp-0x218]
    let v9: u64;  // [sp-0x210]
    let v10: u32;  // [bp-0x200]
    let v11: u64;  // [sp-0x1f8]
    let v12: u64;  // [sp-0x1f0]
    let v13: u8;  // [bp-0x1e8], Other Possible Types: Enum, void*
    let v14: u64;  // [sp-0x1e0]
    let v15: u64;  // [sp-0x1d8], Other Possible Types: void*
    let v16: u64;  // [sp-0x1d0]
    let v17: u64;  // [sp-0x1c8]
    let v18: u64;  // [sp-0x1c0]
    let v19: u64;  // [sp-0x1b8]
    let v20: u64;  // [sp-0x1b0]
    let v21: u64;  // [sp-0x1a8]
    let v22: &u64;  // [sp-0x1a0]
    let v23: u128;  // [sp-0x198]
    let v24: u64;  // [sp-0x188]
    let v25: u64;  // [sp-0x180]
    let v26: u64;  // [sp-0x178]
    let v27: u64;  // [sp-0x170]
    let v28: u64;  // [sp-0x168]
    let v29: u64;  // [sp-0x160]
    let v30: u64;  // [sp-0x150]
    let v31: u64;  // [sp-0x148]
    let v32: u64;  // [sp-0x140]
    let v33: &struct_0;  // [sp-0x138]
    let v34: u64;  // [sp-0x130], Other Possible Types: void*
    let v35: u64;  // [sp-0x128]
    let v36: u64;  // [sp-0x120], Other Possible Types: void*
    let v37: u64;  // [sp-0x118]
    let v38: u64;  // [sp-0x110]
    let v39: u64;  // [sp-0x108]
    let v40: u64;  // [sp-0x100]
    let v41: u8;  // [bp-0xf8]
    let v42: u64;  // [sp-0xf0]
    let v43: u64;  // [sp-0xe8]
    let v44: u64;  // [sp-0xe0]
    let v45: u64;  // [sp-0xd8]
    let v46: u64;  // [sp-0xd0]
    let v47: u64;  // [sp-0xc8]
    let v48: u64;  // [sp-0xc0]
    let v49: u64;  // [bp-0xb8]
    let v50: u128;  // [sp-0xa8]
    let v51: u128;  // [sp-0x98]
    let v52: u128;  // [sp-0x88]
    let v53: u64;  // [sp-0x78]
    let v54: u128;  // [sp-0x68]
    let v55: u128;  // [sp-0x58]
    let v56: u128;  // [sp-0x48]
    let v57: u64;  // [sp-0x30]
    let v58: &struct_5;  // [bp+0x8]
    let v59: u8;  // [bp+0x18]
    let v60: i8;  // [bp+0x20]
    let v61: u64;  // rbx
    let v62: u64;  // rcx
    let v63: u64;  // rbx
    let v64: u64;  // rbp
    let v65: u64;  // r13
    let v66: u64;  // r13
    let v67: u64;  // rbx
    let v68: u64;  // r14
    let v69: &u8;  // rdi
    let v70: u64;  // r15
    let v71: u64;  // r15
    let v73: u64;  // rsi
    let v74: u64;  // rdi
    let v75: u64;  // rdx
    let v76: u64;  // rbx
    let v77: &&struct_3;  // r12
    let v78: u64;  // rdx
    let v79: u64;  // rax
    let v80: u64;  // rbx
    let v83: u64;  // r15
    let v84: u64;  // r14
    let v85: u64;  // r15
    let v86: u64;  // r15
    let v87: u64;  // rbx
    let v88: u64;  // rax
    let v89: u64;  // r14
    let v90: u64;  // rbp
    let v91: &u8;  // rdi
    let v92: u64;  // rbx
    let v93: u64;  // rbx
    let v94: u64;  // rbx
    let v95: u64;  // r15
    let v96: u64;  // r14
    let v97: u64;  // r15
    let v98: &u8;  // rax
    let v99: &u8;  // rdi
    let v100: u64;  // rbx
    let v102: &struct_1;  // rax
    let v103: &u8;  // rcx
    let v104: &struct_2;  // rcx
    let v105: &u64;  // r12
    let v106: u64;  // rax
    let v107: u64;  // r15
    let v108: u64;  // r14
    let v109: void*;  // rbp
    let v110: u64;  // r15
    let v111: &struct_0;  // rax
    let v112: &struct_2;  // rax
    let v113: &struct_0;  // rbx
    let v114: u64;  // rdx
    let v115: &u64;  // rax
    let v116: u64;  // rax
    let v117: u64;  // r14
    let v118: u128;  // xmm1
    let v119: u128;  // xmm2
    let v120: u128;  // xmm3
    let v121: u128;  // xmm0
    let v122: u128;  // xmm1
    let v123: u128;  // xmm2
    let v124: u128;  // xmm0
    let v125: u64;  // rax
    let v126: &struct_2;  // rax
    let v127: &struct_2;  // rax

    a5 = a5;
    v57 = v61;
    a4 = a4;
    v10 = a3;
    v11 = a2->field_0;
    v12 = a2->field_8;
    v62 = a2->field_10;
    v5 = a2->field_18;
    v8 = a2->field_20;
    v27 = a2->field_28;
    v4 = a2->field_30;
    v7 = a2->field_38;
    v26 = a2->field_40;
    v3 = a2->field_48;
    v6 = a2->field_50;
    v25 = a2->field_58;
    v63 = a2->field_70;
    v2 = v63;
    v1 = a2->field_60;
    v64 = a5->field_10;
    v30 = a2->field_10;
    if v63 < v64 {
        v65 = v64 + 0x2800;
        v66 = v65 - v63;
        if v65 > v63 {
            if v1 - v63 < v66 {
                v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v63, v66);
                v67 = v2;
            }
            v68 = *((&v1 as &char + 8) as &i64);
            v69 = v68 + v67;
            if v66 >= 2 {
                memset(v69, 0, v66 - 1);
                v67 = v67 + v66 - 1;
                v69 = v68 + v67;
            }
            *(v69) = 0;
            v65 = v67 + 1;
        }
        v63 = v65;
        v2 = v63;
    }
    v2 = v2;
    v70 = v63;
    v71 = v70 - v64;
    if v70 < v64 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v22 = a5;
    v73 = a5->field_8;
    v74 = *((&v1 as &char + 8) as &i64);
    v75 = v64;
    memcpy(v74, a5->field_8, v64);
    v0 = v59;
    v76 = v74 + v64;
    v9 = a4;
    v32 = a4 >> 1;
    v77 = v58->field_8->field_18;
    v31 = v71;
    loop {
        while (v77()) {
            if std::io::error::Error::kind(v78) as i8 != 35 {
                v49 = v78;
                v13 = 0;
                v14 = 1;
                v15 = 0;
                v40 = 32;
                v41 = 3;
                v34 = 0;
                v36 = 0;
                v38 = &v13;
                v39 = &g_594b28;
                if !<std::io::error::Error as core::fmt::Display>::fmt(&v49, &v34) as i8 {
                    v102 = __rust_alloc(32, 8);
                    v102->field_0 = v13;
                    v102->field_8 = v14;
                    v102->field_10 = v15;
                    v102->field_18 = 2;
                    v104 = a0;
                    v104->field_0 = v102;
                    *(&v104->field_8 as &&u8) = &g_594ee8;
                    return a0;
                }
                core::result::unwrap_failed(); /* do not return */
            }
        }
        if v78 {
            v79 = v71;
            v71 = v79 - v78;
            if v79 < v78 {
                goto LABEL_51a488;
            } else {
                v76 += v78;
                continue;
            }
        }
        if v71 {
            break;
        }
        v80 = v2;
        if v10 == 1 && v80 < v9 {
            if v32 <= v80 {
                v9 = v9;
            }
            v84 = v9;
            v85 = v84;
            v86 = v85 - v80;
            if v85 > v80 {
                if v1 - v80 < v86 {
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v80, v86);
                    v87 = v2;
                }
                v89 = v87;
                v90 = *((&v1 as &char + 8) as &i64);
                v91 = v89 + v90;
                if v86 >= 2 {
                    memset(v91, 0, v86 - 1);
                    v89 = v89 + v86 - 1;
                    v91 = v90 + v89;
                }
                *(v91) = 0;
                v84 = v89 + 1;
            }
            v2 = v84;
            v95 = v2;
            v71 = v95 - v80;
            if v95 < v80 {
                goto LABEL_51a488;
            } else {
                v76 = v80 + *((&v1 as &char + 8) as &i64);
                continue;
            }
        }
        v83 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        if v83 {
            v29 = v78 - *((&v1 as &char + 8) as &i64);
        }
        v88 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        if v88 == 1 {
            if v83 {
                v100 = v29 + 1;
                v10 = v88 | -0x100 | 1;
                v22 = v22;
                goto LABEL_519ea2;
            } else {
                core::option::unwrap_failed(); /* do not return */
            }
        }
        v92 = v2;
        if v92 <= -10241 {
            if v1 - v92 <= 10239 {
                v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v92, 0x2800);
                v94 = v2;
            }
            v96 = v94;
            memset(*((&v1 as &char + 8) as &i64) + v96, 0, 0x2800);
        }
        v2 = v93 + 0x2800;
        v97 = v2;
        v71 = v97 - v92;
        if v97 >= v92 {
            v76 = v92 + *((&v1 as &char + 8) as &i64);
        } else {
            goto LABEL_51a488;
        }
    }
    v2 = v2;
    v71 = v31;
    if v71 != v71 {
        v98 = v2 - v71;
        v99 = v98 + 1;
        if v99 >= v2 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v103 = *((&v1 as &char + 8) as &i64);
        if *((v103 + v99) as &i8) != v0 {
            if v2 >= v71 {
                *((v103 + v98) as &u8) = v0;
                v71 -= 1;
            } else {
                core::panicking::panic_bounds_check(); /* do not return */
            }
        }
        if v2 < v71 {
            goto LABEL_51a488;
        }
    }
    v100 = v2 - v71;
    v10 = 0;
    v22 = v22;
LABEL_519ea2:
    v105 = v22;
    v28 = v100;
    v105[2] = 0;
    if v28 <= v2 {
        v106 = *((&v1 as &char + 8) as &i64);
        v107 = v106 + v28;
        v9 = v106;
        v108 = v106 + v2 - v107;
        if *(v105) >= v108 {
            v109 = 0;
        } else {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v105, 0, v108);
            v105 = v22;
            v109 = v105[2];
        }
        memcpy(v105[1] + v109, v107, v108);
        v105[2] = v109 + v108;
        if !v28 {
            v112 = a0;
            v112->field_8 = v10;
            v112->field_0 = 0;
            return a0;
        }
        v110 = v1;
        v34 = v5;
        v35 = v8;
        v36 = v27;
        v37 = v11;
        v38 = v12;
        v39 = v30;
        v46 = &v28;
        v40 = v4;
        v41 = v7;
        v42 = v26;
        v43 = v3;
        v44 = v6;
        v45 = v25;
        v47 = &v59;
        v48 = v60;
        v111 = __rust_alloc(120, 8);
        if !v111 {
            core::option::unwrap_failed(); /* do not return */
        }
        v113 = v111;
        v111->field_0 = v110;
        v111->field_8 = v9;
        v111->field_10 = v2;
        v33 = v111;
        v56 = *(&v38 as &i128);
        v55 = *(&v36 as &i128);
        v54 = *(&v34 as &i128);
        v24 = *((&v56 as &char + 8) as &i64);
        v23 = *((&v55 as &char + 8) as &i128);
        v114 = v28;
        if v114 > v2 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v13 = core::str::converts::from_utf8(v9, v114);
        if !v13 as i64 {
            v13 = v5;
            v14 = v8;
            v15 = v27;
            v16 = v4;
            v17 = v7;
            v18 = v26;
            v19 = v3;
            v20 = v6;
            v21 = v25;
            uu_sort::chunks::parse_lines(v14, v15, &v23, &v13, *(&v59 as &i32), v48);
            v116 = v23;
            v115 = *((&v23 as &char + 8) as &i64);
            v117 = v24;
            v118 = *(&v15 as &i128);
            v119 = *(&v17 as &i128);
            v120 = *(&v19 as &i128);
            v49 = *(&v13 as &i128);
            v50 = v118;
            v51 = v119;
            v52 = v120;
            v53 = v21;
            if v116 == 0x8000000000000000 {
                vvar_1339{reg 16} = a0;
                v127->field_0 = v115;
                v127->field_8 = v117;
                return a0;
            }
            v113->field_70 = v53;
            v124 = v49;
            v113->field_60 = v52;
            v113->field_50 = v51;
            v113->field_40 = v50;
            v113->field_30 = v124;
            v113->field_18 = v116;
            v113->field_20 = v115;
            v113->field_28 = v117;
            v125 = std::sync::mpmc::Sender<T>::send(a1, v113, v78);
            if !v125 {
                v126 = a0;
                v126->field_8 = v10;
                v126->field_0 = 0;
                return a0;
            }
            v34 = v125;
            core::result::unwrap_failed(); /* do not return */
        }
        v13 = 8;
        v14 = v14;
        v15 = v15;
        v115 = __rust_alloc(64, 8);
        v121 = v13;
        v122 = *(&v15 as &i128);
        v123 = *(&v17 as &i128);
        *(&v115[6] as &i128) = *(&v19 as &i128);
        v115[4] = v123;
        v115[2] = v122;
        *(v115) = v121;
        goto LABEL_51a1ad;
    }
LABEL_51a488:
    core::slice::index::slice_start_index_len_fail(); /* do not return */
LABEL_51a1ad:
    vvar_1346{reg 16} = a0;
    v127->field_0 = v115;
    *(&v127->field_8 as &&u8) = &g_594d38;
    return a0;
}
