fn uu_cp::copy_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x418]
    let v1: i64;  // [sp-0x410]
    let v2: i64;  // [sp-0x408]
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [sp-0x3f8]
    let v5: i64;  // [sp-0x3f0]
    let v6: i8;  // [sp-0x3d9]
    let v7: i64;  // [sp-0x3d8]
    let v8: i8;  // [bp-0x3d0]
    let v9: i64;  // [bp-0x3c8]
    let v10: i64;  // [sp-0x3b8], Other Possible Types: struct24
    let v11: i64;  // [sp-0x3b0]
    let v12: i64;  // [sp-0x3a8]
    let v13: i8;  // [sp-0x3a0]
    let v14: i32;  // [sp-0x394]
    let v15: i64;  // [sp-0x390], Other Possible Types: Result<struct32, struct4>, Option<struct8>, struct64, struct20, struct24
    let v16: i64;  // [sp-0x388]
    let v17: i64;  // [sp-0x380]
    let v18: i64;  // [sp-0x378]
    let v19: i64;  // [sp-0x370]
    let v20: i128;  // [sp-0x2d8], Other Possible Types: struct24
    let v21: i64;  // [sp-0x2c8]
    let v22: i64;  // [sp-0x2c0]
    let v23: i8;  // [bp-0x2b8], Other Possible Types: Option<struct24>
    let v24: i64;  // [sp-0x2b0]
    let v25: i64;  // [sp-0x2a8]
    let v26: i64;  // [bp-0x218], Other Possible Types: struct20
    let v27: i64;  // [sp-0x210]
    let v28: i64;  // [sp-0x208]
    let v29: i64;  // [bp-0x200]
    let v30: i192;  // [sp-0x160]
    let v31: i128;  // [sp-0x138]
    let v32: i128;  // [sp-0x128]
    let v33: i128;  // [sp-0x118]
    let v34: i128;  // [sp-0x108]
    let v35: i128;  // [sp-0xf8]
    let v36: i128;  // [sp-0xe8]
    let v37: i128;  // [sp-0xd8]
    let v38: i64;  // [sp-0xc0]
    let v39: i8;  // [bp-0xb8]
    let v40: i64;  // [bp+0x8]
    let v41: i8;  // [bp+0x10]
    let v42: i8;  // [bp+0x18]
    let v43: i8;  // [bp+0x20]
    let v44: i8;  // [bp+0x28]
    let v45: i64;  // r15
    let v46: i64;  // r12
    let v47: i64;  // 4096
    let v48: i32;  // r15d
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i64;  // r8
    let v52: i64;  // r9
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i8;  // bl
    let v58: i64;  // r15
    let v59: i8;  // bl
    let v60: i64;  // rcx
    let v61: i8;  // al
    let v62: i8;  // r15b
    let v63: i64;  // rcx
    let v64: i64;  // r13
    let v65: i64;  // r15
    let v66: i64;  // rax
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1
    let v69: i8;  // cl
    let v70: i64;  // rbx
    let v71: i64;  // rbx
    let v72: i64;  // r15
    let v73: i32;  // eax
    let v74: i32;  // eax
    let v77: i32;  // eax
    let v78: i64;  // rax
    let v79: i64;  // r13
    let v80: i64;  // rax
    let v81: i32;  // ecx
    let v82: i32;  // ecx
    let v83: i64;  // r15
    let v84: i64;  // rbx
    let v85: i64;  // rbx
    let v86: i64;  // rax
    let v87: i32;  // r15d
    let v88: i128;  // xmm0
    let v89: i128;  // xmm1
    let v90: i64;  // rax
    let v91: i64;  // rbx
    let v92: i128;  // xmm0
    let v93: i128;  // xmm1
    let v94: i64;  // rax
    let v95: i128;  // xmm0
    let v96: i128;  // xmm1
    let v97: i64;  // rbx

    v45 = a5;
    v46 = v40;
    v9 = std::path::Path::is_symlink(a2, a3) as i8;
    v6 = std::path::Path::is_symlink(a4, a5) as i8;
    if !v6 {
LABEL_50758c:
        a0 = a0;
        if uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, v45) as i8 {
            v26 = std::path::Path::components(a2, a3);
            v15 = std::path::Path::components(a4, v45);
            v46 = v40;
            if !<std::path::Components as core::cmp::PartialEq>::eq(&v26, &v15, v49, v50, v51, v52) as i8 && !*((v46 + 60) as &i8) && *((v46 + 61) as &i8) == 1 {
                v55 = std::fs::remove_file(a4, v45, v49);
                if v55 {
                    *(a0 as &i64) = 2;
                    *((a0 + 8) as &i64) = v55;
                    return a0;
                }
            }
        }
        v56 = uu_cp::file_or_link_exists(a4, v45);
        v57 = *((v46 + 62) as &i8);
        if !v56 {
            goto LABEL_5076a5;
        }
        if v57 && (v60 = v40, v61 = (v56 | -0x100 | 1) as i8, !(!*((v60 + 60) as &i8)) || !(*((v60 + 61) as &i8) == 1)) {
LABEL_5076a5:
            v70 = v40;
            if (v59 & v9) && (*((v70 + 60) as &i8) || *((v70 + 61) as &i8) != 1) {
                v26 = 1;
                v27 = a4;
                v28 = v58;
                v29 = 1;
                v23 = &v26;
                v24 = <os_display::Quoted as core::fmt::Display>::fmt;
                v53 = "cannot change attribute ";
                goto LABEL_5078fe;
            } else {
                if *((v70 + 72) as &i8) {
                    uu_cp::print_verbose_output(*((v70 + 68) as &i8), a1, a2, a3, a4, v58);
                }
                v7 = v58;
                if !*((v70 + 56) as &i8) {
                    v71 = *((v70 + 64) as &i8);
                    v72 = *((v70 + 65) as &i8);
                    v24 = v24;
                    goto LABEL_50783a;
                } else {
                    v71 = *((v70 + 64) as &i8);
                    v72 = *((v70 + 65) as &i8);
                    v73 = -0x100 | (v72 & 255 & 255);
                    if v44 {
                        v74 = -0x100 | (v71 & 255 & 255);
                    }
                    v15 = uucore::features::fs::FileInformation::from_path(a2, v12, v77);
                    v10 = 1;
                    v11 = a2;
                    v12 = a3;
                    v13 = 1;
                    v30 = format!("cannot stat {:?}", &v10);
                    v23 = v30;
                    if v15 {
                        *((a0 + 24) as &i64) = *((&v30 as &char + 16) as &i64);
                        *((a0 + 8) as &i192) = v30;
                        *(a0 as &i64) = 3;
                        *((a0 + 32) as &i64) = v16;
                        return a0;
                    }
                    v8 = a0;
                    v21 = v18;
                    v20 = *((&v15 as &char + 8) as &i128);
                    v31 = *((&v15 as &char + 40) as &i128);
                    v32 = *((&v15 as &char + 56) as &i128);
                    v33 = *((&v15 as &char + 72) as &i128);
                    v34 = *((&v15 as &char + 88) as &i128);
                    v35 = *((&v15 as &char + 104) as &i128);
                    v36 = *((&v15 as &char + 120) as &i128);
                    v37 = *((&v15 as &char + 136) as &i128);
                    v26 = v20;
                    v78 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v43, &v26);
                    if v78 {
                        v55 = std::fs::hard_link(v78 + 144, a4, v7);
                        if v55 {
                            a0 = v8;
                            *(a0 as &i64) = 2;
                            *((a0 + 8) as &i64) = v55;
                            return a0;
                        }
                    } else {
                        a0 = v8;
                        v24 = v24;
LABEL_50783a:
                        v79 = a3;
                        v9 = a4;
                        v20 = uu_cp::context_for(a2, v79, a4, v7);
                        v8 = *((&v20 as &char + 8) as &i64);
                        v22 = v21;
                        v80 = v72 & 4294967295;
                        if !v44 {
                            v81 = v80;
                        } else {
                            v81 = v71;
                        }
                        v82 = ((v80 & 255 & 255) ? v80 & 4294967295 : v81);
                        v14 = v82;
                        if !v14 {
                            v15 = std::fs::symlink_metadata(a2, v79);
                        } else {
                            v15 = std::fs::metadata(a2, v79);
                        }
                        v83 = v15;
                        v84 = v16;
                        if v83 == 2 {
                            v10 = uu_cp::copy_file::{{closure}}(a2, v79, v84);
                            *((a0 + 16) as &i128) = *((&v10 as &char + 8) as &i128);
                            *(a0 as &i64) = 4;
                            v10 = v10;
                            *((a0 + 8) as &i64) = v10;
                            return a0;
                        }
                        memcpy(&v23, &v15, 160);
                        memcpy(&v26, &v20, 144);
                        v28 = *((&v15 as &char + 16) as &i128);
                        v26 = v83;
                        v27 = v84;
                        v85 = v40;
                        v5 = v22;
                        v4 = v8;
                        v15 = uu_cp::calculate_dest_permissions(v9, v7, *((&v26 as &char + 56) as &i32), *((v85 + 50) as &i8), *((v85 + 51) as &i8));
                        v86 = v15;
                        v87 = *((&v15 as &char + 8) as &i32);
                        if v86 != 13 {
                            *((a0 + 60) as &i32) = *((&v15 as &char + 60) as &i32);
                            v88 = *((&v15 as &char + 12) as &i128);
                            v89 = *((&v15 as &char + 28) as &i128);
                            *((a0 + 44) as &i128) = *((&v15 as &char + 44) as &i128);
                            *((a0 + 28) as &i128) = v89;
                            *((a0 + 12) as &i128) = v88;
                            *(a0 as &i64) = v86;
                            *((a0 + 8) as &i32) = v87;
                            return a0;
                        }
                        v4 = v44;
                        v3 = v41;
                        v2 = &v26;
                        v1 = v22;
                        v0 = v8;
                        uu_cp::handle_copy_mode(&v15, a2, v79, v9, v7, v85);
                        v90 = v15;
                        if v90 != 13 {
                            *((a0 + 56) as &i64) = *((&v15 as &char + 56) as &i64);
                            v92 = *((&v15 as &char + 8) as &i128);
                            v93 = *((&v15 as &char + 24) as &i128);
                            *((a0 + 40) as &i128) = *((&v15 as &char + 40) as &i128);
                            *((a0 + 24) as &i128) = v93;
                            *((a0 + 8) as &i128) = v92;
                            *(a0 as &i64) = v90;
                            return a0;
                        }
                        if !v6 {
                            v15 = std::fs::set_permissions(v9, v7, v87);
                        }
                        v91 = v85 + 48;
                        if !v14 {
                            v15 = uu_cp::copy_attributes(a2, v79, v9, v7, v91);
                            v90 = v15;
                            if v90 != 13 {
                                *((a0 + 56) as &i64) = *((&v15 as &char + 56) as &i64);
                                vvar_1638{reg 224} = *((&v15 as &char + 8) as &i128);
                                vvar_1639{reg 256} = *((&v15 as &char + 24) as &i128);
                                *((a0 + 40) as &i128) = *((&v15 as &char + 40) as &i128);
                                *((a0 + 24) as &i128) = v93;
                                *((a0 + 8) as &i128) = v92;
                                *(a0 as &i64) = v90;
                                return a0;
                            }
                        } else {
                            uucore::features::fs::canonicalize();
                            if v10 == 0x8000000000000000 {
LABEL_507c8e:
                            } else {
                                v25 = v12;
                                v23 = v10;
                                v15 = uu_cp::copy_attributes(v24, v12, v9, v7, v91);
                                v94 = v15;
                                if v94 != 13 {
                                    *((a0 + 56) as &i64) = *((&v15 as &char + 56) as &i64);
                                    v95 = *((&v15 as &char + 8) as &i128);
                                    v96 = *((&v15 as &char + 24) as &i128);
                                    *((a0 + 40) as &i128) = *((&v15 as &char + 40) as &i128);
                                    *((a0 + 24) as &i128) = v96;
                                    *((a0 + 8) as &i128) = v95;
                                    *(a0 as &i64) = v94;
                                    if v10 != 0x8000000000000000 {
                                        return a0;
                                    }
                                    return a0;
                                }
                                if v10 == 0x8000000000000000 {
                                    goto LABEL_507c8e;
                                }
                            }
                        }
                        v15 = uucore::features::fs::FileInformation::from_path(a2, v79, -0x100 | v14);
                        v97 = v16;
                        if v15 {
                            *(a0 as &i64) = 2;
                            *((a0 + 8) as &i64) = v97;
                            return a0;
                        }
                        memcpy(&v39, &v15, 136);
                        v38 = v97;
                        v15 = std::sys::pal::unix::os::split_paths::bytes_to_path(v9, v7);
                        v23 = hashbrown::map::HashMap<K,V,S,A>::insert(v43, &v38, &v15);
                        if *(a1 as &i64) {
                            v15 = std::fs::metadata(a2, v79);
                            match v15 {
                                Err(_) => {
                                    *(a0 as &i64) = 2;
                                    v10 = v16;
                                    *((a0 + 8) as &i64) = v10;
                                    return a0;
                                },
                                Ok(_) => {
                                    indicatif::progress_bar::ProgressBar::inc(a1, *((&v15 as &char + 80) as &i64), v49);
                                },
                            }
                        }
                        *(a0 as &i64) = 13;
                        return a0;
                    }
                }
            }
        } else {
            v7 = v45;
            v62 = *((v40 + 78) as &i8);
            if !(uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v45, 1) as i8) || !(!v62) {
LABEL_507cb6:
                v8 = v62;
                v64 = a3;
                v65 = v7;
                v5 = v43;
                v4 = v44;
                v15 = uu_cp::handle_existing_dest(a2, v64, a4, v65, v40);
                v66 = v15;
                if v66 != 13 {
                    *((a0 + 56) as &i64) = *((&v15 as &char + 56) as &i64);
                    v67 = *((&v15 as &char + 8) as &i128);
                    v68 = *((&v15 as &char + 24) as &i128);
                    *((a0 + 40) as &i128) = *((&v15 as &char + 40) as &i128);
                    *((a0 + 24) as &i128) = v68;
                    *((a0 + 8) as &i128) = v67;
                    *(a0 as &i64) = v66;
                    return a0;
                }
                if uucore::features::fs::are_hardlinks_to_same_file(a2, v64, a4, v65) as i8 {
                    v69 = v8;
                    if v69 == 2 && *((v40 + 76) as &i8) {
                        *(a0 as &i64) = 13;
                        return a0;
                    }
                    if !(v9 & v6) {
                        v58 = v7;
                        if !v69 {
                            *(a0 as &i64) = 13;
                            return a0;
                        }
                        goto LABEL_5076a5;
                    }
                }
                v58 = v7;
                goto LABEL_5076a5;
            } else if !v9 {
                if !(!!*((v40 + 76) as &i8)) || !(!v6) {
                    goto LABEL_507cb6;
                }
                v8 = a0;
                v26 = std::path::Path::components(a2, a3);
                v15 = std::path::Path::components(a4, v7);
                if <std::path::Components as core::cmp::PartialEq>::eq(&v26, &v15, v49, v50, v51, v52) as i8 {
                    v63 = v40;
                    a0 = v8;
                    if !(!*((v63 + 60) as &i8)) || !(!*((v63 + 61) as &i8)) {
                        *(a0 as &i64) = 13;
                        return a0;
                    }
                    goto LABEL_507cb6;
                }
            } else {
                if !v6 {
                    *(a0 as &i64) = 13;
                    return a0;
                } else if !*((v40 + 65) as &i8) {
                    *(a0 as &i64) = 13;
                    return a0;
                }
                goto LABEL_507cb6;
            }
        }
        a0 = v8;
        *(a0 as &i64) = 13;
        return a0;
    }
    v15 = uucore::features::fs::FileInformation::from_path(a4, a5, 0);
    if v15 {
        v24 = v16;
        v23 = 1;
        goto LABEL_5072cf;
    }
    memcpy(&v26, &v16, 144);
    a0 = a0;
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(v41, &v26) {
        v10 = a2;
        v11 = a3;
        v23 = a4;
        v24 = a5;
        v26 = &v10;
        v27 = <std::path::Display as core::fmt::Display>::fmt;
        v28 = &v23;
        v29 = <std::path::Display as core::fmt::Display>::fmt;
        v15 = "will not copy '";
        v16 = 3;
        v19 = 0;
        v17 = &v26;
        goto LABEL_50741b;
    }
