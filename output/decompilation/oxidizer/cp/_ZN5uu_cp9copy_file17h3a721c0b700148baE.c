fn uu_cp::copy_file(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64, a9: i64, a10: i8) -> Result<struct64, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x400]
    let v1: u8;  // [bp-0x3e8]
    let v2: u8;  // [bp-0x3d9]
    let v3: u64;  // [sp-0x3d8]
    let v4: u8;  // [bp-0x3d0]
    let v5: u8;  // [bp-0x3d0]
    let v6: u64;  // [bp-0x3c8]
    let v7: u8;  // [bp-0x3c8]
    let v8: u64;  // [bp-0x3c0]
    let v9: struct24;  // [bp-0x3b8], Other Possible Types: u64
    let v10: u64;  // [bp-0x3b8]
    let v11: u64;  // [bp-0x3b0]
    let v12: u64;  // [bp-0x3a8]
    let v13: u8;  // [bp-0x3a0]
    let v14: u32;  // [bp-0x394]
    let v15: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390], Other Possible Types: struct24, u64
    let v16: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390]
    let v17: struct12;  // [bp-0x390]
    let v18: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390], Other Possible Types: std::path::PathBuf
    let v19: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x390]
    let v20: struct24;  // [bp-0x390]
    let v21: std::path::Components;  // [bp-0x390]
    let v22: std::path::Components;  // [bp-0x390]
    let v23: struct64;  // [bp-0x390]
    let v24: u64;  // [bp-0x388]
    let v25: u64;  // [bp-0x378]
    let v26: void*;  // [bp-0x370], Other Possible Types: u64
    let v27: u64;  // [bp-0x340]
    let v28: u128;  // [bp-0x338]
    let v29: u128;  // [bp-0x328]
    let v30: u128;  // [bp-0x318]
    let v31: i8;  // [bp-0x308]
    let v32: u128;  // [bp-0x2d8]
    let v33: u64;  // [bp-0x2d0]
    let v34: u64;  // [bp-0x2c8]
    let v35: u64;  // [bp-0x2c0]
    let v36: struct24;  // [bp-0x2b8], Other Possible Types: u64
    let v37: u128;  // [bp-0x2b8]
    let v38: u8;  // [bp-0x2b8]
    let v39: u128;  // [bp-0x2b8]
    let v40: u64;  // [bp-0x2b0]
    let v41: i64;  // [bp-0x2a8], Other Possible Types: u64
    let v42: u64;  // [bp-0x2a0]
    let v43: void*;  // [bp-0x298]
    let v44: u128;  // [bp-0x218]
    let v45: std::path::Components;  // [bp-0x218]
    let v46: std::path::Components;  // [bp-0x218]
    let v47: u64;  // [bp-0x210]
    let v48: i64;  // [bp-0x208], Other Possible Types: u64
    let v49: u64;  // [bp-0x200]
    let v50: u128;  // [bp-0x1f8]
    let v51: u128;  // [bp-0x1e8]
    let v52: u64;  // [bp-0x1e0]
    let v53: u128;  // [bp-0x1d8]
    let v54: u128;  // [bp-0x1c8]
    let v55: u128;  // [bp-0x1b8]
    let v56: u128;  // [bp-0x1a8]
    let v57: u128;  // [bp-0x198]
    let v58: u128;  // [bp-0x160]
    let v59: u64;  // [bp-0x150]
    let v60: i64;  // [bp-0x148]
    let v61: u64;  // [bp-0x140]
    let v62: u128;  // [bp-0x138]
    let v63: u128;  // [bp-0x128]
    let v64: u128;  // [bp-0x118]
    let v65: u128;  // [bp-0x108]
    let v66: u128;  // [bp-0xf8]
    let v67: u128;  // [bp-0xe8]
    let v68: u128;  // [bp-0xd8]
    let v69: u64;  // [bp-0xc0]
    let v70: u8;  // [bp-0xb8]
    let v71: u64;  // r15
    let v72: i64;  // 4096
    let v73: i64;  // 4096
    let v74: u64;  // rdx
    let v75: i64;  // 4096
    let v76: u64;  // rax
    let v77: i64;  // rbx
    let v78: core::result::Result<(), std::io::error::Error>;  // rax
    let v80: i64;  // rbx
    let v81: core::result::Result<(), std::io::error::Error>;  // rax
    let v83: u64;  // r15
    let v84: u8;  // al
    let v85: u128;  // xmm0
    let v86: u128;  // xmm1
    let v89: u64;  // r8
    let v91: i64;  // r12
    let v92: u64;  // rbx
    let v93: u64;  // r15
    let v95: u32;  // eax
    let v99: u64;  // rax
    let v100: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax
    let v101: u64;  // rax
    let v103: u64;  // rbx
    let v104: u64;  // rax
    let v105: u32;  // r15d
    let v106: u128;  // xmm0
    let v107: u128;  // xmm1
    let v108: u64;  // rbx
    let v109: u64;  // rax
    let v110: u128;  // xmm0
    let v111: u128;  // xmm1
    let v112: u128;  // xmm0
    let v113: u128;  // xmm1
    let v114: u64;  // r8
    let v115: u64;  // rbx
    let v117: i64;  // [bp-0x380], Other Possible Types: u64
    let v123: i64;  // [bp-0x218], Other Possible Types: u64

    v71 = a5;
    v6 = std::path::Path::is_symlink(a2, a3);
    v2 = std::path::Path::is_symlink(a4, a5);
    v72 = a6;
    if v2 {
        uucore::features::fs::FileInformation::from_path(a4, a5, 0, a4);
        if v109 {
            v73 = a0;
LABEL_5072cf:
            v91 = v73;
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, a4, a5) {
                v9 = a2;
                v11 = a3;
                v36 = a4;
                v40 = a5;
                v123 = &v9;
                v47 = <std::path::Display as core::fmt::Display>::fmt;
                v48 = &v36;
                v49 = <std::path::Display as core::fmt::Display>::fmt;
                v15 = "will not copy '";
                v24 = 3;
                v26 = 0;
                v117 = &v123;
            } else {
                if !(!*((a6 + 65) as &i8) && !(*((a6 + 64) as &i8) & a10) && !((v75 = a6, v7 != 1)) || (v18 = std::fs::metadata(a4, a5), v71 = a5, v75 = a6, v18 as i32 != 2 || !*((a6 + 60) as &i8) && !((v75 = a6, *((v75 + 61) as &i8) != 1)) || (v75 = a6, uucore::features::fs::is_symlink_loop(a4, v71) as i8 || (v20 = std::env::var_os("POSIXLY_CORRECT"), v75 = a6, v20.field_0 != 0x8000000000000000)))) {
                    goto LABEL_5078fe;
                }
                v77 = v75;
                v72 = v77;
                if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v71, 1) as i8 {
                    v72 = v77;
                    if !*((v72 + 60) as &i8) {
                        v72 = v77;
                        if *((v72 + 61) as &i8) == 1 {
                            v72 = v77;
                            if !*((v72 + 76) as &i8) {
                                v78 = std::fs::remove_file(a4, v71);
                                v72 = v77;
                                if let Err(_) = v78 {
                                    return struct16 {
                                        field_0: 2
                                        field_8: v78
                                    };
                                }
                            }
                        }
                    }
                }
                goto LABEL_50758c;
            }
        } else {
            memcpy(&v123, &v24, 144);
            v73 = a0;
            if !hashbrown::map::HashMap<K,V,S,A>::get_inner(a7, &v123, a2) {
                goto LABEL_5072cf;
            }
            v9 = a2;
            v11 = a3;
            v36 = a4;
            v40 = a5;
            v123 = &v9;
            v47 = <std::path::Display as core::fmt::Display>::fmt;
            v48 = &v36;
            v49 = <std::path::Display as core::fmt::Display>::fmt;
            v15 = "will not copy '";
            v24 = 3;
            v26 = 0;
            v117 = &v123;
        }
        v25 = 2;
        v15 = core::option::Option<T>::map_or_else(v74);
        *(v91 as &i64) = 4;
        return v91;
    } else {
LABEL_50758c:
        v91 = a0;
        v80 = v72;
        if uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, v71) as i8 {
            v45 = std::path::Path::components(a2, a3);
            v21 = std::path::Path::components(a4, v71);
            v80 = a6;
            if !<std::path::Components as core::cmp::PartialEq>::eq(&v45, &v21) && (v80 = a6, !*((v80 + 60) as &i8) && (v80 = a6, *((v80 + 61) as &i8) == 1 && (std::fs::remove_file(a4, v71), v80 = a6, v81))) {
                goto LABEL_507ac4;
            }
        }
        if !uu_cp::file_or_link_exists(a4, v71) as i8 {
            v83 = v71;
        } else if !*((v80 + 62) as &i8) || !((v83 = v71, *((a6 + 60) as &i8) || !((v83 = v71, *((a6 + 61) as &i8) == 1)))) {
            v3 = v71;
            if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v71, 1) as i8 && !*((a6 + 78) as &i8) {
                if v7 {
                    if !v2 {
                        *(v91 as &i64) = 13;
                        return v91;
                    } else if !*((a6 + 65) as &i8) {
                        *(v91 as &i64) = 13;
                        return v91;
                    }
                } else {
                    if !!*((a6 + 76) as &i8) && !v2 {
                        v46 = std::path::Path::components(a2, a3);
                        v22 = std::path::Path::components(a4, v3);
                        if !<std::path::Components as core::cmp::PartialEq>::eq(&v46, &v22) {
                            *(v91 as &i64) = 13;
                            return v91;
                        }
                        v91 = v91;
                        if *((a6 + 60) as &i8) || *((a6 + 61) as &i8) {
                            *(v91 as &i64) = 13;
                            return v91;
                        }
                    }
                }
            }
            v4 = *((a6 + 78) as &i8);
            v23 = uu_cp::handle_existing_dest(a2, v8, a4, v3, a6, a10, a9);
            if v23.field_0 != 13 {
                *((v91 + 56) as &u64) = v23.field_56;
                v85 = v23.field_8;
                v86 = v23.field_24;
                *((v91 + 40) as &u128) = v23.field_40;
                *((v91 + 24) as &u128) = v86;
                *((v91 + 8) as &u128) = v85;
                *(v91 as &u64) = v23.field_0;
                return v91;
            }
            if uucore::features::fs::are_hardlinks_to_same_file(a2, v8, a4, v3) as i8 {
                if v5 == 2 && *((a6 + 76) as &i8) {
                    *(v91 as &i64) = 13;
                    return v91;
                }
                if !(!(v7 & v2)) {
                    goto LABEL_507d8d;
                }
                v83 = v3;
                if !v5 {
                    *(v91 as &i64) = 13;
                    return v91;
                }
            } else {
LABEL_507d8d:
                v83 = v3;
            }
        }
        if (v84 & v7) && (*((a6 + 60) as &i8) || *((a6 + 61) as &i8) != 1) {
LABEL_5078fe:
            v15 = v76;
            v24 = 2;
            v26 = 0;
            v117 = &v38;
            v25 = 1;
            v15 = core::option::Option<T>::map_or_else(v74);
            *(v91 as &i64) = 4;
            return v91;
        }
        if *((a6 + 72) as &i8) {
            uu_cp::print_verbose_output(*((a6 + 68) as &i8), a1, a2, a3, a4, v83);
        }
        v3 = v83;
        if *((a6 + 56) as &i8) {
            if !a10 {
                v95 = *((a6 + 65) as &i8);
            } else {
                v95 = *((a6 + 64) as &i8);
            }
            uucore::features::fs::FileInformation::from_path(a2, v8, v95, v89);
            v10 = 1;
            v11 = a2;
            v12 = v8;
            v13 = 1;
            v60 = &v10;
            v61 = <os_display::Quoted as core::fmt::Display>::fmt;
            v36 = "cannot stat ";
            v40 = 1;
            v43 = 0;
            v41 = &v60;
            v42 = 1;
            v36 = core::option::Option<T>::map_or_else(a2);
            v41 = v59;
            v37 = v58;
            if v21.path.ptr {
                v99 = *((&v18 as &char + 8) as &i64);
                *((v91 + 24) as &u64) = v59;
                *((v91 + 8) as &u128) = v58;
                *(v91 as &i64) = 3;
                *((v91 + 32) as &u64) = v99;
                return v91;
            }
            v34 = *((&v18 as &char + 24) as &i64);
            v32 = *((&v18 as &char + 8) as &i128);
            v62 = *((&v18 as &char + 40) as &i128);
            v63 = *((&v18 as &char + 56) as &i128);
            v64 = *((&v18 as &char + 72) as &i128);
            v65 = v28;
            v66 = v29;
            v67 = v30;
            v68 = *(&v31 as &i128);
            v44 = v32;
            v48 = v34;
            v49 = v26;
            v50 = v62;
            v51 = v63;
            v53 = v64;
            v54 = v65;
            v55 = v66;
            v56 = v67;
            v57 = v68;
            v100 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, &v45, a2);
            if let None = v100 {
                goto LABEL_50783a;
            }
            std::fs::hard_link(v100 + 144, a4, v3);
            if let Ok(_) = v81 {
                *(v91 as &i64) = 13;
                return v91;
            }
        } else {
LABEL_50783a:
            v6 = a4;
            uu_cp::context_for(&v32, a2, v8, a4, v3);
            v4 = v33;
            v35 = v34;
            v101 = v93 & 4294967295;
            v14 = ((v101 & 255) ? v101 & 4294967295 : (!a10 ? v101 : v92));
            if v14 {
                v15 = std::fs::metadata(a2, v8);
            } else {
                v16 = std::fs::symlink_metadata(a2, v8);
            }
            v103 = *((&v16 as &char + 8) as &i64);
            match v15 {
                Err(_) => {
                    v9 = uu_cp::copy_file::{{closure}}(a2, v8, v103);
                    *((v91 + 16) as &u128) = v9.field_8;
                    *(v91 as &i64) = 4;
                    goto LABEL_507b21;
                },
                Ok(_) => {
                    memcpy(&v38, &v117, 160);
                    memcpy(&v50, &v41, 144);
                    v48 = *((&v16 as &char + 16) as &i128) as u128;
                    v123 = v16 as i64;
                    v47 = v103;
                    v17 = uu_cp::calculate_dest_permissions(v6, v3, v52 as i32 as u32 as u64, *((a6 + 50) as &i8) as u8 as u64, *((a6 + 51) as &i8) as u8 as u64, v4, v35);
                    v105 = v17.field_8;
                    if v17.field_0 == 13 {
                        v0 = a7;
                        uu_cp::handle_copy_mode(&v17, a2, v8, v6, v3, a6, v4, v35, &v123);
                        if v17.field_0 == 13 {
                            if !v2 {
                                v109 = std::fs::set_permissions(v6, v3, v105 as u64);
                            }
                            v108 = a6 + 48;
                            if v14 as i8 {
                                uucore::features::fs::canonicalize(&v10, a2, v8, 0, 1);
                                if !(v10 != 0x8000000000000000 && (v41 = v12, v39 = *(&v10 as &i128) as u128, uu_cp::copy_attributes(v40, v12, v6, v3, v108, *(&v1 as &i64)), v109 != 13)) {
                                    goto LABEL_507f23;
                                }
                                *((v91 + 56) as &i64) = *((&v16 as &char + 56) as &i64);
                                v112 = *((&v16 as &char + 8) as &i128);
                                v113 = *((&v16 as &char + 24) as &i128);
                                *((v91 + 40) as &i128) = *((&v16 as &char + 40) as &i128);
                                *((v91 + 24) as &u128) = v113;
                                *((v91 + 8) as &u128) = v112;
                                *(v91 as &u64) = v109;
                            } else {
                                uu_cp::copy_attributes(a2, v8, v6, v3, v108, *(&v1 as &i64));
                                if !(v109 == 13) {
                                    goto LABEL_507e89;
                                }
LABEL_507f23:
                                uucore::features::fs::FileInformation::from_path(a2, v8, (v14 as i8) as u8 as u64, v114 as u32);
                                v115 = *(&v17.field_8 as &i64);
                                if v109 {
                                    *(v91 as &i64) = 2;
                                    *((v91 + 8) as &u64) = v115;
                                } else {
                                    memcpy(&v70, &v117, 136);
                                    v69 = v115;
                                    v18 = std::sys::pal::unix::os::split_paths::bytes_to_path(v6, v3);
                                    hashbrown::map::HashMap<K,V,S,A>::insert(&v38, a9, &v69, &v18 as u32);
                                    if *(a1 as &i64) {
                                        v19 = std::fs::metadata(a2, v8);
                                        match v19 {
                                            Err(_) => {
                                                *(v91 as &i64) = 2;
                                            },
                                            Ok(_) => {
                                                indicatif::progress_bar::ProgressBar::inc(a1, v27);
                                                goto LABEL_50808a;
                                            },
                                        }
LABEL_507b21:
                                        *((v91 + 8) as &u64) = v104;
                                    } else {
LABEL_50808a:
                                        *(v91 as &i64) = 13;
                                    }
                                }
                            }
                        } else {
LABEL_507e89:
                            *((v91 + 56) as &i64) = *((&v16 as &char + 56) as &i64);
                            v110 = *((&v16 as &char + 8) as &i128);
                            v111 = *((&v16 as &char + 24) as &i128);
                            *((v91 + 40) as &i128) = *((&v16 as &char + 40) as &i128);
                            *((v91 + 24) as &u128) = v111;
                            *((v91 + 8) as &u128) = v110;
                            *(v91 as &u64) = v109;
                        }
                    } else {
                        *((v91 + 60) as &i32) = *((&v16 as &char + 60) as &i32);
                        v106 = *((&v16 as &char + 12) as &i128);
                        v107 = *((&v16 as &char + 28) as &i128);
                        *((v91 + 44) as &i128) = *((&v16 as &char + 44) as &i128);
                        *((v91 + 28) as &u128) = v107;
                        *((v91 + 12) as &u128) = v106;
                        *(v91 as &u64) = v17.field_0;
                        *((v91 + 8) as &u32) = v105;
                    }
                },
            }
            return v91;
        }
LABEL_507ac4:
        *(v91 as &i64) = 2;
        *((v91 + 8) as &core::result::Result<(), std::io::error::Error>) = v81;
        return v91;
    }
}
