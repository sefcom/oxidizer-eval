fn uu_mkdir::get_mode(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x140]
    let v1: i64;  // [sp-0x138]
    let v2: i32;  // [sp-0x124]
    let v3: i32;  // [sp-0x120]
    let v4: i32;  // [sp-0x11c]
    let v5: i64;  // [sp-0x118], Other Possible Types: Enum, Arguments, struct40
    let v6: i64;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf8]
    let v10: i64;  // [sp-0xe8]
    let v11: i64;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd8]
    let v13: i8;  // [bp-0xd0]
    let v14: i64;  // [sp-0xc8]
    let v15: i8;  // [bp-0xc0]
    let v16: i8;  // [bp-0xb0]
    let v17: i64;  // [sp-0xa8]
    let v18: i64;  // [sp-0xa0]
    let v19: Argument;  // [bp-0x98], Other Possible Types: i128
    let v20: i128;  // [sp-0x88]
    let v21: i64;  // [sp-0x78]
    let v22: String;  // [sp-0x68], Other Possible Types: i192
    let v23: i64;  // [sp-0x50]
    let v24: i64;  // [sp-0x48]
    let v25: i64;  // [sp-0x40]
    let v26: i64;  // [sp-0x38]
    let v28: i64;  // r15
    let v29: i64;  // rax
    let v30: i64;  // r9
    let v31: i64;  // r12
    let v32: i32;  // ebx
    let v33: i64;  // rbp
    let v34: i64;  // r14
    let v35: i64;  // r9
    let v37: i64;  // r9
    let v38: i64;  // r13
    let v39: i64;  // rdx
    let v40: i32;  // ecx
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v44: i64;  // rcx
    let v45: i64;  // r9
    let v47: i64;  // rcx
    let v49: i64;  // r13
    let v50: i64;  // rcx
    let v52: i64;  // r13
    let v53: i64;  // rcx
    let v54: i64;  // rdx
    let v55: i64;  // rcx
    let v56: i32;  // esi
    let v57: i64;  // r8
    let v58: i32;  // edi
    let v59: i64;  // rax
    let v60: i64;  // r12
    let v62: i64;  // rbp
    let v63: i64;  // r12
    let v66: i64;  // rax
    let v67: i64;  // rdx

    v2 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v13, a1, &g_410678, 4);
    v17 = &g_410678;
    v18 = 4;
    if v13 != 2 {
        v21 = v16;
        v20 = v15;
        v19 = v13;
        v23 = &v17;
        v24 = <&T as core::fmt::Display>::fmt;
        v25 = &v19;
        v26 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v5 = "Mismatch between definition and access of `";
        v6 = 2;
        v9 = 0;
        v7 = &v23;
        v8 = 2;
        v5 = core::panicking::panic_fmt();
    }
    v28 = 0x8000000000000000;
    v29 = v14;
    if !v29 {
        5242912();
        v32 = ~(5242912()) & 511;
    } else {
        v30 = *((v29 + 8) as &i64);
        v31 = *((v29 + 16) as &i64);
        v32 = 511;
        v33 = 0;
        v34 = 0;
        v1 = v30;
        v12 = v31;
        loop {
            v37 = v35;
            v33 = v33;
            v0 = v0;
            if v31 < v34 {
                v40 = 0;
                v0 = v33;
                goto LABEL_481217;
            }
            v39 = v31 - v34;
            if v39 <= 15 {
                if v31 == v34 {
                    goto LABEL_4811be;
                }
                v43 = 0;
                while (*((v37 + v34 + v43) as &i8) != 44) {
                    v43 += 1;
                    if v39 == v43 {
                        goto LABEL_4811be;
                    }
                }
            } else {
                v42 = core::slice::memchr::memchr_aligned(44, v37 + v34);
                if v42 != 1 {
                    v40 = v47 | -0x100 | 1;
                    v37 = v1;
                    v0 = v0;
                    if !v42 {
LABEL_4811be:
                        v40 = 0;
                        v0 = v33;
LABEL_481217:
                    }
                } else {
                    v45 = v1;
                    v37 = v45;
                    v50 = v44;
                    v38 = v50 + v34;
                    v34 = v34 + v50 + 1;
                    if !(v38 < v31) || !(*((v37 + v38) as &i8) == 44) {
                        continue;
                    }
                    v40 = v50 | -0x100 | 1;
                    v0 = v34;
                }
                v52 = v49;
                v33 = v0;
                v4 = v40;
                v38 = v52 - v33;
                v13 = v33 + v37;
                v14 = v38;
                v13 = v13;
                loop {
                    v53 = v13;
                    if v53 == v37 + v52 {
                        break;
                    }
                    v54 = *(v53 as &i8);
                    if v54 >= 0 {
                        v55 = v53 + 1;
                        goto LABEL_481243;
                    }
                    v56 = v54 & 31;
                    v57 = *((v53 + 1) as &i8) & 63;
                    if (v54 & 255) <= 223 {
                        v55 = v53 + 2;
                        v54 = v56 * 64 | v57;
                        goto LABEL_481243;
                    }
                    v58 = *((v53 + 2) as &i8) & 63 | v57 * 64;
                    if (v54 & 255) >= 240 {
                        v54 = *((v53 + 3) as &i8) & 63 | v58 * 64 | (v56 & 7) * 0x40000;
                        if v54 != 0x110000 {
                            v55 = v53 + 4;
                            goto LABEL_481243;
                        }
                    }
                    v55 = v53 + 3;
                    v54 = v58 | v56 * 0x1000;
LABEL_481243:
                    if v54 - 58 >= -10 {
                        v5 = uucore::features::mode::parse_numeric(v32, v37, v31, 1);
                        v59 = v5;
                        v32 = *((&v5 as &char + 8) as &i32);
                        if v59 != v28 {
                            v67 = a0;
                            *((v67 + 20) as &i32) = *((&v5 as &char + 20) as &i32);
                            *((v67 + 12) as &i64) = *((&v5 as &char + 12) as &i64);
                            *(v67 as &i64) = v59;
                            *((v67 + 8) as &i32) = v32;
                            return v67;
                        }
                        goto LABEL_48117b;
                    }
                }
                v3 = v32;
                if vvar_626 {
                    v19 = Argument {
                        value: &v13
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v5 = Arguments {
                        pieces: ["-"]
                        args: [&v19]
                        fmt: None
                    };
                    v22 = alloc::fmt::format::format_inner(&v5);
                    v38 = v22;
                    v11 = *((&v22 as &char + 16) as &i64);
                    v5 = v5;
                } else {
                    if !v38 {
                        v63 = 1;
                    } else {
                        v63 = __rust_alloc(v38, 1);
                        if !v63 {
                            v10 = v38;
                        }
                    }
                    memcpy(v10, v13, v38);
                    v10 = v63;
                    v11 = v38;
                    v5 = v5;
                    v62 = v10;
                }
                v5 = v5;
                5242912();
                uucore::features::mode::parse_symbolic(&v5, v3, v62, v11, 5242912(), 1);
                v66 = v5;
                v32 = v5.pieces.len;
                v28 = 0x8000000000000000;
                if v66 == 0x8000000000000000 {
                    v60 = v12;
                    if v38 {
                        v12 = v12;
                    }
                } else {
                    v67 = a0;
                    *((v67 + 20) as &i32) = *((&v5.args.ptr as &char + 4) as &i32);
                    *((v67 + 12) as &i64) = *((&v5.pieces.len as &char + 4) as &i64);
                    *(v67 as &i64) = v66;
                    *((v67 + 8) as &i32) = v32;
                    if v38 {
                        return v67;
                    }
                    return v67;
                }
LABEL_48117b:
                v0 = v33;
                v35 = v1;
                if !v4 {
                    break;
                }
            }
        }
    }
    v67 = a0;
    *((v67 + 8) as &i32) = v32;
    *(v67 as &i64) = v28;
    return v67;
}
