fn uu_shred::uumain(a0: i64, a1: i64) -> u64 {
    let v4: i8;  // [sp-0x43d]
    let v5: i32;  // [sp-0x43c]
    let v6: i64;  // [sp-0x438], Other Possible Types: Enum
    let v7: i64;  // [sp-0x430]
    let v8: i64;  // [sp-0x428]
    let v9: i64;  // [sp-0x420]
    let v10: i64;  // [sp-0x418]
    let v11: i64;  // [sp-0x410]
    let v12: i8;  // [bp-0x408]
    let v13: i64;  // [sp-0x400], Other Possible Types: Enum
    let v14: i64;  // [sp-0x3f8]
    let v15: i64;  // [sp-0x3f0]
    let v16: i64;  // [sp-0x3e8]
    let v17: i128;  // [sp-0x3d8], Other Possible Types: struct16
    let v18: i64;  // [sp-0x3d0]
    let v19: i8;  // [bp-0x3c8]
    let v20: i64;  // [bp-0x3c0]
    let v21: i8;  // [bp-0x3b8]
    let v22: i8;  // [bp-0x3a8]
    let v23: i64;  // [bp-0x3a0]
    let v24: i8;  // [bp-0x398]
    let v25: i64;  // [sp-0x390]
    let v26: i64;  // [sp-0x388]
    let v27: i128;  // [sp-0x380]
    let v28: i128;  // [sp-0x370]
    let v29: i64;  // [sp-0x360]
    let v30: i64;  // [sp-0x358]
    let v31: i64;  // [sp-0x350]
    let v32: i64;  // [sp-0x348]
    let v33: i64;  // [sp-0x340]
    let v34: i128;  // [sp-0x338]
    let v35: i192;  // [sp-0x328], Other Possible Types: String
    let v36: String;  // [sp-0x310], Other Possible Types: i192
    let v37: i64;  // [bp-0x2f8], Other Possible Types: Arguments, struct24, struct712, Enum
    let v38: i128;  // [sp-0x2f0]
    let v39: i64;  // [sp-0x2e8]
    let v40: i64;  // [bp-0x2e0]
    let v41: i64;  // [sp-0x2d8]
    let v42: i64;  // [sp-0x2d0]
    let v43: i64;  // [sp-0x2c0]
    let v45: i64;  // r15
    let v46: i64;  // rcx
    let v47: i64;  // rdi
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i64;  // r12
    let v53: i64;  // rax
    let v54: i64;  // rax
    let v55: i64;  // rsi
    let v56: i64;  // rdx
    let v57: i128;  // xmm0
    let v58: i64;  // r15
    let v59: i64;  // rcx
    let v60: i128;  // xmm0
    let v62: i64;  // rcx
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // rdx
    let v66: i64;  // rdx
    let v68: i32;  // eax
    let v69: i64;  // r14
    let v70: i128;  // xmm0
    let v71: i64;  // r12
    let v72: i64;  // rax
    let v75: i64;  // rbp
    let v77: i64;  // rbp
    let v78: i64;  // rdi
    let v79: i64;  // rbx
    let v80: i64;  // rax
    let v81: i64;  // rdi
    let v91: i64;  // rdi
    let v92: i64;  // rdi
    let v94: i64;  // rcx
    let v96: i64;  // r15

    v37 = uu_shred::uu_app();
    v46 = a1;
    v17 = clap_builder::builder::command::Command::try_get_matches_from(&v37, a0, a1);
    v47 = v18;
    if v25 != 0x8000000000000000 {
        v29 = v22;
        v28 = v21;
        v27 = v19;
        v25 = v17;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v25, &g_4115f4, 4) as i8 {
            v37 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(20, 0);
            v54 = v39;
            *(v54 as &i128) = 134835818736588657362413574869681924461;
            *((v54 + 16) as &i32) = 1684955506;
            v40 = 1;
            v37 = v38;
            v38 = v54;
            v39 = 20;
            v49 = __rust_alloc(32, 8);
            v57 = v37;
            *((v49 + 16) as &i128) = *((&v37 as &char + 16) as &i128);
            *(v49 as &i128) = v57;
            v58 = &g_4eceb0;
        } else {
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, &g_411a2b, 10);
            v10 = &g_411a2b;
            v11 = 10;
            if v13 != 2 {
                v21 = *((&v13 as &char + 32) as &i64);
                v51 = v13;
                v19 = *((&v13 as &char + 16) as &i128);
                v17 = v51;
                v6 = &v10;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = &v17;
                v9 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v37 = "Mismatch between definition and access of `";
                *((v96 + 8) as &i64) = v53;
                *((v96 + 32) as &i64) = 0;
                *((v96 + 16) as &i64) = v52;
                *((v96 + 24) as &i64) = 2;
                core::panicking::panic_fmt(v96); /* do not return */
            }
            v50 = v14;
            if !v50 {
                core::panicking::panic(); /* do not return */
            }
            v55 = *((v50 + 8) as &i64);
            v56 = *((v50 + 16) as &i64);
            v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v55, v56);
            if !v6 {
                v33 = v7;
                v5 = v59 | -0x100 | 3;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, &g_411ab6, 1) as i8 {
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v25, &g_411ab7, 6) as i8 {
                        v5 = 0;
                    } else {
                        v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, &g_411ab7, 6);
                        v10 = &g_411ab7;
                        v11 = 6;
                        if v13 != 2 {
                            v21 = *((&v13 as &char + 32) as &i64);
                            v70 = v13;
                            v19 = *((&v13 as &char + 16) as &i128);
                            v17 = v70;
                            v6 = &v10;
                            v7 = <&T as core::fmt::Display>::fmt;
                            v8 = &v17;
                            v9 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                            v37 = "Mismatch between definition and access of `";
                            *((v96 + 8) as &i64) = v53;
                            *((v96 + 32) as &i64) = 0;
                            *((v96 + 16) as &i64) = v52;
                            *((v96 + 24) as &i64) = 2;
                            core::panicking::panic_fmt(v96); /* do not return */
                        }
                        v62 = v14;
                        if !v62 {
                            vvar_1300{stack -760} = "internal error: entered unreachable code: should be caught by clap";
                            (&v37)[8] = 1;
                            (&v37)[32] = 0;
                            *(&(&v37)[16] as &&i8) = &v12;
                            (&v37)[24] = 0;
                            core::panicking::panic_fmt(&v37); /* do not return */
                        }
                        v63 = *((v62 + 8) as &i64);
                        v64 = *((v62 + 16) as &i64);
                        switch (v64) {
                        case 4:
                            v5 = v64 | -0x100 | 2;
                            if *(v63 as &i32) == 1701865847 {
                                goto LABEL_43c489;
                            } else {
                                goto LABEL_43c90f;
                            }
                        case 6:
                            v5 = v66 | -0x100 | 1;
                            if !(*((v63 + 4) as &i16) ^ 27502) && !(1768713845 ^ *(v63 as &i32)) {
                                goto LABEL_43c489;
                            } else {
                                goto LABEL_43c90f;
                            }
                        case 8:
                            if *(v63 as &i64) == 7164797593723103607 {
                                goto LABEL_43c489;
                            } else {
                                goto LABEL_43c90f;
                            }
                        default:
LABEL_43c90f:
                            v37 = "internal error: entered unreachable code: should be caught by clap";
                            (&v37)[8] = 1;
                            (&v37)[32] = 0;
                            *(&(&v37)[16] as &&i8) = &v12;
                            (&v37)[24] = 0;
                            core::panicking::panic_fmt(&v37); /* do not return */
                        }
                    }
                }
