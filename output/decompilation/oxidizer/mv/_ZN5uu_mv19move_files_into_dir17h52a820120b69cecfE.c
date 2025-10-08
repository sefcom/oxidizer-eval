fn uu_mv::move_files_into_dir(a0: i64, a1: i64, a2: &std::path::Path, a3: i64) -> u64 {
    let v0: u8;  // [bp-0x261]
    let v1: i64;  // [bp-0x260]
    let v2: struct16;  // [bp-0x260], Other Possible Types: struct712
    let v3: u128;  // [bp-0x260]
    let v4: i64;  // [bp-0x258]
    let v5: alloc::string::String;  // [bp-0x250], Other Possible Types: core::fmt::rt::Argument, struct_7 *, struct_9 *, struct24, u64
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x248], Other Possible Types: struct24, u64, unsigned long
    let v7: u64;  // [sp-0x240]
    let v8: struct640;  // [bp-0x240]
    let v9: u64;  // [bp-0x238]
    let v10: struct24;  // [bp-0x230], Other Possible Types: u64
    let v12: struct640;  // [bp-0x228]
    let v13: struct24;  // [bp-0x228]
    let v14: struct640;  // [bp-0x220]
    let v15: struct32;  // [bp-0x218]
    let v16: struct640;  // [bp-0x210]
    let v17: u32;  // [bp-0x1f0]
    let v18: u32;  // [bp-0x1ec]
    let v19: void*;  // [bp-0x1e8], Other Possible Types: u64
    let v20: std::path::PathBuf;  // [bp-0x1c8], Other Possible Types: struct136, struct25, struct_2 *, struct_5 *, u64
    let v21: struct24;  // [bp-0x1c8]
    let v22: core::fmt::Arguments;  // [bp-0x1c8]
    let v23: u128;  // [bp-0x1c8]
    let v24: core::fmt::rt::Argument;  // [bp-0x1c0], Other Possible Types: struct24, u64
    let v25: struct25;  // [bp-0x1b8], Other Possible Types: struct32, struct712, struct_0 *, struct_1 *, struct_3 *, struct_6 *, u64
    let v26: struct25;  // [bp-0x1b0], Other Possible Types: u8
    let v27: void*;  // [bp-0x1a8]
    let v28: Result<struct136, struct13>;  // [bp-0x138], Other Possible Types: struct24, core::fmt::Arguments, struct640, u64
    let v29: struct640;  // [bp-0x138]
    let v30: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x138], Other Possible Types: struct640, struct24, u128
    let v31: Result<struct24, struct24>;  // [bp-0x138]
    let v32: struct640;  // [bp-0x130], Other Possible Types: u128
    let v33: struct640;  // [bp-0x130], Other Possible Types: u128
    let v34: struct640;  // [bp-0x130]
    let v35: struct640;  // [bp-0x130]
    let v36: struct640;  // [bp-0x128], Other Possible Types: struct712
    let v37: struct640;  // [bp-0x128], Other Possible Types: struct712
    let v38: struct640;  // [bp-0x128]
    let v39: struct640;  // [bp-0x120], Other Possible Types: u64
    let v40: u64;  // [bp-0x88]
    let v41: struct24;  // [bp-0x78]
    let v42: struct640;  // [bp-0x68]
    let v43: struct32;  // [bp-0x60]
    let v44: struct16;  // [bp-0x60]
    let v47: i64;  // rdx
    let v48: u64;  // rcx
    let v49: void*;  // rbp
    let v50: i64;  // r15
    let v51: i64;  // r12
    let v52: u64;  // rbx
    let v53: u64;  // r14
    let v54: u64;  // rax
    let v55: u64;  // rax
    let v57: u64;  // rax
    let v59: void*;  // rbx
    let v60: u64;  // rcx
    let v62: std::io::stdio::Stderr;  // [bp-0x1e8]

    v43 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, std::thread::local::LocalKey<T>::with(), v47);
    if std::path::Path::is_dir(a2) {
        if *((a3 + 51) as &i8) {
            v10 = indicatif::multi::MultiProgress::new();
            if a1 <= 1 {
                goto LABEL_48c00d;
            }
            v5 = indicatif::progress_bar::ProgressBar::new(a1);
            v28 = indicatif::style::ProgressStyle::with_template("moving {msg} {wide_bar} {pos}/{len}");
            v20 = core::result::Result<T,E>::unwrap(&v28, "src/uu/mv/src/mv.rs");
            v28 = indicatif::progress_bar::ProgressBar::with_style(&v5, &v20);
            v21 = indicatif::multi::MultiProgress::add(&v10, &v28, v48);
        } else {
LABEL_48c00d:
            v19 = 0;
            if !a1 {
                return v59;
            }
        }
        v40 = a1 * 24;
        v0 = *((a3 + 54) as &i8);
        v18 = v0;
        v17 = *((a3 + 48) as &i8);
        loop {
            v52 = *((8 + a0 + v49 as &u8) as &i64);
            v53 = *((16 + a0 + v49 as &u8) as &i64);
            v30 = std::fs::metadata(v52, v53);
            if v30 as i64 == 2 {
                v20 = 1;
                v24 = v52;
                v25 = v53;
                v26 = 1;
                v5 = <T as alloc::string::SpecToString>::spec_to_string(v51);
                v39 = v8;
                v33 = *(&v5.field_0 as &i128);
                v28 = 0;
                uucore::mods::error::set_exit_code(1);
                v12 = uucore::util_name();
                v14 = v47;
                v5 = &v12;
                v6 = <&T as core::fmt::Display>::fmt;
                v8 = &v28;
                v9 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                v20 = &g_5416a0;
                v24 = 3;
                v27 = 0;
                v25 = &v5;
                v26 = 2;
                std::io::stdio::_eprint(v50);
            } else {
                if v19 {
                    v31 = alloc::string::String::from_utf8_lossy(v52, v53);
                    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v51, v34, v37);
                    indicatif::progress_bar::ProgressBar::set_message(v19, v51);
                }
                v54 = std::path::Path::file_name(v52, v53);
                if v54 {
                    v13 = std::path::Path::join(a2, v48, v54);
                    if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v43, &v13) || v0 == 2 {
                        v55 = uu_mv::assert_not_same_file(v52, v53, a2, v48, 1, v17);
                        if v55 {
                            v2 = struct16 {
                                field_0: v55
                                field_8: v47
                            };
                            uucore::mods::error::set_exit_code(*((v47 + 88) as &i64)(v55) as u32);
                            v5 = uucore::util_name();
                            v6 = v47;
                            v20 = &v5;
                            v24 = <&T as core::fmt::Display>::fmt;
                            v25 = &v2;
                            v26 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v28 = core::fmt::Arguments {
                                pieces: [&g_5416a0, ": ", "\n"]
                                args: &[core::fmt::rt::Argument] {
                                    ptr: v50
                                    len: 2
                                }
                                fmt: 0
                            };
                            std::io::stdio::_eprint(&v28);
                            v28 = v29;
                            v33 = v32;
                            v37 = v36;
                            v2 = v1;
                        } else {
                            v16 = uu_mv::rename(v52, v53, v14, v15, a3, (v10 ? &v10 : 0));
                            v30 = v28;
                            v35 = v34;
                            v38 = v37;
                            if v16 {
                                v30 = <T as alloc::string::SpecToString>::spec_to_string(&v16);
                                if v37 {
                                    v57 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v16, v52, v53, v14, v15);
                                    if v10 {
                                        indicatif::multi::MultiProgress::suspend(v10, v57);
                                        v30 = v28;
                                        v35 = v34;
                                        v38 = v37;
                                    } else {
                                        v2 = v57;
                                        uucore::mods::error::set_exit_code(1);
                                        v5 = uucore::util_name();
                                        v6 = v47;
                                        v22 = &v5;
                                        v24 = <&T as core::fmt::Display>::fmt;
                                        v25 = &v2;
                                        v26 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                                        v28 = core::fmt::Arguments {
                                            pieces: [&g_5416a0, ": ", "\n"]
                                            args: &[core::fmt::rt::Argument] {
                                                ptr: v50
                                                len: 2
                                            }
                                            fmt: 0
                                        };
                                        std::io::stdio::_eprint(&v28);
                                        v30 = v29;
                                        v35 = v32;
                                        v38 = v36;
                                    }
                                } else {
                                    v28 = v16;
                                    uucore::mods::error::set_exit_code(1);
                                    v30 = v28;
                                    v35 = v34;
                                    v38 = v37;
                                }
                            }
                            v37 = v38;
                            if v19 {
                                indicatif::progress_bar::ProgressBar::inc(&v62, 1);
                            }
                            v30 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v14, v15);
                            v25 = v37;
                            v23 = *(&v30.field_0 as &i128);
                            v44 = hashbrown::map::HashMap<K,V,S,A>::insert(v50);
                            v28 = v30;
                            v33 = v35;
                        }
                    } else {
                        v3 = *(&v14 as &i128);
                        v5 = v52;
                        v6 = v53;
                        v20 = &v2;
                        v24 = <std::path::Display as core::fmt::Display>::fmt;
                        v25 = &v5;
                        v26 = <std::path::Display as core::fmt::Display>::fmt;
                        v30 = core::fmt::Arguments {
                            pieces: ["will not overwrite just-created '", "' with '", "'"]
                            args: &[core::fmt::rt::Argument] {
                                ptr: v50
                                len: 2
                            }
                            fmt: 0
                        };
                        v41 = core::option::Option<T>::map_or_else(&v30);
                        v39 = 1;
                        v30 = *(&v41.field_0 as &i128);
                        v37 = v42;
                        v2 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v30 as u384) as u64
                            field_8: &g_541810
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v2.field_0));
                        v5 = uucore::util_name();
                        v6 = v47;
                        v20 = &v5;
                        v24 = <&T as core::fmt::Display>::fmt;
                        v25 = &v2;
                        v26 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v28 = core::fmt::Arguments {
                            pieces: [&g_5416a0, ": ", "\n"]
                            args: &[core::fmt::rt::Argument] {
                                ptr: v50
                                len: 2
                            }
                            fmt: 0
                        };
                        std::io::stdio::_eprint(&v28);
                        v28 = v29;
                        v33 = v32;
                        v37 = v36;
                        v2 = v1;
                    }
                    v34 = v33;
                    if v40 == v49 {
                        break;
                    }
                    continue;
                } else {
                    v20 = 1;
                    v24 = v52;
                    v25 = v53;
                    v26 = 1;
                    v5 = <T as alloc::string::SpecToString>::spec_to_string(v51);
                    v39 = v8;
                    v33 = *(&v5.field_0 as &i128);
                    v28 = 0;
                    uucore::mods::error::set_exit_code(1);
                    v2 = uucore::util_name();
                    v4 = v47;
                    v5 = &v2;
                    v6 = <&T as core::fmt::Display>::fmt;
                    v8 = &v28;
                    v9 = <uu_mv::error::MvError as core::fmt::Display>::fmt;
                    v20 = &g_5416a0;
                    v24 = 3;
                    v27 = 0;
                    v25 = &v5;
                    v26 = 2;
                    std::io::stdio::_eprint(v50);
                }
            }
            if v40 == v49 {
                break;
            }
        }
    } else {
        v20 = struct25 {
            field_0: 1
            field_8: v47
            field_16: v60
            field_24: 1
        };
        v5 = <T as alloc::string::SpecToString>::spec_to_string(&v20);
        v39 = v7;
        v32 = *(&v5.field_0 as &i128);
        v28 = 6;
        alloc::boxed::Box<T>::new(&v28);
    }
    return v59;
}
