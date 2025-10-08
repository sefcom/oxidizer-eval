fn uu_more::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x4d8]
    let v1: u8;  // [bp-0x4d8]
    let v2: struct32;  // [bp-0x4c8], Other Possible Types: u64
    let v3: void*;  // [bp-0x4c0]
    let v4: struct24;  // [bp-0x4b8]
    let v5: u8;  // [bp-0x4b0]
    let v6: u64;  // [bp-0x4a8]
    let v7: u64;  // [bp-0x4a0]
    let v8: struct8;  // [bp-0x488]
    let v9: struct24;  // [bp-0x480]
    let v10: void*;  // [bp-0x478], Other Possible Types: struct64
    let v11: u64;  // [bp-0x470]
    let v12: void*;  // [bp-0x468]
    let v13: iNone;  // [bp-0x458]
    let v14: u64;  // [bp-0x448]
    let v15: u64;  // [bp-0x440]
    let v16: u64;  // [bp-0x438]
    let v17: Result<struct4, struct8>;  // [bp-0x430]
    let v18: u32;  // [bp-0x42c]
    let v19: u64;  // [bp-0x428]
    let v20: void*;  // [bp-0x420], Other Possible Types: struct16, struct24
    let v21: struct56;  // [bp-0x420], Other Possible Types: u64
    let v22: void*;  // [bp-0x418]
    let v23: void*;  // [bp-0x418]
    let v24: struct24;  // [bp-0x410], Other Possible Types: u64
    let v25: u128;  // [bp-0x408]
    let v26: u128;  // [bp-0x3f8]
    let v27: iNone;  // [bp-0x3e8]
    let v28: u64;  // [bp-0x3d8]
    let v29: u64;  // [bp-0x3d0]
    let v30: struct40;  // [bp-0x3c8]
    let v31: struct56;  // [bp-0x3a0]
    let v32: u64;  // [bp-0x398]
    let v33: struct32;  // [bp-0x368]
    let v34: alloc::string::String;  // [bp-0x340]
    let v35: u64;  // [bp-0x330]
    let v36: alloc::string::String;  // [bp-0x328]
    let v37: u64;  // [bp-0x318]
    let v38: alloc::string::String;  // [bp-0x310]
    let v39: u64;  // [bp-0x300]
    let v40: std::io::stdio::Stdin;  // [bp-0x2f8], Other Possible Types: struct10, struct16, struct28, struct56, struct712
    let v41: struct10;  // [bp-0x2f8]
    let v42: struct10;  // [bp-0x2f8], Other Possible Types: u128
    let v43: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x2f8]
    let v44: struct24;  // [bp-0x2f0]
    let v45: struct24;  // [bp-0x2f0]
    let v46: u64;  // [bp-0x2e8]
    let v47: u64;  // [bp-0x2e8]
    let v48: u32;  // [bp-0x2e0]
    let v51: u64;  // r14
    let v52: u64;  // rbx
    let v53: iNone;  // xmm0
    let v54: u8;  // al
    let v55: i64;  // rax
    let v56: u64;  // r13
    let v58: void*;  // r13
    let v59: i64;  // rax
    let v61: u64;  // rax
    let v63: i64;  // rdx
    let v64: u64;  // rax
    let v65: u64;  // rax
    let v67: u64;  // rax
    let v68: u64;  // rax
    let v70: i32;  // eax
    let v71: u32;  // r9d
    let v72: u64;  // rcx
    let v73: u64;  // rax
    let v79: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    std::panicking::set_hook(alloc::boxed::Box<T>::new(), &g_5243c8);
    v40 = uu_more::uu_app();
    v20 = clap_builder::builder::command::Command::try_get_matches_from(&v40, a0, a1);
    if (((0 ^ v20.field_0) & (0 ^ -(v21))) >> 63) as char {
        v51 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
    } else {
        v31 = v21;
        v30 = uu_more::Options::from(&v31);
        v40 = uu_more::setup_term();
        v51 = v40.field_0;
        if !v40.field_0 {
            v9 = v45;
            v40 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v31);
            v10 = clap_builder::parser::error::MatchesError::unwrap(&v40);
            if v10.field_0 as i64 {
                v52 = v15;
                v16 = core::iter::traits::exact_size::ExactSizeIterator::len(v52);
                v28 = v14;
                v53 = v10.field_0;
                v27 = v13;
                v26 = v10.field_16;
                *(&v25 as void*) = v53;
                v29 = v52;
                v54 = 0;
                loop {
                    v20 = 0;
                    v23 = v22;
                    if !(v54 & 1) {
                        v55 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v25);
                        if v55 {
                            v56 = *((v55 + 8) as &i64);
                            v24 = *((v55 + 16) as &i64);
                            v23 = v56;
                        } else {
                            v23 = 0;
                        }
                    }
                    v58 = v23;
                    v59 = core::option::Option<T>::get_or_insert_with(&v20, &v25);
                    if !v58 {
                        break;
                    }
                    if std::path::Path::is_dir(v58, v24) {
                        v61 = crossterm::terminal::disable_raw_mode();
                        if !v61 {
                            v2 = 1;
                            v3 = v58;
                            v4 = v24;
                            v5 = 1;
                            v34 = format!("{} is a directory.", &v2);
                            v48 = 0;
                            v42 = *(&v34.vec.buf.inner.cap as &i128);
                            v46 = v35;
                            v0 = struct16 {
                                field_0: alloc::boxed::Box<T>::new(&v42 as u384) as u64
                                field_8: &g_5244a0
                            };
                            uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v0.field_0));
                            v6 = uucore::util_name();
                            v7 = v63;
                            eprintln!("{}: {}", &v6, &v0);
                            v64 = crossterm::terminal::enable_raw_mode();
                            v40 = v42;
                            v45 = v44;
                            v46 = v47;
                            if !v64 {
                                goto LABEL_472b00;
                            }
                            v73 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v64);
                        } else {
                            v73 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v61);
                        }
                        goto LABEL_4732dc;
                    } else {
                        v43 = std::fs::metadata(v58, v24);
                        if v43 as i64 == 2 {
                            v65 = crossterm::terminal::disable_raw_mode();
                            if !v65 {
                                v2 = 1;
                                v3 = v58;
                                v4 = v24;
                                v5 = 1;
                                v36 = format!("cannot open {}: No such file or directory", &v2);
                                v48 = 0;
                                v42 = *(&v36.vec.buf.inner.cap as &i128);
                                v46 = v37;
                                v0 = struct16 {
                                    field_0: alloc::boxed::Box<T>::new(&v42 as u384) as u64
                                    field_8: &g_524418
                                };
                                uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v0.field_0));
                                v6 = uucore::util_name();
                                v7 = v63;
                                eprintln!("{}: {}", &v6, &v0);
                                v67 = crossterm::terminal::enable_raw_mode();
                                v40 = v42;
                                v45 = v44;
                                v46 = v47;
                                if !v67 {
                                    goto LABEL_472b00;
                                }
                                v73 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                            } else {
                                v73 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v65);
                            }
