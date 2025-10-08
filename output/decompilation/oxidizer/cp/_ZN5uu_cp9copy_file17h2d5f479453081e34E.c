fn uu_cp::copy_file(a1: i64, a2: &std::path::Path, a3: &std::path::Path, a4: i64, a5: i64, a6: i64, a7: i64, a8: i8) -> : struct8 {
    let a0: void*;  // rdi
    let v0: u64;  // [bp-0x3b8]
    let v1: i64;  // [bp-0x3b0]
    let v2: u64;  // [bp-0x390]
    let v3: u64;  // [bp-0x388]
    let v4: u8;  // [bp-0x380]
    let v5: u8;  // [bp-0x380]
    let v6: u64;  // [sp-0x378]
    let v7: void*;  // [bp-0x378], Other Possible Types: u8
    let v8: i64;  // [bp-0x370], Other Possible Types: u8
    let v9: u8;  // [bp-0x370]
    let v10: u32;  // [bp-0x364]
    let v11: u64;  // [bp-0x360]
    let v13: Option<struct24>;  // [bp-0x358], Other Possible Types: struct_2 *, u64
    let v14: struct24;  // [bp-0x358]
    let v15: u64;  // [bp-0x350]
    let v16: u64;  // [bp-0x350]
    let v17: u64;  // [bp-0x348]
    let v18: core::fmt::Arguments;  // [bp-0x320], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v19: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x320]
    let v20: Result<struct32, struct4>;  // [bp-0x320]
    let v21: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x320], Other Possible Types: struct16, struct24
    let v22: Option<struct56>;  // [bp-0x320]
    let v23: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x320], Other Possible Types: struct24
    let v24: Option<struct56>;  // [bp-0x320]
    let v25: struct16;  // [bp-0x320]
    let v26: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x320]
    let v27: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x320]
    let v28: u64;  // [bp-0x320]
    let v29: struct20;  // [bp-0x320]
    let v30: struct20;  // [bp-0x320]
    let v31: struct16;  // [bp-0x320]
    let v32: u64;  // [bp-0x318]
    let v33: u64;  // [bp-0x308]
    let v34: void*;  // [bp-0x300], Other Possible Types: u64
    let v35: u64;  // [bp-0x2f0]
    let v36: u32;  // [bp-0x2e8]
    let v37: u64;  // [bp-0x2d0]
    let v38: iNone;  // [bp-0x294]
    let v39: iNone;  // [bp-0x284]
    let v40: u32;  // [bp-0x274]
    let v41: u64;  // [bp-0x270]
    let v42: u64;  // [bp-0x268]
    let v43: u64;  // [bp-0x260]
    let v44: u8;  // [bp-0x258]
    let v45: struct4;  // [bp-0x24c]
    let v46: struct144;  // [bp-0x248], Other Possible Types: struct_6 *, struct_7 *, u8
    let v47: u64;  // [bp-0x240]
    let v48: u64;  // [bp-0x230]
    let v49: iNone;  // [bp-0x228]
    let v50: u64;  // [bp-0x218]
    let v51: u32;  // [bp-0x210]
    let v52: u128;  // [bp-0x20c]
    let v53: u128;  // [bp-0x1fc]
    let v54: u128;  // [bp-0x1ec]
    let v55: u128;  // [bp-0x1dc]
    let v56: u128;  // [bp-0x1cc]
    let v57: iNone;  // [bp-0x1bc]
    let v58: iNone;  // [bp-0x1ac]
    let v59: u32;  // [bp-0x19c]
    let v60: iNone;  // [bp-0x188]
    let v61: u64;  // [bp-0x178]
    let v62: u128;  // [bp-0x170]
    let v63: u64;  // [bp-0x160]
    let v64: iNone;  // [bp-0x158]
    let v65: u64;  // [bp-0x148]
    let v66: iNone;  // [bp-0x138]
    let v67: iNone;  // [bp-0x128]
    let v68: iNone;  // [bp-0x118]
    let v69: iNone;  // [bp-0x108]
    let v70: iNone;  // [bp-0xf8]
    let v71: iNone;  // [bp-0xe8]
    let v72: iNone;  // [bp-0xd8]
    let v73: u64;  // [bp-0xc0]
    let v74: u8;  // [bp-0xb8]
    let v75: i64;  // 4096
    let v76: u64;  // r9
    let v77: u64;  // r9
    let v78: u64;  // rdx
    let v79: u64;  // rcx
    let v80: u64;  // r8
    let v81: u64;  // rdx
    let v82: u64;  // rcx
    let v83: u64;  // r8
    let v87: u64;  // r8
    let v89: u64;  // r13
    let v90: u64;  // r15
    let v91: u64;  // rcx
    let v92: u64;  // r8
    let v93: u64;  // rax
    let v94: i64;  // rbp
    let v95: i64;  // r13
    let v96: i64;  // rbp
    let v98: i64;  // r13
    let v99: void*;  // r15
    let v100: u32;  // eax
    let v101: u128;  // xmm0
    let v102: iNone;  // xmm1
    let v103: i64;  // rbp
    let v104: &u64;  // r15
    let v105: i32;  // eax
    let v106: u64;  // rax
    let v108: u64;  // rax
    let v109: i64;  // r15
    let v110: u64;  // rcx
    let v111: u64;  // rax
    let v112: u64;  // rcx
    let v114: u8;  // al
    let v115: i64;  // r9
    let v116: iNone;  // xmm0
    let v117: iNone;  // xmm1
    let v118: u128;  // xmm0
    let v119: iNone;  // xmm1
    let v120: u64;  // rbx
    let v121: iNone;  // xmm0
    let v122: iNone;  // xmm1
    let v123: iNone;  // xmm0
    let v124: iNone;  // xmm1
    let v125: u64;  // [bp-0x358]
    let v128: i64;  // [bp-0x310], Other Possible Types: struct_1 *, struct_5 *, u64
    let v136: struct20;  // [bp-0x248]
    let v137: i64;  // [bp-0x238], Other Possible Types: struct_4 *, u128

    v4 = std::path::Path::is_symlink(a2);
    v9 = std::path::Path::is_symlink(a3);
    v75 = a4;
    v77 = v76;
    if v9 {
        v7 = a0;
        v21 = uucore::features::fs::FileInformation::from_path(a3, v76);
        if !(v21.field_0 as i8 & 1) {
            memcpy(&v46, &v21 as u8, 144);
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(a5, &v46) {
                v41 = v78;
                v42 = v79;
                v13 = v80;
                v15 = v76;
                v46 = &v41;
                v47 = <std::path::Display as core::fmt::Display>::fmt;
                v137 = &v13;
                v48 = <std::path::Display as core::fmt::Display>::fmt;
                v18 = "will not copy '";
                v32 = 3;
                v34 = 0;
                v128 = &v46;
                goto LABEL_4a407f;
            }
        }
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(a6, a3) {
            v41 = v81;
            v42 = v82;
            v13 = v83;
            v15 = v76;
            v46 = &v41;
            v47 = <std::path::Display as core::fmt::Display>::fmt;
            v137 = &v13;
            v48 = <std::path::Display as core::fmt::Display>::fmt;
            v18 = "will not copy '";
            v32 = 3;
            v34 = 0;
            v128 = &v46;
LABEL_4a407f:
            v33 = 2;
            goto LABEL_0x4a408b;
        }
        if !*((a4 + 89) as &i8) {
            if a8 {
                if v5 && !*((a4 + 88) as &i8) {
                    goto LABEL_4a41f5;
                }
            } else {
                if v5 {
LABEL_4a41f5:
                    v90 = v76;
                    a0 = v7;
                    v75 = a4;
                    v77 = v90;
                    if uucore::features::fs::paths_refer_to_same_file(v89, v91, a3, v76) {
                        v75 = a4;
                        v77 = v90;
                        if !*((v75 + 84) as &i8) {
                            v75 = a4;
                            v77 = v90;
                            if *((v75 + 85) as &i8) == 1 {
                                v75 = a4;
                                v77 = v90;
                                if !*((v75 + 101) as &i8) {
                                    std::fs::remove_file(v92, v90);
                                    v75 = a4;
                                    v77 = v90;
                                    if v93 {
                                        goto LABEL_4a4821;
                                    }
                                    goto LABEL_4a4248;
                                }
                            }
                        }
                    }
                }
            }
        }
        v27 = std::fs::metadata(a3);
        if v27 as i32 == 2 && (*((a4 + 84) as &i8) || *((a4 + 85) as &i8) != 1) && !uucore::features::fs::is_symlink_loop(a3) {
            v23 = std::env::var_os();
            if v23.field_0 == 0x8000000000000000 {
                v46 = v87;
                v47 = v76;
                v13 = &v46;
                v15 = <std::path::Display as core::fmt::Display>::fmt;
                v18 = "not writing through dangling symlink '";
                v32 = 2;
                v34 = 0;
                v128 = &v13;
                v33 = 1;
                core::option::Option<T>::map_or_else(v7 + 8, &v18);
                *(v7 as &i64) = 9223372036854775811;
                return;
            }
        }
        goto LABEL_4a41f5;
    }
