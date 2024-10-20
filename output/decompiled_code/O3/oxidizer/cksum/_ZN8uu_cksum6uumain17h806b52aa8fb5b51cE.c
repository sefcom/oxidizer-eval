fn uu_cksum::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [bp-0x448]
    let v1: i8;  // [bp-0x440]
    let v2: i8;  // [sp-0x412]
    let v3: i8;  // [sp-0x411]
    let v4: i128;  // [bp-0x410], Other Possible Types: struct16
    let v5: i64;  // [sp-0x408]
    let v6: i192;  // [sp-0x400], Other Possible Types: struct24
    let v7: i64;  // [sp-0x3f8]
    let v8: i8;  // [bp-0x3e8]
    let v9: i64;  // [bp-0x3e0]
    let v10: i64;  // [sp-0x3d8]
    let v11: i128;  // [sp-0x3d0], Other Possible Types: Argument
    let v12: i64;  // [sp-0x3c8]
    let v13: i128;  // [sp-0x3c0]
    let v14: i128;  // [sp-0x3b0]
    let v15: i64;  // [sp-0x3a0]
    let v16: i64;  // [sp-0x398], Other Possible Types: struct16, Argument, struct64
    let v17: i64;  // [sp-0x390]
    let v18: i64;  // [bp-0x388]
    let v19: i128;  // [sp-0x380]
    let v20: i8;  // [bp-0x378]
    let v21: i8;  // [bp-0x368]
    let v22: i64;  // [sp-0x358], Other Possible Types: Argument, struct64
    let v23: i64;  // [sp-0x350]
    let v24: i64;  // [sp-0x348]
    let v25: String;  // [sp-0x310], Other Possible Types: i192
    let v26: i64;  // [sp-0x2f8], Other Possible Types: Enum, Arguments, struct59, struct10, struct712
    let v27: i64;  // [sp-0x2f0]
    let v28: i64;  // [sp-0x2e8]
    let v29: i128;  // [bp-0x2d8]
    let v30: i128;  // [bp-0x2c8]
    let v31: i8;  // [sp-0x2be]
    let v33: i64;  // r12
    let v34: i8;  // bpl
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r13
    let v41: i64;  // r15
    let v42: i64;  // r15
    let v46: i64;  // rcx
    let v47: i64;  // r8
    let v48: i64;  // r9
    let v51: i64;  // rsi
    let v52: i64;  // rcx
    let v53: i64;  // r8
    let v54: i64;  // r9
    let v55: i128;  // xmm0
    let v56: i128;  // xmm1
    let v57: i128;  // xmm2
    let v59: i64;  // rcx
    let v60: i64;  // r8
    let v61: i32;  // eax
    let v62: i64;  // rsi
    let v63: i64;  // rdi
    let v64: i64;  // r15
    let v65: i64;  // rax

    v26 = uu_cksum::uu_app();
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v26, a0, a1);
    if v11 == 0x8000000000000000 {
        v33 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        if !v33 {
            vvar_1064{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v61;
        }
        goto LABEL_4fa2a1;
    } else {
        v15 = v21;
        v14 = v20;
        v13 = v18;
        v11 = v16;
        v34 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461054, 5) as i32;
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, &g_461059, 9);
        v35 = clap_builder::parser::error::MatchesError::unwrap(&g_461059, 9, &v26);
        if v35 {
            v4 = *((v35 + 8) as &i128);
            if !(<T as core::slice::cmp::SliceContains>::slice_contains(&v4, "bsd", 3) as i8 & v34) {
                goto LABEL_4fa08d;
            }
        } else {
            if !v34 {
                v4 = &g_460dc4;
                v5 = 3;
                v4 = <T as core::slice::cmp::SliceContains>::slice_contains("bsd", 3);
                goto LABEL_4fa08d;
            }
            v4 = struct16 {
                field_0: 1
                field_8: 0
            };
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v4, "bsd", 3) as i8 {
LABEL_4fa08d:
                v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, &g_461062, 6);
                v37 = clap_builder::parser::error::MatchesError::unwrap(&g_461062, 6, &v26);
                if !v37 {
                    v33 = 0;
                    goto LABEL_4fa129;
                }
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, &g_461025, 7) as i8 {
                    v26 = 9223372036854775818;
                    v36 = __rust_alloc(24, 8);
                    goto LABEL_4fa26a;
                } else {
                    v26 = uucore::features::checksum::calculate_blake2b_length(*(v37 as &i64), v38);
                    v33 = v27;
                    v37 = v28;
                    if !v26 {
LABEL_4fa129:
                        v10 = v37;
                        if !v34 {
                            v26 = uu_cksum::handle_tag_text_binary_flags(&v11);
                            v33 = v26;
                            if v33 {
                                v39 = v27;
                            } else {
                                v2 = *((&v26 as &char + 8) as &i8);
                                v3 = *((&v26 as &char + 9) as &i8);
                                v26 = uucore::features::checksum::detect_algo(v4, v5, v33, v10);
                                v33 = v27;
                                v40 = v28;
                                if v16 {
                                    v19 = *((&v26 as &char + 24) as &i128);
                                    v16 = v26;
                                    v17 = v33;
                                    v18 = v40;
                                    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461068, 3) as i8 {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_46106b, 6);
                                    }
                                    *(&v8 as &long long) = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v18);
                                    v9 = v38;
                                    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, &g_45fffc, 4);
                                    v22 = clap_builder::parser::error::MatchesError::unwrap(&g_45fffc, 4, &v26);
                                    if !v22 {
                                        v26 = struct59 {
                                            field_0: v33
                                            field_8: v10
                                            field_16: v49
                                            field_24: v33
                                            field_32: v8
                                            field_40: v9
                                            field_48: v50
                                            field_56: v2
                                            field_57: v3
                                            field_58: 1
                                        };
                                        v33 = uu_cksum::cksum(&v26, v51, v38, v52, v53, v54);
                                    } else {
                                        v26 = struct59 {
                                            field_0: v33
                                            field_8: v10
                                            field_16: v44
                                            field_24: v33
                                            field_32: v8
                                            field_40: v9
                                            field_48: v45
                                            field_56: v2
                                            field_57: v3
                                            field_58: 1
                                        };
                                        v31 = 1;
                                        v33 = uu_cksum::cksum(&v26, &v22, v38, v46, v47, v48);
                                    }
                                    if !v33 {
                                        vvar_1059{reg 16} = uucore::mods::error::get_exit_code() as i32;
                                        return v61;
                                    }
                                }
                            }
                        } else {
                            v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461077, 6) as i8;
                            v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_46107d, 6) as i8;
                            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45d48c, 4) as i8;
                            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461083, 14) as i8;
                            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461091, 5);
                            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45e5b8, 4) as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461071, 6) as i32) != 1 {
                                v41 = v5;
                                if v41 {
                                    v42 = v4;
                                }
                                v26 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, &g_45fffc, 4);
                                v16 = clap_builder::parser::error::MatchesError::unwrap(&g_45fffc, 4, &v26);
                                if !v16 {
                                    v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&g_460dc0, 1);
                                } else {
                                    v55 = v16;
                                    v56 = *((&v16 as &char + 16) as &i128);
                                    v57 = *((&v16 as &char + 32) as &i128);
                                    v30 = *((&v16 as &char + 48) as &i128);
                                    v29 = v57;
                                    v28 = v56;
                                    v26 = v55;
                                    v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26, v38);
                                }
                                v59 = v2;
                                v60 = v9;
                                v33 = uucore::features::checksum::perform_checksum_validation(v7, *((&v6 as &char + 16) as &i64) * 16 + v7, v3, v2, v9, 0, v0, v1, v42, v41, v33, v10);
                                v39 = v38;
                            } else {
                                v26 = 9223372036854775819;
                                v36 = __rust_alloc(24, 8);
LABEL_4fa26a:
                                v33 = v36;
                                *((v33 + 16) as &i64) = v28;
                                *(v33 as &i320) = v26;
                                v39 = &g_6c7600;
                            }
                        }
                    }
                    if !v33 {
                        v61 = uucore::mods::error::get_exit_code() as i32;
                        return v61;
                    }
                }
