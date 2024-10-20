fn uu_ptx::write_traditional_output(a0: void*, a1: void*, a2: &u64, a3: &u8, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x328]
    let v1: i8;  // [sp-0x312]
    let v2: i8;  // [sp-0x311]
    let v3: i64;  // [sp-0x310]
    let v4: i8;  // [sp-0x301]
    let v5: i64;  // [sp-0x300]
    let v6: i64;  // [bp-0x2f8]
    let v7: i64;  // [bp-0x2e8], Other Possible Types: struct96, struct8, Arguments, Enum
    let v8: i64;  // [bp-0x2e0]
    let v9: i8;  // [bp-0x2dc]
    let v10: i64;  // [sp-0x2d8]
    let v11: i64;  // [sp-0x2d0]
    let v12: i64;  // [sp-0x2c8]
    let v13: i64;  // [sp-0x2c0]
    let v14: i64;  // [sp-0x2b8]
    let v15: i64;  // [sp-0x2b0]
    let v16: i64;  // [sp-0x2a8]
    let v17: i64;  // [sp-0x2a0]
    let v18: i64;  // [sp-0x288]
    let v19: i64;  // [sp-0x280]
    let v20: i64;  // [sp-0x278]
    let v21: i64;  // [sp-0x270]
    let v22: i64;  // [sp-0x268]
    let v23: i64;  // [sp-0x260]
    let v24: i64;  // [sp-0x258]
    let v25: i64;  // [sp-0x250]
    let v26: i64;  // [sp-0x240]
    let v27: i64;  // [sp-0x238]
    let v28: i64;  // [sp-0x230]
    let v29: i64;  // [bp-0x228]
    let v30: i64;  // [sp-0x210], Other Possible Types: struct24
    let v31: i64;  // [sp-0x208]
    let v32: i64;  // [sp-0x200]
    let v33: i8;  // [bp-0x1f8]
    let v34: i64;  // [sp-0x1f0]
    let v35: i64;  // [sp-0x1e0]
    let v36: i64;  // [sp-0x1d8]
    let v37: i64;  // [sp-0x1d0], Other Possible Types: String
    let v38: i64;  // [sp-0x1c8]
    let v39: i64;  // [sp-0x1c0]
    let v40: i64;  // [bp-0x1b8], Other Possible Types: struct24, Argument
    let v41: i64;  // [bp-0x1b0], Other Possible Types: Argument
    let v42: i64;  // [sp-0x1a0]
    let v43: i64;  // [sp-0x198]
    let v44: i192;  // [sp-0x190], Other Possible Types: struct24
    let v45: i192;  // [sp-0x178], Other Possible Types: struct24
    let v46: struct24;  // [sp-0x160], Other Possible Types: i192
    let v47: struct24;  // [sp-0x148], Other Possible Types: i192
    let v48: i32;  // [sp-0x12c]
    let v49: i128;  // [sp-0x128]
    let v50: i64;  // [sp-0x118]
    let v51: i64;  // [sp-0x108]
    let v52: i64;  // [sp-0x100]
    let v53: i64;  // [sp-0xf8]
    let v54: i64;  // [sp-0xf0]
    let v55: i64;  // [sp-0xe8]
    let v56: i64;  // [sp-0xe0]
    let v57: i128;  // [sp-0xd8], Other Possible Types: Enum
    let v58: i64;  // [sp-0xd0]
    let v59: i64;  // [sp-0xc8]
    let v60: i64;  // [sp-0xc0]
    let v61: i64;  // [sp-0xb8]
    let v62: i64;  // [sp-0xb0]
    let v63: i64;  // [sp-0xa8]
    let v64: i64;  // [sp-0xa0]
    let v65: i64;  // [sp-0x98]
    let v66: i64;  // [sp-0x90]
    let v67: i128;  // [sp-0x88]
    let v68: i128;  // [sp-0x78]
    let v69: i64;  // [sp-0x60]
    let v70: i64;  // [sp-0x58]
    let v71: i64;  // [sp-0x50]
    let v72: i8;  // [sp-0x48]
    let v73: i64;  // [sp-0x40]
    let v74: i64;  // [sp-0x38]
    let v76: i64;  // rax
    let v77: i64;  // rax
    let v79: i64;  // r13
    let v80: i64;  // 4096
    let v81: i128;  // xmm0
    let v83: i64;  // rbp
    let v84: i128;  // xmm0
    let v85: i256;  // ymm0
    let v86: i256;  // ymm0
    let v87: i64;  // rax
    let v88: i64;  // rax
    let v90: i64;  // rbx
    let v91: i64;  // rax
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm0
    let v96: i256;  // ymm0
    let v97: i64;  // rax
    let v98: i64;  // r14
    let v99: i128;  // xmm0
    let v101: i256;  // ymm0
    let v102: i64;  // rbp
    let v103: i64;  // r15
    let v104: i64;  // rbp
    let v106: i64;  // r13
    let v107: i64;  // r12
    let v108: i64;  // rax
    let v110: i128;  // xmm0
    let v112: i64;  // rax
    let v113: i64;  // rbp
    let v114: i64;  // rax
    let v115: i64;  // r13
    let v116: i64;  // rax
    let v117: i64;  // r14
    let v119: i64;  // rcx
    let v120: i64;  // r14
    let v121: i64;  // r15
    let v122: i64;  // 4096
    let v123: i64;  // rdx
    let v124: i64;  // rdx
    let v125: i64;  // rdx
    let v126: i64;  // r12
    let v127: i64;  // rbp
    let v130: i64;  // rdx
    let v131: i64;  // rax
    let v132: i32;  // ecx
    let v133: i64;  // rcx
    let v134: i64;  // r15
    let v135: i64;  // r14
    let v136: i64;  // rbp
    let v137: i64;  // r12
    let v138: i64;  // rcx
    let v139: i64;  // r15
    let v140: i64;  // r14
    let v141: i64;  // rbp
    let v142: i64;  // r12
    let v143: i64;  // rcx
    let v144: i64;  // rcx
    let v145: i64;  // r15
    let v147: i64;  // r15
    let v151: i64;  // rdx
    let v152: i64;  // rdx
    let v153: i64;  // rax
    let v154: i64;  // rax
    let v155: i64;  // rbp
    let v156: i64;  // rbp
    let v157: i64;  // rdx
    let v158: i64;  // rdx
    let v164: i64;  // rbx
    let v165: i64;  // rbx
    let v169: i64;  // rbx
    let v170: i64;  // rbx
    let v175: i64;  // r9
    let v176: i64;  // r9
    let v177: i64;  // rsi
    let v179: i64;  // rsi
    let v181: i128;  // xmm0
    let v182: i64;  // rax
    let v183: i128;  // xmm0

    if a4 != 1 || *(a3 as &i8) != 45 {
        v7 = struct8 {
            field_0: 0x1b600000000
        };
        v8 = 0;
        v9 = 0;
        v9 = 1;
        v57 = std::fs::OpenOptions::_open(&v7, a3, a4);
        if v57 {
            v7 = 0;
            v8 = 1;
            v10 = 0;
            v11 = v58;
            v77 = __rust_alloc(32, 8);
            v81 = v7;
            *((v77 + 16) as &i64) = v10;
            *(v77 as &i128) = v81;
            return v77;
        }
        v76 = __rust_alloc(4, 4);
        *(v76 as &i32) = *((&v57 as &char + 4) as &i32);
        v79 = &g_67b9d8;
    } else {
        v76 = __rust_alloc(8, 8);
        *(v76 as &long long) = std::io::stdio::stdout();
        v79 = &g_67ba28;
    }
    v83 = v80;
    v69 = 0x2000;
    v70 = __rust_alloc(0x2000, 1);
    v71 = 0;
    v72 = 0;
    v73 = v76;
    v74 = v79;
    regex::regex::string::Regex::new(&v7, *((v83 + 56) as &i64), *((v83 + 64) as &i64));
    if !v7 {
        v59 = v11;
        v57 = v8;
        core::result::unwrap_failed(); /* do not return */
    }
    v84 = v7;
    vvar_39{reg 224} = ((vvar_575{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_574{reg 224}))
    v68 = v10;
    v67 = v84;
    v87 = *(a2 as &i64);
    *(&v57 as &Enum) = Enum {
        field_0: -0x100 | (v87) as u8 as u64
        field_8: 0
        field_16: v87
    };
    v61 = v57;
    v62 = 0;
    v63 = v87;
    v64 = v60;
    v65 = v88;
    if *((a1 + 24) as &i64) {
        v66 = a1 + 32;
        v55 = *((a1 + 8) as &i64);
        v54 = *(a1 as &i64);
        v56 = v54 - 80;
        v1 = *((v83 + 90) as &i8);
        v4 = *((v83 + 89) as &i8);
        v2 = v1 | v4;
        v48 = *((v83 + 93) as &i8);
        v5 = 0;
        v52 = "src/uu/ptx/src/ptx.rs";
        v25 = "src/uu/ptx/src/ptx.rs";
        v53 = "src/uu/ptx/src/ptx.rs";
        v51 = "src/uu/ptx/src/ptx.rs";
        v24 = "src/uu/ptx/src/ptx.rs";
        v7 = v7;
        loop {
LABEL_53bb00:
            v7 = v7;
            v90 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v57);
            if !v90 {
                break;
            }
            v91 = core::hash::BuildHasher::hash_one(v66, v90 + 24);
            vvar_641{reg 224} = Conv(64->128, (vvar_89{reg 16} >> 0x39<8>))
            v93 = BinaryOp InterleaveLOV;
            v94 = v93 >> 64 CONCAT v93 CONCAT v93 CONCAT v93 CONCAT v93;
            v95 = v94 CONCAT v94 CONCAT v94 CONCAT v94;
            vvar_96{reg 224} = ((((((((vvar_39{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_641{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_643{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_645{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_647{reg 224}))
            v6 = v95;
            v97 = 0;
            loop {
                v3 = v97;
                v98 = v91 & v55;
                v99 = *((v54 + v98) as &i128);
                v29 = v99;
                vvar_661{reg 224} = ((((vvar_96{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_658{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_658{reg 224} CmpEQV Load(addr=stack_base-760, size=16, endness=Iend_LE))))
                v102 = UnaryOp GetMSBs;
                if v102 {
                    v103 = *((v90 + 40) as &i64);
                    do {
                        v104 = v102;
                        v106 = -((!(v104 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v98 & v55) * 80;
                        if v103 == *((v56 + v106 + 16) as &i64) && (v107 = *((v90 + 32) as &i64), !bcmp(v107, *((v56 + v106 + 8) as &i64), v103)) {
                            v113 = *((v90 + 56) as &i64);
                            v114 = v54;
                            if v113 >= *((v114 + v106 - 40) as &i64) {
                                core::panicking::panic_bounds_check(); /* do not return */
                            }
                            v115 = v106 + v114;
                            v116 = *((v115 - 48) as &i64);
                            v117 = 3 * v113;
                            if v4 {
                                v29 = v116;
                                v30 = 0;
                                v31 = v107;
                                v32 = v103;
                                v33 = 0;
                                v44 = v113 + 1;
                                v40 = Argument {
                                    value: &v30
                                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                                };
                                v41 = Argument {
                                    value: <os_display::Quoted as core::fmt::Display>::fmt
                                    formatter: &v44
                                };
                                v42 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                v7 = Arguments {
                                    pieces: &[&str] {
                                        ptr: &g_67b5a0
                                        len: <UNKNOWN>
                                    }
                                    args: [&v40, &v41]
                                    fmt: None
                                };
                                v8 = 2;
                                v37 = alloc::fmt::format::format_inner(&v7);
                                v38 = v38;
                                v43 = v43;
                            } else {
                                if !v1 {
                                    v37 = 0;
                                    v38 = 1;
                                    v39 = 0;
                                    goto LABEL_53be9a;
                                } else {
                                    v119 = *((v116 + v117 * 8 + 8) as &i64);
                                    v3 = v117;
                                    v29 = v116;
                                    v120 = v119;
                                    v121 = *((v116 + v117 * 8 + 16) as &i64);
                                    v7 = regex::regex::string::Regex::find_at(v67, *((&v67 as &char + 8) as &i64), v120, *((v116 + v117 * 8 + 16) as &i64));
                                    v123 = v7;
                                    if v123 {
                                        v124 = v10;
                                        v123 = v11;
                                    }
                                    v125 = v124;
                                    if v123 < v125 {
                                        core::str::slice_error_fail(); /* do not return */
                                    }
                                    if v125 {
                                        if v125 >= v121 {
                                            if v125 != v121 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        } else {
                                            if *((v120 + v125) as &i8) <= 191 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        }
                                    }
                                    if v123 {
                                        if v123 >= v121 {
                                            if v123 != v121 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        } else {
                                            if *((v120 + v123) as &i8) <= 191 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        }
                                    }
                                    v6 = v120;
                                    v126 = v123 - v125;
                                    if v123 == v125 {
                                        v127 = 1;
                                    } else {
                                        v127 = __rust_alloc(v126, 1);
                                        if !v127 {
                                            v43 = v126;
                                        }
                                    }
                                    memcpy(v38, v6 + v125, v126);
                                    v37 = v126;
                                    v38 = v127;
                                    v39 = v126;
                                    v38 = v38;
                                    v43 = v38;
                                    v117 = v3;
                                }
                            }
                            v38 = v38;
                            v116 = v29;
LABEL_53be9a:
                            v130 = v122;
                            v131 = v116 + v117 * 8;
                            v132 = v48;
                            v43 = v43;
                            if v132 != 1 {
                                if v132 != 2 {
                                    v77 = __rust_alloc(24, 8);
                                    *(v77 as &i8) = 0;
                                    return v77;
                                }
                                if v113 >= *((v115 - 16) as &i64) {
                                    core::panicking::panic_bounds_check(); /* do not return */
                                }
                                v138 = *((v115 - 24) as &i64);
                                v3 = *((v131 + 8) as &i64);
                                v6 = *((v131 + 16) as &i64);
                                v139 = *((v138 + v117 * 8 + 8) as &i64);
                                v140 = *((v138 + v117 * 8 + 16) as &i64);
                                v29 = v38;
                                v36 = v39;
                                v141 = *((v90 + 64) as &i64);
                                v142 = *((v90 + 72) as &i64);
                                v26 = 0;
                                v27 = 1;
                                v28 = 0;
                                v30 = v130;
                                v31 = <alloc::string::String as core::fmt::Display>::fmt;
                                v7 = "\\";
                                v8 = 2;
                                v12 = 0;
                                v10 = &v30;
                                v11 = 1;
                                if core::fmt::write(&v26, &g_67b300, &v7) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                v144 = v141;
                                if !v1 {
                                    if v144 > v140 {
                                        v51 = "src/uu/ptx/src/ptx.rs";
                                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                                    }
                                } else {
                                    if v144 {
                                        if v144 >= v6 {
                                            if v144 != v6 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        } else {
                                            if *((v3 + v144) as &i8) <= 191 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        }
                                    }
                                    core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v3, v144, v29, v36), v152);
                                    v154 = v141 - v152;
                                    v158 = v156;
                                    if v158 > v140 {
                                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                                    }
                                }
                                v169 = v142;
                                v170 = v169 - v5;
                                if v169 < v5 {
                                    v5 = v144;
                                    v24 = "src/uu/ptx/src/ptx.rs";
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                if v5 {
                                    if v141 >= v6 {
                                        if v141 != v6 {
                                            vvar_2318{stack -768} = v141;
                                            vvar_2320{stack -600} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    } else {
                                        if *((v3 + v141) as &i8) <= 191 {
                                            vvar_2323{stack -768} = v141;
                                            vvar_2325{stack -600} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    }
                                }
                                if v142 {
                                    if v142 >= v6 {
                                        if v142 != v6 {
                                            v5 = v141;
                                            vvar_2300{stack -600} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    } else {
                                        if *((v3 + v142) as &i8) <= 191 {
                                            vvar_2328{stack -768} = v141;
                                            vvar_2330{stack -600} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    }
                                }
                                v176 = v140;
                                if v176 < v142 {
                                    core::slice::index::slice_index_order_fail(); /* do not return */
                                }
                                v0 = a0;
                                v7 = uu_ptx::get_output_chunks(v147, v158 - v154, v170, v139 + v142 * 4, v176 - v142);
                                v20 = v7;
                                v179 = *((&v7 as &char + 8) as &i64);
                                v19 = v11;
                                v6 = v12;
                                v18 = v14;
                                v23 = v15;
                                v21 = v17;
                                v22 = *((&v7 as &char + 80) as &i64);
                                v35 = v179;
                                v45 = uu_ptx::format_tex_field(v35, v10);
                                v46 = uu_ptx::format_tex_field(v6, v13);
                                v47 = uu_ptx::format_tex_field(v3 + v141, v170);
                                v44 = uu_ptx::format_tex_field(v23, v16);
                                v40 = uu_ptx::format_tex_field(v22, *((&v7 as &char + 88) as &i64));
                                v7 = &v45;
                                v8 = <alloc::string::String as core::fmt::Display>::fmt;
                                v10 = &v46;
                                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                                v12 = &v47;
                                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                                v14 = &v44;
                                v15 = <alloc::string::String as core::fmt::Display>::fmt;
                                v16 = &v40;
                                v17 = <alloc::string::String as core::fmt::Display>::fmt;
                                v30 = "{";
                                v31 = 6;
                                v34 = 0;
                                v32 = &v7;
                                v33 = 5;
                                if core::fmt::write(&v26, &g_67b300, &v30) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                if !v2 {
                                    goto LABEL_53c8ae;
                                }
                                v30 = uu_ptx::format_tex_field(v29, v36);
                                v40 = &v30;
                                v41 = <alloc::string::String as core::fmt::Display>::fmt;
                                v7 = "{";
                                v8 = 2;
                                v12 = 0;
                                v10 = &v40;
                                v11 = 1;
                                if core::fmt::write(&v26, &g_67b300, &v7) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                            } else {
                                if v113 >= *((v115 - 16) as &i64) {
                                    v53 = "src/uu/ptx/src/ptx.rs";
                                    core::panicking::panic_bounds_check(); /* do not return */
                                }
                                v133 = *((v115 - 24) as &i64);
                                v3 = *((v131 + 8) as &i64);
                                v6 = *((v131 + 16) as &i64);
                                v134 = *((v133 + v117 * 8 + 8) as &i64);
                                v135 = *((v133 + v117 * 8 + 16) as &i64);
                                v29 = v38;
                                v36 = v39;
                                v136 = *((v90 + 64) as &i64);
                                v137 = *((v90 + 72) as &i64);
                                v26 = 0;
                                v27 = 1;
                                v28 = 0;
                                v30 = v130;
                                v31 = <alloc::string::String as core::fmt::Display>::fmt;
                                v7 = ".";
                                v8 = 1;
                                v12 = 0;
                                v10 = &v30;
                                v11 = 1;
                                if core::fmt::write(&v26, &g_67b300, &v7) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                v143 = v136;
                                if !v1 {
                                    if v143 > v135 {
                                        v52 = "src/uu/ptx/src/ptx.rs";
                                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                                    }
                                } else {
                                    if v143 {
                                        if v143 >= v6 {
                                            if v143 != v6 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        } else {
                                            if *((v3 + v143) as &i8) <= 191 {
                                                core::str::slice_error_fail(); /* do not return */
                                            }
                                        }
                                    }
                                    core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v3, v143, v29, v36), v151);
                                    v153 = v136 - v151;
                                    v157 = v155;
                                    if v157 > v135 {
                                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                                    }
                                }
                                v164 = v137;
                                v165 = v164 - v5;
                                if v164 < v5 {
                                    v5 = v143;
                                    v25 = "src/uu/ptx/src/ptx.rs";
                                    core::str::slice_error_fail(); /* do not return */
                                }
                                if v5 {
                                    if v136 >= v6 {
                                        if v136 != v6 {
                                            vvar_2303{stack -768} = v136;
                                            vvar_2305{stack -592} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    } else {
                                        if *((v3 + v136) as &i8) <= 191 {
                                            vvar_2308{stack -768} = v136;
                                            vvar_2310{stack -592} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    }
                                }
                                if v137 {
                                    if v137 >= v6 {
                                        if v137 != v6 {
                                            v5 = v136;
                                            vvar_2297{stack -592} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    } else {
                                        if *((v3 + v137) as &i8) <= 191 {
                                            vvar_2313{stack -768} = v136;
                                            vvar_2315{stack -592} = "src/uu/ptx/src/ptx.rs";
                                            core::str::slice_error_fail(); /* do not return */
                                        }
                                    }
                                }
                                v175 = v135;
                                if v175 < v137 {
                                    core::slice::index::slice_index_order_fail(); /* do not return */
                                }
                                v0 = a0;
                                v7 = uu_ptx::get_output_chunks(v145, v157 - v153, v165, v134 + v137 * 4, v175 - v137);
                                v20 = v7;
                                v177 = *((&v7 as &char + 8) as &i64);
                                v19 = v11;
                                v6 = v12;
                                v18 = v14;
                                v23 = v15;
                                v21 = v17;
                                v22 = *((&v7 as &char + 80) as &i64);
                                v35 = v177;
                                v45 = uu_ptx::format_roff_field(v35, v10);
                                v46 = uu_ptx::format_roff_field(v6, v13);
                                v47 = uu_ptx::format_roff_field(v3 + v136, v165);
                                v44 = uu_ptx::format_roff_field(v23, v16);
                                v40 = uu_ptx::format_roff_field(v22, *((&v7 as &char + 88) as &i64));
                                v7 = &v45;
                                v8 = <alloc::string::String as core::fmt::Display>::fmt;
                                v10 = &v46;
                                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                                v12 = &v47;
                                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                                v14 = &v44;
                                v15 = <alloc::string::String as core::fmt::Display>::fmt;
                                v16 = &v40;
                                v17 = <alloc::string::String as core::fmt::Display>::fmt;
                                v30 = " \"";
                                v31 = 6;
                                v34 = 0;
                                v32 = &v7;
                                v33 = 5;
                                if core::fmt::write(&v26, &g_67b300, &v30) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                if !v2 {
                                    goto LABEL_53c8ae;
                                }
                                v30 = uu_ptx::format_roff_field(v29, v36);
                                v40 = &v30;
                                v41 = <alloc::string::String as core::fmt::Display>::fmt;
                                v7 = " \"";
                                v8 = 2;
                                v12 = 0;
                                v10 = &v40;
                                v11 = 1;
                                if core::fmt::write(&v26, &g_67b300, &v7) as i8 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                            }
LABEL_53c8ae:
                            v50 = v28;
                            v181 = v26;
                            vvar_39{reg 224} = ((vvar_661{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1309{reg 224}))
                            v49 = v181;
                            v30 = &v49;
                            v31 = <alloc::string::String as core::fmt::Display>::fmt;
                            v7 = struct8 {
                                field_0: &g_67baf0
                            };
                            v8 = 2;
                            v12 = 0;
                            v10 = &v30;
                            v11 = 1;
                            v182 = std::io::Write::write_fmt(&v69, &v7);
                            if !v182 {
                                v7 = v7;
                                if v37 {
                                    v7 = v7;
                                    goto LABEL_53bb00;
                                }
                            } else {
                                v7 = 0;
                                v8 = 1;
                                v10 = 0;
                                v11 = v182;
                                v77 = __rust_alloc(32, 8);
                                v183 = v7;
                                *((v77 + 16) as &i64) = v10;
                                *(v77 as &i128) = v183;
                                if v49 {
                                    return v77;
                                }
                            }
                        }
                    } while ((v108 = v104 - 1 & 4294967295, (v108 as i16 & v104 as i16)));
                }
                v110 = v29;
                vvar_96{reg 224} = ((((vvar_661{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_714{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_714{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                if UnaryOp GetMSBs {
                    core::option::expect_failed(); /* do not return */
                }
                v112 = v3;
                v91 = v98 + v112 + 16;
                v97 = v112 + 16;
            }
        }
    } else if <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v57) {
        core::option::expect_failed(); /* do not return */
    }
    return 0;
}
