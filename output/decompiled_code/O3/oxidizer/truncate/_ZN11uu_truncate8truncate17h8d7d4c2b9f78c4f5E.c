fn uu_truncate::truncate() -> u32 {
    let v0: i64;  // [sp-0x170]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [bp-0x158], Other Possible Types: String
    let v4: i64;  // [sp-0x150]
    let v5: i64;  // [bp-0x148]
    let v6: i8;  // [bp-0x140]
    let v7: i256;  // [sp-0x130], Other Possible Types: String, Enum
    let v8: i64;  // [sp-0x128]
    let v9: i64;  // [sp-0x120]
    let v10: i8;  // [sp-0x118]
    let v11: i64;  // [sp-0x110]
    let v12: i192;  // [sp-0x108], Other Possible Types: String, Argument
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [bp-0xf0], Other Possible Types: Argument
    let v15: i64;  // [sp-0xe0], Other Possible Types: Arguments, Enum
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i64;  // [sp-0xc8]
    let v22: i64;  // [bp+0x100018]
    let v24: i64;  // [bp+0x100028]
    let v29: i64;  // rdx
    let v30: i64;  // r14
    let v31: i64;  // rcx
    let v32: i64;  // r15
    let v33: i64;  // rax
    let v34: i64;  // r13
    let v35: i128;  // xmm0
    let v36: i64;  // rbx
    let v37: i64;  // rbx
    let v38: i64;  // r9
    let v39: i64;  // r13
    let v40: i64;  // rbx
    let v41: i128;  // xmm0
    let v42: i64;  // r15
    let v43: i64;  // rax
    let v45: i64;  // rbp
    let v46: i64;  // rbp
    let v47: i8;  // dil
    let v48: i64;  // rax
    let v49: i64;  // r12
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rbx
    let v55: i64;  // rax
    let v56: i64;  // r9
    let v57: i128;  // xmm0
    let v58: i64;  // rax
    let v59: i64;  // r9
    let v60: i64;  // rax
    let v61: i64;  // r15
    let v62: i64;  // r12
    let v63: i64;  // rbx
    let v64: i64;  // rax
    let v65: i64;  // rax
    let v66: i128;  // xmm0

    v30 = *(v29 as &i64);
    v1 = *(v31 as &i64);
    if v30 == 0x8000000000000000 {
        if v1 == 0x8000000000000000 {
            core::panicking::panic(); /* do not return */
        }
        v11 = *((v31 + 8) as &i64);
        v7 = uu_truncate::parse_mode_and_size(*((v31 + 8) as &i64), *((v31 + 16) as &i64));
        if v7 != 3 {
            v35 = v7;
            v5 = *((&v7 as &char + 16) as &i128);
            v3 = v35;
            v14 = Argument {
                value: &v3
                formatter: <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt
            };
            v15 = Arguments {
                pieces: ["Invalid number: "]
                args: [&v14]
                fmt: None
            };
            v12 = alloc::fmt::format::format_inner(&v15);
            v42 = *((&v12 as &char + 16) as &i64);
            v43 = __rust_alloc(32, 8);
            *(v43 as &i64) = v12;
            *((v43 + 8) as &i64) = v13;
            *((v43 + 16) as &i64) = v42;
            *((v43 + 24) as &i32) = 1;
            if v4 {
                goto LABEL_4815e2;
            }
        }
        v33 = v8;
        v34 = v9;
        if !(v33 != 5) || !(v33 != 6) {
            if v34 {
                v0 = v33;
                goto LABEL_481420;
            } else {
                v52 = __rust_alloc(16, 1);
                *(v52 as &i128) = 148138287573254691529562304281658681700;
                v60 = __rust_alloc(32, 8);
                *(v60 as &i64) = 16;
                *((v60 + 8) as &i64) = v52;
                *((v60 + 16) as &i64) = 16;
                *((v60 + 24) as &i32) = 1;
            }
LABEL_4815e2:
        } else {
            v0 = v33;
            if !v34 {
                if !(v56 << 3) + (v56 << 3 << 1) {
                    goto LABEL_481841;
                }
                v61 = *((vvar_1057{reg 80} + 8) as &i64);
                v62 = *((vvar_1057{reg 80} + 16) as &i64);
                v15 = std::sys::pal::unix::fs::stat(v61, v62);
                if v15 == 2 {
                    goto LABEL_481805;
                } else if (*((&v15 as &char + 56) as &i32) & 0xf000) == 0x1000 {
LABEL_48184d:
                    v7 = 0;
                    v8 = v61;
                    v9 = v62;
                    v10 = 1;
                    v12 = Argument {
                        value: &v7
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v15 = Arguments {
                        pieces: ["cannot open ", " for writing: No such device or address"]
                        args: [&v12]
                        fmt: None
                    };
                    v3 = alloc::fmt::format::format_inner(&v15);
                    v6 = 1;
                    v65 = __rust_alloc(32, 8);
                    v66 = v3;
                    *((v65 + 16) as &i64) = v5;
                    *(v65 as &i128) = v66;
                } else {
LABEL_481805:
                    goto *((4296292 + (stack_base)[368] as i64 * 4) as &i32) + 4296292;
                }
            } else {
LABEL_481420:
                if v45 != (v59 + (v59 << 1) << 3) + v45 {
                    v61 = *((vvar_1057{reg 80} + 8) as &i64);
                    v62 = *((vvar_1057{reg 80} + 16) as &i64);
                    v15 = std::sys::pal::unix::fs::stat(v61, v62);
                    if v15 != 2 && (*((&v15 as &char + 56) as &i32) & 0xf000) == 0x1000 {
                        goto LABEL_48184d;
                    }
                    goto *((4296264 + (stack_base)[368] as i64 * 4) as &i32) + 4296264;
                }
LABEL_481841:
            }
        }
        if v1 {
LABEL_4819f2:
        }
    } else {
        v32 = *((v29 + 16) as &i64);
        v0 = *((v29 + 8) as &i64);
        if v1 != 0x8000000000000000 {
            v11 = *((v31 + 8) as &i64);
            v7 = uu_truncate::parse_mode_and_size(*((v31 + 8) as &i64), *((v31 + 16) as &i64));
            if v7 != 3 {
                v41 = v7;
                v5 = *((&v7 as &char + 16) as &i128);
                v3 = v41;
                v14 = &v3;
                v15 = Arguments {
                    pieces: ["Invalid number: "]
                    args: [&v14]
                    fmt: None
                };
                v17 = &v14;
                v12 = alloc::fmt::format::format_inner(&v15);
                v49 = *((&v12 as &char + 16) as &i64);
                v50 = __rust_alloc(32, 8);
                *(v50 as &i64) = v12;
                *((v50 + 8) as &i64) = v13;
                *((v50 + 16) as &i64) = v49;
                *((v50 + 24) as &i32) = 1;
                if v4 {
                    goto LABEL_4819b9;
                }
            }
            v40 = v8;
            if !v40 {
                v48 = __rust_alloc(55, 1);
                v54 = v48;
                *((v48 + 32) as &i128) = 136107993326709692650496122859777522281;
                *((v48 + 16) as &i128) = 153095788682256076015303257309155713312;
                *(v48 as &i128) = 161368339297535774731619911560691281785;
                *((v54 + 47) as &i64) = 2838784465926514022;
                v55 = __rust_alloc(32, 8);
                *(v55 as &i64) = 55;
                *((v55 + 8) as &i64) = v54;
                *((v55 + 16) as &i64) = 55;
                goto LABEL_4819b2;
            } else {
                v2 = v9;
                if !(v40 == 5) && !(v40 == 6) || !(!v2) {
                    v15 = std::sys::pal::unix::fs::stat(v0, v32);
                    if v15 != 2 {
                        goto *((4296240 + (vvar_314{reg 40} - 1) * 4) as &i32) + 4296240;
                    }
                    v63 = v16;
                    if std::io::error::Error::kind(v63) as i8 {
                        <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v63);
LABEL_4819c0:
                        if v30 {
                            goto LABEL_4819f2;
                        }
                    } else {
                        v3 = 0;
                        v4 = v0;
                        v5 = v32;
                        v6 = 1;
                        v12 = &v3;
                        v15 = Arguments {
                            pieces: ["cannot stat ", ": No such file or directory"]
                            args: [&v12]
                            fmt: None
                        };
                        v17 = &v12;
                        v7 = alloc::fmt::format::format_inner(&v15);
                        v64 = __rust_alloc(32, 8);
                        *(v64 as &i64) = v7;
                        *((v64 + 8) as &i64) = v8;
                        *((v64 + 16) as &i64) = v9;
                        *((v64 + 24) as &i32) = 1;
LABEL_4819b9:
                        goto LABEL_4819c0;
                    }
                } else {
                    v58 = __rust_alloc(16, 1);
                    *(v58 as &i128) = 148138287573254691529562304281658681700;
                    v55 = __rust_alloc(32, 8);
                    *(v55 as &i64) = 16;
                    *((v55 + 8) as &i64) = v58;
                    *((v55 + 16) as &i64) = 16;
LABEL_4819b2:
                    *((v55 + 24) as &i32) = 1;
                    goto LABEL_4819b9;
                }
            }
        } else {
            v15 = std::sys::pal::unix::fs::stat(v0, v32);
            if v15 != 2 {
                v37 = *((&v15 as &char + 80) as &i64);
                v39 = v38 * 24;
                do {
                    if !v39 {
                        if !v30 {
                            return;
                        }
                        goto LABEL_4816f3;
                    }
                } while ((v46 = v45 + 24, v39 -= 24, !uu_truncate::file_truncate(v24, v22, (v47 ^ 1) as u8 as u64, v37)));
LABEL_481309:
                if !v30 {
                    return;
                }
                goto LABEL_4816f3;
            } else {
                v36 = v16;
                if std::io::error::Error::kind(v36) as i8 {
                    v15 = 0;
                    v16 = 1;
                    v17 = 0;
                    v18 = v36;
                    v51 = __rust_alloc(32, 8);
                    v57 = v15;
                    *((v51 + 16) as &i64) = v17;
                    *(v51 as &i128) = v57;
                    goto LABEL_481309;
                } else {
                    v3 = 0;
                    v4 = v0;
                    v5 = v32;
                    v6 = 1;
                    v12 = Argument {
                        value: &v3
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v15 = Arguments {
                        pieces: ["cannot stat ", ": No such file or directory"]
                        args: [&v12]
                        fmt: None
                    };
                    v7 = alloc::fmt::format::format_inner(&v15);
                    v53 = __rust_alloc(32, 8);
                    *(v53 as &i64) = v7;
                    *((v53 + 8) as &i64) = v8;
                    *((v53 + 16) as &i64) = v9;
                    *((v53 + 24) as &i32) = 1;
                    if !v30 {
                        return;
                    }
                }
LABEL_4816f3:
                goto LABEL_4819f2;
            }
        }
    }
    return;
}
