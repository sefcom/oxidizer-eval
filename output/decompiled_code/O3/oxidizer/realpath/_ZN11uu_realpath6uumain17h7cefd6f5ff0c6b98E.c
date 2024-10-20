fn uu_realpath::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x460]
    let v1: i64;  // [bp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i64;  // [sp-0x438]
    let v4: i32;  // [sp-0x430]
    let v5: i32;  // [sp-0x42c]
    let v6: i64;  // [sp-0x428]
    let v8: i64;  // [sp-0x418]
    let v9: i32;  // [sp-0x40c]
    let v10: i512;  // [sp-0x408], Other Possible Types: Argument, struct64, struct16
    let v11: i64;  // [bp-0x400], Other Possible Types: Argument
    let v12: i64;  // [sp-0x3f8]
    let v13: i64;  // [sp-0x3f0]
    let v14: i64;  // [sp-0x3c8]
    let v15: struct24;  // [sp-0x3b8], Other Possible Types: i192
    let v16: i448;  // [sp-0x3a0], Other Possible Types: Argument
    let v17: i64;  // [sp-0x398]
    let v18: i64;  // [bp-0x368], Other Possible Types: Argument
    let v19: i64;  // [sp-0x360]
    let v20: i128;  // [sp-0x358]
    let v21: i128;  // [sp-0x348]
    let v22: i128;  // [sp-0x338]
    let v23: i64;  // [sp-0x320]
    let v24: i64;  // [sp-0x318]
    let v25: String;  // [sp-0x310], Other Possible Types: i192
    let v26: Arguments;  // [sp-0x2f8], Other Possible Types: i64, Enum, struct712
    let v27: i64;  // [bp-0x2f0]
    let v28: i64;  // [sp-0x2e8]
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v32: i64;  // r15
    let v33: i64;  // r14
    let v35: i32;  // ebx
    let v36: i8;  // al
    let v37: i64;  // rdx
    let v39: i32;  // r12d
    let v40: i64;  // rcx
    let v41: i64;  // r15
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // rax
    let v45: i64;  // r15
    let v46: i64;  // r13
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v51: i64;  // rax
    let v52: i64;  // r13
    let v54: i64;  // r9
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rdx
    let v60: i64;  // rax
    let v62: i64;  // rsi
    let v63: i64;  // rdi
    let v64: i64;  // rdx
    let v65: i32;  // eax
    let v66: i64;  // r12
    let v67: i64;  // rax

    v26 = uu_realpath::uu_app();
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v26, a0, a1);
    if v16 == 0x8000000000000000 {
        v26 = v17;
        v27 = 1;
        v30 = __rust_alloc(16, 8);
        *(v30 as &i64) = v26;
        *((v30 + 8) as &i32) = 1;
        v33 = &g_4e7908;
    } else {
        v16 = v10;
        v31 = _ZN11uu_realpath9ARG_FILES17h7a401aab61d23825E;
        v32 = g_4ea210;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v26, &v16, v31, v32);
        v10 = clap_builder::parser::error::MatchesError::unwrap(v31, v32, &v26);
        if !v10 {
            core::option::unwrap_failed(); /* do not return */
        }
        v22 = *((&v10 as &char + 48) as &i128);
        v21 = *((&v10 as &char + 32) as &i128);
        v20 = *((&v10 as &char + 16) as &i128);
        v18 = v10;
        v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
        v35 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_realpath8OPT_ZERO17h4456fb53980bfabfE, g_4ea1f0) as i8 ? 10 : 0);
        v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_realpath9OPT_QUIET17hef794925461044b0E, g_4ea1d0) as i32;
        v37 = g_4ea200;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, &g_411b1d, 21) as i8 {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, &g_411b32, 20);
        }
        v39 = (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_realpath9OPT_STRIP17hf781af9f95a77b68E, g_4ea1e0) as i32 ? 0 : clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_realpath11OPT_LOGICAL17h7ad4af4ad20a3cc6E, g_4ea200) as i32 + 1);
        v40 = v39;
        v26 = uu_realpath::prepare_relative_options(&v16, 1, v39);
        v41 = *((&v26 as &char + 8) as &i64);
        v33 = v28;
        if v6 != 9223372036854775809 {
            v3 = *((&v26 as &char + 40) as &i64);
            v1 = *((&v26 as &char + 24) as &i128);
            v6 = v26;
            v30 = v41;
            v8 = v33;
            v42 = *((&v15 as &char + 16) as &i64);
            if v42 {
                v43 = *((&v15 as &char + 8) as &i64);
                v4 = v35;
                v5 = v39;
                v44 = v42 * 8;
                if !v36 {
                    do {
                        v52 = v44 * 3;
                        if v6 != 0x8000000000000000 {
                            v54 = v30;
                        }
                        if v1 != 0x8000000000000000 {
                            v57 = v2;
                        }
                        v0 = v57;
                        v58 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_realpath::resolve_path(*((v43 + 8) as &i64), *((v43 + 16) as &i64), v4, v5, 1, v54, v8, v0, v3), v43);
                        if v58 {
                            v14 = v58;
                            *((v59 + 96) as &i64)();
                            uucore::mods::error::set_exit_code();
                            v23 = uucore::util_name();
                            v24 = v59;
                            v10 = Argument {
                                value: &v23
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v11 = Argument {
                                value: <&T as core::fmt::Display>::fmt
                                formatter: &v14
                            };
                            v13 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v26 = Arguments {
                                pieces: &[&str] {
                                    ptr: &g_4e78a0
                                    len: <UNKNOWN>
                                }
                                args: [&v10, &v11]
                                fmt: None
                            };
                            v27 = 3;
                            std::io::stdio::_eprint(&v26);
                            if *(v59 as &i64) {
                                v60();
                            }
                        }
                        v43 += 24;
                    } while (v52 != 24);
                } else {
                    v45 = 0;
                    v46 = uu_realpath::resolve_path;
                    v9 = 1;
                    do {
                        v48 = v46();
                        if v48 {
                            v49 = v48 & 3;
                            if v49 - 2 >= 2 && v49 {
                                v51 = *(*((v48 + 7) as &i64) as &i64);
                                if v51 {
                                    v51();
                                }
                                v46 = uu_realpath::resolve_path;
                            }
                        }
                        v45 += 24;
                    } while (v44 + (v44 << 1) != v45);
                }
            }
            v65 = uucore::mods::error::get_exit_code() as i32;
            return v65;
        } else if !v30 {
            vvar_994{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v65;
        }
    }
    v1 = v30;
    v2 = v33;
    v10 = Argument {
        value: &v1
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v26 = Arguments {
        pieces: &[&str] {
            ptr: &g_411090
            len: <UNKNOWN>
        }
        args: [&v10]
        fmt: None
    };
    v27 = 1;
    v25 = alloc::fmt::format::format_inner(&v26);
    v10 = v25;
    v62 = *((&v25 as &char + 16) as &i64);
    v12 = *((&v25 as &char + 16) as &i64);
    v63 = v11;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, *((&v25 as &char + 16) as &i64), 1, 0) as i8 {
        v18 = uucore::util_name();
        v19 = v64;
        v16 = Argument {
            value: &v18
            formatter: <&T as core::fmt::Display>::fmt
        };
        v26 = Arguments {
            pieces: &[&str] {
                ptr: &g_4e7828
                len: <UNKNOWN>
            }
            args: [&v16]
            fmt: None
        };
        v27 = 2;
        std::io::stdio::_eprint(&v26);
        v18 = Argument {
            value: &v10
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v26 = Arguments {
            pieces: &[&str] {
                ptr: &g_4e7848
                len: <UNKNOWN>
            }
            args: [&v18]
            fmt: None
        };
        v27 = 2;
        std::io::stdio::_eprint(&v26);
    }
    if *((v2 + 104) as &i64)() {
        v18 = uucore::execution_phrase();
        v19 = v64;
        v16 = &v18;
        v26 = Arguments {
            pieces: &[&str] {
                ptr: "Try '"
                len: <UNKNOWN>
            }
            args: [&v16]
            fmt: None
        };
        v27 = 2;
        v28 = &v16;
        std::io::stdio::_eprint(&v26);
    }
    v65 = *((v2 + 96) as &i64)();
    v66 = v2;
    if *(v66 as &i64) {
        v67();
    }
    if *((v66 + 8) as &i64) {
        return v65;
    }
    return v65;
}
