fn uu_cp::copy_file(a0: &struct16, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: i64;  // [sp-0x410]
    let v1: i64;  // [sp-0x408]
    let v2: i64;  // [sp-0x400]
    let v3: i8;  // [bp-0x3f8]
    let v4: i8;  // [sp-0x3d9]
    let v5: i64;  // [sp-0x3d8]
    let v6: i64;  // [sp-0x3d0], Other Possible Types: char
    let v7: i64;  // [bp-0x3d0]
    let v8: i64;  // [bp-0x3c8], Other Possible Types: char
    let v9: i64;  // [sp-0x3b8], Other Possible Types: struct24, struct16
    let v10: i64;  // [sp-0x3b0]
    let v11: i64;  // [sp-0x3a8]
    let v12: i8;  // [sp-0x3a0]
    let v13: i32;  // [sp-0x394]
    let v14: i64;  // [sp-0x390], Other Possible Types: Option<struct24>, struct20, Result<struct176, struct8>, struct64, struct24, int
    let v15: Result<struct176, struct8>;  // [sp-0x390], Other Possible Types: int
    let v16: Result<struct32, struct4>;  // [sp-0x390], Other Possible Types: struct64, int
    let v17: i64;  // [sp-0x390], Other Possible Types: Arguments, int
    let v18: i64;  // [sp-0x388]
    let v19: i64;  // [sp-0x378]
    let v20: struct24;  // [bp-0x2d8], Other Possible Types: char
    let v21: i64;  // [sp-0x2c8]
    let v22: i64;  // [sp-0x2c0]
    let v23: i64;  // [sp-0x2b8], Other Possible Types: String, Option<struct24>, struct16
    let v24: i64;  // [bp-0x2b8]
    let v25: i64;  // [sp-0x2b0]
    let v26: i64;  // [sp-0x2a8]
    let v27: i64;  // [sp-0x218], Other Possible Types: struct20, int, Argument, char
    let v28: i64;  // [sp-0x210]
    let v29: i64;  // [bp-0x208], Other Possible Types: Argument, int
    let v30: i64;  // [bp-0x200], Other Possible Types: char
    let v31: String;  // [sp-0x160]
    let v32: i64;  // [sp-0xc0]
    let v33: i8;  // [bp-0xb8]
    let v34: i8;  // [bp+0x10]
    let v35: i8;  // [bp+0x18]
    let v36: i8;  // [bp+0x20]
    let v37: i8;  // [bp+0x28]
    let v38: i64;  // r15
    let v39: i64;  // rbx
    let v40: i64;  // r12
    let v42: i64;  // rbx
    let v43: i32;  // r15d
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rbx
    let v52: i64;  // rax
    let v55: i64;  // rax
    let v56: i8;  // bl
    let v57: i8;  // al
    let v58: i8;  // r15b
    let v59: i64;  // r13
    let v60: i64;  // r15
    let v61: i64;  // rax
    let v62: iNone;  // xmm0
    let v63: iNone;  // xmm1
    let v64: i8;  // cl
    let v65: i64;  // rbx
    let v66: i64;  // r15
    let v67: i32;  // ecx
    let v69: i32;  // ecx
    let v70: i64;  // rax
    let v71: i64;  // r13
    let v72: i64;  // rax
    let v73: i32;  // ecx
    let v74: i64;  // rcx
    let v75: i64;  // r15
    let v76: i64;  // rbx
    let v77: i64;  // rax
    let v78: i64;  // rax
    let v79: i32;  // r15d
    let v80: iNone;  // xmm0
    let v81: iNone;  // xmm1
    let v82: i64;  // rax
    let v83: i64;  // rbx
    let v84: iNone;  // xmm0
    let v85: iNone;  // xmm1
    let v86: i64;  // rbx

    v38 = a5;
    *(&v8 as &i8) = std::path::Path::is_symlink(a2, a3) as i8;
    v39 = a6;
    v4 = std::path::Path::is_symlink(a4, a5) as i8;
    if !v4 {
LABEL_50758c:
        v40 = a0;
        if uucore::features::fs::are_hardlinks_to_same_file(a2, a3, a4, v38) as i8 {
            v27 = std::path::Path::components(a2, a3);
            v14 = std::path::Path::components(a4, v38);
            v49 = a6;
            if !<std::path::Components as core::cmp::PartialEq>::eq(&v27, &v14) && !*((a6 + 60) as &i8) && *((a6 + 61) as &i8) == 1 {
                v52 = std::fs::remove_file(a4, v38);
                if v52 {
                    *(v40 as &i64) = 2;
                    *((v40 + 8) as &unsigned long) = v52;
                }
            }
        }
        v55 = uu_cp::file_or_link_exists(a4, v38);
        v56 = *((v49 + 62) as &i8);
        if !v55 as u8 {
            v57 = v56;
            goto LABEL_5076a5;
        }
        if v56 && (v57 = (v55 & -0x100 | 1) as u8, !(!*((a6 + 60) as &i8)) || !(*((a6 + 61) as &i8) == 1)) {
LABEL_5076a5:
            if (v57 & v8) && (*((a6 + 60) as &i8) || *((a6 + 61) as &i8) != 1) {
                v27 = 1;
                v28 = a4;
                v29 = v38;
                *(&v30 as &i8) = 1;
                *(&v24 as &&unsigned long) = &v27;
                v25 = <os_display::Quoted as core::fmt::Display>::fmt;
                v47 = "cannot change attribute ";
                goto LABEL_5078fe;
            } else {
                if *((a6 + 72) as &i8) {
                    uu_cp::print_verbose_output(*((a6 + 68) as &i8), a1, a2, a3, a4, v38);
                }
                v5 = v38;
                if !*((a6 + 56) as &i8) {
                    v65 = *((a6 + 64) as &i8);
                    v66 = *((a6 + 65) as &i8);
                    goto LABEL_50783a;
                } else {
                    v65 = *((a6 + 64) as &i8);
                    v66 = *((a6 + 65) as &i8);
                    v67 = (!v37 ? (v65 & 255 & 255) : (v66 & 255 & 255));
                    v14 = uucore::features::fs::FileInformation::from_path(a2, v11, v69 as u64);
                    v9 = 1;
                    v10 = a2;
                    v11 = a3;
                    v12 = 1;
                    v31 = format!("cannot stat {}", &v9);
                    v23 = v31;
                    if v14 {
                        *((v40 + 24) as &u64) = v31.len;
                        *((v40 + 8) as &i128) = *(&v31.ptr as &i128);
                        *(v40 as &i64) = 3;
                        *((v40 + 32) as &unsigned long) = v18;
                    }
                    v27 = *(&v20 as &i1152);
                    v70 = hashbrown::map::HashMap<K,V,S,A>::get_inner(*(&v36 as &i64), &v27);
                    if v70 {
                        v52 = std::fs::hard_link(v70 + 144, a4, v5);
                        if v52 {
                            v40 = v6;
                            *(v40 as &i64) = 2;
                            *((v40 + 8) as &unsigned long) = v52;
                        }
                    } else {
                        v40 = v6;
LABEL_50783a:
                        v71 = a3;
                        v8 = a4;
                        v20 = uu_cp::context_for(a2, v71, a4, v5);
                        *(&v7 as &i64) = *((&v20.field_0 as &char + 8) as &i64);
                        v22 = v21;
                        v72 = v66 & 4294967295;
                        if !v37 {
                            v73 = v72 as u32;
                        } else {
                            v73 = v65 as u32;
                        }
                        v74 = ((v72 & 255 & 255) ? v72 & 4294967295 : v73 as u64);
                        v13 = v74 as u32;
                        if !v74 as u8 {
                            v15 = std::fs::symlink_metadata(a2, v71);
                        } else {
                            v15 = std::fs::metadata(a2, v71);
                        }
                        v75 = v14;
                        v76 = v18;
                        if v75 == 2 {
                            v9 = uu_cp::copy_file::{{closure}}(a2, v71, v76);
                            v77 = v9;
                            *((v40 + 16) as &i128) = *((&v9.field_0 as &char + 8) as &i128);
                            *(v40 as &i64) = 4;
                            *((v40 + 8) as &unsigned long) = v77;
                        }
                        memcpy(&v20, &v15, 160);
                        memcpy(&v27, &v20, 144);
                        *(&v29 as &i128) = (&v15)[16] as i128;
                        v27 = v75;
                        v28 = v76;
                        v16 = uu_cp::calculate_dest_permissions(v8, v5, (&v27)[56] as i32, *((a6 + 50) as &i8), *((a6 + 51) as &i8), v7, v22);
                        v78 = v14;
                        v79 = *((&v16 as &char + 8) as &i32);
                        if v78 != 13 {
                            *((v40 + 60) as &i32) = (&v15)[60] as i32;
                            v80 = *((&v16 as &char + 12) as &i128);
                            v81 = (&v15)[28] as i128;
                            *((v40 + 44) as &i128) = (&v15)[44] as i128;
                            *((v40 + 28) as void*) = v81;
                            *((v40 + 12) as void*) = v80;
                            *(v40 as &unsigned long) = v78;
                            *((v40 + 8) as &unsigned int) = v79;
                        }
                        v2 = *(&v34 as &i64);
                        v1 = &v27;
                        v0 = v22;
                        uu_cp::handle_copy_mode(&v16, a2, v71, v8, v5, a6, v7);
                        v82 = v14;
                        if v82 != 13 {
                            *((v40 + 56) as &i64) = (&v16)[56] as i64;
                            v84 = (&v16)[8] as i128;
                            v85 = (&v16)[24] as i128;
                            *((v40 + 40) as &i128) = (&v16)[40] as i128;
                            *((v40 + 24) as void*) = v85;
                            *((v40 + 8) as void*) = v84;
                            *(v40 as &unsigned long) = v82;
                        }
                        if !v4 {
                            v14 = std::fs::set_permissions(v8, v5, v79 as u64);
                        }
                        v83 = a6 + 48;
                        if !v13 as i8 {
                            v16 = uu_cp::copy_attributes(a2, v71, v8, v5, v83);
                            v82 = v14;
                            if v82 != 13 {
                                *((v40 + 56) as &i64) = (&v16)[56] as i64;
                                vvar_1588{reg 224} = (&v16)[8] as i128;
                                vvar_1589{reg 256} = (&v16)[24] as i128;
                                *((v40 + 40) as &i128) = (&v16)[40] as i128;
                                *((v40 + 24) as void*) = v85;
                                *((v40 + 8) as void*) = v84;
                                *(v40 as &unsigned long) = v82;
                            }
                        } else {
                            v9 = uucore::features::fs::canonicalize(a2, v71, 0, 1);
                            if v9 == 0x8000000000000000 {
LABEL_507c98:
                            } else {
                                v26 = v11;
                                v23 = v9;
                                v14 = uu_cp::copy_attributes(v25, v11, v8, v5, v83);
                                if v9 == 0x8000000000000000 {
                                    goto LABEL_507c98;
                                }
                            }
                        }
                        v14 = uucore::features::fs::FileInformation::from_path(a2, v71, v13 as i8);
                        v86 = v18;
                        if v14 {
                            *(v40 as &i64) = 2;
                            *((v40 + 8) as &unsigned long) = v86;
                        }
                        memcpy(&v33, &v14, 136);
                        v32 = v86;
                        v14 = std::sys::pal::unix::os::split_paths::bytes_to_path(v8, v5);
                        v23 = hashbrown::map::HashMap<K,V,S,A>::insert(*(&v36 as &i64), &v32, &v14);
                        if !*(a1 as &i64) {
                            *(v40 as &i64) = 13;
                        }
                        v14 = std::fs::metadata(a2, v71);
                        match v14 {
                            Err(v77) => {
                                *(v40 as &i64) = 2;
                                *((v40 + 8) as &unsigned long) = v77;
                            },
                            Ok(_) => {
                                indicatif::progress_bar::ProgressBar::inc(a1, *((&v14 as &char + 80) as &i64));
                            },
                        }
                    }
                }
            }
        } else {
            v5 = v38;
            v58 = *((a6 + 78) as &i8);
            if !(uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v38, 1) as i8) || !(!v58) {
LABEL_507cb6:
                v6 = v58;
                v59 = a3;
                v60 = v5;
                v14 = uu_cp::handle_existing_dest(a2, v59, a4, v60, a6, v3, *(&v36 as &i64));
                v61 = v14;
                if v61 != 13 {
                    *((v40 + 56) as &u64) = v14.field_56;
                    v62 = v14.field_8;
                    v63 = v14.field_24;
                    *((v40 + 40) as &u128) = v14.field_40;
                    *((v40 + 24) as void*) = v63;
                    *((v40 + 8) as void*) = v62;
                    *(v40 as &unsigned long) = v61;
                }
                if uucore::features::fs::are_hardlinks_to_same_file(a2, v59, a4, v60) as i8 {
                    v64 = v6;
                    if v64 == 2 && *((a6 + 76) as &i8) {
                        *(v40 as &i64) = 13;
                    }
                    if !(v8 & v4) {
                        v57 = v56;
                        v38 = v5;
                        if !v64 {
                            *(v40 as &i64) = 13;
                        }
                        goto LABEL_5076a5;
                    }
                }
                v57 = v56;
                v38 = v5;
                goto LABEL_5076a5;
            } else if !v8 {
                if !(!!*((a6 + 76) as &i8) && !v4) {
                    goto LABEL_507cb6;
                }
                v6 = v40;
                v27 = std::path::Path::components(a2, a3);
                v14 = std::path::Path::components(a4, v5);
                if <std::path::Components as core::cmp::PartialEq>::eq(&v27, &v14) {
                    v40 = v6;
                    if !(!*((a6 + 60) as &i8)) || !(!*((a6 + 61) as &i8)) {
                        *(v40 as &i64) = 13;
                    }
                    goto LABEL_507cb6;
                }
            } else {
                if !v4 {
                    *(v40 as &i64) = 13;
                } else if !*((a6 + 65) as &i8) {
                    *(v40 as &i64) = 13;
                }
                goto LABEL_507cb6;
            }
        }
        *(v6 as &i64) = 13;
    }
    v14 = uucore::features::fs::FileInformation::from_path(a4, a5, 0);
    if v14 {
        v40 = a0;
        goto LABEL_5072cf;
    }
    memcpy(&v27, &v14, 144);
    v40 = a0;
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(*(&v34 as &i64), &v27) {
        v9 = a2;
        v10 = a3;
        v23 = a4;
        v25 = a5;
        v27 = &v9;
        v29 = &v23;
        *(&v30 as &void*) = <std::path::Display as core::fmt::Display>::fmt;
        v17 = "will not copy '";
        v17 = 3;
        v17 = 0;
        v17 = &v27;
        goto LABEL_50741b;
    }