LABEL_4a4248:
    v94 = v75;
    v3 = v89;
    if uucore::features::fs::are_hardlinks_to_same_file(v89, v91, v92, v77) {
        v95 = v77;
        v136 = std::path::Path::components(v3, v91);
        v29 = std::path::Path::components(v92, v95);
        v77 = v95;
        if !<std::path::Components as core::cmp::PartialEq>::eq(&v136, &v29) && !*((v94 + 84) as &i8) && *((v94 + 85) as &i8) == 1 {
            std::fs::remove_file(v92, v77);
            if v93 {
                goto LABEL_4a4821;
            }
        }
    }
    v96 = v94;
    if !uu_cp::file_or_link_exists(v92, v77) {
LABEL_4a44b2:
        v103 = v96;
        if (*((v94 + 86) as &i8) & v5) && (*((v103 + 84) as &i8) || *((v103 + 85) as &i8) != 1) {
            v46 = 1;
            v47 = v92;
            v137 = v77;
            v48 = 1;
            format!("cannot change attribute {}: Source file is a non regular file", &v46);
            *(a0 as &i64) = 9223372036854775811;
            return;
        }
        v4 = v77;
        if !*((v103 + 80) as &i8) {
            v15 = v16;
            v13 = v125;
            goto LABEL_4a4841;
        }
        v104 = a7;
        v7 = *((v103 + 89) as &i8);
        v31 = uucore::features::fs::FileInformation::from_path(v3, v2, v105 as u64);
        v41 = 1;
        v42 = v3;
        v43 = v2;
        v44 = 1;
        format!("cannot stat {}", &v41);
        if (v31.field_0 as i8 & 1) {
            v106 = v31.field_8;
            *(&a0[24] as &u64) = v63;
            *(&a0[8] as &u128) = v62;
            *(a0 as &i64) = 9223372036854775810;
            *(&a0[32] as &u64) = v106;
            return;
        }
        v61 = *((&v27 as &char + 24) as &i64);
        v60 = *((&v27 as &char + 8) as &i128);
        v66 = *((&v27 as &char + 40) as &i128);
        v67 = *((&v27 as &char + 56) as &i128);
        v68 = *((&v27 as &char + 72) as &i128);
        v69 = *((&v27 as &char + 88) as &i128);
        v70 = *((&v27 as &char + 104) as &i128);
        v71 = v27 as i128;
        v72 = v27 as i128;
        v65 = v61;
        v64 = v60;
        v46 = struct144 {
            field_0: v60
            field_16: v65
            field_24: v34
            field_32: v66
            field_48: v67
            field_64: v68
            field_80: v69
            field_96: v70
            field_112: v71
            field_128: v72
        };
        v108 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v104, &v46);
        if !v108 {
            v15 = v15;
            v13 = v13;
LABEL_4a4841:
            uu_cp::context_for(&v41, v3, v91, v92, v4);
            v6 = v42;
            v11 = v43;
            if (v109 as u8 & 1) || a8 && *((v103 + 88) as &i8) {
                v18 = std::fs::metadata(v3, v91);
            } else {
                v19 = std::fs::symlink_metadata(v3, v91);
            }
            v110 = *((&v19 as &char + 8) as &i64);
            if let Err(_) = v19 {
                v14 = uu_cp::copy_file::{{closure}}(v3, v91, v47);
                v64 = v14.field_8;
                *(&a0[16] as &u128) = v14.field_8;
                goto LABEL_4a4906;
            }
            v59 = v40;
            v58 = v39;
            v57 = v38;
            v56 = *((&v27 as &char + 124) as &i128);
            v55 = *((&v19 as &char + 108) as &i128);
            v54 = *((&v19 as &char + 92) as &i128);
            v53 = *((&v19 as &char + 76) as &i128);
            v52 = *((&v19 as &char + 60) as &i128);
            v49 = *((&v19 as &char + 32) as &i128);
            v50 = v35;
            v137 = *((&v19 as &char + 16) as &i128);
            v46 = v19 as i64;
            v47 = v110;
            v51 = v36;
            v20 = uu_cp::calculate_dest_permissions(v92, v4, v51, *((v103 + 74) as &i8), *((v103 + 75) as &i8), v6, v11);
            match v20 {
                Err(v45) => {
                    v10 = 1;
                    v1 = ((v51 & 0xf000) == 0x1000) as u8 as u64;
                    v0 = a8 as u64;
                    uu_cp::handle_copy_mode(&v20, v3, v91, v92, v4, v103, v6, v11, &v46, a5);
                    v114 = *((&v20 as &char + 8) as &i8);
                    match v20 {
                        Err(_) => {
                            if *((v103 + 96) as &i8) && !(v114 & 1) {
                                uu_cp::print_verbose_output(*((v103 + 92) as &i8), a1, v3, v91, v92, v4);
                            }
                            if !v8 {
                                v28 = std::fs::set_permissions(v92, v4, v45 as u64);
                            }
                            if (v109 as u8 & 1) || a8 && *((v103 + 88) as &i8) {
                                v8 = v115;
                                uucore::features::fs::canonicalize(&v13, v3, v91, 0, 1);
                                if v13 == 0x8000000000000000 {
                                    goto LABEL_4a4d66;
                                }
                                v6 = v15;
                                v11 = v17;
                                v21 = std::fs::metadata(v15, v17);
                                if v21 as i64 as i32 == 2 {
                                    goto LABEL_4a4d66;
                                }
                                v22 = uu_cp::copy_attributes(v6, v11, v92, v4, v8);
                                if let None = v22 {
                                    goto LABEL_4a4d66;
                                }
                                v116 = *((&v22 as &char + 8) as &i128);
                                v117 = *((&v22 as &char + 24) as &i128);
                                *(&a0[40] as &i128) = *((&v22 as &char + 40) as &i128);
                                a0[24] = v117;
                                a0[8] = v116;
                                *(a0 as &i64) = v22 as i64;
                            } else {
                                if v10 as i8 {
                                    v8 = v115;
                                    v23 = std::fs::metadata(v3, v91);
                                    v115 = v8;
                                    if v23 as i64 as i32 == 2 {
                                        goto LABEL_4a4c78;
                                    }
LABEL_4a4d66:
                                    v25 = uucore::features::fs::FileInformation::from_path(v3, v91, (v109 as u32 & 1) as u64);
                                    v120 = v25.field_8;
                                    if v25.field_0 as i32 == 1 {
                                        *(a0 as &i64) = 9223372036854775809;
                                        *(&a0[8] as &u64) = v120;
                                    } else {
                                        memcpy(&v74, &v128, 136);
                                        v73 = v120;
                                        v21 = std::sys::pal::unix::os::split_paths::bytes_to_path(v92 as u32);
                                        v13 = hashbrown::map::HashMap<K,V,S,A>::insert(v104, &v73, &v21);
                                        if a1 {
                                            v26 = std::fs::metadata(v3, v91);
                                            if let Ok(_) = v26 {
                                                indicatif::progress_bar::ProgressBar::inc(a1, v37);
                                                goto LABEL_4a4e55;
                                            }
LABEL_4a4906:
                                            *(a0 as &u64) = v112;
                                            *(&a0[8] as &u64) = v111;
                                        } else {
LABEL_4a4e55:
                                            *(a0 as &i64) = 9223372036854775820;
                                        }
                                    }
                                } else {
LABEL_4a4c78:
                                    v24 = uu_cp::copy_attributes(v3, v91, v92, v4, v115);
                                    if let None = v24 {
                                        goto LABEL_4a4d66;
                                    }
                                    v118 = *((&v24 as &char + 8) as &i128);
                                    v119 = *((&v24 as &char + 24) as &i128);
                                    *(&a0[40] as &i128) = *((&v24 as &char + 40) as &i128);
                                    a0[24] = v119;
                                    *(&a0[8] as &u128) = v118;
                                    *(a0 as &i64) = v24 as i64;
                                }
                            }
                        },
                        Ok(_) => {
                            v121 = *((&v20 as &char + 9) as &i128);
                            v122 = *((&v19 as &char + 25) as &i128);
                            *(&a0[40] as &i128) = *((&v19 as &char + 40) as &i128);
                            a0[25] = v122;
                            a0[9] = v121;
                            *(a0 as &i64) = v20 as i64;
                            *(&a0[8] as &u8) = v114;
                        },
                    }
                },
                Ok(_) => {
                    v123 = *((&v20 as &char + 12) as &i128);
                    v124 = *((&v19 as &char + 28) as &i128);
                    *(&a0[40] as &i128) = *((&v19 as &char + 40) as &i128);
                    a0[28] = v124;
                    a0[12] = v123;
                    *(a0 as &i64) = v20 as i64;
                    *(&a0[8] as &struct4) = v45;
                },
            }
            return;
        }
        std::fs::hard_link(v108 + 144, v92, v4);
        if v93 {
LABEL_4a4821:
            *(a0 as &i64) = 9223372036854775809;
            *(&a0[8] as &u64) = v93;
            return;
        }
        if *((v103 + 96) as &i8) {
            uu_cp::print_verbose_output(*((v103 + 92) as &i8), a1, v3, v91, v92, v4);
        }
