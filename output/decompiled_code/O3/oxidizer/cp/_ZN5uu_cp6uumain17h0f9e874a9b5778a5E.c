fn uu_cp::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [bp-0x4d8]
    let v1: i64;  // [sp-0x4d0]
    let v2: i128;  // [bp-0x4c8]
    let v3: i64;  // [sp-0x4c0]
    let v4: i64;  // [bp-0x4b8]
    let v5: i128;  // [sp-0x4a8]
    let v6: i8;  // [bp-0x498]
    let v7: i8;  // [bp-0x488]
    let v8: i8;  // [bp-0x478]
    let v9: Arguments;  // [sp-0x468], Other Possible Types: struct24, Enum
    let v10: i128;  // [sp-0x438]
    let v11: i64;  // [sp-0x428]
    let v12: i128;  // [sp-0x418]
    let v13: i64;  // [sp-0x408]
    let v14: i64;  // [sp-0x3f8], Other Possible Types: struct24
    let v15: i128;  // [bp-0x3f0]
    let v16: i128;  // [sp-0x3e0]
    let v17: i128;  // [sp-0x3d0]
    let v18: i128;  // [sp-0x3c0]
    let v19: i64;  // [sp-0x3b0]
    let v20: i64;  // [bp-0x3a8]
    let v21: i64;  // [sp-0x3a0]
    let v22: i128;  // [sp-0x398]
    let v23: i128;  // [sp-0x388]
    let v24: i64;  // [sp-0x378]
    let v25: Argument;  // [sp-0x370], Other Possible Types: i64
    let v26: i64;  // [sp-0x368]
    let v27: i64;  // [sp-0x360], Other Possible Types: struct16
    let v28: i64;  // [sp-0x358]
    let v29: i8;  // [bp-0x350]
    let v30: i8;  // [bp-0x340]
    let v31: i8;  // [bp-0x330]
    let v32: Argument;  // [bp-0x328]
    let v33: i5696;  // [sp-0x318], Other Possible Types: Arguments, Enum, struct712, struct24, struct40
    let v34: i64;  // [sp-0x310]
    let v35: i64;  // [bp-0x308]
    let v36: i64;  // [bp-0x300]
    let v37: i128;  // [bp-0x2f8]
    let v38: i128;  // [bp-0x2f0]
    let v39: i128;  // [bp-0x2e8]
    let v40: i64;  // [sp-0x2e0]
    let v41: i128;  // [sp-0x2d8]
    let v42: i128;  // [sp-0x2c8]
    let v43: i128;  // [sp-0x2b8]
    let v44: i192;  // [sp-0x48], Other Possible Types: String
    let v47: i32;  // eax
    let v48: i64;  // rsi
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i64;  // r8
    let v52: i64;  // r9
    let v53: i64;  // rax
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2
    let v57: i64;  // rax
    let v58: i64;  // rcx
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i64;  // r12
    let v65: i64;  // rax
    let v66: i128;  // xmm0
    let v67: i128;  // xmm1
    let v68: i128;  // xmm2
    let v69: i64;  // rax
    let v70: i128;  // xmm0
    let v74: i64;  // rcx
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v78: i128;  // xmm1
    let v79: i128;  // xmm2
    let v80: i128;  // xmm0
    let v81: i128;  // xmm1
    let v82: i128;  // xmm2
    let v83: i64;  // rdx
    let v84: i64;  // rsi
    let v85: i64;  // rdi
    let v86: i32;  // eax
    let v87: i64;  // rax

    v33 = uu_cp::uu_app();
    v27 = clap_builder::builder::command::Command::try_get_matches_from(&v33, a0, a1);
    if v27 != 0x8000000000000000 {
        v24 = v31;
        v23 = v30;
        v22 = v29;
        v20 = v27;
        v33 = uu_cp::Options::from_matches(&v20);
        v0 = *((&v33 as &char + 8) as &i128);
        v2 = *((&v33 as &char + 24) as &i128);
        v4 = *((&v33 as &char + 40) as &i128);
        v5 = *((&v33 as &char + 56) as &i128);
        if v14 == 0x8000000000000000 {
            v54 = v0;
            v55 = v2;
            v56 = v4;
            v39 = v5;
            v37 = v56;
            v35 = v55;
            v33 = v54;
            v57 = __rust_alloc(64, 8);
            v61 = v33;
            v62 = v35;
            v63 = v37;
            *((v57 + 48) as &i128) = v39;
            *((v57 + 32) as &i128) = v63;
            *((v57 + 16) as &i128) = v62;
            *(v57 as &i128) = v61;
            v64 = &g_551be0;
LABEL_45801c:
            goto LABEL_458029;
        }
        v58 = *((&v33 as &char + 72) as &i64);
        v59 = v2;
        v60 = v4;
        v18 = v5;
        v15 = v0;
        v16 = v59;
        v17 = v60;
        v14 = v33;
        v19 = v58;
        if *((&v18 as &char + 4) as &i8) == 2 && (v19 & 0xff00000000) {
            v33 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(56, 0);
            v65 = v35;
            *((v65 + 32) as &i128) = 134420643835495412570437396337004716146;
            *((v65 + 16) as &i128) = 134762869170424392496790009804221210912;
            *(v65 as &i128) = 149483212351913566260595494771370520687;
            *((v65 + 48) as &i64) = 7311146989694772088;
            v36 = 1;
            v33 = v34;
            v34 = v65;
            v35 = 56;
            v57 = __rust_alloc(32, 8);
            v70 = v33;
            *((v57 + 16) as &i128) = *((&v33 as &char + 16) as &i128);
            *(v57 as &i128) = v70;
            v64 = &g_551c88;
        } else {
            v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v20, &g_419150, 5);
            clap_builder::parser::error::MatchesError::unwrap(&g_419150, 5, &v33);
            if !v0 {
                v69 = 0x8000000000000000;
            } else {
                v43 = v8;
                v42 = v7;
                v41 = v6;
                v66 = v0;
                v67 = v2;
                v68 = v4;
                v39 = v5;
                v37 = v68;
                v35 = v67;
                v33 = v66;
                v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v33);
            }
            *(&v9 as &Enum) = Enum {
                field_0: v71
                field_8: v72
                field_16: v73
            };
            v33 = uu_cp::parse_path_args(&v9, &v14);
            v0 = *((&v33 as &char + 8) as &i128);
            v2 = *((&v33 as &char + 24) as &i128);
            v4 = *((&v33 as &char + 40) as &i128);
            if v33 != 13 {
                v74 = v40;
                v75 = v0;
                v76 = v2;
                v38 = v4;
                v36 = v76;
                v34 = v75;
                v33 = v33;
                v40 = v40;
                v57 = __rust_alloc(64, 8);
                v80 = v33;
                v81 = *((&v34 as &char + 8) as &i128);
                v82 = *((&v36 as &char + 8) as &i128);
                *((v57 + 48) as &i128) = *((&v38 as &char + 8) as &i128);
                *((v57 + 32) as &i128) = v82;
                *((v57 + 16) as &i128) = v81;
                *(v57 as &i128) = v80;
                v64 = &g_551be0;
            } else {
                v11 = v2;
                v10 = v0;
                v13 = *((&v4 as &char + 8) as &i64);
                v12 = *((&v2 as &char + 8) as &i128);
                uu_cp::copy(*((&v10 as &char + 8) as &i64), v2, *((&v12 as &char + 8) as &i64), *((&v4 as &char + 8) as &i64), &v14);
                if v0 != 13 {
                    v78 = v2;
                    v79 = v4;
                    v33 = v0;
                    v39 = v5;
                    v37 = v79;
                    v35 = v78;
                    if v33 != 5 {
                        v25 = uucore::util_name();
                        v26 = v83;
                        v32 = Argument {
                            value: &v25
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v9 = Arguments {
                            pieces: [&g_551aa0, ": "]
                            args: [&v32]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v9);
                        v25 = Argument {
                            value: &v33
                            formatter: <uu_cp::Error as core::fmt::Display>::fmt
                        };
                        v9 = Arguments {
                            pieces: [&g_551ac0, "\n"]
                            args: [&v25]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v9);
                    }
                    uucore::mods::error::set_exit_code();
                }
                goto LABEL_457f68;
            }
        }
        goto LABEL_45801c;
    } else {
        v33 = uu_cp::uu_app();
        switch (v47) {
        case 12:
            v53 = clap_builder::builder::command::Command::print_help(&v33, v48, v49, v50, v51, v52);
            if !v53 {
                break;
            }
            v57 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
            if v57 {
LABEL_458029:
                v27 = v57;
                v28 = v64;
                v1 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v33 = Arguments {
                    pieces: [&g_418dc0]
                    args: &[&Argument] {
                        ptr: &v0
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v36 = 1;
                v44 = alloc::fmt::format::format_inner(&v33);
                v0 = v44;
                v84 = *((&v44 as &char + 16) as &i64);
                v85 = v1;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((&v44 as &char + 16) as &i64), 1, 0) as i8 {
                    v14 = uucore::util_name();
                    v15 = v49;
                    v20 = &v14;
                    v21 = <&T as core::fmt::Display>::fmt;
                    v33 = Arguments {
                        pieces: [&g_551aa0, ": "]
                        args: &[&Argument] {
                            ptr: &v20
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v36 = 1;
                    std::io::stdio::_eprint(&v33);
                    v14 = &v0;
                    v15 = <alloc::string::String as core::fmt::Display>::fmt;
                    v33 = Arguments {
                        pieces: [&g_551ac0, "\n"]
                        args: &[&Argument] {
                            ptr: &v14
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v36 = 1;
                    std::io::stdio::_eprint(&v33);
                }
                if *((v28 + 104) as &i64)() {
                    v14 = uucore::execution_phrase();
                    v15 = v49;
                    v20 = &v14;
                    v21 = <&T as core::fmt::Display>::fmt;
                    v33 = Arguments {
                        pieces: ["Try '", " --help' for more information.\n"]
                        args: &[&Argument] {
                            ptr: &v20
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v35 = &v20;
                    v36 = 1;
                    std::io::stdio::_eprint(&v33);
                }
                v86 = *((v28 + 96) as &i64)();
                if !*(v28 as &i64) {
                    return v86;
                }
                v87();
            }
        case 14:
            v14 = clap_builder::builder::command::Command::render_version(&v33);
            v20 = &v14;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v4 = 0;
            v3 = 1;
            std::io::stdio::_print(&v0);
            uucore::mods::error::get_exit_code();
            return v86;
        default:
            v57 = __rust_alloc(16, 8);
            *(v57 as &i64) = v28;
            *((v57 + 8) as &i32) = 1;
            v64 = &g_551b38;
            goto LABEL_458029;
        }
LABEL_457f68:
        v86 = uucore::mods::error::get_exit_code() as i32;
        return v86;
    }
}
