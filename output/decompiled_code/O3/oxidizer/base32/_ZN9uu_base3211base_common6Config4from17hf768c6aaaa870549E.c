fn uu_base32::base_common::Config::from(a0: void*, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x1a8], Other Possible Types: Argument
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198]
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [bp-0x188]
    let v5: i64;  // [bp-0x180]
    let v6: i64;  // [bp-0x178]
    let v7: i8;  // [sp-0x170]
    let v8: i64;  // [sp-0x168]
    let v9: i192;  // [sp-0x158], Other Possible Types: String, struct24
    let v10: i8;  // [sp-0x150]
    let v11: i64;  // [sp-0x148]
    let v12: i32;  // [bp-0x140]
    let v13: i64;  // [sp-0x138]
    let v14: i64;  // [sp-0x120], Other Possible Types: Enum
    let v15: i64;  // [sp-0x118]
    let v16: i64;  // [sp-0x110]
    let v17: i64;  // [sp-0x100], Other Possible Types: struct24
    let v18: i64;  // [sp-0xe8]
    let v19: i64;  // [bp-0xe0], Other Possible Types: Arguments, Enum, struct24
    let v20: i64;  // [sp-0xd8]
    let v21: i64;  // [sp-0xd0]
    let v22: i8;  // [bp-0xc8]
    let v23: i64;  // [sp-0xc0]
    let v24: i8;  // [bp-0xb8]
    let v25: i8;  // [bp-0xb0]
    let v26: i8;  // [bp-0xa8]
    let v28: i64;  // r12
    let v29: i128;  // xmm0
    let v30: i64;  // r13
    let v31: i64;  // rax
    let v32: i64;  // r14
    let v33: i64;  // rdi
    let v34: i64;  // rcx
    let v35: i64;  // rdx
    let v36: i64;  // r15
    let v37: i64;  // rax
    let v38: i64;  // rbp
    let v39: i64;  // rcx
    let v41: i64;  // r12
    let v42: i64;  // r15
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v47: i64;  // r14
    let v48: i128;  // xmm0
    let v49: i64;  // rax
    let v50: i128;  // xmm0
    let v51: i64;  // r12
    let v52: i64;  // r13
    let v53: i64;  // rbx
    let v54: i64;  // r12
    let v55: i64;  // rax
    let v56: i128;  // xmm0
    let v57: i64;  // rsi

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19, a1, &anon.aee8d0926622a1c6e97588a73d77e694.27.llvm.9973493521462227259, 4);
    v14 = &anon.aee8d0926622a1c6e97588a73d77e694.27.llvm.9973493521462227259;
    v15 = 4;
    if v19 {
        v8 = v24;
        v29 = v20;
        v6 = v22;
        v4 = v29;
        v0 = &v14;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v9 = "Mismatch between definition and access of `";
        v10 = 2;
        v13 = 0;
        v11 = &v0;
        v12 = 2;
        v9 = core::panicking::panic_fmt();
    }
    if !v20 {
        v17 = 0x8000000000000000;
        goto LABEL_48bbb4;
    }
    v30 = v22;
    v31 = v23;
    v32 = v24;
    v33 = v25;
    v18 = v26;
    if !(!v31) && !((v34 = v21, v31 == v32)) {
LABEL_48bb90:
        v36 = v31 + 32;
    } else {
        do {
            v34 = v34;
            if !v34 || v34 == v30 {
                if !(v33) || !(v33 != v18) {
                    core::option::unwrap_failed(); /* do not return */
                }
                v33 += 32;
                v36 = 0;
                goto LABEL_48bd5c;
            }
        } while ((v34 += 24, v31 = *((v34 + 8) as &i64), v35 = *((v34 + 16) as &i64), v32 = v35 * 32 + v31, !v35));
        goto LABEL_48bb90;
    }
