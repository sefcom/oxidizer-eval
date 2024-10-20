fn uu_head::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x4d8], Other Possible Types: Enum, struct24, Arguments, Argument
    let v1: i64;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: i64;  // [bp-0x4c0]
    let v4: i64;  // [bp-0x4b8]
    let v5: i128;  // [sp-0x4b0]
    let v6: i128;  // [sp-0x4a0]
    let v7: i128;  // [sp-0x490]
    let v8: i192;  // [bp-0x478]
    let v9: i64;  // [sp-0x468]
    let v10: i64;  // [sp-0x460], Other Possible Types: struct24, Enum
    let v11: i64;  // [sp-0x458]
    let v12: i128;  // [bp-0x448]
    let v13: i64;  // [bp-0x438]
    let v14: i64;  // [sp-0x430]
    let v15: i64;  // [bp-0x428]
    let v16: i8;  // [sp-0x420]
    let v17: i192;  // [sp-0x410], Other Possible Types: Enum
    let v18: Enum;  // [bp-0x3f8]
    let v19: i128;  // [bp-0x3e8]
    let v20: i64;  // [sp-0x3d8]
    let v21: i64;  // [sp-0x3c8]
    let v22: i64;  // [sp-0x3c0]
    let v23: i128;  // [sp-0x3b8], Other Possible Types: Argument, struct16
    let v24: i64;  // [sp-0x3b0]
    let v25: i64;  // [sp-0x3a8]
    let v26: i32;  // [sp-0x3a0]
    let v27: i64;  // [sp-0x378], Other Possible Types: Argument
    let v28: i64;  // [sp-0x370]
    let v29: i192;  // [sp-0x340], Other Possible Types: String
    let v30: i192;  // [sp-0x328], Other Possible Types: String
    let v31: String;  // [sp-0x310], Other Possible Types: i192
    let v32: Arguments;  // [sp-0x2f8], Other Possible Types: i5696, struct712, Enum
    let v33: i64;  // [sp-0x2e8]
    let v34: i64;  // [sp-0x2e0]
    let v36: i64;  // rax
    let v37: i64;  // r15
    let v38: i64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i64;  // rax
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i64;  // r15
    let v49: i64;  // rcx
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm0
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2
    let v55: i64;  // rbx
    let v56: i8;  // bpl
    let v58: i64;  // rcx
    let v59: i64;  // r15
    let v60: i64;  // rdx
    let v61: i64;  // rax
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm0
    let v65: i32;  // eax
    let v66: i64;  // rsi
    let v67: i64;  // rdi
    let v68: i64;  // r15
    let v69: i64;  // rax

    v32 = uu_head::uu_app();
    *(&v18.field_8 as &Enum) = Enum {
        field_0: a0
        field_8: a1
    };
    v0 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v0 == 0x8000000000000000 {
        core::option::unwrap_failed(); /* do not return */
    }
    v8 = v0;
    v17 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v17 == 0x8000000000000000 {
        v36 = __rust_alloc(24, 8);
        *((v36 + 16) as &i64) = v9;
        *(v36 as &i128) = v8;
        v10 = alloc::slice::hack::into_vec(v36, 1);
        v0 = v11;
        v2 = v10;
        v1 = v0;
        v3 = v0 + *((&v10 as &char + 16) as &i64) * 24;
        v39 = __rust_alloc(32, 8);
        v43 = v0;
        *((v39 + 16) as &i64) = v2;
        *(v39 as &i128) = v43;
        v48 = &g_4ed500;
        goto LABEL_43d0d9;
    }
    v19 = v17;
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v19 as &char + 8) as &i64), *((&v17 as &char + 16) as &i64));
    if v0 {
        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(21, 0);
        v40 = v2;
        *(v40 as &i128) = 132166775331850393689390242466074222946;
        *((v40 + 13) as &i64) = 7453010313431182949;
        v3 = 1;
        v0 = v1;
        v1 = v40;
        v2 = 21;
        v41 = __rust_alloc(32, 8);
        v46 = v0;
        v47 = v2;
        goto LABEL_43ce3a;
    }
    v37 = v1;
    v38 = v2;
    v10 = uu_head::parse::parse_obsolete(v37, v38);
    if !v10 {
        v42 = __rust_alloc(48, 8);
        *((v42 + 16) as &i64) = v9;
        *(v42 as &i128) = v8;
        *((v42 + 24) as &i128) = v19;
        *((v42 + 40) as &i64) = v20;
        v0 = alloc::slice::hack::into_vec(v42, 2);
        v0 = v1;
        v1 = v0;
        v2 = v0;
        v3 = v0 + (v2 + v2 * 2) * 8;
        v4 = *(&v18.field_8 as &i128);
        v39 = __rust_alloc(48, 8);
        v50 = v0;
        v51 = v2;
        *((v39 + 32) as &i128) = v4;
        *((v39 + 16) as &i128) = v51;
        *(v39 as &i128) = v50;
        v48 = &g_4ed3b8;
        goto LABEL_43d0d9;
    } else {
        if !v11 {
            if !*((&v10 as &char + 16) as &i8) {
                v13 = 0;
                v14 = v37;
                v15 = v38;
                v16 = 1;
                v21 = &v13;
                v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = Arguments {
                    pieces: ["bad argument format: "]
                    args: &[&Argument] {
                        ptr: &v21
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v3 = 1;
                v30 = alloc::fmt::format::format_inner(&v0);
                v3 = 1;
                v0 = v30;
                v2 = *((&v30 as &char + 16) as &i64);
                v41 = __rust_alloc(32, 8);
            } else {
                v13 = 0;
                v14 = v37;
                v15 = v38;
                v16 = 1;
                v21 = &v13;
                v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = Arguments {
                    pieces: ["invalid argument: ", " Value too large for defined datatype"]
                    args: &[&Argument] {
                        ptr: &v21
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v2 = &v21;
                v3 = 1;
                v31 = alloc::fmt::format::format_inner(&v0);
                v3 = 1;
                v0 = v31;
                v2 = *((&v31 as &char + 16) as &i64);
                v41 = __rust_alloc(32, 8);
            }
LABEL_43ce3a:
            *((v39 + 16) as &i128) = v47;
            *(v39 as &i128) = v46;
            v56 = vvar_134{reg 56} | -0x100 | 1;
            v55 = 1;
            v48 = &g_4ed470;
            goto LABEL_43ce52;
        }
        v44 = *((&v10 as &char + 8) as &i128);
        v15 = v12;
        v13 = v44;
        v45 = __rust_alloc(24, 8);
        *((v45 + 16) as &i64) = v9;
        *(v45 as &i128) = v8;
        v0 = alloc::slice::hack::into_vec(v45, 1);
        v49 = v1;
        v5 = v13;
        v6 = v15;
        v0 = 1;
        v1 = v49;
        v2 = v49;
        v3 = v0;
        v4 = v49 + (v2 + v2 * 2) * 8;
        v7 = *(&v18.field_8 as &i128);
        v39 = __rust_alloc(88, 8);
        *((v39 + 80) as &i64) = *((&v7 as &char + 8) as &i64);
        *((v39 + 64) as &i128) = *((&v6 as &char + 8) as &i128);
        v52 = v0;
        v53 = v2;
        v54 = v4;
        *((v39 + 48) as &i128) = *((&v5 as &char + 8) as &i128);
        *((v39 + 32) as &i128) = v54;
        *((v39 + 16) as &i128) = v53;
        *(v39 as &i128) = v52;
        v48 = &g_4ed3f0;
        v55 = 0;
        v56 = 0;
LABEL_43ce52:
        if !v55 {
LABEL_43d0d9:
            v58 = v48;
            v23 = clap_builder::builder::command::Command::try_get_matches_from(&v32, v39, v48);
            if v27 == 0x8000000000000000 {
                v39 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
                if !(!v39) {
                    goto LABEL_43d20c;
                }
            } else {
                v27 = v23;
                v32 = uu_head::HeadOptions::get_from(&v27);
                if v32 != 4 {
                    v62 = v32;
                    v63 = *((&v32 as &char + 16) as &i128);
                    v4 = *((&v32 as &char + 32) as &i128);
                    v2 = v63;
                    v0 = v62;
                    v39 = uu_head::uu_head() as i64;
                    v59 = v60;
                    if !(!v39) {
                        goto LABEL_43d20c;
                    }
                } else {
                    v25 = v34;
                    v23 = *((&v32 as &char + 8) as &i128);
                    v26 = 1;
                    v61 = __rust_alloc(32, 8);
                    v39 = v61;
                    v64 = v23;
                    *((v61 + 16) as &i128) = (&v23)[1];
                    *(v61 as &i128) = v64;
                    v59 = &g_4ed470;
                    if v39 {
LABEL_43d20c:
                        v10 = v39;
                        v11 = v59;
                        v0 = Argument {
                            value: &v10
                            formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
                        };
                        v32 = Arguments {
                            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                            args: [&v0]
                            fmt: None
                        };
                        v29 = alloc::fmt::format::format_inner(&v32);
                        v0 = v29;
                        v66 = *((&v29 as &char + 16) as &i64);
                        v2 = *((&v29 as &char + 16) as &i64);
                        v67 = v1;
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((&v29 as &char + 16) as &i64), 1, 0) as i8 {
                            v23 = uucore::util_name();
                            v24 = v60;
                            v27 = Argument {
                                value: &v23
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v32 = Arguments {
                                pieces: [&g_4ed538, ": "]
                                args: [&v27]
                                fmt: None
                            };
                            std::io::stdio::_eprint(&v32);
                            v23 = Argument {
                                value: &v0
                                formatter: <alloc::string::String as core::fmt::Display>::fmt
                            };
                            v32 = Arguments {
                                pieces: [&g_4ed558, "\n"]
                                args: [&v23]
                                fmt: None
                            };
                            std::io::stdio::_eprint(&v32);
                        }
                        if *((v11 + 104) as &i64)() {
                            v23 = uucore::execution_phrase();
                            v24 = v60;
                            v27 = &v23;
                            v32 = Arguments {
                                pieces: ["Try '", " --help' for more information.\n"]
                                args: [&v27]
                                fmt: None
                            };
                            v33 = &v27;
                            std::io::stdio::_eprint(&v32);
                        }
                        v65 = *((v11 + 96) as &i64)();
                        v68 = v11;
                        if *(v68 as &i64) {
                            v69();
                        }
                        if *((v68 + 8) as &i64) {
                            return v65;
                        }
                        return v65;
                    }
                }
            }
        } else if !(!v39) {
            goto LABEL_43d20c;
        }
        v65 = uucore::mods::error::get_exit_code() as i32;
        return v65;
    }
}
