fn uu_mv::handle_two_paths(a0: &u8, a1: u32, a2: &&struct_0, a3: u32, a4: void*) -> u64 {
    let v0: i64;  // [sp-0x1b8]
    let v1: struct25;  // [sp-0x1a8], Other Possible Types: unsigned long, struct20, struct16, struct24
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i8;  // [sp-0x190]
    let v5: struct25;  // [sp-0x168], Other Possible Types: unsigned long, struct24
    let v6: i64;  // [sp-0x160]
    let v7: i64;  // [sp-0x158]
    let v8: i8;  // [sp-0x150]
    let v9: i64;  // [sp-0x148]
    let v10: i64;  // [sp-0x140]
    let v11: struct24;  // [bp-0x138], Other Possible Types: struct16, struct8
    let v12: struct24;  // [bp-0x120], Other Possible Types: unsigned long, struct16
    let v13: i64;  // [sp-0x100]
    let v14: struct20;  // [sp-0xf8], Other Possible Types: Result<struct176, struct8>, struct24, unsigned long
    let v15: i64;  // [sp-0xf8]
    let v16: struct24;  // [sp-0xf0], Other Possible Types: unsigned long
    let v17: i64;  // [sp-0xe8]
    let v18: i64;  // [sp-0xe0]
    let v19: struct24;  // [sp-0xd8]
    let v20: String;  // [sp-0x48]
    let v22: i8;  // r13b
    let v23: i64;  // rax
    let v24: i32;  // r14d
    let v25: i64;  // r14
    let v26: i64;  // r15
    let v27: i64;  // r12
    let v28: i64;  // rbp
    let v30: i64;  // r14
    let v31: i64;  // r12
    let v32: i64;  // r15
    let v33: i8;  // r13b
    let v35: i64;  // r15
    let v36: i64;  // r13
    let v37: i64;  // r15
    let v38: i64;  // r12
    let v39: i64;  // rax
    let v40: i32;  // eax
    let v41: i64;  // rax
    let v43: i64;  // rdx
    let v44: i64;  // rax

    v22 = *((a4 + 54) as &i8);
    if v22 == 1 && uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) as i8 {
        v5 = 1;
        v6 = a2;
        v7 = a3;
        v8 = 1;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        v20 = format!("backing up {} might destroy source;  {} not moved", &v5, &v1);
        v23 = std::io::error::Error::new(0, &v20);
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        return v39;
    }
    v0 = a2;
    v10 = a3;
    v14 = std::fs::symlink_metadata(a0, a1);
    if v24 != 2 {
        v13 = a1;
        v1 = std::path::Path::components(a0, v13);
        v25 = v0;
        v26 = a0;
        v27 = v10;
        v14 = std::path::Path::components(v25, v27);
        v28 = v13;
        v9 = v26;
        if !(!<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v14)) || !(!uucore::features::fs::are_hardlinks_to_same_file(v26, v28, v25, v27) as i8) {
            if !(!v22) {
                goto LABEL_4e93c2;
            }
        } else {
            if !(!v22) || !(uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(v26, v28, v25, v27) as i8) {
LABEL_4e93c2:
                v30 = v0;
                v31 = v10;
                v33 = std::path::Path::is_dir(v30, v31) as i32;
                if !uucore::features::fs::path_ends_with_terminator(v30, v31) as i8 {
                    if !(!v33) {
                        goto LABEL_4e94ac;
                    }
                } else {
                    if v33 {
LABEL_4e94ac:
                        if *((a4 + 48) as &i8) {
                            v35 = v9;
                            if !std::path::Path::is_dir(v35, v28) as i8 {
                                v1 = struct25 {
                                    field_0: 1
                                    field_8: v0
                                    field_16: v31
                                    field_24: 1
                                };
                                v16 = <T as alloc::string::ToString>::to_string(&v1);
                                v15 = 5;
                                alloc::boxed::Box<T>::new(&v15);
                                return v39;
                            }
                            v14 = v35;
                            v16 = v28;
                            v17 = v0;
                            v18 = v31;
                            v39 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_mv::rename(v35, v28, v17, v31, a4, 0), &v14);
                            return v39;
                        } else {
                            v36 = v0;
                            v37 = v9;
                            if !std::path::Path::starts_with(v36, v31, v37, v28) as i8 {
                                v14 = std::sys::pal::unix::os::split_paths::bytes_to_path(v37, v28);
                                v39 = uu_mv::move_files_into_dir(&v14, 1, v36, v31, a4);
                                return v39;
                            }
                            v11 = struct16 {
                                field_0: v37
                                field_8: v28
                            };
                            v5 = <T as alloc::string::ToString>::to_string(&v11);
                            v12 = struct16 {
                                field_0: v36
                                field_8: v31
                            };
                            v1 = <T as alloc::string::ToString>::to_string(&v12);
                            v16 = v5;
                            v19 = v1;
                            v15 = 4;
                            alloc::boxed::Box<T>::new(&v15);
                            return v39;
                        }
                    } else {
                        if !std::path::Path::is_dir(v9, v28) as i32 && !*((a4 + 48) as &i8) && *((a4 + 55) as &i8) != 2 {
                            v1 = struct25 {
                                field_0: 1
                                field_8: v0
                                field_16: v31
                                field_24: 1
                            };
                            v16 = <T as alloc::string::ToString>::to_string(&v1);
                            v15 = 9;
                            alloc::boxed::Box<T>::new(&v15);
                            return v39;
                        }
                    }
                }
                v14 = std::fs::metadata(v0, v31);
                v38 = v9;
                if v24 != 2 && std::path::Path::is_dir(v38, v28) as i8 {
                    match (v40) {
                        0 => {
                            return 0;
                        }
                        2 => {
                            v5 = struct25 {
                                field_0: 1
                                field_8: v38
                                field_16: v28
                                field_24: 1
                            };
                            v11 = <T as alloc::string::ToString>::to_string(&v5);
                            v1 = struct25 {
                                field_0: 1
                                field_8: v0
                                field_16: v42
                                field_24: 1
                            };
                            v12 = <T as alloc::string::ToString>::to_string(&v1);
                            v16 = v11;
                            v19 = v12;
                            v15 = 6;
                            v39 = alloc::boxed::Box<T>::new(&v15);
                            return v39;
                        }
                        _ => {
                            v1 = uucore::util_name();
                            v2 = v43;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = v0;
                            v3 = v10;
                            v4 = 1;
                            eprint!("overwrite {}? ", &v1);
                            eprint!(" ");
                            v11 = struct8 {
                                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                            };
                            v44 = <std::io::stdio::Stderr as std::io::Write>::flush(&v11);
                            if v44 {
                                v12 = v44;
                                v2 = v43;
                                show_error!("{}", &v12);
                                std::process::exit(1); /* do not return */
                            }
                            if !uucore::read_yes() as i8 {
                                v23 = std::io::error::Error::new(39, 1, 0);
                                v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
                                return v39;
                            }
                        }
                    }
                }
                v41 = uu_mv::rename(v38, v28, v0, v10, a4, 0);
                v39 = (!v41 ? 0 : uu_mv::handle_two_paths::{{closure}}(v41));
                return v39;
            }
        }
        v32 = v9;
        v1 = std::path::Path::components(v32, v28);
        v14 = std::path::Path::components(".");
        if !<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v14) && !std::path::Path::ends_with(v32, v28, "/.") as i8 && !std::path::Path::is_file(v32, v28) as i8 {
            v1 = struct16 {
                field_0: v32
                field_8: v28
            };
            v16 = <T as alloc::string::ToString>::to_string(&v1);
            v15 = 3;
            alloc::boxed::Box<T>::new(&v15);
            return v39;
        }
        v5 = struct25 {
            field_0: 1
            field_8: v32
            field_16: v28
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
        v16 = v11;
        v19 = v12;
        v15 = 2;
        alloc::boxed::Box<T>::new(&v15);
        return v39;
    } else if uucore::features::fs::path_ends_with_terminator(a0, a1) as i8 {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v16 = <T as alloc::string::ToString>::to_string(&v1);
        v15 = 1;
        alloc::boxed::Box<T>::new(&v15);
        return v39;
    } else {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v16 = <T as alloc::string::ToString>::to_string(&v1);
        v15 = 0;
        alloc::boxed::Box<T>::new(&v15);
        return v39;
    }
}
