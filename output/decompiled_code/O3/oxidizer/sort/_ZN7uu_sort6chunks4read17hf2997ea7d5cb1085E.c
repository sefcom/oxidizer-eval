fn uu_sort::chunks::read(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [sp-0x271]
    let v1: i64;  // [sp-0x270]
    let v2: i64;  // [sp-0x268]
    let v3: i64;  // [sp-0x260]
    let v4: i128;  // [sp-0x258], Other Possible Types: struct16
    let v5: i64;  // [sp-0x248]
    let v6: i64;  // [sp-0x238]
    let v7: i64;  // [sp-0x230]
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: i64;  // [sp-0x218]
    let v11: i64;  // [bp-0x208]
    let v12: i64;  // [sp-0x200]
    let v13: i64;  // [sp-0x1f8]
    let v14: i64;  // [bp-0x1f0], Other Possible Types: Enum
    let v15: i64;  // [sp-0x1e8]
    let v16: i64;  // [sp-0x1e0]
    let v17: i64;  // [sp-0x1d8]
    let v18: i64;  // [sp-0x1d0]
    let v19: i64;  // [sp-0x1c8]
    let v20: i64;  // [sp-0x1c0]
    let v21: i64;  // [sp-0x1b8]
    let v22: i64;  // [sp-0x1b0]
    let v23: i128;  // [sp-0x1a8]
    let v24: i64;  // [sp-0x198]
    let v25: i64;  // [sp-0x190]
    let v26: i64;  // [sp-0x188]
    let v27: i64;  // [sp-0x180]
    let v28: i64;  // [sp-0x178]
    let v29: i64;  // [sp-0x170]
    let v30: i64;  // [sp-0x168]
    let v31: i64;  // [sp-0x160], Other Possible Types: Enum
    let v32: i64;  // [sp-0x158]
    let v33: i64;  // [sp-0x150]
    let v34: i64;  // [sp-0x148]
    let v35: i64;  // [sp-0x140]
    let v36: i64;  // [sp-0x138]
    let v37: i64;  // [sp-0x130]
    let v38: i8;  // [bp-0x128]
    let v39: i64;  // [sp-0x120]
    let v40: i64;  // [sp-0x118]
    let v41: i64;  // [sp-0x110]
    let v42: i64;  // [sp-0x108]
    let v43: i64;  // [sp-0x100]
    let v44: i64;  // [sp-0xf8]
    let v45: i64;  // [sp-0xf0]
    let v46: i64;  // [sp-0xe0]
    let v47: i64;  // [sp-0xd8]
    let v48: i64;  // [sp-0xd0]
    let v49: i64;  // [sp-0xc0]
    let v50: i128;  // [bp-0xb8]
    let v51: i128;  // [sp-0xa8]
    let v52: i128;  // [sp-0x98]
    let v53: i128;  // [sp-0x88]
    let v54: i64;  // [sp-0x78]
    let v55: i128;  // [sp-0x68]
    let v56: i128;  // [sp-0x58]
    let v57: i128;  // [sp-0x48]
    let v58: i64;  // [sp-0x28]
    let v59: i64;  // [sp-0x10]
    let v60: i64;  // [bp+0x8]
    let v61: i8;  // [bp+0x10]
    let v62: i8;  // [bp+0x18]
    let v63: i8;  // [bp+0x20]
    let v64: i64;  // r15
    let v65: i64;  // r12
    let v66: i64;  // rcx
    let v67: i64;  // r15
    let v68: i64;  // rbx
    let v69: i64;  // 4096
    let v70: i64;  // r12
    let v71: i64;  // r12
    let v72: i64;  // r15
    let v73: i64;  // r14
    let v74: i64;  // rdi
    let v76: i64;  // rbp
    let v77: i64;  // rbp
    let v78: i64;  // r14
    let v79: i64;  // rsi
    let v80: i64;  // rdi
    let v81: i64;  // rdx
    let v82: i64;  // r13
    let v83: i64;  // r12
    let v84: i64;  // rax
    let v85: i64;  // rdx
    let v86: i64;  // rbx
    let v87: i64;  // r14
    let v100: i64;  // r12
    let v102: i64;  // rax
    let v103: i64;  // rax
    let v104: i64;  // r13
    let v105: i64;  // r13
    let v106: i64;  // r13
    let v107: i64;  // rbp
    let v108: i64;  // r12
    let v110: i64;  // rbp
    let v111: i64;  // rbx
    let v112: i64;  // rdi
    let v113: i64;  // r13
    let v114: i64;  // rcx
    let v115: i64;  // rsi
    let v116: i64;  // rax
    let v117: i64;  // r12
    let v118: i64;  // rbp
    let v119: i64;  // rax
    let v120: i64;  // rax
    let v121: i64;  // rbx
    let v122: i64;  // rax
    let v124: i64;  // r14
    let v125: i64;  // rax
    let v126: i64;  // r12
    let v127: i64;  // r15
    let v128: i64;  // r13
    let v129: i64;  // rax
    let v130: i64;  // r15
    let v131: i64;  // rax
    let v132: i64;  // rax
    let v133: i64;  // rbx
    let v134: i64;  // rdx
    let v135: i64;  // rax
    let v136: i64;  // rax
    let v137: i64;  // r15
    let v138: i128;  // xmm1
    let v139: i128;  // xmm2
    let v140: i128;  // xmm3
    let v141: i128;  // xmm0
    let v142: i128;  // xmm1
    let v143: i128;  // xmm2
    let v144: i128;  // xmm0
    let v145: i64;  // rax

    a5 = a5;
    v59 = v64;
    v58 = v65;
    v13 = *(a2 as &i64);
    v12 = *((a2 + 8) as &i64);
    v46 = *((a2 + 16) as &i64);
    v66 = *((a2 + 32) as &i64);
    v28 = *((a2 + 40) as &i64);
    v6 = *((a2 + 56) as &i64);
    v27 = *((a2 + 64) as &i64);
    v7 = *((a2 + 80) as &i64);
    v26 = *((a2 + 88) as &i64);
    v67 = *((a2 + 112) as &i64);
    v5 = v67;
    v4 = *((a2 + 96) as &i128);
    v68 = *((a5 + 16) as &i64);
    v9 = a4;
    v3 = *((a2 + 24) as &i64);
    v8 = *((a2 + 32) as &i64);
    v2 = *((a2 + 48) as &i64);
    v1 = *((a2 + 72) as &i64);
    if v67 < v68 {
        v70 = v68 + 0x2800;
        v71 = v70 - v67;
        if v70 > v67 {
            if v4 - v67 < v71 {
                v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v67, v71);
                v72 = v5;
            }
            v73 = *((&v4 as &char + 8) as &i64);
            v74 = v73 + v72;
            if v71 >= 2 {
                memset(v74, 0, v71 - 1);
                v72 = v72 + v71 - 1;
                v74 = v73 + v72;
            }
            *(v74 as &i8) = 0;
            v70 = v72 + 1;
        }
        v67 = v70;
        v5 = v67;
        v69 = v9;
    }
    v5 = v5;
    v76 = v67;
    v77 = v76 - v68;
    if v76 < v68 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v78 = v61;
    v29 = a5;
    v79 = *((a5 + 8) as &i64);
    v80 = *((&v4 as &char + 8) as &i64);
    v81 = v68;
    memcpy(v80, *((a5 + 8) as &i64), v68);
    v0 = v62;
    v82 = v80 + v68;
    v11 = v69 >> 1;
    v47 = *(v78 as &i64);
    v25 = "src/uu/sort/src/chunks.rs";
    v10 = "src/uu/sort/src/chunks.rs";
