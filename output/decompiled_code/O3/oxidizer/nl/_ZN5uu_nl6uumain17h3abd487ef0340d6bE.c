fn uu_nl::uumain() -> u32 {
    let v0: i192;  // [sp-0x538], Other Possible Types: Arguments, struct24, Enum, Argument, struct16
    let v1: i64;  // [sp-0x530]
    let v2: i64;  // [bp-0x528]
    let v3: i64;  // [bp-0x520]
    let v4: i8;  // [bp-0x518]
    let v5: i8;  // [bp-0x508]
    let v6: i192;  // [sp-0x4f0]
    let v7: i64;  // [sp-0x4e8]
    let v9: i64;  // [sp-0x4d8]
    let v10: i64;  // [sp-0x4d0]
    let v11: i64;  // [bp-0x4c8], Other Possible Types: Argument, struct64, Enum
    let v12: i64;  // [sp-0x4c0]
    let v13: i64;  // [sp-0x4b8]
    let v14: i64;  // [sp-0x488]
    let v15: i64;  // [sp-0x480]
    let v16: struct8;  // [bp-0x470]
    let v17: i64;  // [sp-0x468]
    let v18: i64;  // [sp-0x460]
    let v19: i64;  // [sp-0x458]
    let v20: i64;  // [sp-0x450]
    let v21: i64;  // [bp-0x448]
    let v22: i64;  // [bp-0x440]
    let v23: i64;  // [bp-0x438]
    let v24: i192;  // [sp-0x430], Other Possible Types: String
    let v25: i64;  // [sp-0x428]
    let v26: i192;  // [sp-0x400], Other Possible Types: Enum
    let v27: struct24;  // [sp-0x3e8], Other Possible Types: i192
    let v28: i8;  // [bp-0x3d0]
    let v29: i8;  // [bp-0x3c8]
    let v30: i8;  // [bp-0x3c0]
    let v31: i64;  // [sp-0x3b8]
    let v32: i64;  // [sp-0x3b0]
    let v33: i64;  // [sp-0x3a8]
    let v34: i128;  // [sp-0x3a0]
    let v35: i128;  // [sp-0x390]
    let v36: i64;  // [sp-0x380]
    let v37: struct24;  // [bp-0x378]
    let v38: i64;  // [sp-0x360]
    let v39: i64;  // [bp-0x358], Other Possible Types: Argument
    let v40: i64;  // [sp-0x350]
    let v41: i128;  // [sp-0x348]
    let v42: i128;  // [sp-0x338]
    let v43: i128;  // [sp-0x328]
    let v44: i192;  // [sp-0x310], Other Possible Types: String
    let v45: Arguments;  // [sp-0x2f8], Other Possible Types: i5696, struct712, struct106
    let v46: i64;  // [sp-0x2e8]
    let v48: i64;  // rsi
    let v49: i64;  // rcx
    let v50: i64;  // rdi
    let v51: i64;  // rax
    let v52: i128;  // xmm0
    let v53: i256;  // ymm0
    let v54: i256;  // ymm0
    let v55: i64;  // rdx
    let v56: i128;  // xmm0
    let v57: i64;  // r14
    let v58: i128;  // xmm0
    let v59: i64;  // r14
    let v60: i64;  // rax
    let v61: i64;  // rax
    let v62: i64;  // r13
    let v63: i64;  // rbp
    let v64: i256;  // ymm0
    let v65: i64;  // r15
    let v66: i64;  // r14
    let v67: i64;  // rdx
    let v68: i64;  // r15
    let v69: i64;  // rbp
    let v70: i64;  // r12
    let v71: i64;  // rbp
    let v72: i64;  // rsi
    let v73: i64;  // rdi
    let v75: i64;  // rax

    v45 = uu_nl::uu_app();
    v49 = v48;
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v45, v50, v48);
    v31 = 0x8000000000000000;
    if v32 != 0x8000000000000000 {
        v36 = v5;
        v52 = v2;
        vvar_79{reg 224} = ((vvar_268{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_267{reg 224}))
        v35 = v4;
        v34 = v52;
        v32 = v0;
        v45 = <uu_nl::Settings as core::default::Default>::default();
        uu_nl::helper::parse_options(&v28, &v45, &v32);
        v55 = v30;
        if !v30 {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v0, &v32, &g_45c1d4, 4);
            v11 = clap_builder::parser::error::MatchesError::unwrap(&g_45c1d4, 4, &v0);
            if v11 {
                v56 = v11;
                vvar_79{reg 224} = ((vvar_79{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_329{reg 224}))
                v43 = *((&v11 as &char + 48) as &i128);
                v42 = *((&v11 as &char + 32) as &i128);
                v41 = *((&v11 as &char + 16) as &i128);
                v39 = v56;
                v27 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39);
            } else {
                v57 = __rust_alloc(24, 8);
                v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1, 0);
                v60 = v2;
                *(v60 as &i8) = 45;
                *(v57 as &i64) = v1;
                *((v57 + 8) as &i64) = v60;
                *((v57 + 16) as &i64) = 1;
                v27 = alloc::slice::hack::into_vec(v57, 1);
            }
            v61 = *((&v27 as &char + 16) as &i64);
            if v61 {
                v62 = *((&v27 as &char + 8) as &i64);
                v38 = v61 * 24 + v62;
                v9 = *((&v45 as &char + 96) as &i64);
                v10 = 1;
                v63 = &v24;
                do {
                    v65 = *((v62 + 8) as &i64);
                    v66 = *((v62 + 16) as &i64);
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v65, v66, &g_45c658, 1) as i8 {
                        std::io::buffered::bufreader::BufReader<R>::with_capacity(v63, 0x2000, std::io::stdio::stdin());
                        v16 = struct8 {
                            field_0: v63
                        };
                        v26 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v16, v67);
                        v62 = v62;
                        if v26 != 9223372036854775809 {
                            v68 = *((&v45 as &char + 56) as &i64);
                            v69 = *((&v45 as &char + 64) as &i64);
                            v23 = *((&v45 as &char + 128) as &i8);
                            v22 = *((&v45 as &char + 96) as &i64);
                            v17 = *((&v45 as &char + 112) as &i64);
                            v19 = *((&v45 as &char + 120) as &i64);
                            v20 = v19 + 1;
                            v18 = *((&v45 as &char + 104) as &i64);
                            vvar_79{reg 224} = ((vvar_79{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-1024, size=16, endness=Iend_LE)))
                            *(&v37.field_0 as &struct24) = struct24 {
                                field_0: v53 as u128
                                field_16: *((&v26 as &char + 16) as &i64)
                            };
                            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v37);
                            if v6 != v31 {
                                v6 = v0;
                                goto *((4559584 + uu_nl::SectionDelimiter::parse(vvar_1144{stack -1256}, vvar_1145{stack -1248}, vvar_467{reg 136}, vvar_468{reg 56}) as i32 * 4) as &i32) + 4559584;
                            }
                            if v7 {
                                v59 = v2;
                                v51 = v1;
                                if v25 {
                                    v59 = v2;
                                    v51 = v1;
                                    goto LABEL_4e3fe3;
                                }
                            }
                        }
                    } else {
                        if std::path::Path::is_dir(v65, v66) as i8 {
                            v11 = uucore::util_name();
                            v12 = v67;
                            v24 = &v11;
                            v25 = <&T as core::fmt::Display>::fmt;
                            v0 = Arguments {
                                pieces: [&g_66ba98, ": "]
                                args: &[&Argument] {
                                    ptr: v63
                                    len: <UNKNOWN>
                                }
                                fmt: None
                            };
                            v3 = 1;
                            std::io::stdio::_eprint(&v0);
                            v11 = v65;
                            v12 = v66;
                            v24 = &v11;
                            v25 = <std::path::Display as core::fmt::Display>::fmt;
                            v0 = Arguments {
                                pieces: [&g_66baf8, ": Is a directory\n"]
                                args: &[&Argument] {
                                    ptr: v63
                                    len: <UNKNOWN>
                                }
                                fmt: None
                            };
                            v3 = 1;
                            std::io::stdio::_eprint(&v0);
                            uucore::mods::error::set_exit_code();
                            v1 = v1;
                            v2 = v2;
                            continue;
                        }
                        v0 = std::fs::File::open(v65, v66);
                        v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, v62);
                        v70 = v11;
                        if v70 {
                            v59 = v12;
                            goto LABEL_4e3fe3;
                        } else {
                            std::io::buffered::bufreader::BufReader<R>::with_capacity(v63, 0x2000, *((&v11 as &char + 8) as &i32));
                            v16 = struct8 {
                                field_0: v63
                            };
                            v26 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v16, v67);
                            if v26 != 9223372036854775809 {
                                v23 = *((&v45 as &char + 56) as &i64);
                                v71 = *((&v45 as &char + 64) as &i64);
                                v22 = *((&v45 as &char + 128) as &i8);
                                v21 = *((&v45 as &char + 96) as &i64);
                                v17 = *((&v45 as &char + 112) as &i64);
                                v19 = *((&v45 as &char + 120) as &i64);
                                v20 = v19 + 1;
                                v18 = *((&v45 as &char + 104) as &i64);
                                vvar_79{reg 224} = ((vvar_79{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-1024, size=16, endness=Iend_LE)))
                                *(&v37.field_0 as &struct24) = struct24 {
                                    field_0: v53 as u128
                                    field_16: *((&v26 as &char + 16) as &i64)
                                };
                                v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v37);
                                if v6 != v31 {
                                    v6 = v0;
                                    goto *((4559552 + uu_nl::SectionDelimiter::parse(vvar_1148{stack -1256}, vvar_1149{stack -1248}, (stack_base)[1080] as i64, vvar_527{reg 56}) as i32 * 4) as &i32) + 4559552;
                                }
                                if v7 {
                                    v2 = v2;
                                    v1 = v1;
LABEL_4e3fe3:
                                    goto LABEL_4e2fc1;
                                }
                            }
                        }
                    }
                    v63 = &v24;
                    v1 = v1;
                    v2 = v2;
                } while ((v2 = v2, v1 = v1, v62 += 24, v62 != v38));
            }
