fn uu_mv::handle_two_paths(a0: &u8, a1: u32, a2: &&struct_0, a3: u32, a4: void*) -> u64 {
    let v0: i64;  // [sp-0x1b8]
    let v1: i64;  // [sp-0x1a8], Other Possible Types: struct25, struct20, struct16, struct24
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [sp-0x198]
    let v4: i8;  // [sp-0x190]
    let v5: struct25;  // [sp-0x168], Other Possible Types: i64, struct24
    let v6: i64;  // [sp-0x160]
    let v7: i64;  // [sp-0x158]
    let v8: i8;  // [sp-0x150]
    let v9: i64;  // [sp-0x148]
    let v10: i64;  // [sp-0x140]
    let v11: struct24;  // [bp-0x138], Other Possible Types: struct8, struct16
    let v12: i64;  // [sp-0x120], Other Possible Types: struct24, struct16
    let v13: i64;  // [sp-0x118]
    let v14: i64;  // [sp-0x110]
    let v15: i64;  // [sp-0x108]
    let v16: i64;  // [sp-0x100]
    let v17: i64;  // [sp-0xf8], Other Possible Types: struct20, struct16, struct24
    let v18: struct24;  // [sp-0xf0], Other Possible Types: i64
    let v19: i64;  // [sp-0xe8]
    let v20: i64;  // [sp-0xe0]
    let v21: struct24;  // [bp-0xd8], Other Possible Types: i64
    let v22: i8;  // [bp-0x48]
    let v24: i8;  // r13b
    let v25: i64;  // rax
    let v27: i64;  // r14
    let v28: i64;  // r15
    let v29: i64;  // r12
    let v30: i64;  // rbp
    let v32: i64;  // r14
    let v33: i64;  // r12
    let v34: i64;  // r15
    let v35: i8;  // r13b
    let v37: i64;  // r15
    let v38: i64;  // r13
    let v39: i64;  // r15
    let v41: i64;  // r12
    let v42: i64;  // rax
    let v43: i32;  // eax
    let v44: i64;  // rax
    let v45: i64;  // rdx
    let v46: i64;  // rax

    v24 = *((a4 + 54) as &i8);
    if v24 == 1 && uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) as i8 {
        v5 = 1;
        v6 = a2;
        v7 = a3;
        v8 = 1;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        v12 = &v5;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = &v1;
        v15 = <os_display::Quoted as core::fmt::Display>::fmt;
        v17 = "backing up ";
        v18 = 3;
        v21 = 0;
        v19 = &v12;
        v20 = 2;
        core::option::Option<T>::map_or_else();
        v25 = std::io::error::Error::new(0, &v22);
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
        return v42;
    }
    v0 = a2;
    v10 = a3;
    v17 = std::fs::symlink_metadata(a0, a1);
    if v17 != 2 {
        v16 = a1;
        v1 = std::path::Path::components(a0, v16);
        v27 = v0;
        v28 = a0;
        v29 = v10;
        v17 = std::path::Path::components(v27, v29);
        v30 = v16;
        v9 = v28;
        if !(!<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v17)) || !(!uucore::features::fs::are_hardlinks_to_same_file(v28, v30, v27, v29) as i8) {
            if !(!v24) {
                goto LABEL_4e93c2;
            }
        } else {
            if !(!v24) || !(uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(v28, v30, v27, v29) as i8) {
LABEL_4e93c2:
                v32 = v0;
                v33 = v10;
                v35 = std::path::Path::is_dir(v32, v33) as i32;
                if !uucore::features::fs::path_ends_with_terminator(v32, v33) as i8 {
                    if !v35 {
                        goto LABEL_4e966c;
                    }
                } else {
                    if !v35 {
                        if !std::path::Path::is_dir(v9, v30) as i32 && !*((a4 + 48) as &i8) && *((a4 + 55) as &i8) != 2 {
                            v1 = struct25 {
                                field_0: 1
                                field_8: v0
                                field_16: v33
                                field_24: 1
                            };
                            v18 = <T as alloc::string::ToString>::to_string(&v1);
                            v17 = 9;
                            alloc::boxed::Box<T>::new(&v17);
                            return v42;
                        }
LABEL_4e966c:
                        v17 = std::fs::metadata(v0, v33);
                        v41 = v9;
                        if v17 != 2 && std::path::Path::is_dir(v41, v30) as i8 {
                            switch (v43) {
                            case 0:
                                return 0;
                            case 2:
                                v5 = struct25 {
                                    field_0: 1
                                    field_8: v41
                                    field_16: vvar_104{reg 56}
                                    field_24: 1
                                };
                                v11 = <T as alloc::string::ToString>::to_string(&v5);
                                v1 = struct25 {
                                    field_0: 1
                                    field_8: v0
                                    field_16: v47
                                    field_24: 1
                                };
                                v12 = <T as alloc::string::ToString>::to_string(&v1);
                                v18 = v11;
                                v21 = v12;
                                v17 = 6;
                                v42 = alloc::boxed::Box<T>::new(&v17);
                                return v42;
                            default:
                                v1 = uucore::util_name();
                                v2 = v45;
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
                                v46 = <std::io::stdio::Stderr as std::io::Write>::flush(&v11);
                                if v46 {
                                    v12 = v46;
                                    v1 = uucore::util_name();
                                    v2 = v45;
                                    eprint!("{:?}: ", &v1);
                                    eprintln!("{:?}", &v12);
                                    std::process::exit(1); /* do not return */
                                }
                                if !uucore::read_yes() as i8 {
                                    v25 = std::io::error::Error::new(39, 1, 0);
                                    v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
                                    return v42;
                                }
                            }
                        }
                        v44 = uu_mv::rename(v41, v30, v0, v10, a4, 0);
                        v42 = (!v44 ? 0 : uu_mv::handle_two_paths::{{closure}}(v44));
                        return v42;
                    }
                }
                if *((a4 + 48) as &i8) {
                    v37 = v9;
                    if !std::path::Path::is_dir(v37, v30) as i8 {
                        v1 = struct25 {
                            field_0: 1
                            field_8: v0
                            field_16: v33
                            field_24: 1
                        };
                        v18 = <T as alloc::string::ToString>::to_string(&v1);
                        v17 = 5;
                        alloc::boxed::Box<T>::new(&v17);
                        return v42;
                    }
                    v17 = v37;
                    v18 = v30;
                    v19 = v0;
                    v20 = v33;
                    v42 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_mv::rename(v37, v30, v19, v33, a4, 0), &v17);
                    return v42;
                } else {
                    v38 = v0;
                    v39 = v9;
                    if std::path::Path::starts_with(v38, v33, v39, v30) as i8 {
                        v11 = struct16 {
                            field_0: v39
                            field_8: v30
                        };
                        v5 = <T as alloc::string::ToString>::to_string(&v11);
                        v12 = struct16 {
                            field_0: v38
                            field_8: v33
                        };
                        v1 = <T as alloc::string::ToString>::to_string(&v12);
                        v18 = v5;
                        v21 = v1;
                        v17 = 4;
                        alloc::boxed::Box<T>::new(&v17);
                        return v42;
                    }
                    v17 = std::sys::pal::unix::os::split_paths::bytes_to_path(v39, v30);
                    v42 = uu_mv::move_files_into_dir(&v17, 1, v38, v33, a4);
                    return v42;
                }
            }
        }
        v34 = v9;
        v1 = std::path::Path::components(v34, v30);
        v17 = std::path::Path::components(".");
        if !<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v17) && !std::path::Path::ends_with(v34, v30, "/.") as i8 && !std::path::Path::is_file(v34, v30) as i8 {
            v1 = struct16 {
                field_0: v34
                field_8: v30
            };
            v18 = <T as alloc::string::ToString>::to_string(&v1);
            v17 = 3;
            alloc::boxed::Box<T>::new(&v17);
            return v42;
        }
        v5 = struct25 {
            field_0: 1
            field_8: v34
            field_16: v30
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
        v18 = v11;
        v21 = v12;
        v17 = 2;
        alloc::boxed::Box<T>::new(&v17);
        return v42;
    } else if uucore::features::fs::path_ends_with_terminator(a0, a1) as i8 {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v18 = <T as alloc::string::ToString>::to_string(&v1);
        v17 = 1;
        alloc::boxed::Box<T>::new(&v17);
        return v42;
    } else {
        v1 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v18 = <T as alloc::string::ToString>::to_string(&v1);
        v17 = 0;
        alloc::boxed::Box<T>::new(&v17);
        return v42;
    }
}
