fn uu_rm::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [sp-0x6d0]
    let v1: i8;  // [sp-0x6cf]
    let v2: i8;  // [sp-0x6ce]
    let v3: i8;  // [sp-0x6cd]
    let v4: i8;  // [sp-0x6cc]
    let v5: i8;  // [sp-0x6cb]
    let v6: i8;  // [sp-0x6ca]
    let v7: i8;  // [sp-0x6c9]
    let v8: i64;  // [sp-0x6c8]
    let v9: i64;  // [sp-0x6c0]
    let v10: i64;  // [sp-0x6b8]
    let v11: i64;  // [sp-0x6b0], Other Possible Types: struct8
    let v12: i192;  // [sp-0x6a8], Other Possible Types: String
    let v13: i64;  // [sp-0x6a0]
    let v14: i64;  // [sp-0x690]
    let v15: i64;  // [sp-0x688]
    let v16: i128;  // [bp-0x658], Other Possible Types: struct24, struct16
    let v17: i64;  // [sp-0x650]
    let v18: i64;  // [sp-0x648]
    let v19: i64;  // [sp-0x620]
    let v20: i64;  // [sp-0x618]
    let v21: i64;  // [sp-0x610]
    let v22: i64;  // [sp-0x608]
    let v23: i64;  // [sp-0x600]
    let v24: Arguments;  // [sp-0x5f8], Other Possible Types: i64, Enum, Argument, struct712
    let v25: i64;  // [sp-0x5f0], Other Possible Types: Argument
    let v26: i64;  // [bp-0x5e8], Other Possible Types: Argument
    let v27: i64;  // [bp-0x5e0]
    let v28: i64;  // [bp-0x5d8]
    let v29: i128;  // [sp-0x5c8]
    let v30: String;  // [sp-0x328], Other Possible Types: i192
    let v31: i192;  // [sp-0x310], Other Possible Types: String
    let v32: i64;  // [bp-0x2f8], Other Possible Types: struct712, struct64, Arguments
    let v33: i64;  // [sp-0x2f0]
    let v34: i64;  // [sp-0x2e8]
    let v36: i64;  // rbp
    let v37: i64;  // r13
    let v38: i64;  // rbx
    let v39: i64;  // r14
    let v40: i64;  // r15
    let v41: i128;  // xmm0
    let v43: i64;  // rbx
    let v44: i64;  // r14
    let v46: i64;  // rax
    let v47: i64;  // rdx
    let v48: i64;  // r15
    let v49: i64;  // rbx
    let v50: i64;  // r14
    let v51: i64;  // r12
    let v52: i64;  // rax
    let v53: i128;  // xmm0
    let v54: i64;  // r12
    let v55: i8;  // bpl
    let v56: i64;  // r13
    let v57: i64;  // rbx
    let v58: i64;  // r14
    let v59: i64;  // rax
    let v60: i64;  // r15
    let v61: i64;  // r12
    let v62: i128;  // xmm0
    let v63: i8;  // r14b
    let v64: i64;  // rcx
    let v65: i64;  // rax
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v70: i64;  // rsi
    let v71: i64;  // rax
    let v72: i64;  // rdi
    let v73: i64;  // r8
    let v74: i64;  // r9
    let v76: i32;  // eax
    let v77: i64;  // rsi
    let v78: i64;  // rdi
    let v79: i64;  // r15
    let v80: i64;  // rax

    v24 = uu_rm::uu_app();
    v36 = &v32;
    v32 = clap_builder::builder::command::Command::after_help(&v24, &g_411567, 493);
    v37 = &v16;
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v32, a0, a1);
    if v14 == 0x8000000000000000 {
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        if !v40 {
            vvar_1356{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v76;
        }
        goto LABEL_43b85f;
    }
    v14 = v16;
    v38 = _ZN5uu_rm9ARG_FILES17hc17bba42d7ad60edE;
    v39 = g_4ee5f0;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, v38, v39);
    v32 = clap_builder::parser::error::MatchesError::unwrap(v38, v39, &v24);
    if !v32 || (v41 = v32, v29 = *((&v32 as &char + 48) as &i128), v28 = *((&v32 as &char + 32) as &i128), v26 = *((&v32 as &char + 16) as &i128), v24 = v41, v16 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v24), v24 = *((&v16 as &char + 8) as &i128), v8 == 0x8000000000000000) {
        v8 = 0;
        v9 = 8;
        v10 = 0;
    } else {
        v9 = v24;
        v8 = v16;
    }
    v43 = _ZN5uu_rm9OPT_FORCE17hb22b75eb78e97584E;
    v44 = g_4ee580;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, v43, v44) as i8;
    if !v0 {
        if !(!v10) {
            goto LABEL_43b186;
        }
        v24 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(15, 0);
        v52 = v26;
        *((v52 + 7) as &i64) = 7236828795186999072;
        *(v52 as &i64) = 2334956331002456429;
        v27 = 1;
        v24 = v25;
        v25 = v52;
        v26 = 15;
        v40 = __rust_alloc(32, 8);
        v53 = v24;
        *((v40 + 16) as &i128) = v26;
        *(v40 as &i128) = v53;
        v54 = &g_4ebc50;
LABEL_43b830:
        if !v40 {
            v76 = uucore::mods::error::get_exit_code() as i32;
            return v76;
        }
LABEL_43b85f:
        v12 = v40;
        v13 = v54;
        v32 = &v12;
        v33 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v24 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: &[&Argument] {
                ptr: &v32
                len: <UNKNOWN>
            }
            fmt: None
        };
        v27 = 1;
        v30 = alloc::fmt::format::format_inner(&v24);
        v32 = v30;
        v77 = *((&v30 as &char + 16) as &i64);
        v34 = *((&v30 as &char + 16) as &i64);
        v78 = v33;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v33, *((&v30 as &char + 16) as &i64), 1, 0) as i8 {
            v16 = uucore::util_name();
            v17 = v47;
            v14 = &v16;
            v15 = <&T as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: [&g_4ebbd0, ": "]
                args: &[&Argument] {
                    ptr: &v14
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v27 = 1;
            std::io::stdio::_eprint(&v24);
            v16 = v26;
            v17 = <alloc::string::String as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: [&g_4ebbf0, "\n"]
                args: &[&Argument] {
                    ptr: &v16
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v27 = 1;
            std::io::stdio::_eprint(&v24);
        }
        if *((v13 + 104) as &i64)() {
            v16 = uucore::execution_phrase();
            v17 = v47;
            v14 = &v16;
            v15 = <&T as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: ["Try '", " --help' for more information.\n"]
                args: &[&Argument] {
                    ptr: &v14
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v26 = &v14;
            v27 = 1;
            std::io::stdio::_eprint(&v24);
        }
        v76 = *((v13 + 96) as &i64)();
        v79 = v13;
        if *(v79 as &i64) {
            v80();
        }
        if *((v79 + 8) as &i64) {
            return v76;
        }
        return v76;
    }
    v36 = _ZN5uu_rm10OPT_PROMPT17h0856faee7606cbb2E;
    v48 = g_4ee5b0;
    v49 = _ZN5uu_rm15OPT_PROMPT_MORE17h454e96fa7e537826E;
    v50 = g_4ee5c0;
    v23 = _ZN5uu_rm15OPT_INTERACTIVE17hb573342b616e3a66E;
    v51 = g_4ee570;
    if (clap_builder::parser::matches::arg_matches::ArgMatches::value_source(&v14, v36, v48) as i8 != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v14, v36, v48) || v47 <= v46) && (clap_builder::parser::matches::arg_matches::ArgMatches::value_source(&v14, v49, v50) as i8 != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v14, v49, v50) || v47 <= v46) && (clap_builder::parser::matches::arg_matches::ArgMatches::value_source(&v14, v23, v51) as i8 != 2 || !clap_builder::parser::matches::arg_matches::ArgMatches::index_of(&v14, v23, v51) || v47 <= v46) {
        v55 = 0;
        v56 = 0;
        goto LABEL_43b44b;
    }
