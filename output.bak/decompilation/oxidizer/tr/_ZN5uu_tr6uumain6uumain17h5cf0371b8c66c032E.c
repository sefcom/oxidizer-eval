fn uu_tr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xa28]
    let v1: i64;  // [sp-0xa20]
    let v2: i8;  // [sp-0xa13]
    let v3: i8;  // [sp-0xa12]
    let v4: i8;  // [sp-0xa11]
    let v5: i64;  // [sp-0xa10]
    let v6: i8;  // [sp-0xa08]
    let v7: i64;  // [sp-0xa00], Other Possible Types: struct24
    let v8: i64;  // [bp-0x9f8]
    let v9: i128;  // [sp-0x9e8]
    let v10: i64;  // [sp-0x9d8]
    let v11: struct24;  // [sp-0x9c8], Other Possible Types: i192
    let v12: i64;  // [bp-0x9b0], Other Possible Types: struct33, Result<struct56, struct8>
    let v13: i128;  // [bp-0x9a8]
    let v14: i8;  // [sp-0x998]
    let v15: i64;  // [sp-0x978]
    let v16: i128;  // [bp-0x970]
    let v17: i64;  // [sp-0x968]
    let v18: i128;  // [sp-0x958]
    let v19: i128;  // [sp-0x948]
    let v20: i64;  // [sp-0x938]
    let v21: i64;  // [sp-0x930]
    let v22: i64;  // [sp-0x928]
    let v23: i64;  // [sp-0x920]
    let v24: i64;  // [sp-0x918]
    let v25: i64;  // [sp-0x910]
    let v26: i64;  // [sp-0x908]
    let v27: i128;  // [sp-0x900]
    let v28: i128;  // [sp-0x8f0]
    let v29: i64;  // [sp-0x8e0]
    let v30: i64;  // [sp-0x8d8], Other Possible Types: struct24, struct28, struct48, struct56, struct712, Result<struct24, struct8>
    let v31: i64;  // [sp-0x8d0]
    let v32: i8;  // [bp-0x8c8]
    let v33: i64;  // [bp-0x8c0]
    let v34: i64;  // [sp-0x8b8]
    let v41: struct24;  // [bp-0x5c0]
    let v42: struct48;  // [sp-0x5a8], Other Possible Types: i64
    let v43: struct48;  // [sp-0x578]
    let v45: struct48;  // [sp-0x540]
    let v47: struct80;  // [bp-0x508]
    let v48: i128;  // [sp-0x4b8]
    let v49: i64;  // [sp-0x4a8]
    let v50: i64;  // [sp-0x498], Other Possible Types: struct24, struct48, struct64, struct712
    let v51: i128;  // [bp-0x490]
    let v52: i64;  // [sp-0x488]
    let v53: i64;  // [bp-0x480]
    let v54: i64;  // [bp-0x478]
    let v55: struct104;  // [bp-0x1c8]
    let v56: i8;  // [bp-0x160]
    let v57: i8;  // [bp-0x148]
    let v58: struct80;  // [bp-0x130]
    let v59: i64;  // [sp-0xa8]
    let v60: i384;  // [sp-0x68], Other Possible Types: struct48
    let v64: i64;  // rax
    let v65: i8;  // bl
    let v67: i8;  // bpl
    let v68: i64;  // r15
    let v69: i64;  // rax
    let v70: i64;  // rbx
    let v71: i64;  // rdx
    let v72: i64;  // rcx
    let v73: struct8;  // rax
    let v74: i64;  // rax
    let v75: i64;  // r12
    let v76: i8;  // bl
    let v78: i64;  // r14
    let v80: i64;  // rax
    let v81: struct8;  // rax
    let v82: i64;  // rax
    let v84: i64;  // rax
    let v87: i64;  // rax
    let v88: i64;  // rax
    let v90: i64;  // rdx
    let v91: i128;  // xmm0
    let v92: i128;  // xmm1

    v30 = uu_tr::uu_app();
    v50 = clap_builder::builder::command::Command::after_help(&v30, "Translate, squeeze, and/or delete characters from standard input, writing to standard output.");
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v50, a0, a1);
    if v25 == 0x8000000000000000 {
        v64 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        return v64;
    }
    v29 = *((&v12 as &char + 48) as &i64);
    v28 = *((&v12 as &char + 32) as &i128);
    v27 = *((&v12 as &char + 16) as &i128);
    v25 = v12;
    v26 = *((&v12 as &char + 8) as &i64);
    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "delete") as i32;
    v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "squeeze-repeats");
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "truncate-set1") as i8;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25, "sets");
    v50 = clap_builder::parser::error::MatchesError::unwrap("sets", &v30);
    v58 = struct80 {
        field_0: 1
        field_8: v50
        field_24: *((&v50 as &char + 16) as &i128)
        field_40: *((&v50 as &char + 32) as &i128)
        field_56: *((&v50 as &char + 48) as &i128)
        field_72: 0
    };
    v59 = 0;
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v58);
    v68 = *((&v11 as &char + 16) as &i64);
    if !v68 {
        v50 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v30 = struct28 {
            field_0: v50
            field_16: v52
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
        return v64;
    }
    if v68 == 1 && !v65 && !v67 {
        v50 = 1;
        v51 = *((*((&v11 as &char + 8) as &i64) + 8) as &i128);
        v53 = 1;
        v12 = &v50;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v30 = "missing operand after ";
        v31 = 2;
        v34 = 0;
        v32 = &v12;
        v33 = 1;
        core::option::Option<T>::map_or_else();
        v30 = struct28 {
            field_0: v35
            field_16: v36
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
        return v64;
    }
    if (v65 & v67) == 1 && v68 == 1 {
        v50 = 1;
        v51 = *((*((&v11 as &char + 8) as &i64) + 8) as &i128);
        v53 = 1;
        v12 = &v50;
        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
        v30 = "missing operand after ";
        v31 = 2;
        v34 = 0;
        v32 = &v12;
        v33 = 1;
        core::option::Option<T>::map_or_else();
        v30 = struct28 {
            field_0: v37
            field_16: v38
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v30);
        return v64;
    }
    if v68 == 1 {
LABEL_46c106:
        v69 = *((&v11 as &char + 8) as &i64);
        v30 = *((v69 + 8) as &i64);
        v31 = *((v69 + 16) as &i64) + v30;
        v32 = 0;
        v30 = v30;
        if (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v30) as i8 & 1) {
            v50 = <T as alloc::slice::hack::ConvertVec>::to_vec("warning: an unescaped backslash at end of string is not portable");
            v33 = 0;
            v7 = alloc::boxed::Box<T>::new(&v30);
            v8 = &g_52c448;
            uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v7) as i32);
            v12 = uucore::util_name();
            v13 = v71;
            eprintln!("{:?}: {:?}", &v12, &v7);
            v30 = v30;
        }
        v21 = std::io::stdio::stdin();
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, "complement");
        v5 = std::io::stdio::Stdin::lock(&v21);
        v6 = v71 as u8 & 1;
        v22 = std::io::stdio::stdout();
        v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v22));
        v72 = *((&v11 as &char + 16) as &i64);
        v2 = v65;
        v23 = *((&v11 as &char + 8) as &i64);
        v24 = v23 + v72 * 24;
        v73 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v73 {
            v74 = 0;
            v75 = stack_base + -2480;
        } else {
            v74 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(*((v73 + 8) as &i64), *((v73 + 16) as &i64));
        }
        v76 = ~(v65) & 2 <= v72;
        if !v74 {
            v78 = 1;
        }
        v81 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v81 {
            v82 = 0;
        } else {
            v82 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(*((v81 + 8) as &i64), *((v81 + 16) as &i64));
        }
        if !v82 {
            v84 = 1;
        }
        v1 = v76;
        v0 = v4 & v76;
        v30 = uu_tr::operation::Sequence::solve_set_characters(v78, v80, v84, v87, v3);
        v88 = v30;
        if v88 == 0x8000000000000000 {
            v52 = *((&v30 as &char + 24) as &i64);
            v50 = *((&v30 as &char + 8) as &i128);
            *(&v30.field_0 as &struct24) = struct24 {
                field_0: v89
                field_16: v52
            };
            alloc::boxed::Box<T>::new(&v30);
            return v64;
        }
        v90 = *((&v30 as &char + 40) as &i64);
        v54 = v90;
        v91 = *((&v30 as &char + 8) as &i128);
        v92 = *((&v30 as &char + 24) as &i128);
        v52 = v92;
        v50 = v91;
        v18 = v91;
        v10 = v90;
        v9 = v92;
        if !v2 {
            if !v67 {
                v7 = v88;
                v8 = v18;
                v52 = v10;
                v50 = v9;
                v30 = uu_tr::operation::TranslateOperation::new(&v7, &v50);
                v15 = *((&v30 as &char + 8) as &i128);
                v17 = *((&v30 as &char + 24) as &i64);
                if !v42 {
                    *(&v30.field_0 as &struct24) = struct24 {
                        field_0: v15
                        field_16: v17
                    };
                    v64 = alloc::boxed::Box<T>::new(&v30);
                    return v64;
                }
                *(&v42.field_0 as &struct48) = struct48 {
                    field_0: v30
                    field_8: v15
                    field_24: v17
                    field_32: *((&v30 as &char + 32) as &i128)
                };
                uu_tr::operation::translate_input(&v5, &v12, &v42);
                return 0;
            }
            if v68 != 1 {
                v15 = v88;
                v16 = v18;
                v7 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
                v30 = uu_tr::operation::TranslateOperation::new(&v15, &v7);
                v19 = *((&v30 as &char + 8) as &i128);
                v20 = *((&v30 as &char + 24) as &i64);
                if !v50 {
                    *(&v30.field_0 as &struct24) = struct24 {
                        field_0: v19
                        field_16: v20
                    };
                    alloc::boxed::Box<T>::new(&v30);
                    return v64;
                }
                v50 = v30;
                *(&v30.field_0 as &struct24) = struct24 {
                    field_0: v9
                    field_16: v10
                };
                v45 = uu_tr::operation::SqueezeOperation::new(&v30);
                v55 = struct104 {
                    field_0: v50
                    field_16: *((&v50 as &char + 16) as &i128)
                    field_32: *((&v50 as &char + 32) as &i128)
                    field_48: v45
                    field_64: *((&v45 as &char + 16) as &i128)
                    field_80: *((&v45 as &char + 32) as &i128)
                    field_96: v46
                };
                uu_tr::operation::translate_input(&v5, &v12, &v55);
            } else {
                *(&v30.field_0 as &struct24) = struct24 {
                    field_0: v88
                    field_16: <UNKNOWN>
                };
                v60 = uu_tr::operation::SqueezeOperation::new(&v30);
                uu_tr::operation::translate_input(&v5, &v12, &v60);
LABEL_46c821:
            }
        } else if v67 {
            v51 = v18;
            v50 = v88;
            *(&v30.field_0 as &struct24) = struct24 {
                field_0: v9
                field_16: v10
            };
            v43 = uu_tr::operation::SqueezeOperation::new(&v30);
            *(&v47.field_0 as &struct80) = struct80 {
                field_0: v50
                field_16: v52
                field_24: v43
                field_40: *((&v43 as &char + 16) as &i128)
                field_56: *((&v43 as &char + 32) as &i128)
                field_72: v44
            };
            uu_tr::operation::translate_input(&v5, &v12, &v47);
        } else {
            *(&v41.field_0 as &struct24) = struct24 {
                field_0: v88
                field_8: v18
            };
            uu_tr::operation::translate_input(&v5, &v12, &v41);
            goto LABEL_46c821;
        }
        return 0;
    } else {
        v7 = &g_41538c;
        v8 = 13;
        if (v65 ^ 1 | v67) != 1 {
            v12 = 1;
            v13 = *((*((&v11 as &char + 8) as &i64) + 32) as &i128);
            v14 = 1;
            if v68 != 2 {
                v50 = &v7;
                v51 = <&T as core::fmt::Display>::fmt;
                v52 = &v12;
                v53 = <os_display::Quoted as core::fmt::Display>::fmt;
                v30 = &g_52c330;
                v31 = 2;
                v34 = 0;
                v32 = &v50;
                v33 = 2;
                v70 = &v57;
                core::option::Option<T>::map_or_else();
            } else {
                v50 = &v7;
                v51 = <&T as core::fmt::Display>::fmt;
                v52 = &v12;
                v53 = <os_display::Quoted as core::fmt::Display>::fmt;
                v30 = &g_52c300;
                v31 = 3;
                v34 = 0;
                v32 = &v50;
                v33 = 2;
                v70 = &v56;
                core::option::Option<T>::map_or_else();
            }
            v49 = *((v70 + 16) as &i64);
            v48 = *(v70 as &i128);
            v30 = struct28 {
                field_0: v48
                field_16: v49
                field_24: 1
            };
            v64 = alloc::boxed::Box<T>::new(&v30);
        } else {
            if v68 <= 2 {
                goto LABEL_46c106;
            }
            v12 = 1;
            v13 = *((*((&v11 as &char + 8) as &i64) + 56) as &i128);
            v14 = 1;
            v50 = &v7;
            v51 = <&T as core::fmt::Display>::fmt;
            v52 = &v12;
            v53 = <os_display::Quoted as core::fmt::Display>::fmt;
            v30 = &g_52c330;
            v31 = 2;
            v34 = 0;
            v32 = &v50;
            v33 = 2;
            core::option::Option<T>::map_or_else();
            v30 = struct28 {
                field_0: v39
                field_16: v40
                field_24: 1
            };
            v64 = alloc::boxed::Box<T>::new(&v30);
        }
        return v64;
    }
}