LABEL_4fa2a1:
                v6 = v33;
                v7 = v39;
                v22 = Argument {
                    value: &v6
                    formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
                };
                v26 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v22]
                    fmt: None
                };
                v25 = alloc::fmt::format::format_inner(&v26);
                v22 = v25;
                v62 = *((&v25 as &char + 16) as &i64);
                v24 = *((&v25 as &char + 16) as &i64);
                v63 = v23;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, *((&v25 as &char + 16) as &i64), 1, 0) as i8 {
                    v16 = uucore::util_name();
                    v17 = v38;
                    v11 = Argument {
                        value: &v16
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v26 = Arguments {
                        pieces: [&g_6c79d8, ": "]
                        args: [&v11]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v26);
                    v16 = Argument {
                        value: &v22
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v26 = Arguments {
                        pieces: [&g_6c78f0, "\n"]
                        args: [&v16]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v26);
                }
                if *((v7 + 104) as &i64)() {
                    v16 = uucore::execution_phrase();
                    v17 = v38;
                    v11 = &v16;
                    v26 = Arguments {
                        pieces: ["Try '", " --help' for more information.\n"]
                        args: [&v11]
                        fmt: None
                    };
                    v28 = &v11;
                    std::io::stdio::_eprint(&v26);
                }
                v61 = *((v7 + 96) as &i64)();
                v64 = v7;
                if *(v64 as &i64) {
                    v65();
                }
                if *((v64 + 8) as &i64) {
                    return v61;
                }
                return v61;
            }
        }
        v26 = 9223372036854775820;
        v36 = __rust_alloc(24, 8);
        goto LABEL_4fa26a;
    }
}