LABEL_4e3e27:
            uucore::mods::error::get_exit_code();
        } else {
            v0 = alloc::str::join_generic_copy(v29, v55, &g_459426, 1);
            v13 = v2;
            v11 = v0;
            v14 = &v11;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = Arguments {
                pieces: ["Invalid arguments supplied.\n"]
                args: &[&Argument] {
                    ptr: &v14
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v3 = 1;
            v24 = alloc::fmt::format::format_inner(&v0);
            v2 = *((&v24 as &char + 16) as &i64);
            v0 = v24;
            v3 = 1;
            v51 = __rust_alloc(32, 8);
            v58 = v0;
            *((v51 + 16) as &i64) = v2;
            *(v51 as &i128) = v58;
LABEL_4e2fc1:
            goto LABEL_4e2ff5;
        }
    } else {
        v51 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
        if !v51 {
            goto LABEL_4e3e27;
        }
LABEL_4e2ff5:
        v32 = v51;
        v33 = &g_66ba28;
        v0 = Argument {
            value: &v32
            formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
        };
        v45 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: [&v0]
            fmt: None
        };
        v44 = alloc::fmt::format::format_inner(&v45);
        v0 = v44;
        v72 = *((&v44 as &char + 16) as &i64);
        v2 = *((&v44 as &char + 16) as &i64);
        v73 = v1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((&v44 as &char + 16) as &i64), 1, 0) as i8 {
            v39 = uucore::util_name();
            v40 = v67;
            v11 = Argument {
                value: &v39
                formatter: <&T as core::fmt::Display>::fmt
            };
            v45 = Arguments {
                pieces: [&g_66ba98, ": "]
                args: [&v11]
                fmt: None
            };
            std::io::stdio::_eprint(&v45);
            v39 = Argument {
                value: &v0
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v45 = Arguments {
                pieces: [&g_66bab8, "\n"]
                args: [&v39]
                fmt: None
            };
            std::io::stdio::_eprint(&v45);
        }
        if *((v33 + 104) as &i64)() {
            v39 = uucore::execution_phrase();
            v40 = v67;
            v11 = &v39;
            v45 = Arguments {
                pieces: ["Try '", " --help' for more information.\n"]
                args: [&v11]
                fmt: None
            };
            v46 = &v11;
            std::io::stdio::_eprint(&v45);
        }
        *((v33 + 96) as &i64)();
        v75 = *(v33 as &i64);
        if v75 {
            v75();
        }
    }
    return;
}
