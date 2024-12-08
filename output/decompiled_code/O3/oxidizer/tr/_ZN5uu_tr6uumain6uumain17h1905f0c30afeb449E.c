fn uu_tr::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0xa28]
    let v1: i8;  // [bp-0xa20]
    let v2: i8;  // [sp-0xa13]
    let v3: i8;  // [sp-0xa12]
    let v4: i8;  // [sp-0xa11]
    let v5: i64;  // [sp-0xa10]
    let v6: i8;  // [sp-0xa08]
    let v7: i64;  // [sp-0xa00], Other Possible Types: struct24
    let v8: i128;  // [bp-0x9f8]
    let v9: i128;  // [sp-0x9e8]
    let v10: i64;  // [sp-0x9d8]
    let v11: i192;  // [sp-0x9c8], Other Possible Types: struct24
    let v12: i64;  // [bp-0x9b0], Other Possible Types: struct33
    let v13: i8;  // [bp-0x9a8]
    let v14: i8;  // [bp-0x9a0]
    let v15: i8;  // [sp-0x998]
    let v16: i8;  // [bp-0x990]
    let v17: i8;  // [bp-0x980]
    let v18: i128;  // [sp-0x978]
    let v19: i128;  // [bp-0x970]
    let v20: i64;  // [sp-0x968]
    let v21: i128;  // [sp-0x958]
    let v22: i128;  // [sp-0x948]
    let v23: i64;  // [sp-0x938]
    let v24: i64;  // [sp-0x930]
    let v25: i64;  // [sp-0x928]
    let v26: i64;  // [sp-0x920]
    let v27: i64;  // [sp-0x918]
    let v28: i64;  // [sp-0x910]
    let v29: i64;  // [sp-0x908]
    let v30: i128;  // [sp-0x900]
    let v31: i128;  // [sp-0x8f0]
    let v32: i64;  // [sp-0x8e0]
    let v33: i64;  // [sp-0x8d8], Other Possible Types: struct24, struct28, struct48, struct712, Result<struct24, struct8>, struct56
    let v34: i8;  // [bp-0x8c8]
    let v35: i32;  // [bp-0x8c0]
    let v36: i192;  // [sp-0x608]
    let v37: i192;  // [sp-0x5f0]
    let v38: i192;  // [sp-0x5d8]
    let v39: struct24;  // [bp-0x5c0]
    let v40: struct48;  // [sp-0x5a8], Other Possible Types: i64
    let v41: struct48;  // [sp-0x578]
    let v43: struct48;  // [sp-0x540]
    let v45: struct80;  // [bp-0x508]
    let v46: i128;  // [sp-0x4b8]
    let v47: i64;  // [sp-0x4a8]
    let v48: i128;  // [sp-0x498], Other Possible Types: struct24, struct64, struct712
    let v49: i128;  // [bp-0x490]
    let v50: i128;  // [sp-0x488]
    let v51: i8;  // [bp-0x480]
    let v52: i64;  // [bp-0x478]
    let v53: struct104;  // [bp-0x1c8]
    let v54: i192;  // [bp-0x160]
    let v55: i192;  // [bp-0x148]
    let v56: struct80;  // [bp-0x130]
    let v57: i64;  // [sp-0xa8]
    let v58: i384;  // [sp-0x68], Other Possible Types: struct48
    let v60: i64;  // rdx
    let v62: i64;  // rax
    let v63: i8;  // bl
    let v65: i8;  // bpl
    let v66: i64;  // r13
    let v67: i64;  // r15
    let v69: i64;  // rbx
    let v70: i64;  // rsi
    let v71: struct8;  // rax
    let v72: i64;  // rax
    let v74: i64;  // r12
    let v76: struct8;  // rax
    let v77: i64;  // rax
    let v79: i64;  // rax
    let v82: i64;  // rax
    let v83: i64;  // rax
    let v85: i64;  // rdx
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1

    v33 = uu_tr::uu_app(a1, v60);
    v48 = clap_builder::builder::command::Command::after_help(&v33, "Translate, squeeze, and/or delete characters from standard input, writing to standard output.");
    clap_builder::builder::command::Command::try_get_matches_from(&v12, &v48, a0, a1);
    if v28 == 0x8000000000000000 {
        v62 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
        return v62;
    }
    v32 = v17;
    v31 = v16;
    v30 = v14;
    v28 = v12;
    v29 = v13;
    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v28, "delete") as i32;
    v65 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v28, "squeeze-repeats") as i32;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v28, "truncate-set1") as i8;
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v28, "sets");
    v66 = &v48;
    v48 = clap_builder::parser::error::MatchesError::unwrap("sets", &v33);
    *(&v56.field_0 as &struct80) = struct80 {
        field_0: 1
        field_8: v48
        field_24: *((&v48 as &char + 16) as &i128)
        field_40: *((&v48 as &char + 32) as &i128)
        field_56: *((&v48 as &char + 48) as &i128)
        field_72: 0
    };
    v57 = 0;
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v56, v60);
    v67 = *((&v11 as &char + 16) as &i64);
    if !v67 {
        v48 = <T as alloc::slice::hack::ConvertVec>::to_vec("missing operand");
        v33 = struct28 {
            field_0: v48
            field_16: v50
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v33);
        return v62;
    }
    if v67 == 1 && !v63 && !v65 {
        v48 = 1;
        v49 = *((*((&v11 as &char + 8) as &i64) + 8) as &i128);
        v51 = 1;
        v36 = format!("missing operand after {:?}\nTwo strings must be given when translating.", &v48);
        v33 = struct28 {
            field_0: v36
            field_16: *((&v36 as &char + 16) as &i64)
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v33);
        return v62;
    }
    if (v63 & v65) == 1 && v67 == 1 {
        v48 = 1;
        v49 = *((*((&v11 as &char + 8) as &i64) + 8) as &i128);
        v51 = 1;
        v37 = format!("missing operand after {:?}\nTwo strings must be given when deleting and squeezing.", &v48);
        v33 = struct28 {
            field_0: v37
            field_16: *((&v37 as &char + 16) as &i64)
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v33);
        return v62;
    }
    if v67 == 1 {
LABEL_46fee6:
        v33 = *((*((&v11 as &char + 8) as &i64) + 8) as &i64);
        v33.field_8 = *((vvar_339{reg 16} + 16) as &i64) + vvar_989{stack -2264};
        v34 = 0;
        v33 = v33;
        if (<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v33) as i8 & 1) {
            v66 = &v48;
            v48 = <T as alloc::slice::hack::ConvertVec>::to_vec("warning: an unescaped backslash at end of string is not portable");
            *(&v34 as &struct24) = v48.field_16;
            v33 = v48;
            v35 = 0;
            v7 = alloc::boxed::Box<T>::new(&v33);
            v8 = &g_52cc58;
            <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v7);
            uucore::mods::error::set_exit_code();
            v12 = uucore::util_name();
            v13 = v60;
            eprintln!("{:?}: {:?}", &v12, &v7);
            v33 = v33;
        }
        v24 = std::io::stdio::stdin();
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v28, "complement") as i32;
        v5 = std::io::stdio::Stdin::lock(&v24);
        v6 = v60 as u8 & 1;
        v25 = std::io::stdio::stdout();
        v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v25, v70, v60));
        v2 = v63;
        v26 = *((&v11 as &char + 8) as &i64);
        v27 = v26 + *((&v11 as &char + 16) as &i64) * 24;
        v71 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v71 {
            v72 = 0;
        } else {
            v72 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(*((v71 + 8) as &i64), *((v71 + 16) as &i64));
        }
        if !v72 {
            v72 = 1;
        }
        v76 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v76 {
            v77 = 0;
        } else {
            v77 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(*((v76 + 8) as &i64), *((v76 + 16) as &i64));
        }
        v33 = uu_tr::operation::Sequence::solve_set_characters(v72, v74, v79, v82, v3, v0, v1);
        v83 = v33;
        if v83 == 0x8000000000000000 {
            v50 = *((&v33 as &char + 24) as &i64);
            v48 = *((&v33 as &char + 8) as &i128);
            *(&v33.field_0 as &struct24) = struct24 {
                field_0: v84
                field_16: v50
            };
            alloc::boxed::Box<T>::new(&v33);
            return v62;
        }
        v85 = *((&v33 as &char + 40) as &i64);
        v52 = v85;
        v86 = *((&v33 as &char + 8) as &i128);
        v87 = *((&v33 as &char + 24) as &i128);
        v50 = v87;
        v48 = v86;
        v21 = v86;
        v10 = v85;
        v9 = v87;
        if !v2 {
            if !v65 {
                v7 = v83;
                v8 = v21;
                v50 = v10;
                v48 = v9;
                v33 = uu_tr::operation::TranslateOperation::new(&v7, &v48);
                v18 = *((&v33 as &char + 8) as &i128);
                v20 = *((&v33 as &char + 24) as &i64);
                if !v40 {
                    *(&v33.field_0 as &struct24) = struct24 {
                        field_0: v18
                        field_16: v20
                    };
                    v62 = alloc::boxed::Box<T>::new(&v33);
                    return v62;
                }
                *(&v40.field_0 as &struct48) = struct48 {
                    field_0: v33
                    field_8: v18
                    field_24: v20
                    field_32: *((&v33 as &char + 32) as &i128)
                };
                uu_tr::operation::translate_input(&v5, &v12, &v40);
                return 0;
            }
            if v67 != 1 {
                v18 = v83;
                v19 = v21;
                v7 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
                v33 = uu_tr::operation::TranslateOperation::new(&v18, &v7);
                v22 = *((&v33 as &char + 8) as &i128);
                v23 = *((&v33 as &char + 24) as &i64);
                if !v48 {
                    *(&v33.field_0 as &struct24) = struct24 {
                        field_0: v22
                        field_16: v23
                    };
                    alloc::boxed::Box<T>::new(&v33);
                    return v62;
                }
                v52 = *((&v33 as &char + 32) as &i128);
                v49 = v22;
                v51 = v23;
                v48 = v33;
                *(&v33.field_0 as &struct24) = struct24 {
                    field_0: v9
                    field_16: v10
                };
                v43 = uu_tr::operation::SqueezeOperation::new(&v33, v60);
                v53 = struct104 {
                    field_0: v48
                    field_16: *((&v49 as &char + 8) as &i128)
                    field_32: v52
                    field_48: v43
                    field_64: *((&v43 as &char + 16) as &i128)
                    field_80: *((&v43 as &char + 32) as &i128)
                    field_96: v44
                };
                uu_tr::operation::translate_input(&v5, &v12, &v53);
            } else {
                *(&v33.field_0 as &struct24) = struct24 {
                    field_0: v83
                    field_16: <UNKNOWN>
                };
                v58 = uu_tr::operation::SqueezeOperation::new(&v33, v10);
                uu_tr::operation::translate_input(&v5, &v12, &v58);
LABEL_470602:
            }
        } else if v65 {
            v49 = v21;
            v48 = v83;
            *(&v33.field_0 as &struct24) = struct24 {
                field_0: v9
                field_16: v10
            };
            v41 = uu_tr::operation::SqueezeOperation::new(&v33, v10);
            v45 = struct80 {
                field_0: v48
                field_16: v50
                field_24: v41
                field_40: *((&v41 as &char + 16) as &i128)
                field_56: *((&v41 as &char + 32) as &i128)
                field_72: v42
            };
            uu_tr::operation::translate_input(&v5, &v12, &v45);
        } else {
            *(&v39.field_0 as &struct24) = struct24 {
                field_0: v83
                field_8: v21
            };
            uu_tr::operation::translate_input(&v5, &v12, &v39);
            goto LABEL_470602;
        }
        return 0;
    } else {
        v7 = &g_40b9a5;
        v8 = 13;
        if (v63 ^ 1 | v65) != 1 {
            v12 = 1;
            v13 = *((*((&v11 as &char + 8) as &i64) + 32) as &i128);
            v15 = 1;
            if v67 != 2 {
                v69 = &v55;
                v55 = format!("{:?} {:?}", &v7, &v12);
            } else {
                v69 = &v54;
                v54 = format!("{:?} {:?}\nOnly one string may be given when deleting without squeezing repeats.", &v7, &v12);
            }
            v47 = *((v69 + 16) as &i64);
            v46 = *(v69 as &i128);
            v33 = struct28 {
                field_0: v46
                field_16: v47
                field_24: 1
            };
            v62 = alloc::boxed::Box<T>::new(&v33);
        } else {
            if v67 <= 2 {
                goto LABEL_46fee6;
            }
            v12 = 1;
            v13 = *((*((&v11 as &char + 8) as &i64) + 56) as &i128);
            v15 = 1;
            v38 = format!("{:?} {:?}", &v7, &v12);
            v33 = struct28 {
                field_0: v38
                field_16: *((&v38 as &char + 16) as &i64)
                field_24: 1
            };
            v62 = alloc::boxed::Box<T>::new(&v33);
        }
        return v62;
    }
}