LABEL_48bd5c:
    v16 = &v10;
    v37 = v28();
    if !(v36) || !(v36 != v32) {
        do {
            if !(v39) || !(v38 != v30) {
                if !v33 || v33 == v18 {
                    v41 = *((v37 + 8) as &i64);
                    v42 = *((v37 + 16) as &i64);
                    if v42 != 1 || *(v41 as &i8) != 45 {
                        v19 = std::sys::pal::unix::fs::stat(v41, v42);
                        if v19 == 2 {
                            v4 = 1;
                            v5 = v41;
                            v6 = v42;
                            v7 = 0;
                            v0 = Argument {
                                value: &v4
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v19 = Arguments {
                                pieces: [&g_501a58, ": No such file or directory"]
                                args: [&v0]
                                fmt: None
                            };
                            v9 = alloc::fmt::format::format_inner(&v19);
                            v12 = 1;
                            v43 = __rust_alloc(32, 8);
                            v48 = v9;
                            *((v43 + 16) as &i64) = v11;
                            *(v43 as &i128) = v48;
                            *((a0 + 8) as &i64) = v43;
                            *((a0 + 16) as &&i64) = &g_501ab0;
                            *(a0 as &i64) = 2;
                            return a0;
                        }
                        v17 = std::sys::pal::unix::os::split_paths::bytes_to_path(v41, v42);
                    } else {
                        v17 = 0x8000000000000000;
                    }
LABEL_48bbb4:
                    v47 = a1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, v47, &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259, 4);
                    v14 = &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259;
                    v15 = 4;
                    if v4 != 2 {
                        v13 = v8;
                        v50 = v4;
                        v11 = v6;
                        v9 = v50;
                        v0 = &v14;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v2 = &v9;
                        v3 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                        v19 = "Mismatch between definition and access of `";
                        v20 = 2;
                        v23 = 0;
                        v21 = &v0;
                        v22 = 2;
                        v19 = core::panicking::panic_fmt();
                    }
                    v49 = v5;
                    if !v49 {
                        v53 = 0;
                    } else {
                        v51 = *((v49 + 8) as &i64);
                        v52 = *((v49 + 16) as &i64);
                        v14 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v51, v52);
                        if !v14 {
                            v53 = 1;
                            v54 = v15;
                        } else {
                            v4 = 0;
                            v5 = v51;
                            v6 = v52;
                            v7 = 1;
                            v0 = Argument {
                                value: &v4
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v19 = Arguments {
                                pieces: ["invalid wrap size: "]
                                args: [&v0]
                                fmt: None
                            };
                            v9 = alloc::fmt::format::format_inner(&v19);
                            v12 = 1;
                            v55 = __rust_alloc(32, 8);
                            v56 = v9;
                            *((v55 + 16) as &i192) = v9;
                            *(v55 as &i128) = v56;
                            a0 = a0;
                            *((a0 + 8) as &i64) = v55;
                            *((a0 + 16) as &&i64) = &g_501ab0;
                            *(a0 as &i64) = 2;
                            v57 = v17;
                            if v57 == 0x8000000000000000 {
                                return a0;
                            } else if !v57 {
                                return a0;
                            } else {
                                return a0;
                            }
                        }
                    }
                    a0 = a0;
                    *((a0 + 32) as &i64) = *((&v17 as &char + 16) as &i64);
                    *((a0 + 16) as &i192) = v17;
                    *(a0 as &i64) = v53;
                    *((a0 + 8) as &i64) = v54;
                    *((a0 + 40) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v47, &anon.aee8d0926622a1c6e97588a73d77e694.24.llvm.9973493521462227259, 6) as i32;
                    *((a0 + 41) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v47, &anon.aee8d0926622a1c6e97588a73d77e694.26.llvm.9973493521462227259, 14) as i8;
                    return a0;
                }
                goto LABEL_48bdb8;
            }
        } while ((v34 += 24, v31 = *((v34 + 8) as &i64), v35 = *((v34 + 16) as &i64), v32 = v35 * 32 + v31, !v35));
    }
LABEL_48bdb8:
    v4 = 0;
    v5 = *((v28() + 8) as &i128);
    v7 = 1;
    v0 = &v4;
    v19 = Arguments {
        pieces: ["extra operand "]
        args: [&v0]
        fmt: None
    };
    v21 = &v0;
    v9 = alloc::fmt::format::format_inner(&v19);
    v12 = 1;
    v43 = __rust_alloc(32, 8);
    v44 = v9;
    *((v43 + 16) as &i64) = v11;
    *(v43 as &i128) = v44;
    *((a0 + 8) as &i64) = v43;
    *((a0 + 16) as &&i64) = &g_5019e8;
    *(a0 as &i64) = 2;
    return a0;
}
