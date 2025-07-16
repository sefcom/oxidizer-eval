fn uu_cp::copy_file(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64, a9: i64, a10: i8) -> Result<struct64, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x400]
    let v1: u8;  // [bp-0x3e8]
    let v2: u8;  // [bp-0x3d9]
    let v3: u64;  // [sp-0x3d8]
    let v4: u8;  // [bp-0x3d0]
    let v5: u8;  // [bp-0x3d0]
    let v6: u8;  // [bp-0x3c8]
    let v7: u8;  // [bp-0x3c8]
    let v8: u64;  // [bp-0x3c0]
    let v9: u64;  // [bp-0x3b8], Other Possible Types: struct24
    let v10: u64;  // [bp-0x3b8]
    let v11: u64;  // [bp-0x3b0]
    let v12: u64;  // [bp-0x3a8]
    let v13: u8;  // [bp-0x3a0]
    let v14: u32;  // [bp-0x394]
    let v15: u64;  // [bp-0x390], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct24
    let v16: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390]
    let v17: struct12;  // [bp-0x390]
    let v18: struct16;  // [bp-0x390]
    let v19: struct16;  // [bp-0x390], Other Possible Types: std::path::PathBuf
    let v20: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390]
    let v21: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390]
    let v22: struct24;  // [bp-0x390]
    let v23: std::path::Components;  // [bp-0x390]
    let v24: std::path::Components;  // [bp-0x390]
    let v25: struct64;  // [bp-0x390]
    let v26: struct16;  // [bp-0x390]
    let v27: u64;  // [bp-0x388]
    let v28: u64;  // [bp-0x378]
    let v29: void*;  // [bp-0x370], Other Possible Types: u64
    let v30: u64;  // [bp-0x340]
    let v31: u128;  // [bp-0x338]
    let v32: u128;  // [bp-0x328]
    let v33: u128;  // [bp-0x318]
    let v34: u8;  // [bp-0x308]
    let v35: u128;  // [bp-0x2d8]
    let v36: u64;  // [bp-0x2d0]
    let v37: u64;  // [bp-0x2c8]
    let v38: u64;  // [bp-0x2c0]
    let v39: u64;  // [bp-0x2b8]
    let v40: u64;  // [bp-0x2b8]
    let v41: struct24;  // [bp-0x2b8]
    let v42: u128;  // [bp-0x2b8]
    let v43: u64;  // [bp-0x2b0]
    let v44: u64;  // [bp-0x2a8], Other Possible Types: std::sys::os_str::bytes::Slice *
    let v45: u64;  // [bp-0x2a0]
    let v46: void*;  // [bp-0x298]
    let v47: u64;  // [bp-0x218], Other Possible Types: std::sys::os_str::bytes::Slice *
    let v48: std::path::Components;  // [bp-0x218]
    let v49: std::path::Components;  // [bp-0x218]
    let v50: u64;  // [bp-0x210]
    let v51: i64;  // [bp-0x208], Other Possible Types: u128
    let v52: u64;  // [bp-0x200]
    let v53: u128;  // [bp-0x1f8]
    let v54: u128;  // [bp-0x1e8]
    let v55: u64;  // [bp-0x1e0]
    let v56: u128;  // [bp-0x1d8]
    let v57: u128;  // [bp-0x1c8]
    let v58: u8;  // [bp-0x1b8]
    let v59: u128;  // [bp-0x1a8]
    let v60: u128;  // [bp-0x198]
    let v61: u128;  // [bp-0x160]
    let v62: u64;  // [bp-0x150]
    let v63: i64;  // [bp-0x148]
    let v64: u64;  // [bp-0x140]
    let v65: u128;  // [bp-0x138]
    let v66: u8;  // [bp-0x128]
    let v67: u8;  // [bp-0x118]
    let v68: u128;  // [bp-0x108]
    let v69: u128;  // [bp-0xf8]
    let v70: u128;  // [bp-0xe8]
    let v71: u128;  // [bp-0xd8]
    let v72: u64;  // [bp-0xc0]
    let v73: u8;  // [bp-0xb8]
    let v74: u64;  // r15
    let v75: i64;  // 4096
    let v76: i64;  // 4096
    let v77: u64;  // rdx
    let v78: i64;  // 4096
    let v79: u64;  // rax
    let v80: i64;  // rbx
    let v81: core::result::Result<(), std::io::error::Error>;  // rax
    let v83: i64;  // rbx
    let v84: core::result::Result<(), std::io::error::Error>;  // rax
    let v86: u64;  // r15
    let v87: u8;  // al
    let v88: u128;  // xmm0
    let v89: u128;  // xmm1
    let v93: i64;  // r12
    let v94: u64;  // rbx
    let v95: u64;  // r15
    let v97: u32;  // eax
    let v101: u64;  // rax
    let v102: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax
    let v103: u64;  // rax
    let v105: u64;  // rbx
    let v106: u64;  // rax
    let v107: u32;  // r15d
    let v108: u128;  // xmm0
    let v109: u128;  // xmm1
    let v110: u64;  // rbx
    let v111: u64;  // rax
    let v112: u128;  // xmm0
    let v113: u128;  // xmm1
    let v114: u128;  // xmm0
    let v115: u128;  // xmm1
    let v116: u64;  // rbx
    let v118: i64;  // [bp-0x380], Other Possible Types: u64

    v74 = a5;
    v6 = std::path::Path::is_symlink(a2, a3);
    v2 = std::path::Path::is_symlink(a4, a5);
    v75 = a6;
    if v2 {
        v19 = uucore::features::fs::FileInformation::from_path(a4, a5, 0);
        if v19.field_0 {
            v76 = a0;
LABEL_5072cf:
            v93 = v76;
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, a4, a5) {
                v9 = a2;
                v11 = a3;
                v39 = a4;
                v43 = a5;
                v47 = &v9;
                v50 = <std::path::Display as core::fmt::Display>::fmt;
                v51 = &v39;
                v52 = <std::path::Display as core::fmt::Display>::fmt;
                v15 = "will not copy '";
                v27 = 3;
                v29 = 0;
                v118 = &v47;
            } else {
                if !(!*((a6 + 65) as &i8) && !(*((a6 + 64) as &i8) & a10) && !((v78 = a6, v7 != 1)) || (v21 = std::fs::metadata(a4, a5), v74 = a5, v78 = a6, v21 as i32 != 2 || !*((a6 + 60) as &i8) && !((v78 = a6, *((v78 + 61) as &i8) != 1)) || (v78 = a6, uucore::features::fs::is_symlink_loop(a4, v74) as i8 || (v22 = std::env::var_os("POSIXLY_CORRECT"), v78 = a6, v22.field_0 != 0x8000000000000000)))) {
                    goto LABEL_5078fe;
                }
                v80 = v78;
                v75 = v80;
                if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v74, 1) as i8 {
                    v75 = v80;
                    if !*((v75 + 60) as &i8) {
                        v75 = v80;
                        if *((v75 + 61) as &i8) == 1 {
                            v75 = v80;
                            if !*((v75 + 76) as &i8) {
                                v81 = std::fs::remove_file(a4, v74);
                                v75 = v80;
                                if let Err(_) = v81 {
                                    return struct16 {
                                        field_0: 2
                                        field_8: v81
                                    };
                                }
                            }
                        }
                    }
                }
                goto LABEL_50758c;
            }
        } else {
            memcpy(&v47, &v19 as u8, 144);
            v76 = a0;
            if !hashbrown::map::HashMap<K,V,S,A>::get_inner(a7, &v47, a2) {
                goto LABEL_5072cf;
            }
            v9 = a2;
            v11 = a3;
            v39 = a4;
            v43 = a5;
            v47 = &v9;
            v50 = <std::path::Display as core::fmt::Display>::fmt;
            v51 = &v39;
            v52 = <std::path::Display as core::fmt::Display>::fmt;
            v15 = "will not copy '";
            v27 = 3;
            v29 = 0;
            v118 = &v47;
        }
        v28 = 2;
        v15 = core::option::Option<T>::map_or_else(v77);
        *(v93 as &i64) = 4;
        return v93;
    } else {
LABEL_50758c:
        v93 = a0;
        v83 = v75;
        if uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, v74) as i8 {
            v48 = std::path::Path::components(a2, a3);
            v23 = std::path::Path::components(a4, v74);
            v83 = a6;
            if !<std::path::Components as core::cmp::PartialEq>::eq(&v48, &v23) && (v83 = a6, !*((v83 + 60) as &i8) && (v83 = a6, *((v83 + 61) as &i8) == 1 && (std::fs::remove_file(a4, v74), v83 = a6, v84))) {
                goto LABEL_507ac4;
            }
        }
        if !uu_cp::file_or_link_exists(a4, v74) as i8 {
            v86 = v74;
        } else if !*((v83 + 62) as &i8) || !((v86 = v74, *((a6 + 60) as &i8) || !((v86 = v74, *((a6 + 61) as &i8) == 1)))) {
            v3 = v74;
            if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v74, 1) as i8 && !*((a6 + 78) as &i8) {
                if v7 {
                    if !v2 {
                        *(v93 as &i64) = 13;
                        return v93;
                    } else if !*((a6 + 65) as &i8) {
                        *(v93 as &i64) = 13;
                        return v93;
                    }
                } else {
                    if !!*((a6 + 76) as &i8) && !v2 {
                        v49 = std::path::Path::components(a2, a3);
                        v24 = std::path::Path::components(a4, v3);
                        if !<std::path::Components as core::cmp::PartialEq>::eq(&v49, &v24) {
                            *(v93 as &i64) = 13;
                            return v93;
                        }
                        v93 = v93;
                        if *((a6 + 60) as &i8) || *((a6 + 61) as &i8) {
                            *(v93 as &i64) = 13;
                            return v93;
                        }
                    }
                }
            }
            v4 = *((a6 + 78) as &i8);
            v25 = uu_cp::handle_existing_dest(a2, v8, a4, v3, a6, a10, a9);
            if v25.field_0 != 13 {
                *((v93 + 56) as &i64) = *((&v25.field_32 as &char + 8) as &i64);
                v88 = *(&(&v25.field_0)[1] as &i128);
                v89 = *((&v25.field_8 as &char + 8) as &i128);
                *((v93 + 40) as &i128) = *(&(&v25.field_24)[1] as &i128);
                *((v93 + 24) as &u128) = v89;
                *((v93 + 8) as &u128) = v88;
                *(v93 as &u64) = v25.field_0;
                return v93;
            }
            if uucore::features::fs::are_hardlinks_to_same_file(a2, v8, a4, v3) as i8 {
                if v5 == 2 && *((a6 + 76) as &i8) {
                    *(v93 as &i64) = 13;
                    return v93;
                }
                if !(!(v7 & v2)) {
                    goto LABEL_507d8d;
                }
                v86 = v3;
                if !v5 {
                    *(v93 as &i64) = 13;
                    return v93;
                }
            } else {
LABEL_507d8d:
                v86 = v3;
            }
        }
        if (v87 & v7) && (*((a6 + 60) as &i8) || *((a6 + 61) as &i8) != 1) {
LABEL_5078fe:
            v15 = v79;
            v27 = 2;
            v29 = 0;
            v118 = &v39;
            v28 = 1;
            v15 = core::option::Option<T>::map_or_else(v77);
            *(v93 as &i64) = 4;
            return v93;
        }
        if *((a6 + 72) as &i8) {
            uu_cp::print_verbose_output(*((a6 + 68) as &i8), a1, a2, a3, a4, v86);
        }
        v3 = v86;
        if *((a6 + 56) as &i8) {
            if !a10 {
                v97 = *((a6 + 65) as &i8);
            } else {
                v97 = *((a6 + 64) as &i8);
            }
            v26 = uucore::features::fs::FileInformation::from_path(a2, v8, v97);
            v10 = 1;
            v11 = a2;
            v12 = v8;
            v13 = 1;
            v63 = &v10;
            v64 = <os_display::Quoted as core::fmt::Display>::fmt;
            v40 = "cannot stat ";
            v43 = 1;
            v46 = 0;
            v44 = &v63;
            v45 = 1;
            v41 = core::option::Option<T>::map_or_else(a2);
            v44 = v62;
            memcpy(&v41, &v61, 16);
            if v26.field_0 {
                v101 = v26.field_8;
                *((v93 + 24) as &u64) = v62;
                *((v93 + 8) as &u128) = v61;
                *(v93 as &i64) = 3;
                *((v93 + 32) as &u64) = v101;
                return v93;
            }
            v37 = *((&v21 as &char + 24) as &i64);
            v35 = *((&v21 as &char + 8) as &i128);
            memcpy(&v65, &v21, 16);
            memcpy(&v66, &v21, 16);
            memcpy(&v67, &v21, 16);
            v68 = v31;
            v69 = v32;
            v70 = v33;
            memcpy(&v71, &v34, 16);
            memcpy(&v47, &v35, 16);
            v51 = v37;
            v52 = v29;
            v53 = v65;
            v54 = v66;
            v56 = v67;
            v57 = v68;
            memcpy(&v58, &v69, 16);
            v59 = v70;
            v60 = v71;
            v102 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, &v47, a2);
            if let None = v102 {
                goto LABEL_50783a;
            }
            std::fs::hard_link(v102 + 144, a4, v3);
            if let Ok(_) = v84 {
                *(v93 as &i64) = 13;
                return v93;
            }
        } else {
LABEL_50783a:
            v6 = a4;
            uu_cp::context_for(&v35, a2, v8, a4, v3);
            v4 = v36;
            v38 = v37;
            v103 = v95 & 4294967295;
            v14 = ((v103 & 255) ? v103 & 4294967295 : (!a10 ? v103 : v94));
            if v14 {
                v15 = std::fs::metadata(a2, v8);
            } else {
                v16 = std::fs::symlink_metadata(a2, v8);
            }
            v105 = *((&v16 as &char + 8) as &i64);
            match v15 {
                Err(_) => {
                    v9 = uu_cp::copy_file::{{closure}}(a2, v8, v105);
                    *((v93 + 16) as &i128) = *(&(&v9.field_0)[1] as &i128);
                    *(v93 as &i64) = 4;
                    goto LABEL_507b21;
                },
                Ok(_) => {
                    memcpy(&v39, &v118, 160);
                    memcpy(&v53, &v44, 144);
                    v51 = *((&v16 as &char + 16) as &i128) as u128;
                    v47 = v16 as i64;
                    v50 = v105;
                    v17 = uu_cp::calculate_dest_permissions(v6, v3, v55 as i32 as u32 as u64, *((a6 + 50) as &i8) as u8 as u64, *((a6 + 51) as &i8) as u8 as u64, v4, v38);
                    v107 = v17.field_8;
                    if v17.field_0 == 13 {
                        v0 = a7;
                        uu_cp::handle_copy_mode(&v17, a2, v8, v6, v3, a6, v4, v38, &v47);
                        if v17.field_0 == 13 {
                            if !v2 {
                                v111 = std::fs::set_permissions(v6, v3, v107 as u64);
                            }
                            v110 = a6 + 48;
                            if v14 as i8 {
                                uucore::features::fs::canonicalize(&v10, a2, v8, 0, 1);
                                if !(v10 != 0x8000000000000000 && (v44 = v12, v42 = *(&v10 as &i128) as u128, uu_cp::copy_attributes(v43, v12, v6, v3, v110, *(&v1 as &i64)), v111 != 13)) {
                                    goto LABEL_507f23;
                                }
                                *((v93 + 56) as &i64) = *((&v16 as &char + 56) as &i64);
                                v114 = *((&v16 as &char + 8) as &i128);
                                v115 = *((&v16 as &char + 24) as &i128);
                                *((v93 + 40) as &i128) = *((&v16 as &char + 40) as &i128);
                                *((v93 + 24) as &u128) = v115;
                                *((v93 + 8) as &u128) = v114;
                                *(v93 as &u64) = v111;
                            } else {
                                uu_cp::copy_attributes(a2, v8, v6, v3, v110, *(&v1 as &i64));
                                if !(v111 == 13) {
                                    goto LABEL_507e89;
                                }
LABEL_507f23:
                                v18 = uucore::features::fs::FileInformation::from_path(a2, v8, (v14 as i8) as u8 as u64);
                                v116 = v18.field_8;
                                if v18.field_0 {
                                    *(v93 as &i64) = 2;
                                    *((v93 + 8) as &u64) = v116;
                                } else {
                                    memcpy(&v73, &v118, 136);
                                    v72 = v116;
                                    v19 = std::sys::pal::unix::os::split_paths::bytes_to_path(v6, v3);
                                    hashbrown::map::HashMap<K,V,S,A>::insert(&v39, a9, &v72, &v19 as u32);
                                    if *(a1 as &i64) {
                                        v20 = std::fs::metadata(a2, v8);
                                        match v20 {
                                            Err(_) => {
                                                *(v93 as &i64) = 2;
                                            },
                                            Ok(_) => {
                                                indicatif::progress_bar::ProgressBar::inc(a1, v30);
                                                goto LABEL_50808a;
                                            },
                                        }
LABEL_507b21:
                                        *((v93 + 8) as &u64) = v106;
                                    } else {
LABEL_50808a:
                                        *(v93 as &i64) = 13;
                                    }
                                }
                            }
                        } else {
LABEL_507e89:
                            *((v93 + 56) as &i64) = *((&v16 as &char + 56) as &i64);
                            v112 = *((&v16 as &char + 8) as &i128);
                            v113 = *((&v16 as &char + 24) as &i128);
                            *((v93 + 40) as &i128) = *((&v16 as &char + 40) as &i128);
                            *((v93 + 24) as &u128) = v113;
                            *((v93 + 8) as &u128) = v112;
                            *(v93 as &u64) = v111;
                        }
                    } else {
                        *((v93 + 60) as &i32) = *((&v16 as &char + 60) as &i32);
                        v108 = *((&v16 as &char + 12) as &i128);
                        v109 = *((&v16 as &char + 28) as &i128);
                        *((v93 + 44) as &i128) = *((&v16 as &char + 44) as &i128);
                        *((v93 + 28) as &u128) = v109;
                        *((v93 + 12) as &u128) = v108;
                        *(v93 as &u64) = v17.field_0;
                        *((v93 + 8) as &u32) = v107;
                    }
                },
            }
            return v93;
        }
LABEL_507ac4:
        *(v93 as &i64) = 2;
        *((v93 + 8) as &core::result::Result<(), std::io::error::Error>) = v84;
        return v93;
    }
}
