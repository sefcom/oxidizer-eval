fn uu_mv::handle_two_paths(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x1b8]
    let v1: i192;  // [sp-0x1a8], Other Possible Types: struct25, struct20, struct16, struct24
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i8;  // [sp-0x190]
    let v5: i64;  // [sp-0x168], Other Possible Types: struct25, struct24
    let v6: i64;  // [sp-0x160]
    let v7: i64;  // [sp-0x158]
    let v8: i8;  // [sp-0x150]
    let v9: i64;  // [sp-0x148]
    let v10: i64;  // [sp-0x140]
    let v11: struct24;  // [bp-0x138], Other Possible Types: i192, struct16, struct8
    let v12: i192;  // [bp-0x120], Other Possible Types: struct24, struct16
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8], Other Possible Types: struct20, Result<struct176, struct16>, struct24
    let v15: struct24;  // [sp-0xf0], Other Possible Types: i192
    let v16: i64;  // [sp-0xe8]
    let v17: i64;  // [sp-0xe0]
    let v18: i192;  // [bp-0xd8]
    let v19: i192;  // [sp-0x48]
    let v21: i8;  // r13b
    let v22: i64;  // rax
    let v24: i64;  // r14
    let v25: i64;  // r15
    let v26: i64;  // r12
    let v27: i64;  // rbp
    let v28: i64;  // rdx
    let v29: i64;  // rcx
    let v30: i64;  // r8
    let v31: i64;  // r9
    let v33: i64;  // r14
    let v34: i64;  // r12
    let v35: i64;  // r15
    let v36: i8;  // r13b
    let v38: i64;  // r15
    let v39: i64;  // r13
    let v40: i64;  // r15
    let v42: i64;  // r12
    let v43: i64;  // rax
    let v44: i32;  // eax
    let v45: i64;  // rax
    let v46: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // rdi

    v21 = *((a4 + 54) as &i8);
    if v21 == 1 && uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) as i8 {
        v5 = 1;
        v6 = a2;
        v7 = a3;
        v8 = 1;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        v19 = format!("backing up {:?} might destroy source;  {:?} not moved", &v5, &v1);
        v22 = std::io::error::Error::new(0, &v19);
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
        return v43;
    }
    v0 = a2;
    v10 = a3;
    v14 = std::fs::symlink_metadata(a0, a1);
    if v14 != 2 {
        v13 = a1;
        v1 = std::path::Path::components(a0, v13);
        v24 = v0;
        v25 = a0;
        v26 = v10;
        v14 = std::path::Path::components(v24, v26);
        v27 = v13;
        v9 = v25;
        if !(!<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v14, v28, v29, v30, v31) as i8) || !(!uucore::features::fs::are_hardlinks_to_same_file(v25, v27, v24, v26) as i8) {
            if !(!v21) {
                goto LABEL_4e93c2;
            }
        } else {
            if !(!v21) || !(uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(v25, v27, v24, v26) as i8) {
LABEL_4e93c2:
                v33 = v0;
                v34 = v10;
                v36 = std::path::Path::is_dir(v33, v34) as i32;
                if !uucore::features::fs::path_ends_with_terminator(v33, v34) as i8 {
                    if !v36 {
                        goto LABEL_4e966c;
                    }
                } else {
                    if !v36 {
                        if !std::path::Path::is_dir(v9, v27) as i32 && !*((a4 + 48) as &i8) && *((a4 + 55) as &i8) != 2 {
                            v1 = struct25 {
                                field_0: 1
                                field_8: v0
                                field_16: v34
                                field_24: 1
                            };
                            v15 = <T as alloc::string::ToString>::to_string(&v1);
                            v14 = 9;
                            alloc::boxed::Box<T>::new(&v14);
                            return v43;
                        }
LABEL_4e966c:
                        v14 = std::fs::metadata(v0, v34);
                        v42 = v9;
                        if v14 != 2 && std::path::Path::is_dir(v42, v27) as i8 {
                            switch (v44) {
                            case 0:
                                return 0;
                            case 2:
                                v5 = struct25 {
                                    field_0: 1
                                    field_8: v42
                                    field_16: vvar_104{reg 56}
                                    field_24: 1
                                };
                                v11 = <T as alloc::string::ToString>::to_string(&v5);
                                v1 = struct25 {
                                    field_0: 1
                                    field_8: v0
                                    field_16: v49
                                    field_24: 1
                                };
                                v12 = <T as alloc::string::ToString>::to_string(&v1);
                                v15 = v11;
                                v18 = v12;
                                v14 = 6;
                                v43 = alloc::boxed::Box<T>::new(&v14);
                                return v43;
                            default:
                                v1 = uucore::util_name();
                                v2 = v28;
                                eprint!("{:?}: ", &v1);
                                v1 = 1;
                                v2 = v0;
                                v3 = v10;
                                v4 = 1;
                                eprint!("overwrite {:?}? ", &v1);
                                eprint!(" ");
                                v11 = struct8 {
                                    field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                                };
                                v47 = <std::io::stdio::Stderr as std::io::Write>::flush(&v11, v46, v28);
                                if v47 {
                                    v12 = v47;
                                    v1 = uucore::util_name();
                                    v2 = v28;
                                    eprint!("{:?}: ", &v1);
                                    eprintln!("{:?}", &v12);
                                    std::process::exit(1); /* do not return */
                                }
                                if !uucore::read_yes(v48, v46, v28) as i8 {
                                    v22 = std::io::error::Error::new(39, 1, 0);
                                    v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
                                    return v43;
                                }
                            }
                        }
                        v45 = uu_mv::rename(v42, v27, v0, v10, a4, 0);
                        v43 = (!v45 ? 0 : uu_mv::handle_two_paths::{{closure}}(v45));
                        return v43;
                    }
                }
                if *((a4 + 48) as &i8) {
                    v38 = v9;
                    if !std::path::Path::is_dir(v38, v27) as i8 {
                        v1 = struct25 {
                            field_0: 1
                            field_8: v0
                            field_16: v34
                            field_24: 1
                        };
                        v15 = <T as alloc::string::ToString>::to_string(&v1);
                        v14 = 5;
                        alloc::boxed::Box<T>::new(&v14);
                        return v43;
                    }
                    v14 = v38;
                    v15 = v27;
                    v16 = v0;
                    v17 = v34;
                    v43 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_mv::rename(v38, v27, v16, v34, a4, 0), &v14);
                    return v43;
                } else {
                    v39 = v0;
                    v40 = v9;
                    if std::path::Path::starts_with(v39, v34, v40, v27) as i8 {
                        v11 = struct16 {
                            field_0: v40
                            field_8: v27
                        };
                        v5 = <T as alloc::string::ToString>::to_string(&v11);
                        v12 = struct16 {
                            field_0: v39
                            field_8: v34
                        };
                        v1 = <T as alloc::string::ToString>::to_string(&v12);
                        v15 = v5;
                        v18 = v1;
                        v14 = 4;
                        alloc::boxed::Box<T>::new(&v14);
                        return v43;
                    }
                    v14 = std::sys::pal::unix::os::split_paths::bytes_to_path(v40, v27);
                    v43 = uu_mv::move_files_into_dir(&v14, 1, v39, v34, a4, v31);
                    return v43;
                }
            }
        }
        v35 = v9;
        v1 = std::path::Path::components(v35, v27);
        v14 = std::path::Path::components(".");
        if !<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v14, v28, v29, v30, v31) as i8 && !std::path::Path::ends_with(v35, v27, "/.") as i8 && !std::path::Path::is_file(v35, v27) as i8 {
            v1 = struct16 {
                field_0: v35
                field_8: v27
            };
            v15 = <T as alloc::string::ToString>::to_string(&v1);
            v14 = 3;
            alloc::boxed::Box<T>::new(&v14);
            return v43;
        }
        v5 = struct25 {
            field_0: 1
            field_8: v35
            field_16: v27
            field_24: 1
        };
        v11 = <T as alloc::string::ToString>::to_string(&v5);
        v1 = struct25 {
            field_0: 1
            field_8: v0
            field_16: v10
            field_24: 1
        };
        v12 = <T as alloc::string::ToString>::to_string(&v1);
        v15 = v11;
        v18 = v12;
        v14 = 2;
        alloc::boxed::Box<T>::new(&v14);
        return v43;
    } else if uucore::features::fs::path_ends_with_terminator(a0, a1) as i8 {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v15 = <T as alloc::string::ToString>::to_string(&v1);
        v14 = 1;
        alloc::boxed::Box<T>::new(&v14);
        return v43;
    } else {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v15 = <T as alloc::string::ToString>::to_string(&v1);
        v14 = 0;
        alloc::boxed::Box<T>::new(&v14);
        return v43;
    }
}
