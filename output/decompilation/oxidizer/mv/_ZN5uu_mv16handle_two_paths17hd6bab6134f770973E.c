fn uu_mv::handle_two_paths(a0: u64, a1: u64, a2: u64, a3: &u64, a4: i64) -> long long {
    let v0: struct640;  // [bp-0x190], Other Possible Types: struct25, u64
    let v1: struct640;  // [bp-0x188], Other Possible Types: u64
    let v2: struct640;  // [bp-0x180], Other Possible Types: u64
    let v3: struct640;  // [bp-0x178], Other Possible Types: u8
    let v4: struct712;  // [bp-0x168]
    let v5: &u64;  // [bp-0x160]
    let v6: struct25;  // [bp-0x158], Other Possible Types: u64
    let v7: u64;  // [bp-0x150]
    let v8: &u64;  // [bp-0x148]
    let v9: u8;  // [bp-0x140]
    let v10: struct712;  // [bp-0x138]
    let v11: struct16;  // [bp-0x130], Other Possible Types: struct24
    let v12: u64;  // [bp-0x120]
    let v13: std::io::stdio::Stderr;  // [bp-0x110], Other Possible Types: std::path::PathBuf, struct24, struct32, struct712, core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v16: struct24;  // [bp-0x108], Other Possible Types: u128
    let v17: u64;  // [bp-0xf8]
    let v18: iNone;  // [bp-0xf0]
    let v19: u64;  // [bp-0xe0]
    let v20: struct24;  // [bp-0x60]
    let v21: u64;  // [bp-0x50]
    let v22: alloc::string::String;  // [bp-0x48]
    let v24: u64;  // rax
    let v25: core::fmt::rt::Argument;  // eax
    let v26: u64;  // rbp
    let v27: &u64;  // r12
    let v28: u64;  // r15
    let v29: u8;  // al
    let v30: u64;  // r12
    let v31: u64;  // rax
    let v33: struct712;  // r15
    let v34: u32;  // eax
    let v35: &u64;  // rbx
    let v36: u64;  // rdx
    let v37: core::result::Result<(), std::io::error::Error>;  // rax
    let v38: void*;  // rax
    let v40: u64;  // rax

    if *((a4 + 54) as &i8) == 1 && uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) {
        v6 = 1;
        v7 = a2;
        v8 = a3;
        v9 = 1;
        v0 = 1;
        v1 = a0;
        v2 = a1;
        v3 = 1;
        v22 = format!("backing up {} might destroy source;  {} not moved", &v6, &v0);
        std::io::error::Error::new(0, &v22);
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
    }
    v5 = a3;
    v13 = std::fs::symlink_metadata(a0, a1);
    if v13 as i32 != 2 {
        v26 = a2;
        v27 = v5;
        v4 = a0;
        v10 = a1;
        v28 = std::path::Path::is_dir(a2, v27);
        v29 = std::path::Path::is_dir(a0, a1);
        if v27 {
            if -1 + v26 + v27 == "/" {
                goto LABEL_48abf9;
            } else {
                if v29 || v28 || *((-1 + v26 + v27) as &i8) != 92 || *((a4 + 48) as &i8) || *((a4 + 55) as &i8) == 2 {
                    goto LABEL_48abf9;
                }
                v0 = struct25 {
                    field_0: 1
                    field_8: v26
                    field_16: v27
                    field_24: 1
                };
                v16 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            }
        } else {
LABEL_48abf9:
            v30 = v26;
            v31 = uu_mv::assert_not_same_file(v4, v10, v26, v27, v28 & 4294967295, *((a4 + 48) as &i8), *((a4 + 54) as &i8));
            if v31 {
                return v31;
            }
            if v28 {
                if (*((a4 + 48) as &i8) & 1) {
                    if std::path::Path::is_dir(v4, v10) {
                        v13 = struct32 {
                            field_0: v4
                            field_8: v10
                            field_16: v30
                            field_24: v2
                        };
                        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_mv::rename(v4, v10, v30, v2, a4, 0), &v13);
                    }
                    v0 = struct25 {
                        field_0: 1
                        field_8: v30
                        field_16: v5
                        field_24: 1
                    };
                    v16 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                } else {
                    v13 = std::sys::pal::unix::os::split_paths::bytes_to_path(v4, v10);
                    return uu_mv::move_files_into_dir(&v13, 1, v30, v5, a4);
                }
            } else {
                v13 = std::fs::metadata(v30, v5);
                v33 = v10;
                if v13 as i32 == 2 || !std::path::Path::is_dir(v4, v33) {
                    v40 = uu_mv::rename(v4, v33, v30, v5, a4, 0);
                    return (!v40 ? 0 : uu_mv::handle_two_paths::{{closure}}(v40));
                }
                v34 = *((a4 + 53) as &i8);
                if !v34 {
                    return 0;
                }
                v35 = v5;
                if v34 == 1 {
                    v0 = uucore::util_name();
                    v1 = v36;
                    eprint!("{}: ", &v0);
                    v0 = 1;
                    v1 = v30;
                    v2 = v35;
                    v3 = 1;
                    eprint!("overwrite {}? ", &v0);
                    eprint!(" ");
                    v13 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                    v37 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                    if let Err(_) = v37 {
                        v38 = uu_mv::handle_two_paths::{{closure}}(v37);
                        if v38 {
                            v11 = struct16 {
                                field_0: v38
                                field_8: &g_541810
                            };
                            uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v38) as u32 as u64);
                            v6 = uucore::util_name();
                            v7 = v36;
                            eprintln!("{}: {}", &v6, &v11);
                        }
                    }
                    if !uucore::read_yes() {
                        v13 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(0x1, 0);
                        std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v13), &g_541778);
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                    }
                }
                v6 = struct25 {
                    field_0: 1
                    field_8: v4
                    field_16: v33
                    field_24: 1
                };
                v20 = <T as alloc::string::SpecToString>::spec_to_string(&v6);
                v0 = struct25 {
                    field_0: 1
                    field_8: v30
                    field_16: v35
                    field_24: 1
                };
                v11 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                v17 = v21;
                v16 = v20.field_0;
                v18 = v11.field_0;
                v19 = v12;
                v13 = 5;
            }
        }
    } else if a1 {
        v25 = *((a0 + a1 - 1) as &i8);
        if v25 != 47 && v25 != 92 {
            goto LABEL_48ab60;
        }
        v0 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v16 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
    } else {
LABEL_48ab60:
        v0 = struct25 {
            field_0: 1
            field_8: a0
            field_16: a1
            field_24: 1
        };
        v16 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
    }
    return alloc::boxed::Box<T>::new(&v13) as u64;
}
