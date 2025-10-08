fn uu_cp::copydir::copy_directory(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: i64, a7: u64, a8: u64, a9: u64) -> int {
    let v0: u8;  // [bp-0x3d8]
    let v1: u8;  // [bp-0x3b9]
    let v2: void*;  // [bp-0x3b8]
    let v3: u32;  // [bp-0x3ac]
    let v4: u64;  // [bp-0x3a8]
    let v5: u64;  // [bp-0x3a0]
    let v6: i64;  // [bp-0x398], Other Possible Types: u64
    let v7: u32;  // [bp-0x38c]
    let v8: Option<struct73>;  // [bp-0x388], Other Possible Types: u64
    let v9: Option<struct32>;  // [bp-0x388], Other Possible Types: struct73
    let v10: struct48;  // [bp-0x388]
    let v13: struct60;  // [bp-0x388]
    let v14: u128;  // [bp-0x380]
    let v15: u64;  // [bp-0x378]
    let v16: u128;  // [bp-0x370]
    let v17: iNone;  // [bp-0x360]
    let v18: u128;  // [bp-0x350]
    let v19: i8;  // [bp-0x347]
    let v20: u8;  // [bp-0x345]
    let v21: u32;  // [bp-0x344]
    let v22: u64;  // [bp-0x340]
    let v23: u64;  // [bp-0x338]
    let v24: u64;  // [bp-0x330]
    let v25: u64;  // [bp-0x328]
    let v26: struct24;  // [bp-0x328], Other Possible Types: struct32, u64
    let v27: Option<struct32>;  // [bp-0x328], Other Possible Types: u64
    let v28: u64;  // [bp-0x328]
    let v29: Option<struct32>;  // [bp-0x328]
    let v30: u64;  // [bp-0x320]
    let v31: u64;  // [bp-0x320]
    let v33: u64;  // [bp-0x320]
    let v34: u64;  // [bp-0x318]
    let v35: u64;  // [bp-0x318]
    let v36: u64;  // [bp-0x318]
    let v37: u64;  // [bp-0x310]
    let v38: u64;  // [bp-0x310]
    let v44: u64;  // [bp-0x2d8]
    let v45: iNone;  // [bp-0x2d8], Other Possible Types: struct24
    let v46: struct24;  // [bp-0x2d8]
    let v47: u64;  // [bp-0x2d0]
    let v48: u64;  // [bp-0x2d0]
    let v49: u64;  // [bp-0x2d0]
    let v50: u128;  // [bp-0x2c8]
    let v51: iNone;  // [bp-0x2b8]
    let v52: u64;  // [bp-0x2a0]
    let v53: u64;  // [bp-0x298]
    let v54: u32;  // [bp-0x28c]
    let v55: std::path::PathBuf;  // [bp-0x288], Other Possible Types: u128
    let v56: u64;  // [bp-0x280]
    let v57: u64;  // [bp-0x278]
    let v58: struct16;  // [bp-0x270], Other Possible Types: u64
    let v59: u64;  // [bp-0x270]
    let v60: u128;  // [bp-0x258]
    let v61: u64;  // [bp-0x258]
    let v62: iNone;  // [bp-0x248]
    let v63: iNone;  // [bp-0x238]
    let v64: struct24;  // [bp-0x220], Other Possible Types: struct56, u64
    let v65: struct24;  // [bp-0x220]
    let v66: u64;  // [bp-0x218]
    let v67: u64;  // [bp-0x218]
    let v68: u64;  // [bp-0x210]
    let v69: u64;  // [bp-0x210]
    let v70: u128;  // [bp-0x208]
    let v71: iNone;  // [bp-0x1f8]
    let v72: Option<struct73>;  // [bp-0x1e8], Other Possible Types: struct24
    let v73: void*;  // [bp-0x1e8], Other Possible Types: struct24, Option<struct56>
    let v74: Result<struct1, struct8>;  // [bp-0x1e8]
    let v75: Result<struct80, struct16>;  // [bp-0x1e8]
    let v76: u64;  // [bp-0x1e0]
    let v77: void*;  // [bp-0x1d8]
    let v78: i8;  // [bp-0x1d0], Other Possible Types: u64
    let v79: u128;  // [bp-0x1c8]
    let v80: u64;  // [bp-0x1b8]
    let v81: u128;  // [bp-0x1b0]
    let v82: u64;  // [bp-0x1a0]
    let v83: void*;  // [bp-0x198]
    let v84: iNone;  // [bp-0x190]
    let v85: u64;  // [bp-0x180]
    let v86: iNone;  // [bp-0x178]
    let v87: iNone;  // [bp-0x168]
    let v88: u64;  // [bp-0x158]
    let v89: u8;  // [bp-0x150]
    let v90: u32;  // [bp-0x14f]
    let v91: u32;  // [bp-0x14c]
    let v92: u128;  // [bp-0x148]
    let v93: struct32;  // [bp-0x138]
    let v94: iNone;  // [bp-0x138]
    let v95: u128;  // [bp-0x128]
    let v96: iNone;  // [bp-0x118]
    let v97: iNone;  // [bp-0x108]
    let v98: iNone;  // [bp-0xf8]
    let v99: u64;  // [bp-0xe0]
    let v100: u64;  // [bp-0xd8]
    let v105: u128;  // [bp-0xb0]
    let v106: u64;  // [bp-0xa0]
    let v107: u128;  // [bp-0x98]
    let v108: u64;  // [bp-0x88]
    let v109: struct73;  // [bp-0x80]
    let v110: u8;  // r13b
    let v111: u64;  // 4096
    let v112: u64;  // rcx
    let v113: u64;  // rax
    let v114: u64;  // rdx
    let v115: u64;  // rax
    let v116: u64;  // rdx
    let v117: u64;  // rax
    let v118: u128;  // xmm0
    let v119: iNone;  // xmm1
    let v120: u32;  // ebx
    let v121: iNone;  // xmm0
    let v122: u128;  // xmm0
    let v123: iNone;  // xmm0
    let v136: u32;  // ecx
    let v137: u32;  // ecx
    let v138: &u8;  // r13
    let v139: u64;  // rbp
    let v140: &u8;  // r12
    let v141: u64;  // rax
    let v142: u128;  // xmm0
    let v143: u128;  // xmm1
    let v144: iNone;  // xmm2
    let v145: u64;  // rax
    let v146: u128;  // xmm0
    let v147: iNone;  // xmm1
    let v148: u64;  // rax
    let v149: u64;  // rax
    let v150: iNone;  // xmm0
    let v151: iNone;  // xmm1
    let v152: u128;  // xmm0
    let v153: iNone;  // xmm1
    let v156: u64;  // [bp-0x388]
    let v157: u64;  // [bp-0x380]
    let v158: u64;  // [bp-0x378]
    let v159: &u64;  // [bp-0x370]
    let v161: u64;  // [bp-0x310]
    let v162: iNone;  // [bp-0x2b0]
    let v163: u64;  // [bp-0x270]
    let v164: u64;  // [bp-0x250]
    let v165: u64;  // [bp-0x1e0]
    let v166: u64;  // [bp-0x1d8]
    let v168: i8;  // [bp-0x1c0], Other Possible Types: u64
    let v169: u64;  // [bp-0x138]

    v24 = a1;
    v110 = *((a6 + 89) as &i8);
    v111 = a2;
    if !v110 {
        v111 = a2;
        if !*((a6 + 88) as &i8) {
            v111 = a2;
            if std::path::Path::is_symlink(v111, a3) {
                uu_cp::copy_file(a0, v24, a2, a3, a4, a5, a6, a7, a8, a9, 1);
                return;
            }
        }
    }
    v112 = v111;
    if !*((a6 + 94) as &i8) {
        v8 = 1;
        v14 = v112;
        v15 = a3;
        v16 = 1;
        format!("-r not specified; omitting directory {}", &v8);
        *(v2 as &i64) = 9223372036854775811;
    }
    v4 = v112;
    v5 = a3;
    v74 = uu_cp::copydir::path_has_prefix(a4, a5, v112, a3);
    if v74 as i8 == 1 {
        *(v2 as &i64) = 9223372036854775809;
        *(&v2[8] as &u64) = v76;
    } else if (*((&v74 as &char + 1) as &i8) & 1) {
        v26 = struct32 {
            field_0: 1
            field_8: v4
            field_16: v5
            field_24: 1
        };
        v113 = std::path::Path::file_name(v4, v5);
        core::option::unwrap(v113);
        v64 = std::path::Path::join(a4, a5, v113, v114);
        v8 = 1;
        v14 = *((&v64.field_0 as &char + 8) as &i128);
        v16 = 1;
        format!("cannot copy a directory, {}, into itself, {}", &v26, &v8);
        *(&v2[24] as &u64) = v106;
        *(&v2[8] as &u128) = v105;
        *(v2 as &i64) = 9223372036854775811;
    } else {
        v1 = *((a6 + 92) as &i8);
        if *((a6 + 92) as &i8) {
            v115 = std::path::Path::parent(v4, v5);
            if !v115 {
                goto LABEL_499f11;
            }
            v46 = std::path::Path::join(a4, a5, v115, v116);
            v73 = uu_cp::copydir::build_dir(&v46, 1, *((a6 + 72) as &i32), *((a6 + 74) as &i8), 0, *(&v0 as &i64));
            v117 = v73 as i64;
            if v117 != 9223372036854775820 {
                v118 = *(&v76 as &i128);
                v119 = *(&v78 as &i128);
                *(&v2[40] as &i128) = *(&v168 as &i128);
                v2[24] = v119;
                *(&v2[8] as &u128) = v118;
                *(v2 as &u64) = v117;
            }
            if *((a6 + 96) as &i8) {
                v65 = std::path::Path::join(a4, a5, v4, v5);
                v6 = &v46;
                v73 = uu_cp::aligned_ancestors(v4, v5, v67, v69);
                v93 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v73);
                v27 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v93);
                if let Some(_) = v27 {
                    v27 = v28;
                    do {
                        v58 = struct16 {
                            field_0: v27
                            field_8: v33
                        };
                        v61 = *(&v36 as &i128) as u128;
                        println!("{} -> {}", &v58, &v61 as u64);
                        v29 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v93);
                        v27 = v28;
                    } while (v27);
                }
            }
            v57 = v46.field_16;
            v55 = v46.field_0;
        } else {
LABEL_499f11:
            v55 = std::sys::pal::unix::os::split_paths::bytes_to_path(a4, a5);
        }
        v120 = *((a6 + 80) as &i8);
        v100 = v56;
        v99 = v57;
        v75 = uu_cp::copydir::Context::new(v4, v5, v56, v57);
        match v75 {
            Err(_) => {
                v64 = v165;
                format!("failed to get current directory {}", &v64);
                *(&v2[24] as &u64) = v108;
                *(&v2[8] as &u128) = v107;
                *(v2 as &i64) = 9223372036854775811;
            },
            Ok(_) => {
                v98 = *((&v75 as &char + 64) as &i128);
                v121 = v75 as i128;
                v97 = *((&v75 as &char + 48) as &i128);
                v96 = *((&v75 as &char + 32) as &i128);
                v95 = *(&v166 as &i128) as u128;
                v94 = v121;
                v61 = 0x8000000000000000;
                v3 = 1;
                v13 = walkdir::WalkDir::new(v4, v5);
                v52 = a6 + 72;
                v20 = *((a6 + 91) as &i8);
                v88 = *(&v13.field_64 as &i64);
                v87 = v17;
                v86 = *(&v13.field_24 as &i128);
                v90 = *(&v19 as &i32) as u32;
                v91 = v21;
                v84 = v13.field_0;
                v85 = v158;
                v73 = 0 as void*;
                v77 = 0;
                v78 = 8;
                v79 = 0 as u128;
                v80 = 8;
                v81 = 0 as u128;
                v82 = 8;
                v83 = 0;
                v89 = v110;
                v92 = 0;
                v7 = *((a6 + 90) as &i8) as u8 as u32;
                v54 = v120;
                v23 = 9223372036854775820;
                v25 = v28;
                v30 = v33;
                v34 = v36;
                v37 = v161;
                v58 = v163;
                v47 = v48;
                loop {
                    loop {
                        vvar_2414{stack -544} = struct56 OrderedDict([(0, 𝜙@64b [((4825902, None), vvar_1501{stack -544}), ((4826185, None), vvar_1501{stack -544}), ((4826685, None), vvar_1501{stack -544}), ((4825255, None), vvar_2107{stack -544})]), (8, 𝜙@64b [((4825902, None), vvar_1502{stack -536}), ((4826185, None), vvar_1502{stack -536}), ((4826685, None), vvar_1502{stack -536}), ((4825255, None), vvar_2108{stack -536})]), (24, 𝜙@128b [((4825902, None), vvar_1521{stack -520}), ((4826185, None), vvar_1521{stack -520}), ((4826685, None), vvar_1521{stack -520}), ((4825255, None), None)]), (40, 𝜙@128b [((4825902, None), vvar_1522{stack -504}), ((4826185, None), vvar_1522{stack -504}), ((4826685, None), vvar_1522{stack -504}), ((4825255, None), None)])])
                        <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v64, &v75);
                        if v64.field_0 != 9223372036854775809 {
                            break;
                        }
                        v123 = v64.field_8;
                        v51 = v71;
                        v50 = v70;
                        v45 = v123;
                        v6 = v47;
                        v53 = v50 as i64;
                        v8 = uu_cp::copydir::Entry::new(&v169, v47, v50 as i64, v7 as u64);
                        match v8 {
                            None => {
                                return struct8 {
                                    field_0: 9223372036854775814
                                };
                            },
                            Some(v109) => {
                                v10 = uu_cp::copydir::copy_direntry(v24, &v109, a6, a7, v54 as u64, a8, a9);
                                if v10.field_0 as i64 != v23 {
                                    v152 = *((&v10.field_0 as &char + 8) as &i128);
                                    v153 = *((&v10.field_16 as &char + 8) as &i128);
                                    v2[40] = v17;
                                    v2[24] = v153;
                                    *(&v2[8] as &u128) = v152;
                                    *(v2 as &i64) = v10.field_0 as i64;
                                } else if (v162 as i32 as i16 & 0xf000) == 0x4000 {
                                    v63 = v71;
                                    v62 = v70;
                                    v60 = v64.field_8;
                                }
                            },
                        }
                    }
                    if v64.field_0 == 9223372036854775810 {
                        break;
                    }
                    v156 = v64.field_0;
                    v122 = v64.field_8;
                    v17 = v71;
                    v16 = v70;
                    v14 = v122;
                    v44 = uucore::util_name();
                    v48 = v116;
                    eprint!("{}: ", &v44);
                    eprintln!("{}", &v156);
                    v25 = v26;
                    v30 = v31;
                    v34 = v35;
                    v37 = v38;
                    v58 = v59;
                    v47 = v49;
                }
                v137 = v136 & -0x100 | 1;
                v24 = 0x8000000000000000;
                if v24 != 0x8000000000000000 {
                    v138 = core::result::Result<T,E>::unwrap(std::path::Path::strip_prefix(v164, v62 as i64, v4, v5), v116, "src/uu/cp/src/copydir.rs");
                    if v138 {
                        v139 = v116;
                        do {
                            v140 = std::path::Path::parent(v138, v139);
                            v26 = std::path::Path::join(v4, v5, v138, v139);
                            v72 = uu_cp::copydir::Entry::new(&v169, &v26, v7 as u64);
                            v141 = v72 as i64;
                            if v141 == 0x8000000000000000 {
                                return struct8 {
                                    field_0: 9223372036854775814
                                };
                            }
                            v22 = 8;
                            v142 = *((&v72 as &char + 8) as &i128);
                            v143 = *((&v72 as &char + 24) as &i128);
                            v144 = *((&v72 as &char + 40) as &i128);
                            v18 = *((&v72 as &char + 56) as &i128) as u128;
                            v17 = v144;
                            v16 = v143;
                            v14 = v142;
                            v156 = v141;
                            v73 = uu_cp::copy_attributes(v157, v158, v18 as i64, *((&v18 as &char + 8) as &i64), v52);
                            v145 = v73 as i64;
                            if v145 != v23 {
                                v146 = *((&v73 as &char + 8) as &i128);
                                v147 = *((&v73 as &char + 24) as &i128);
                                *(&v2[40] as &i128) = *(&v168 as &i128);
                                v2[24] = v147;
                                *(&v2[8] as &u128) = v146;
                                *(v2 as &u64) = v145;
                            }
                            v138 = v140;
                            v139 = v116;
                        } while (v140);
                    }
                }
                if !v1 {
                    return v23;
                }
                v3 = v137;
                v148 = std::path::Path::file_name(v4, v5);
                core::option::unwrap(v148);
                v45 = std::path::Path::join(v100, v99, v148, v116);
                v72 = uu_cp::aligned_ancestors(v4, v5, v47, v45.field_16);
                v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v72);
                v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
                if let Some(_) = v8 {
                    v8 = v156;
                    do {
                        uucore::features::fs::canonicalize(&v64, v8, v157, 0, 1);
                        if v64.field_0 != 0x8000000000000000 {
                            v73 = uu_cp::copy_attributes(v66, v68, v158, v159, v52);
                            v149 = v73 as i64;
                            if v149 != v23 {
                                v150 = *((&v73 as &char + 8) as &i128);
                                v151 = *((&v73 as &char + 24) as &i128);
                                *(&v2[40] as &i128) = *((&v73 as &char + 40) as &i128);
                                v2[24] = v151;
                                v2[8] = v150;
                                *(v2 as &u64) = v149;
                            }
                        }
                        v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26);
                        v8 = v156;
                    } while (v8);
                }
                return v23;
            },
        }
    }
}
