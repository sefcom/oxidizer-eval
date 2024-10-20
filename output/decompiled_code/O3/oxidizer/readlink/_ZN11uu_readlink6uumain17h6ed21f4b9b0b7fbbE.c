fn uu_readlink::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x40d]
    let v1: i32;  // [sp-0x40c]
    let v2: i64;  // [bp-0x408], Other Possible Types: struct16
    let v3: i64;  // [sp-0x400]
    let v4: i8;  // [bp-0x3f8]
    let v5: i64;  // [sp-0x3f0], Other Possible Types: struct24
    let v6: i64;  // [sp-0x3e8]
    let v7: i64;  // [sp-0x3e0]
    let v8: i64;  // [sp-0x3d8]
    let v9: i128;  // [sp-0x3d0]
    let v10: i64;  // [sp-0x3c8]
    let v11: i64;  // [sp-0x3c0]
    let v12: i64;  // [sp-0x3b8]
    let v13: i32;  // [sp-0x3ac]
    let v14: i128;  // [sp-0x3a8], Other Possible Types: struct64, struct16
    let v15: i64;  // [sp-0x3a0]
    let v16: i64;  // [bp-0x398]
    let v17: i32;  // [sp-0x390]
    let v18: i8;  // [bp-0x388]
    let v19: i8;  // [bp-0x378]
    let v20: i128;  // [sp-0x360]
    let v21: i64;  // [sp-0x358]
    let v22: i128;  // [sp-0x350]
    let v23: i128;  // [sp-0x340]
    let v24: i64;  // [sp-0x330]
    let v25: i128;  // [sp-0x328], Other Possible Types: struct24
    let v26: i64;  // [sp-0x318]
    let v27: i192;  // [sp-0x310], Other Possible Types: String
    let v28: i128;  // [sp-0x2f8], Other Possible Types: Arguments, Enum, struct24, struct712
    let v29: i64;  // [sp-0x2f0]
    let v30: i64;  // [bp-0x2e8]
    let v31: i64;  // [bp-0x2e0]
    let v32: i128;  // [bp-0x2d8]
    let v33: i128;  // [bp-0x2c8]
    let v34: i8;  // [sp-0x2c0]
    let v36: i128;  // xmm0
    let v37: i64;  // r14
    let v39: i8;  // r15b
    let v40: i64;  // rax
    let v41: i8;  // bpl
    let v42: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i256;  // ymm0
    let v48: i256;  // ymm0
    let v49: i64;  // rcx
    let v50: i64;  // rax
    let v51: i64;  // r15
    let v52: i64;  // rdx
    let v53: i128;  // xmm0
    let v54: i64;  // r12
    let v55: i64;  // rcx
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i64;  // rdx
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i64;  // r15
    let v62: i128;  // xmm0
    let v63: i32;  // eax
    let v64: i64;  // rsi
    let v65: i64;  // rdi
    let v66: i64;  // r15
    let v67: i64;  // rax

    v28 = uu_readlink::uu_app();
    v14 = clap_builder::builder::command::Command::try_get_matches_from(&v28, a0, a1);
    if v20 == 0x8000000000000000 {
        v37 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        if !v37 {
            vvar_1319{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v63;
        }
        goto LABEL_43ccb4;
    }
    v24 = v19;
    v36 = v16;
    v23 = v18;
    v22 = v36;
    v20 = v14;
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_4113fc, 4) as i32;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411434, 6) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_41143a, 5);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_41143f, 7) as i8;
    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411446, 12);
    if v40 {
LABEL_43cab2:
        v1 = v40 | -0x100 | 2;
        v41 = 0;
    } else {
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411452, 21);
        if !(!v40) || !((v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411467, 20), !v40 as i8)) {
            goto LABEL_43cab2;
        }
        v41 = vvar_285{reg 56} | -0x100 | 1;
        v1 = 0;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411452, 21) as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411467, 20);
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, &g_41147b, 5);
    v14 = clap_builder::parser::error::MatchesError::unwrap(&g_41147b, 5, &v28);
    if !v14 || (v42 = v14, v33 = *((&v14 as &char + 48) as &i128), v32 = *((&v14 as &char + 32) as &i128), v30 = *((&v14 as &char + 16) as &i128), v28 = v42, v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v28), v45 = *((&v5 as &char + 8) as &i128), v2 = v45, v8 == 0x8000000000000000) {
        v8 = 0;
        v9 = 8;
        v10 = 0;
        goto LABEL_43cbd1;
    }
    v46 = v2;
    vvar_120{reg 224} = ((((((((vvar_324{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_323{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_437{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_452{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_458{reg 224}))
    v9 = v46;
    v8 = v5;
    v49 = v10;
    if !v49 {
LABEL_43cbd1:
        v28 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(15, 0);
        v50 = v30;
        *((v50 + 7) as &i64) = 7236828795186999072;
        *(v50 as &i64) = 2334956331002456429;
        v31 = 1;
        v28 = v29;
        v29 = v50;
        v30 = 15;
        v37 = __rust_alloc(32, 8);
        v53 = v28;
        *((v37 + 16) as &i128) = v30;
        *(v37 as &i128) = v53;
        v54 = &g_4e4510;
        goto LABEL_43cc8a;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, &g_411378, 10) as i32 {
        v51 = v9;
        v55 = v51 + v49 * 24;
        v11 = v51 + v49 * 24;
        if !(!v41) {
            goto LABEL_43d180;
        }
LABEL_43cf7f:
        v13 = 1;
        v1 = 11;
    } else {
        v51 = v9;
        v11 = v51 + v49 * 24;
        if !v41 {
            goto LABEL_43cf7f;
        }
LABEL_43d180:
        do {
            v58 = *((v51 + 16) as &i64);
            v28 = std::sys::os_str::bytes::Slice::to_owned(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
            v59 = v28;
            *(&v25.field_0 as &struct24) = struct24 {
                field_0: v59
                field_16: v30
            };
            v2 = std::fs::read_link(&v25);
            if v2 == 0x8000000000000000 {
                goto LABEL_43d29e;
            }
            v60 = v2;
            vvar_120{reg 224} = ((((vvar_189{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_645{reg 224}))
            v28 = v60;
            v30 = v4;
            v37 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v29, v4, 11));
            if !(!v37) {
                goto LABEL_43d3aa;
            }
        } while ((v51 += 24, v51 != v11));
        goto LABEL_43d261;
    }
    loop {
        v28 = std::sys::os_str::bytes::Slice::to_owned(*((v51 + 8) as &i64), *((v51 + 16) as &i64));
        v56 = v28;
        v25 = v56;
        v26 = v30;
        uucore::features::fs::canonicalize();
        if v2 == 0x8000000000000000 {
LABEL_43d29e:
            if !v0 {
                v37 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            } else {
                v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v3, v61);
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v33 = 32;
                v34 = 3;
                v28 = 0;
                v30 = 0;
                v32 = &v5;
                if <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt(&v12, &v28) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v16 = v7;
                v14 = v5;
                v17 = 1;
                v37 = __rust_alloc(32, 8);
                v62 = v14;
                *((v37 + 16) as &i128) = *((&v14 as &char + 16) as &i128);
                *(v37 as &i128) = v62;
                v54 = &g_4e45c8;
                goto LABEL_43d3e2;
            }
            goto LABEL_43d3e2;
        }
        v57 = v2;
        vvar_120{reg 224} = ((((vvar_178{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_587{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_599{reg 224}))
        v28 = v57;
        v30 = v4;
        v37 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v29, v4, v1));
        if v37 {
LABEL_43d3aa:
LABEL_43d3e2:
LABEL_43cc8a:
            if v37 {
LABEL_43ccb4:
                v2 = v37;
                v3 = v54;
                v14 = &v2;
                v15 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v28 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: &[&Argument] {
                        ptr: &v14
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v31 = 1;
                v27 = alloc::fmt::format::format_inner(&v28);
                v14 = v27;
                v64 = *((&v27 as &char + 16) as &i64);
                v16 = *((&v27 as &char + 16) as &i64);
                v65 = v15;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, *((&v27 as &char + 16) as &i64), 1, 0) as i8 {
                    v20 = uucore::util_name();
                    v21 = v52;
                    v5 = &v20;
                    v6 = <&T as core::fmt::Display>::fmt;
                    v28 = Arguments {
                        pieces: [&g_4e4490, ": "]
                        args: &[&Argument] {
                            ptr: &v5
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v31 = 1;
                    std::io::stdio::_eprint(&v28);
                    v20 = &v14;
                    v21 = <alloc::string::String as core::fmt::Display>::fmt;
                    v28 = Arguments {
                        pieces: [&g_4e44b0, "\n"]
                        args: &[&Argument] {
                            ptr: &v20
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v31 = 1;
                    std::io::stdio::_eprint(&v28);
                }
                if *((v3 + 104) as &i64)() {
                    v20 = uucore::execution_phrase();
                    v21 = v52;
                    v5 = &v20;
                    v6 = <&T as core::fmt::Display>::fmt;
                    v28 = Arguments {
                        pieces: ["Try '", " --help' for more information.\n"]
                        args: &[&Argument] {
                            ptr: &v5
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v30 = &v5;
                    v31 = 1;
                    std::io::stdio::_eprint(&v28);
                }
                v63 = *((v3 + 96) as &i64)();
                v66 = v3;
                if *(v66 as &i64) {
                    v67();
                }
                if *((v66 + 8) as &i64) {
                    return v63;
                }
                return v63;
            }
            goto LABEL_43d261;
        } else {
            v51 += 24;
            if v51 == v11 {
LABEL_43d261:
                v63 = uucore::mods::error::get_exit_code() as i32;
                return v63;
            }
        }
    }
}