LABEL_51b79c:
    v48 = v77;
    v48 = v48;
    loop {
        v83 = v48;
        v84 = v60;
        v86 = v85;
        if *((*((v84 + 8) as &i64) + 24) as &i64)() {
            if std::io::error::Error::kind(v86) as i8 != 35 {
                v50 = v86;
                v14 = 0;
                v15 = 1;
                v16 = 0;
                v37 = 32;
                v38 = 3;
                v31 = 0;
                v33 = 0;
                v35 = &v14;
                v36 = &g_594b28;
                if <std::io::error::Error as core::fmt::Display>::fmt(&v50, &v31) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v117 = __rust_alloc(32, 8);
                *(v117 as &i64) = v14;
                *((v117 + 8) as &i64) = v15;
                *((v117 + 16) as &i64) = v16;
                *((v117 + 24) as &i32) = 2;
                v118 = &g_594ee8;
                goto LABEL_51bbbb;
            } else {
                continue;
            }
            goto LABEL_51bbbb;
        }
        v87 = *((v60 + 8) as &i64);
        if a3 == 1 {
            continue;
        }
        if v85 {
            v100 = v83 - v86;
            if v83 >= v86 {
                v82 += v86;
                continue;
            }
            goto LABEL_51c261;
        }
        if v83 {
            break;
        }
        v102 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        if v102 {
            v86 = v85 - *((&v4 as &char + 8) as &i64);
        }
        v103 = _ZN6memchr4arch6x86_646memchr11memrchr_raw2FN17hfb33023a4607ce7eE();
        if v103 == 1 {
            if v102 {
                v121 = v86 + 1;
                v11 = v103 | -0x100 | 1;
                goto LABEL_51bcb0;
            } else {
                core::option::unwrap_failed(); /* do not return */
            }
        }
        v104 = v5;
        if v104 <= -10241 {
            if v4 - v104 <= 10239 {
                v4 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v104, 0x2800);
                v106 = v5;
            }
            v107 = v106;
            memset(*((&v4 as &char + 8) as &i64) + v107, 0, 0x2800);
        }
        v5 = v105 + 0x2800;
        v108 = v5;
        if v108 < v104 {
            v122 = "src/uu/sort/src/chunks.rs";
            goto LABEL_51c25c;
        } else {
            v82 = v104 + *((&v4 as &char + 8) as &i64);
        }
    }
    v77 = v48;
    if v77 == v83 {
LABEL_51ba34:
        v114 = v47;
        v115 = *(v114 as &i64);
        if v115 == *((v114 + 8) as &i64) || (*(v114 as &i64) = v115 + 24, v31 = uu_sort::open(v115), v116 = v31, v116 == 2) {
            v5 = v5;
            v121 = v5 - v77;
            v11 = 0;
        } else {
            v117 = v32;
            v118 = v33;
            if !v116 {
                if *(v87 as &i64) {
                    v119();
                }
                v120 = v60;
                *(v120 as &i64) = v117;
                *((v120 + 8) as &i64) = v118;
                goto LABEL_51b79c;
            }
LABEL_51bbbb:
            v129 = a0;
            *(v129 as &i64) = v117;
            a0 = v129;
            *((a0 + 8) as &i64) = v118;
            return a0;
        }
LABEL_51bcb0:
        v30 = v121;
        v124 = v29;
        *((v124 + 16) as &i64) = 0;
        if v30 > v5 {
            v122 = "src/uu/sort/src/chunks.rs";
        } else {
            v125 = *((&v4 as &char + 8) as &i64);
            v126 = v125 + v30;
            v9 = v125;
            v127 = v125 + v5 - v126;
            if *(v124 as &i64) >= v127 {
                v128 = 0;
            } else {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v124, 0, v127);
                v124 = v29;
                v128 = *((v124 + 16) as &i64);
            }
            memcpy(*((v124 + 8) as &i64) + v128, v126, v127);
            *((v124 + 16) as &i64) = v128 + v127;
            if !v30 {
                v132 = a0;
                *((v132 + 8) as &i8) = v11;
                *(v132 as &i64) = 0;
                return a0;
            }
            v130 = v4;
            v31 = v3;
            v32 = v8;
            v33 = v28;
            v34 = v13;
            v35 = v12;
            v36 = v46;
            v43 = &v30;
            v37 = v2;
            v38 = v6;
            v39 = v27;
            v40 = v1;
            v41 = v7;
            v42 = v26;
            v44 = &v62;
            v45 = v63;
            v131 = __rust_alloc(120, 8);
            if !v131 {
                core::option::unwrap_failed(); /* do not return */
            }
            v133 = v131;
            *(v131 as &i64) = v130;
            *((v131 + 8) as &i64) = v9;
            *((v131 + 16) as &i64) = v5;
            v49 = v131;
            v57 = v35;
            v56 = v33;
            v55 = v31;
            v24 = *((&v57 as &char + 8) as &i64);
            v23 = *((&v56 as &char + 8) as &i128);
            v134 = v30;
            if v134 > v5 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v14 = core::str::converts::from_utf8(v9, v134);
            if v14 {
                v14 = 8;
                v15 = v15;
                v16 = v16;
                v135 = __rust_alloc(64, 8);
                v141 = v14;
                v142 = v16;
                v143 = v18;
                *((v135 + 48) as &i64) = v20;
                *((v135 + 32) as &i128) = v143;
                *((v135 + 16) as &i128) = v142;
                *(v135 as &i128) = v141;
                v137 = &g_594d38;
            } else {
                v14 = v3;
                v15 = v8;
                v16 = v28;
                v17 = v2;
                v18 = v6;
                v19 = v27;
                v20 = v1;
                v21 = v7;
                v22 = v26;
                uu_sort::chunks::parse_lines(v15, v16, &v23, &v14, v62, v45);
                v136 = v23;
                v135 = *((&v23 as &char + 8) as &i64);
                v137 = v24;
                v138 = v16;
                v139 = v18;
                v140 = v20;
                v50 = v14;
                v51 = v138;
                v52 = v139;
                v53 = v140;
                v54 = v22;
                a0 = a0;
                if v136 != 0x8000000000000000 {
                    *((v133 + 112) as &i64) = v54;
                    v144 = v50;
                    *((v133 + 96) as &i128) = v53;
                    *((v133 + 80) as &i128) = v52;
                    *((v133 + 64) as &i128) = v51;
                    *((v133 + 48) as &i128) = v144;
                    *((v133 + 24) as &i64) = v136;
                    *((v133 + 32) as &i64) = v135;
                    *((v133 + 40) as &i64) = v137;
                    v145 = std::sync::mpmc::Sender<T>::send(a1, v133, v85);
                    if !v145 {
                        *((a0 + 8) as &i8) = v11;
                        *(a0 as &i64) = 0;
                        return a0;
                    }
                    v31 = v145;
                    core::result::unwrap_failed(); /* do not return */
                }
            }
            *(a0 as &i64) = v135;
            *((a0 + 8) as &i64) = v137;
            return a0;
        }
    } else {
        v110 = v5;
        v111 = v110 - v83;
        v112 = v111 - 1;
        if v112 >= v110 {
LABEL_51c2e4:
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v113 = *((&v4 as &char + 8) as &i64);
        if *((v113 + v112) as &i8) != v0 {
            if v110 < v83 {
                v25 = "src/uu/sort/src/chunks.rs";
                goto LABEL_51c2e4;
            } else {
                *((v113 + v111) as &i8) = v0;
                v83 -= 1;
                v111 = v110 - v83;
            }
        }
        if v83 <= v110 {
            v82 = v113 + v111;
            goto LABEL_51ba34;
        } else {
            v122 = "src/uu/sort/src/chunks.rs";
        }
    }
LABEL_51c25c:
    v10 = v122;
LABEL_51c261:
    core::slice::index::slice_start_index_len_fail(); /* do not return */
}
