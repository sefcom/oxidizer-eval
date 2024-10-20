fn uu_rmdir::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x411]
    let v1: i64;  // [sp-0x410], Other Possible Types: Argument
    let v2: i64;  // [sp-0x408], Other Possible Types: Argument
    let v3: i64;  // [sp-0x400]
    let v4: i64;  // [sp-0x3f8]
    let v5: i64;  // [sp-0x3f0]
    let v6: Arguments;  // [sp-0x3e8], Other Possible Types: i64, Argument, struct40, struct16, Enum
    let v7: i64;  // [sp-0x3e0]
    let v8: i64;  // [bp-0x3d8]
    let v9: i64;  // [sp-0x3d0]
    let v10: i64;  // [bp-0x3c8]
    let v11: i8;  // [bp-0x3b8]
    let v12: i64;  // [bp-0x3a8], Other Possible Types: Argument
    let v13: i64;  // [sp-0x3a0]
    let v14: i128;  // [bp-0x398]
    let v15: i8;  // [sp-0x390]
    let v16: i64;  // [sp-0x388]
    let v17: i64;  // [sp-0x378], Other Possible Types: Argument
    let v18: i64;  // [sp-0x370]
    let v19: i128;  // [sp-0x368]
    let v20: i128;  // [sp-0x358]
    let v21: i64;  // [sp-0x348]
    let v22: i64;  // [sp-0x340]
    let v23: i64;  // [sp-0x338]
    let v24: i192;  // [sp-0x328], Other Possible Types: Enum
    let v25: String;  // [sp-0x310], Other Possible Types: i192
    let v26: Arguments;  // [sp-0x2f8], Other Possible Types: i64, Enum, struct712
    let v27: i64;  // [sp-0x2f0]
    let v28: i64;  // [bp-0x2e8]
    let v29: i64;  // [sp-0x2d8]
    let v30: i64;  // [sp-0x2d0]
    let v31: i64;  // [sp-0x2c8]
    let v32: i64;  // [sp-0x2c0]
    let v34: i64;  // rdx
    let v35: i64;  // rcx
    let v36: i64;  // rdi
    let v37: i64;  // rax
    let v38: i32;  // eax
    let v39: i64;  // rdx
    let v40: i32;  // eax
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i64;  // rdi
    let v47: i64;  // rdx
    let v49: i64;  // rax
    let v51: i64;  // r15
    let v52: i64;  // r13
    let v53: i64;  // rax
    let v55: i64;  // rbx
    let v56: i64;  // rbx
    let v57: i32;  // eax
    let v58: i64;  // r15
    let v59: i64;  // rax

    v26 = uu_rmdir::uu_app();
    v34 = a0;
    v35 = a1;
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v26, a0, a1);
    v36 = v7;
    if v17 != 0x8000000000000000 {
        v21 = v11;
        v20 = v10;
        v19 = v8;
        v17 = v6;
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17h96c438a06d3c1bbcE, g_4dc040) as i8;
        v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN8uu_rmdir11OPT_PARENTS17h6ef168c525e099aaE, g_4dc050) as i32;
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN8uu_rmdir11OPT_VERBOSE17h6a5c4637515d4f45E, g_4dc060) as i32;
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, v22, v23);
        v22 = _ZN8uu_rmdir8ARG_DIRS17hab2b224eb67d7a4fE;
        v23 = g_4dc070;
        if v26 {
            v16 = v30;
            v43 = *((&v26 as &char + 8) as &i128);
            v14 = *((&v26 as &char + 24) as &i128);
            v12 = v43;
            v1 = &v22;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v12;
            v4 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v6 = "Mismatch between definition and access of `";
            v7 = 2;
            v10 = 0;
            v8 = &v1;
            v9 = 2;
            v6 = core::panicking::panic_fmt();
        }
        if v27 {
            v44 = *((&v26 as &char + 24) as &i128);
            v45 = *((&v26 as &char + 64) as &i64);
        } else {
            v45 = 0;
        }
        *(&v26 as &Enum) = Enum {
            field_24: v47
            field_32: v48
        };
        v28 = v44;
        v29 = v30;
        v30 = 0;
        v31 = v32;
        v32 = v45;
        loop {
            v49 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v26);
            if !v49 {
                break;
            }
            v24 = uu_rmdir::remove(*((v49 + 8) as &i64), *((v49 + 16) as &i64), v40 * 0x10000 | v38 * 0x100 | v0);
            if !v5 {
                continue;
            }
            v51 = *((&v24 as &char + 8) as &i64);
            v52 = *((&v24 as &char + 16) as &i64);
            v5 = v24;
            if !(v0) || !(uu_rmdir::dir_not_empty(&v5, v51, v52) as i8) {
                uucore::mods::error::set_exit_code();
                v53 = v5;
                if !((v53 & 3) >= 2) || !((v53 & 3) == 2) || !(v53 >> 32 == 20) || !(core::slice::<impl [T]>::ends_with(v51, v52, &g_410047, 1) as i8) {
LABEL_435a60:
                    v12 = uucore::util_name();
                    v13 = v47;
                    v1 = Argument {
                        value: &v12
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v6 = Arguments {
                        pieces: [&g_4d9850, ": "]
                        args: [&v1]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v6);
                    v12 = 1;
                    v13 = v51;
                    v14 = v52;
                    v15 = 1;
                    uucore::mods::error::strip_errno();
                    v1 = Argument {
                        value: &v12
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v2 = Argument {
                        value: <os_display::Quoted as core::fmt::Display>::fmt
                        formatter: &v22
                    };
                    v4 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = Arguments {
                        pieces: ["failed to remove ", ": ", "\n"]
                        args: [&v1, &v2]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v6);
                    continue;
                } else {
                    v55 = v52;
                    v56 = v55 - 1;
                    if v55 < 1 {
                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                    }
                    if !std::path::Path::is_symlink(v51, v56) as i8 {
                        goto LABEL_435a60;
                    }
                    v6 = uu_rmdir::uumain::uumain::points_to_directory(v51, v56);
                    if !v6 {
                        if !(!*((&v6 as &char + 1) as &i8)) {
                            goto LABEL_43597b;
                        }
                        goto LABEL_435a60;
                    } else {
LABEL_43597b:
                        v12 = uucore::util_name();
                        v13 = v47;
                        v1 = &v12;
                        v6 = Arguments {
                            pieces: [&g_4d9850, ": "]
                            args: [&v1]
                            fmt: None
                        };
                        v8 = &v1;
                        std::io::stdio::_eprint(&v6);
                        v12 = 1;
                        v13 = v51;
                        v14 = v52;
                        v15 = 1;
                        v1 = Argument {
                            value: &v12
                            formatter: <os_display::Quoted as core::fmt::Display>::fmt
                        };
                        v6 = Arguments {
                            pieces: ["failed to remove ", ": Symbolic link not followed\n"]
                            args: [&v1]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v6);
                    }
                }
            }
        }
    } else {
        v37 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        if v37 {
            v1 = v37;
            v2 = v39;
            v6 = Argument {
                value: &v1
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v26 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v6]
                fmt: None
            };
            v25 = alloc::fmt::format::format_inner(&v26);
            v6 = v25;
            v8 = *((&v25 as &char + 16) as &i64);
            if v8 {
                v17 = uucore::util_name();
                v18 = v39;
                v12 = Argument {
                    value: &v17
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v26 = Arguments {
                    pieces: [&g_4d9850, ": "]
                    args: [&v12]
                    fmt: None
                };
                std::io::stdio::_eprint(&v26);
                v17 = Argument {
                    value: &v6
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v26 = Arguments {
                    pieces: [&g_4d9870, "\n"]
                    args: [&v17]
                    fmt: None
                };
                std::io::stdio::_eprint(&v26);
            }
            if *((v2 + 104) as &i64)() {
                v17 = uucore::execution_phrase();
                v18 = v39;
                v12 = &v17;
                v26 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v12]
                    fmt: None
                };
                v28 = &v12;
                std::io::stdio::_eprint(&v26);
            }
            v57 = *((v2 + 96) as &i64)();
            v58 = v2;
            if *(v58 as &i64) {
                v59();
            }
            if *((v58 + 8) as &i64) {
                return v57;
            }
            return v57;
        }
    }
    v57 = uucore::mods::error::get_exit_code() as i32;
    return v57;
}