LABEL_43b186:
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm10OPT_PROMPT17h0856faee7606cbb2E, g_4ee5b0) as i8 {
LABEL_43b1a3:
        v55 = 0;
        v56 = v37 | -0x100 | 2;
        goto LABEL_43b44b;
    }
    v55 = v36 | -0x100 | 1;
    v56 = v37 | -0x100 | 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm15OPT_PROMPT_MORE17h454e96fa7e537826E, g_4ee5c0) as i8 {
        v57 = _ZN5uu_rm15OPT_INTERACTIVE17hb573342b616e3a66E;
        v58 = g_4ee570;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, v57, v58) as i8 {
            v56 = v56 | -0x100 | 3;
            v55 = 0;
            goto LABEL_43b44b;
        }
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, v57, v58);
        v59 = clap_builder::parser::error::MatchesError::unwrap(v57, v58, &v24);
        if !v59 {
            core::option::unwrap_failed(); /* do not return */
        }
        v60 = *((v59 + 8) as &i64);
        v61 = *((v59 + 16) as &i64);
        v55 = 0;
        v56 = 0;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v60, v61, &g_4117a7, 5) as i8 && (v55 = 1, v37 = -255, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v60, v61, &g_41184c, 4) as i8) {
            if !(!(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v60, v61, &g_411860, 6) & 255 & 255 & 255)) {
                goto LABEL_43b1a3;
            }
            v16 = v60;
            v17 = v61;
            v32 = &v16;
            v33 = <&T as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: ["Invalid argument to interactive (", ")"]
                args: &[&Argument] {
                    ptr: &v32
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v27 = 1;
            v31 = alloc::fmt::format::format_inner(&v24);
            v27 = 1;
            v24 = v31;
            v26 = *((&v31 as &char + 16) as &i64);
            v40 = alloc::alloc::exchange_malloc();
            v62 = v24;
            *((v40 + 16) as &i64) = v26;
            *(v40 as &i128) = v62;
            v54 = &g_4ebd30;
LABEL_43b828:
            goto LABEL_43b830;
        }
    }
