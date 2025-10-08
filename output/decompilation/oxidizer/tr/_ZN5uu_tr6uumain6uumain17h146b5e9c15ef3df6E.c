fn uu_tr::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x900]
    let v1: u8;  // [bp-0x900]
    let v2: alloc::string::String;  // [bp-0x8f8], Other Possible Types: u192
    let v3: struct16;  // [bp-0x8f8], Other Possible Types: struct24, u64
    let v4: u64;  // [bp-0x8f0]
    let v5: u64;  // [bp-0x8e8]
    let v6: struct16;  // [bp-0x8e0]
    let v7: void*;  // [bp-0x8d0]
    let v8: u64;  // [bp-0x8c8]
    let v9: struct24;  // [bp-0x8c0], Other Possible Types: u64
    let v10: struct16;  // [bp-0x8c0]
    let v11: u64;  // [bp-0x8b8]
    let v12: void*;  // [bp-0x8b8]
    let v13: u8;  // [bp-0x8b0]
    let v14: u8;  // [bp-0x8a8]
    let v15: iNone;  // [bp-0x8a0]
    let v16: u64;  // [bp-0x890]
    let v17: struct16;  // [sp-0x888], Other Possible Types: u128
    let v18: u64;  // [bp-0x878]
    let v19: u8;  // [bp-0x868]
    let v20: i64;  // [bp-0x860], Other Possible Types: struct_1 *, struct_2 *, struct_3 *, struct_4 *
    let v21: u64;  // [bp-0x858]
    let v22: std::io::stdio::Stdin;  // [bp-0x850]
    let v23: iNone;  // [bp-0x848]
    let v24: u64;  // [bp-0x838]
    let v25: u64;  // [bp-0x830]
    let v26: u64;  // [bp-0x828]
    let v27: iNone;  // [bp-0x820]
    let v28: iNone;  // [bp-0x810]
    let v29: u64;  // [bp-0x800]
    let v30: std::io::stdio::Stdout;  // [bp-0x7f8], Other Possible Types: struct17, struct56, struct712, struct80, struct32, struct24, struct28
    let v31: struct48;  // [bp-0x7f8]
    let v32: Result<struct48, struct12>;  // [bp-0x7f8]
    let v33: Result<struct48, struct12>;  // [bp-0x7f8]
    let v34: u64;  // [bp-0x7f0]
    let v35: struct32;  // [bp-0x7f0]
    let v36: u64;  // [bp-0x7e8]
    let v37: u64;  // [bp-0x7e8]
    let v38: u64;  // [bp-0x7e8]
    let v39: u32;  // [bp-0x7e0]
    let v40: void*;  // [bp-0x7e0]
    let v41: u64;  // [bp-0x7d8]
    let v42: void*;  // [bp-0x770]
    let v43: iNone;  // [bp-0x528]
    let v44: u64;  // [bp-0x518]
    let v45: struct24;  // [bp-0x510]
    let v46: iNone;  // [bp-0x4f8]
    let v47: iNone;  // [bp-0x4e8]
    let v48: alloc::string::String;  // [bp-0x4d0]
    let v49: u64;  // [bp-0x4c0]
    let v50: alloc::string::String;  // [bp-0x4b8]
    let v51: u64;  // [bp-0x4a8]
    let v52: alloc::string::String;  // [bp-0x4a0]
    let v53: u64;  // [bp-0x490]
    let v54: struct48;  // [bp-0x488]
    let v55: struct80;  // [bp-0x458]
    let v56: struct104;  // [bp-0x408]
    let v57: struct48;  // [bp-0x3a0]
    let v58: u128;  // [bp-0x390]
    let v59: u128;  // [bp-0x380]
    let v60: u64;  // [bp-0x370]
    let v61: struct48;  // [bp-0x368]
    let v62: u128;  // [bp-0x358]
    let v63: u128;  // [bp-0x348]
    let v64: u64;  // [bp-0x338]
    let v65: struct33;  // [bp-0x330], Other Possible Types: struct64, struct24, u64
    let v66: struct712;  // [bp-0x330]
    let v67: u64;  // [bp-0x328]
    let v68: u64;  // [bp-0x320]
    let v69: u8;  // [bp-0x318]
    let v70: u128;  // [bp-0x310]
    let v71: struct48;  // [bp-0x68]
    let v73: u8;  // bpl
    let v74: u8;  // r15b
    let v75: u8;  // al
    let v78: u64;  // rax
    let v79: i64;  // r13
    let v81: u64;  // rdx
    let v83: void*;  // rdi
    let v84: void*;  // r8
    let v85: u64;  // r13
    let v86: u64;  // r12
    let v87: u64;  // r14
    let v88: u64;  // rax
    let v89: u64;  // r15
    let v94: u128;  // [bp-0x7f8]

    v30 = uu_tr::uu_app();
    v66 = clap_builder::builder::command::Command::after_help(&v30);
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v66, a0, a1);
    if (((0 ^ v10.field_0) & (0 ^ -(v9))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
    }
    v29 = v16;
    v28 = v15;
    v27 = *(&v13 as &i128);
    v25 = v10.field_0;
    v26 = v11;
    v73 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "delete");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "complement");
    v74 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "squeeze-repeats");
    v75 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "truncate-set1");
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25);
    v65 = clap_builder::parser::error::MatchesError::unwrap(&v30);
    v30 = struct80 {
        field_0: 1
        field_8: v65.field_0
        field_24: v65.field_16
        field_40: v70
        field_56: v65.field_48
        field_72: 0
    };
    v42 = 0;
    core::iter::traits::iterator::Iterator::collect(&v19, &v30);
    if !v21 {
        v65 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v30 = struct28 {
            field_0: *(&v65.field_0 as &i128)
            field_16: v68
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
    } else if (((v73 | v74) ^ 1) & v21 == 1) {
        v65 = 1;
        v67 = *((v20 + 8) as &i64);
        v68 = *((v20 + 16) as &i64);
        v69 = 1;
        v48 = format!("missing operand after {}\nTwo strings must be given when translating.", &v65);
        v30 = struct28 {
            field_0: *(&v48.vec.buf.inner.cap as &i128)
            field_16: v49
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
    } else if (v21 == 1 & v73 & v74) {
        v65 = 1;
        v67 = *((v20 + 8) as &i64);
        v68 = *((v20 + 16) as &i64);
        v69 = 1;
        v50 = format!("missing operand after {}\nTwo strings must be given when deleting and squeezing.", &v65);
        v30 = struct28 {
            field_0: *(&v50.vec.buf.inner.cap as &i128)
            field_16: v51
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
    } else if v21 == 1 {
LABEL_460edb:
        v79 = v20;
        v30 = struct17 {
            field_0: *((v79 + 8) as &i64)
            field_8: *((v79 + 16) as &i64) + *((v79 + 8) as &i64)
            field_16: 0
        };
        if (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v30) & 1) {
            v65 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("warning: an unescaped backslash at end of string is not portable");
            v36 = v68;
            v94 = *(&v65.field_0 as &i128);
            v39 = 0;
            v3 = struct16 {
                field_0: alloc::boxed::Box<T>::new(&v30) as u64
                field_8: &g_4fd0d0
            };
            uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v3.field_0));
            v9 = uucore::util_name();
            v11 = v81;
            eprintln!("{}: {}", &v9, &v3);
        }
        v22 = std::io::stdio::stdin();
        v6 = struct16 {
            field_0: std::io::stdio::Stdin::lock(&v22) as u64
            field_8: v81 as u8 & 1
        };
        v30 = std::io::stdio::stdout();
        v65 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v30));
        v31 = uu_tr::operation::Sequence::solve_set_characters(*((v79 + 8) as &i64), *((v79 + 16) as &i64), (v83 ? v83 : 1), v84, v1, v75 & (v73 ^ 1) & v21 != 1, (v73 ^ 1) & v21 != 1);
        v85 = v31.field_0;
        v86 = v34;
        v87 = v37;
        if v85 == 0x8000000000000000 {
            v30 = struct32 {
                field_0: v86
                field_16: v1
            };
            alloc::boxed::Box<T>::new(&v30);
            goto LABEL_461261;
        } else {
            v1 = v38;
            v7 = v40;
            v8 = v31.field_40;
            if uucore::features::fs::is_stdin_directory() {
                v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("read error: Is a directory");
                v30 = struct28 {
                    field_0: *(&v9.field_0 as &i128)
                    field_16: v13
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v30);
            } else if v73 {
                if v74 {
                    v30 = struct24 {
                        field_0: v1
                        field_8: v7
                        field_16: v8
                    };
                    v57 = uu_tr::operation::SqueezeOperation::new(&v30);
                    v55 = struct80 {
                        field_0: v85
                        field_8: v86
                        field_16: v87
                        field_24: v57.field_0
                        field_40: v58
                        field_56: v59
                        field_72: v60
                    };
                    v55 = struct80 {
                        field_0: v85
                        field_8: v86
                        field_16: v87
                        field_24: v57.field_0
                        field_40: v58
                        field_56: v59
                        field_72: v60
                    };
                    uu_tr::operation::translate_input(&v6, &v65, &v55);
                    if !v89 {
                        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v65));
                        return 0;
                    }
                } else {
                    v45 = struct24 {
                        field_0: v85
                        field_8: v86
                        field_16: v87
                    };
                    uu_tr::operation::translate_input(&v6, &v65, &v45);
                    if !v89 {
                        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v65));
                        return 0;
                    }
                }
            } else {
                if !v74 {
                    v3 = struct24 {
                        field_0: v85
                        field_8: v86
                        field_16: v87
                    };
                    v9 = v1;
                    v12 = v7;
                    v13 = v8;
                    v33 = uu_tr::operation::TranslateOperation::new(&v3, &v9);
                    v46 = *((&v33 as &char + 8) as &i128);
                    v47 = *((&v33 as &char + 24) as &i128);
                    match v33 {
                        Ok(_) => {
                            v54 = struct48 {
                                field_0: v33 as i64
                                field_8: v46
                                field_24: v47
                                field_40: *((&v33 as &char + 40) as &i64)
                            };
                            uu_tr::operation::translate_input(&v6, &v65, &v54);
                            if !v89 {
                                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v65));
                                return 0;
                            }
                        },
                        Err(_) => {
                            alloc::boxed::Box<T>::new(&v46);
LABEL_461261:
                            v89 = v88;
                        },
                    }
                } else if v21 == 1 {
                    v30 = struct24 {
                        field_0: v85
                        field_8: v86
                        field_16: v87
                    };
                    v71 = uu_tr::operation::SqueezeOperation::new(&v30);
                    uu_tr::operation::translate_input(&v6, &v65, &v71);
                    if !v89 {
                        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v65));
                        return 0;
                    }
                } else {
                    v3 = v85;
                    v4 = v86;
                    v5 = v87;
                    v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v12, v8);
                    v32 = uu_tr::operation::TranslateOperation::new(&v3, &v9);
                    v17 = *((&v32 as &char + 16) as &i128);
                    v18 = v41;
                    match v32 {
                        Ok(_) => {
                            v43 = v17;
                            v44 = v18;
                            v30 = struct24 {
                                field_0: v1
                                field_8: v12
                                field_16: v8
                            };
                            v61 = uu_tr::operation::SqueezeOperation::new(&v30);
                            v56 = struct104 {
                                field_0: v30.field_0
                                field_8: v30.field_0
                                field_16: v43
                                field_32: v44
                                field_40: *((&v32 as &char + 40) as &i64)
                                field_48: v61.field_0
                                field_64: v62
                                field_80: v63
                                field_96: v64
                            };
                            uu_tr::operation::translate_input(&v6, &v65, &v56);
                            if !v89 {
                                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v65));
                                return 0;
                            }
                        },
                        Err(_) => {
                            v30 = v35;
                            alloc::boxed::Box<T>::new(&v30);
                        },
                    }
                }
            }
            return v89;
        }
    } else {
        v17 = struct16 {
            field_0: "extra operand"
        };
        if (v73 ^ 1 | v74) == 1 {
            if v21 <= 2 {
                goto LABEL_460edb;
            }
            v9 = 1;
            v11 = *((v20 + 56) as &i128);
            v14 = 1;
            v52 = format!("{} {}", &v17, &v9);
            v30 = struct28 {
                field_0: *(&v52.vec.buf.inner.cap as &i128)
                field_16: v53
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v30);
        } else {
            v9 = 1;
            v11 = *((v20 + 32) as &i128);
            v14 = 1;
            if v21 == 2 {
                v2 = format!("{} {}\nOnly one string may be given when deleting without squeezing repeats.", &v17, &v9);
            } else {
                v2 = format!("{} {}", &v17, &v9);
            }
            v23 = v2 as i128;
            v24 = v5;
            v30 = struct28 {
                field_0: v23
                field_16: v24
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v30);
        }
    }
    v89 = v78;
    return v89;
}