LABEL_4a4be2:
        *(a0 as &i64) = 9223372036854775820;
        return;
    } else if (*((v94 + 86) as &i8) & 1) {
        v96 = v94;
        if !*((v96 + 84) as &i8) {
            v96 = v94;
            if *((v96 + 85) as &i8) == 1 {
                goto LABEL_4a42dc;
            }
            goto LABEL_4a44b2;
        }
    } else {
LABEL_4a42dc:
        if (!v98 as u8 & uucore::features::fs::paths_refer_to_same_file(v3, v91, v92, v77, 1)) {
            if v5 {
                if v8 && *((v94 + 89) as &i8) {
                    goto LABEL_4a435d;
                }
                goto LABEL_4a4be2;
            } else {
                if !*((v94 + 101) as &i8) || v8 {
                    goto LABEL_4a435d;
                }
                v11 = *((v94 + 103) as &i8);
                v7 = a0;
                v136 = std::path::Path::components(v3, v91);
                v29 = std::path::Path::components(v92, v77);
                if !<std::path::Components as core::cmp::PartialEq>::eq(&v136, &v29) {
                    *(v7 as &i64) = 9223372036854775820;
                    return;
                }
                a0 = v7;
                if !*((v94 + 85) as &i8) && !*((v94 + 84) as &i8) {
                    goto LABEL_4a435d;
                }
                goto LABEL_4a4be2;
            }
        }
LABEL_4a435d:
        v99 = a0;
        uu_cp::handle_existing_dest(&v29, v3, v91, v92, v77, v94, a8, a7);
        if v30.field_0 != 9223372036854775820 {
            v101 = *((&v27 as &char + 8) as &i128);
            v102 = *((&v27 as &char + 24) as &i128);
            *(&v99[40] as &i128) = *((&v27 as &char + 40) as &i128);
            v99[24] = v102;
            *(&v99[8] as &u128) = v101;
            *(v99 as &u64) = v30.field_0;
            return;
        }
        a0 = v99;
        v96 = a4;
        if !uucore::features::fs::are_hardlinks_to_same_file(v3, v91, v92, v77) {
            goto LABEL_4a44b2;
        }
        goto LABEL_4a4be2;
    }
    match (v100) {
        0 => {
            v96 = a4;
            if !(v5 & v8) {
                goto LABEL_4a4be2;
            }
            break;
        }
        _ => {
            v96 = a4;
            break;
        }
    }
    goto LABEL_4a44b2;
}
