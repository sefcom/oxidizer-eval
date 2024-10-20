fn uu_env::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i8;  // [bp-0x4ab]
    let v1: i8;  // [sp-0x4a9]
    let v2: i192;  // [bp-0x4a8], Other Possible Types: Arguments, Enum, struct32, Argument
    let v3: i64;  // [sp-0x4a0]
    let v4: i64;  // [sp-0x498]
    let v5: i128;  // [bp-0x490]
    let v6: i128;  // [sp-0x480]
    let v7: i64;  // [sp-0x470], Other Possible Types: String, struct8, struct24
    let v8: i64;  // [sp-0x468]
    let v9: i128;  // [bp-0x458], Other Possible Types: Argument, struct8
    let v10: i64;  // [sp-0x450]
    let v11: i64;  // [sp-0x448]
    let v12: i64;  // [bp-0x438], Other Possible Types: Argument
    let v13: i64;  // [sp-0x430]
    let v14: i128;  // [bp-0x428]
    let v15: i64;  // [sp-0x418], Other Possible Types: Argument
    let v16: i64;  // [sp-0x410]
    let v17: i64;  // [sp-0x408]
    let v18: i64;  // [sp-0x400], Other Possible Types: Argument
    let v19: i192;  // [sp-0x3f0], Other Possible Types: struct24
    let v20: i128;  // [bp-0x3d8], Other Possible Types: struct16, struct24, Argument
    let v21: i64;  // [sp-0x3d0]
    let v22: i64;  // [sp-0x3c8]
    let v23: i8;  // [bp-0x3c0]
    let v24: i8;  // [bp-0x3b0]
    let v25: i8;  // [bp-0x380]
    let v26: i8;  // [bp-0x33f]
    let v27: i64;  // [sp-0x338]
    let v28: i64;  // [sp-0x330]
    let v29: i64;  // [sp-0x328]
    let v30: i64;  // [sp-0x320]
    let v31: i64;  // [sp-0x318]
    let v32: String;  // [sp-0x310], Other Possible Types: i192
    let v33: Arguments;  // [sp-0x2f8], Other Possible Types: i64, struct712, struct160
    let v34: i64;  // [sp-0x2e8]
    let v35: i64;  // [sp-0x1d0]
    let v36: i64;  // [sp-0x1c8]
    let v37: i64;  // [sp-0x1c0]
    let v38: i64;  // [sp-0xc8]
    let v39: i64;  // [sp-0xc0]
    let v43: i64;  // rax
    let v44: i64;  // rdx
    let v45: i64;  // rcx
    let v46: i64;  // rax
    let v47: i64;  // r15
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i64;  // r15
    let v51: i64;  // rax
    let v52: i64;  // rdi
    let v53: i64;  // rdx
    let v54: i8;  // cl
    let v56: i64;  // rsi
    let v57: i32;  // eax
    let v58: i64;  // rsi
    let v59: i64;  // rdi
    let v60: i64;  // rax

    v0 = 0;
    v1 = 2;
    v19 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    uu_env::EnvAppData::process_all_string_arguments(&v20, &v0, &v19);
    v31 = v31;
    if v29 != 0x8000000000000000 {
        v29 = v20;
        v30 = v21;
        v31 = v22;
        v33 = uu_env::uu_app();
        v2 = struct32 {
            field_0: v41
            field_8: v41
            field_16: v29
            field_24: v41 + v42 * 24
        };
        v7 = clap_lex::RawArgs::new(&v2);
        v9 = struct8 {
            field_0: 0
        };
        if !((*((&v33 as &char + 701) as &i8) & 8)) || !((v43 = clap_lex::RawArgs::next_os(&v7, &v9), v43)) {
LABEL_44673b:
            if !(*((&v33 as &char + 703) as &i8) & 2) {
                v48 = clap_lex::RawArgs::next_os(&v7, &v9);
                if v48 {
                    v49 = std::path::Path::file_name(v48, v44, v44, v45);
                    if v49 {
                        v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v49, v44);
                        if !v2 && v35 == 0x8000000000000000 {
                            v50 = v4;
                            v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50, 0);
                            memcpy(v36, v3, v50);
                            v35 = v3;
                            v36 = v4;
                            v37 = v50;
                        }
                    }
                }
            }
            v20 = clap_builder::builder::command::Command::_do_parse(&v33, &v7, v9);
        } else {
            v46 = std::path::Path::file_stem(v43, v44, v44, v45);
            if !(v46) || !((v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v46, v44), !v2)) {
                goto LABEL_44673b;
            }
            v47 = v4;
            v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v47, 0);
            memcpy(v3, v3, v47);
            v2 = *(&v2.field_8 as &i192);
            v7 = clap_lex::RawArgs::insert(&v9, &v2);
            v38 = 1;
            v39 = 0;
            v35 = 0x8000000000000000;
            v20 = clap_builder::builder::command::Command::_do_parse(&v33, &v7, v9);
        }
        v51 = v20;
        v52 = v21;
        if v51 == 0x8000000000000000 {
            v17 = v52;
            if (*((v52 + 213) as &i8) | 2) == 14 {
                v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
            } else {
                v9 = Argument {
                    value: &v17
                    formatter: <clap_builder::error::Error<F> as core::fmt::Display>::fmt
                };
                v2 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v9]
                    fmt: None
                };
                v7 = alloc::fmt::format::format_inner(&v2);
                v9 = v7;
                v11 = *((&v7 as &char + 16) as &i64);
                if v11 {
                    v27 = core::str::<impl str>::trim_end_matches(v10, v11);
                    v28 = v44;
                    v15 = uucore::util_name();
                    v16 = v44;
                    v18 = &v15;
                    v2 = Arguments {
                        pieces: [&g_5096d0, ": "]
                        args: [&v18]
                        fmt: None
                    };
                    v4 = &v18;
                    std::io::stdio::_eprint(&v2);
                    v15 = Argument {
                        value: &v27
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v2 = Arguments {
                        pieces: [&g_5096f0, "\n"]
                        args: [&v15]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v2);
                }
                v15 = uucore::util_name();
                v16 = v44;
                v18 = Argument {
                    value: &v15
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v2 = Arguments {
                    pieces: [&g_5096d0, ": "]
                    args: [&v18]
                    fmt: None
                };
                std::io::stdio::_eprint(&v2);
                v15 = Argument {
                    value: "use -[v]S to pass options in shebang lines"
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v2 = Arguments {
                    pieces: [&g_5096f0, "\n"]
                    args: [&v15]
                    fmt: None
                };
                std::io::stdio::_eprint(&v2);
                v30 = uucore::mods::error::ExitCode::new(125);
            }
        } else {
            v12 = v23;
            v14 = v24;
            v53 = v19;
            v30 = *((&v19 as &char + 8) as &i64);
            v31 = *((&v19 as &char + 16) as &i64);
            if v12 != 0x8000000000000000 {
                v6 = v14;
                v5 = v12;
                v12 = v53;
                v13 = v30;
                v14 = v31;
                v2 = v51;
                v3 = v52;
                v4 = v22;
                if !v0 {
                    clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v2, &g_413569, 5);
                }
                v0 = 1;
                v54 = (v1 != 2 ? (-0x100 | 2 <= clap_builder::parser::matches::arg_matches::ArgMatches::get_count(&v2, &g_413569, 5) as i8) & 4294967295 & 4294967295 : v1);
                v1 = v54;
                if v54 {
                    uu_env::debug_print_args(v13, v14, v44);
                    v1 = 0;
                }
                v33 = uu_env::make_options(&v2);
                if v33 != 0x8000000000000000 {
                    memcpy(&v23, &v33, 136);
                    v20 = struct24 {
                        field_0: v55
                        field_8: v41
                        field_16: v42
                    };
                    v30 = uu_env::apply_change_directory(&v20);
                    if !v30 {
                        uu_env::apply_removal_of_all_env_vars(&v20);
                        v30 = uu_env::load_config_file(&v20);
                        if !v30 {
                            v30 = uu_env::apply_unset_env_vars(&v20);
                            if !v30 {
                                uu_env::apply_specified_env_vars(&v20, v56, v44);
                                v30 = uu_env::apply_ignore_signal(&v20, v56, v44);
                                if !v30 {
                                    if v25 {
                                        v30 = uu_env::EnvAppData::run_program(&v0, &v20);
                                    } else {
                                        uu_env::print_env(v26, v56, v44);
                                        v57 = uucore::mods::error::get_exit_code() as i32;
                                        return v57;
                                    }
                                }
                            }
                        }
                    }
                }
                if !v30 {
                    vvar_1055{reg 16} = uucore::mods::error::get_exit_code() as i32;
                    return v57;
                }
            }
LABEL_446d25:
            v7 = v30;
            v8 = v31;
            v20 = Argument {
                value: &v7
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v33 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v20]
                fmt: None
            };
            v32 = alloc::fmt::format::format_inner(&v33);
            v20 = v32;
            v58 = *((&v32 as &char + 16) as &i64);
            v22 = *((&v32 as &char + 16) as &i64);
            v59 = v21;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((&v32 as &char + 16) as &i64), 1, 0) as i8 {
                v2 = uucore::util_name();
                v3 = v44;
                v12 = Argument {
                    value: &v2
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v33 = Arguments {
                    pieces: [&g_5096d0, ": "]
                    args: [&v12]
                    fmt: None
                };
                std::io::stdio::_eprint(&v33);
                v2 = Argument {
                    value: &v20
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v33 = Arguments {
                    pieces: [&g_5096f0, "\n"]
                    args: [&v2]
                    fmt: None
                };
                std::io::stdio::_eprint(&v33);
            }
            if *((v8 + 104) as &i64)() {
                v2 = uucore::execution_phrase();
                v3 = v44;
                v12 = &v2;
                v33 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v12]
                    fmt: None
                };
                v34 = &v12;
                std::io::stdio::_eprint(&v33);
            }
            v57 = *((v8 + 96) as &i64)();
            if !*(v8 as &i64) {
                return v57;
            }
            v60();
        }
    }
    goto LABEL_446d25;
}