LABEL_5072cf:
    if hashbrown::map::HashMap<K,V,S,A>::get_inner(*(&v35 as &i64), a4, a5) {
        v9 = a2;
        v10 = a3;
        v23 = a4;
        v25 = a5;
        v27 = Argument {
            value: &v9
            formatter: <std::path::Display as core::fmt::Display>::fmt
        };
        v28 = <std::path::Display as core::fmt::Display>::fmt;
        v29 = Argument {
            value: &v23
            formatter: <UNKNOWN>
        };
        *(&v30 as &void*) = <std::path::Display as core::fmt::Display>::fmt;
        v17 = Arguments {
            pieces: ["will not copy '", "' through just-created symlink '", "'"]
            args: [&v27, &v29]
            fmt: 0
        };
LABEL_50741b:
    } else if !(*((a6 + 65) as &i8)) && !((*((a6 + 64) as &i8) & v37)) && !(!((v42 = a6, v8 == 1))) {
LABEL_507539:
        v39 = v42;
        if uucore::features::fs::paths_refer_to_same_file(a2, a3, a4, v38, 1) as i8 && !*((v39 + 60) as &i8) && *((v39 + 61) as &i8) == 1 && !*((v39 + 76) as &i8) {
            v48 = std::fs::remove_file(a4, v38);
            if v48 {
                return struct16 {
                    field_0: 2
                    field_8: v48
                };
            }
        }
        goto LABEL_50758c;
    } else {
        v14 = std::fs::metadata(a4, a5);
        v38 = v5;
        v42 = a6;
        if !(v43 == 2 && (*((a6 + 60) as &i8) || *((a6 + 61) as &i8) != 1) && !uucore::features::fs::is_symlink_loop(a4, v38) as i8 && (v14 = std::env::var_os("POSIXLY_CORRECT"), v38 = v5, v14 == 0x8000000000000000)) {
            goto LABEL_507539;
        }
        v27 = a4;
        v28 = v38;
        *(&v24 as &&unsigned long) = &v27;
        v25 = <std::path::Display as core::fmt::Display>::fmt;
        v47 = "not writing through dangling symlink '";
LABEL_5078fe:
        v17 = v47;
        v17 = 2;
        v17 = 0;
        v17 = &v24;
        v19 = 1;
    }
    core::option::Option<T>::map_or_else(v40 + 8, &v17);
    *(v40 as &i64) = 4;
}