LABEL_43b44b:
    v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm13OPT_RECURSIVE17hdbca4a64ce3e84c2E, g_4ee5d0) as i32;
    v64 = v0;
    v1 = v64;
    v7 = v56;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h28c6712d3c2c2b9eE, g_4ee5a0) as i32;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm20OPT_NO_PRESERVE_ROOT17hd35cc6b22fd6b6f7E, g_4ee590) as i32 ^ 1;
    v4 = v63;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm7OPT_DIR17hee9a257e9c5cf49eE, g_4ee560) as i32;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN5uu_rm11OPT_VERBOSE17hbda0445ea026a317E, g_4ee5e0) as i8;
    if !v55 {
LABEL_43b7bc:
        if !uu_rm::remove(v9, v10, &v1, v64, v73, v74) as i8 {
            vvar_1351{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v76;
        }
        v40 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        goto LABEL_43b828;
    } else {
        if v63 {
            v65 = v10;
            v11 = v65;
            v19 = (2 <= v65 ? &g_411970 : &g_411958);
            v20 = 9 - (v65 < 2);
            v67 = 13;
            v68 = &g_41197a;
        } else {
            if v11 <= 3 {
                goto LABEL_43b7bc;
            }
            v11 = v10;
            v19 = &g_411970;
            v20 = 9;
            v67 = 1;
            v68 = &g_411979;
        }
        v21 = v68;
        v22 = v67;
        v24 = Argument {
            value: &v11
            formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
        };
        v25 = Argument {
            value: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
            formatter: &v19
        };
        v26 = Argument {
            value: &v19
            formatter: <UNKNOWN>
        };
        v27 = <&T as core::fmt::Display>::fmt;
        v28 = &v21;
        v32 = Arguments {
            pieces: ["remove ", " ", &g_4ebdc0]
            args: [&v24, &v25, &v26]
            fmt: None
        };
        v12 = alloc::fmt::format::format_inner(&v32);
        v16 = v12;
        v18 = *((&v12 as &char + 16) as &i64);
        v32 = uucore::util_name();
        v33 = v47;
        v21 = &v32;
        v22 = <&T as core::fmt::Display>::fmt;
        v24 = Arguments {
            pieces: [&g_4ebbd0, ": "]
            args: &[&Argument] {
                ptr: &v21
                len: <UNKNOWN>
            }
            fmt: None
        };
        v27 = 1;
        std::io::stdio::_eprint(&v24);
        v32 = &v16;
        v33 = <alloc::string::String as core::fmt::Display>::fmt;
        v24 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: &[&Argument] {
                ptr: &v32
                len: <UNKNOWN>
            }
            fmt: None
        };
        v27 = 1;
        std::io::stdio::_eprint(&v24);
        v24 = Arguments {
            pieces: [" "]
            args: &[&Argument] {
                ptr: 8
                len: <UNKNOWN>
            }
            fmt: None
        };
        v27 = 0;
        std::io::stdio::_eprint(&v24);
        v11 = struct8 {
            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
        };
        v71 = <std::io::stdio::Stderr as std::io::Write>::flush(&v11, v70, v47);
        if v71 {
            v19 = v71;
            v32 = uucore::util_name();
            v33 = v47;
            v21 = &v32;
            v22 = <&T as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: [&g_4ebbd0, ": "]
                args: &[&Argument] {
                    ptr: &v21
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v27 = 1;
            std::io::stdio::_eprint(&v24);
            v32 = &v19;
            v33 = <std::io::error::Error as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: [&g_4ebbf0, "\n"]
                args: &[&Argument] {
                    ptr: &v32
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v27 = 1;
            std::io::stdio::_eprint(&v24);
            std::process::exit(1); /* do not return */
        }
        if !uucore::read_yes(v72, v70, v47) as i8 {
            v40 = 0;
            goto LABEL_43b828;
        } else {
            goto LABEL_43b7bc;
        }
    }
}