LABEL_4732dc:
                            v51 = v73;
                            break;
                        } else {
                            v17 = std::fs::File::open(v58, v24);
                            match v17 {
                                Err(v8) => {
                                    v68 = crossterm::terminal::disable_raw_mode();
                                    if !v68 {
                                        v2 = struct32 {
                                            field_0: 1
                                            field_8: v58
                                            field_16: v24
                                            field_24: 1
                                        };
                                        v1 = std::io::error::Error::kind(v8) as u8;
                                        v38 = format!("cannot open {}: {}", &v2, &v1 as u64);
                                        v48 = 0;
                                        v42 = *(&v38.vec.buf.inner.cap as &i128) as u128;
                                        v46 = v39;
                                        v0 = struct16 {
                                            field_0: alloc::boxed::Box<T>::new(&v42 as u384) as u64
                                            field_8: &g_524418
                                        };
                                        uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v0.field_0) as u32 as u64);
                                        v6 = uucore::util_name();
                                        v7 = v63;
                                        eprintln!("{}: {}", &v6, &v0);
                                        v68 = crossterm::terminal::enable_raw_mode();
                                        if !v68 {
                                            v40 = v42;
                                            v45 = v44;
                                            v46 = v47;
                                            goto LABEL_472b00;
                                        }
                                    }
                                    v51 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                                },
                                Ok(_) => {
                                    v70 = core::str::converts::from_utf8(v58, v24) as u32;
                                    v71 = 0;
                                    v72 = 0;
                                    v51 = uu_more::more(v18, &v9, (2 <= v16) as u8 as u32, v45, v46, v71, v70, &v30);
                                    v40 = v41;
                                    if v51 {
                                        break;
                                    }
LABEL_472b00:
                                    v41 = v40;
                                    v54 = v20 as u8;
                                },
                            }
                        }
                    }
                }
            } else {
                v10 = 0;
                v11 = 1;
                v12 = 0;
                v40 = std::io::stdio::stdin();
                v79 = <std::io::stdio::Stdin as std::io::Read>::read_to_string(&v40, &v10);
                if (v79 as i8 & 1) {
                    v51 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v79 as &char + 8) as &i64));
                } else if v12 {
                    v33 = struct32 {
                        field_0: *(&v10 as &i128)
                        field_16: v12
                        field_24: 0
                    };
                    v51 = uu_more::more(&v33, &v9, &v30);
                } else {
                    v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("bad usage");
                    v40 = struct28 {
                        field_0: *(&v20.field_0 as &i128)
                        field_16: v24
                        field_24: 1
                    };
                    v51 = alloc::boxed::Box<T>::new(&v40) as u64;
                }
            }
        }
    }
    return v51;
}