LABEL_43c489:
                v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, &g_411aff, 5) as i8;
                v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25, &g_4115f8, 4);
                v10 = &g_4115f8;
                v11 = 4;
                if v13 != 2 {
                    vvar_1330{stack -952} = *((&v13 as &char + 32) as &i64);
                    vvar_1331{reg 224} = v13;
                    v19 = *((&v13 as &char + 16) as &i128);
                    v17 = v70;
                    vvar_1332{stack -1080} = &v10;
                    vvar_1333{stack -1072} = <&T as core::fmt::Display>::fmt;
                    vvar_1334{stack -1064} = &v17;
                    vvar_1335{stack -1056} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                    vvar_1336{stack -760} = "Mismatch between definition and access of `";
                    *((v96 + 8) as &i64) = v53;
                    *((v96 + 32) as &i64) = 0;
                    *((v96 + 16) as &i64) = v52;
                    *((v96 + 24) as &i64) = 2;
                    core::panicking::panic_fmt(v96); /* do not return */
                }
                if v14 {
                    v37 = <alloc::string::String as core::clone::Clone>::clone(v14);
                    v34 = *((&v37 as &char + 8) as &i128);
                    v69 = v37;
                }
                v37 = v69;
                v38 = v34;
                v30 = uu_shred::get_size(&v37);
                v32 = v66;
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, &g_4115c8, 4);
                v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, &g_411b09, 7) as i8;
                v75 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v25, &g_4115f4, 4);
                if !v75 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v17 = 9479156756246622757;
                v18 = 15398537441398644645;
                v37 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v75, 9479156756246622757);
                v38 = v66;
                v45 = &v37;
                v31 = v75;
                v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v25, &g_411b04, 5) as i32;
                v77 = v31;
                if !<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v17, &v37) as i8 {
                    v6 = &g_4115f4;
                    v7 = 4;
                    v17 = 0;
                    v18 = v37;
                    v19 = v66;
                    v20 = 9479156756246622757;
                    v21 = 15398537441398644645;
                    v13 = &v6;
                    v14 = <&T as core::fmt::Display>::fmt;
                    v15 = &v17;
                    v16 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                    v37 = "Mismatch between definition and access of `";
                    v53 = 2;
                    v52 = &v13;
                    *((v96 + 8) as &i64) = v53;
                    *((v96 + 32) as &i64) = 0;
                    *((v96 + 16) as &i64) = v52;
                    *((v96 + 24) as &i64) = 2;
                    core::panicking::panic_fmt(v96); /* do not return */
                }
                v78 = *((v77 + 56) as &i64);
                v79 = v78 + *((v77 + 64) as &i64) * 24;
                v37 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}};
                v38 = v78;
                v39 = v79;
                v40 = 0;
                v41 = 15398537441398644645;
                v42 = 0;
                v43 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v77);
                v24 = v24;
                v23 = v23;
                loop {
                    v91 = v81;
                    if !(v91) || !(v91 != v79) {
                        break;
                    }
                    v38 = v92;
                    v80 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v91);
                    v40 = v80;
                    v41 = v66;
                }
                v80 = v42;
                if v80 {
                    v94 = v80 + 32;
                    if v80 == *((&v37 as &char + 48) as &i64) {
                        v94 = 0;
                    }
                    v42 = v94;
                }
                v68 = uucore::mods::error::get_exit_code() as i32;
                return v68;
            }
            v17 = 0;
            v18 = v55;
            v19 = v56;
            v20 = 1;
            v13 = &v17;
            v14 = <os_display::Quoted as core::fmt::Display>::fmt;
            v37 = Arguments {
                pieces: ["invalid number of passes: "]
                args: &[&Argument] {
                    ptr: &v13
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v40 = 1;
            v36 = alloc::fmt::format::format_inner(&v37);
            v40 = 1;
            v37 = v36;
            v39 = *((&v36 as &char + 16) as &i64);
            v49 = __rust_alloc(32, 8);
            v60 = v37;
            *((v49 + 16) as &i64) = v39;
            *(v49 as &i128) = v60;
            v58 = &g_4ecff0;
        }
    } else {
        v49 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
        if !v49 {
            uucore::mods::error::get_exit_code();
            return v68;
        }
    }
    v6 = v49;
    v7 = v58;
    v17 = &v6;
    v18 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v37 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: &[&Argument] {
            ptr: v61
            len: <UNKNOWN>
        }
        fmt: None
    };
    v40 = 1;
    v35 = alloc::fmt::format::format_inner(&v37);
    v17 = v35;
    v19 = *((&v35 as &char + 16) as &i64);
    if v19 {
        v25 = uucore::util_name();
        v26 = v65;
        v13 = &v25;
        v14 = <&T as core::fmt::Display>::fmt;
        v37 = Arguments {
            pieces: [&g_4ece30, ": "]
            args: &[&Argument] {
                ptr: &v13
                len: <UNKNOWN>
            }
            fmt: None
        };
        v40 = 1;
        std::io::stdio::_eprint(&v37);
        v25 = v39;
        v26 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = Arguments {
            pieces: [&g_4ece50, "\n"]
            args: &[&Argument] {
                ptr: &v25
                len: <UNKNOWN>
            }
            fmt: None
        };
        v40 = 1;
        std::io::stdio::_eprint(&v37);
    }
    if *((v7 + 104) as &i64)() {
        v25 = uucore::execution_phrase();
        v26 = v65;
        v13 = &v25;
        v14 = <&T as core::fmt::Display>::fmt;
        v37 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: &[&Argument] {
                ptr: &v13
                len: <UNKNOWN>
            }
            fmt: None
        };
        v39 = &v13;
        v40 = 1;
        std::io::stdio::_eprint(&v37);
    }
    v68 = *((v7 + 96) as &i64)();
    v71 = v7;
    if *(v71 as &i64) {
        v72();
    }
    if *((v71 + 8) as &i64) {
        return v68;
    }
    return v68;
}