LABEL_5072cf:
    a0 = v47;
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(v42, a4, a5) {
        v10 = a2;
        v11 = a3;
        v23 = a4;
        v24 = a5;
        v26 = &v10;
        v27 = <std::path::Display as core::fmt::Display>::fmt;
        v28 = &v23;
        v29 = <std::path::Display as core::fmt::Display>::fmt;
        v15 = "will not copy '";
        v16 = 3;
        v19 = 0;
        v17 = &v26;
LABEL_50741b:
        v18 = 2;
    } else {
        v46 = v40;
        if !(*((v46 + 65) as &i8)) && !((*((v46 + 64) as &i8) & v44)) && !(v9 != 1) {
LABEL_507539:
            if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v45, 1) as i8 && !*((v46 + 60) as &i8) && *((v46 + 61) as &i8) == 1 && !*((v46 + 76) as &i8) {
                v54 = std::fs::remove_file(a4, v45, v49);
                if v54 {
                    return struct16 {
                        field_0: 2
                        field_8: v54
                    };
                }
            }
            goto LABEL_50758c;
        } else {
            v15 = std::fs::metadata(a4, a5);
            v7 = a5;
            v48 = v15;
            v46 = v40;
            v45 = v7;
            if !(!!*((v40 + 76) as &i8)) || !(!v6) {
                goto LABEL_507539;
            }
            v26 = a4;
            v27 = v45;
            v23 = &v26;
            v24 = <std::path::Display as core::fmt::Display>::fmt;
            v53 = "not writing through dangling symlink '";
LABEL_5078fe:
            v15 = v53;
            v16 = 2;
            v19 = 0;
            v17 = &v23;
            v18 = 1;
        }
    }
    core::option::Option<T>::map_or_else(a0 + 8, &v15);
    *(a0 as &i64) = 4;
    return a0;
}
