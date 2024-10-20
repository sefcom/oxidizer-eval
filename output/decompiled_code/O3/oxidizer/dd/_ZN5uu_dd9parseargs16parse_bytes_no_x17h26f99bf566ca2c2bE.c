fn uu_dd::parseargs::parse_bytes_no_x(a0: &u64, a1: u32, a2: u32, a3: &u8, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0x118]
    let v1: i64;  // [sp-0x110]
    let v2: Enum;  // [sp-0xf8], Other Possible Types: i128, Arguments
    let v3: struct32;  // [sp-0xc8], Other Possible Types: i256
    let v4: Argument;  // [bp-0xa8]
    let v5: i64;  // [sp-0x98]
    let v6: i64;  // [sp-0x90]
    let v7: i64;  // [sp-0x88]
    let v8: i8;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x68]
    let v11: i16;  // [sp-0x58]
    let v12: i8;  // [sp-0x56]
    let v13: i192;  // [sp-0x48], Other Possible Types: String
    let v15: i64;  // r14
    let v16: i64;  // rbp
    let v17: i64;  // cc_ndep
    let v18: i64;  // rax
    let v19: i64;  // rsi
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v22: i8;  // cc_dep1
    let v23: i64;  // rdx
    let v24: i64;  // 4096
    let v25: i64;  // r12
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v29: i64;  // r12
    let v30: i64;  // rbx
    let v31: i64;  // 4096
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i64;  // rbx
    let v36: i64;  // r15
    let v37: i64;  // rax
    let v38: i64;  // rbx
    let v39: i64;  // rax
    let v40: i64;  // r15
    let v41: i64;  // rax
    let v43: i64;  // r13
    let v44: i64;  // rbx
    let v46: i64;  // rax
    let v48: i64;  // r14
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v53: i64;  // rax

    v11 = 257;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    v15 = 0;
    do {
        v18 = a4 - v15;
        v19 = v15 + a3;
        if v18 > 15 {
            v20 = core::slice::memchr::memchr_aligned(99, v19);
            if v20 == 1 {
                goto LABEL_497a44;
            }
            goto LABEL_497d60;
        }
        if a4 != v15 {
            v21 = 0;
            loop {
                v22 = *((v19 + v21) as &i8);
                if *((v19 + v21) as &i8) == 99 {
                    break;
                }
                v17 = v22 < 99;
                v21 += 1;
                if v18 == v21 {
                    goto LABEL_497a5f;
                }
            }
        } else {
LABEL_497a5f:
            v0 = 0;
            goto LABEL_497a66;
        }
LABEL_497a44:
        v16 = v15 + v23;
        if v16 < a4 && *((a3 + v16) as &i8) == 99 {
            v20 = 1;
            goto LABEL_497d60;
        }
    } while ((v17 = (v15 + v23 <= v15 ? 1 : 0), v15 = v15 + v23 + 1, v15 <= a4));
    v20 = 0;
LABEL_497d60:
    v0 = v20;
LABEL_497a66:
    do {
        v25 = v24;
        v26 = core::slice::memchr::memrchr(119, a3, v25);
        if v26 != 1 {
            v1 = -0x100 | v26;
            goto LABEL_497ac6;
        }
        if v27 < a4 && *((a3 + v27) as &i8) == 119 {
            v28 = 1;
            goto LABEL_497ac1;
        }
    } while (v27 <= a4);
    v28 = 0;
LABEL_497ac1:
    v1 = v28;
LABEL_497ac6:
    v30 = 0;
    loop {
        v32 = core::slice::memchr::memrchr(98, a3, v31);
        if v32 != 1 {
            v30 = -0x100 | v32;
            if !(!v0) {
                goto LABEL_497b06;
            }
            goto LABEL_497b53;
        }
        if v27 < a4 && *((a3 + v27) as &i8) == 98 {
            break;
        }
        if !(v27 <= a4) {
            goto LABEL_497afe;
        }
    }
    v30 = 1;
LABEL_497afe:
    if v0 {
LABEL_497b06:
        if !(!v30) || !(!v1) {
LABEL_497b64:
            v34 = a2;
            if v34 {
                v39 = __rust_alloc(v34, 1);
            }
            memcpy(v36, a1, v34);
            v46 = a0;
            *(v46 as &i64) = 7;
            *((v46 + 8) as &i64) = v34;
            *((v46 + 16) as &i64) = v36;
            *((v46 + 24) as &i64) = v34;
            return v46;
        }
        if v16 {
            if v16 >= a4 {
                if v16 == a4 {
                    goto LABEL_497c53;
                }
            } else {
                if !(*((a3 + v16) as &i8) <= 191) {
                    goto LABEL_497c53;
                }
            }
            core::str::slice_error_fail(); /* do not return */
        }
LABEL_497c53:
        v2 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a3, v16);
        if !v2 {
            goto LABEL_497c7e;
        }
        if !(!a4) {
            goto LABEL_497dc9;
        }
    } else {
LABEL_497b53:
        if !v1 {
            if v30 {
                if v33 {
                    if v33 >= a4 {
                        if v33 != a4 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a3 + v33) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v2 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a3, v33);
                if !v2 {
                    v44 = 0x200;
                    goto LABEL_497e71;
                } else if !a4 {
                    goto LABEL_497df7;
                }
            } else {
                v3 = uucore::parser::parse_size::Parser::parse(&v9, a3, a4);
                v37 = v3;
                v38 = a2;
                if v37 != 3 {
                    v40 = *((&v3 as &char + 8) as &i64);
                    if v37 != 2 {
                        memcpy(v43, a1, v38);
                        v51 = a0;
                        *(v51 as &i64) = 13;
                        *((v51 + 8) as &i64) = v38;
                        *((v51 + 16) as &i64) = v43;
                        *((v51 + 24) as &i64) = v38;
                        if v40 {
                            return v46;
                        }
                        return v46;
                    }
LABEL_497e48:
                    v41 = -1;
                    v44 = 1;
                    if v40 {
                        v41 = -1;
                    }
                } else if *((&v3 as &char + 24) as &i64) {
                    v5 = 0;
                    v6 = a3;
                    v7 = a4;
                    v8 = 1;
                    v4 = Argument {
                        value: &v5
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v2 = Arguments {
                        pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
                        args: [&v4]
                        fmt: None
                    };
                    v13 = alloc::fmt::format::format_inner(&v2);
                    v40 = v13;
                    goto LABEL_497e48;
                } else {
                    v41 = *((&v3 as &char + 16) as &i64);
LABEL_497c7e:
                    v44 = 1;
                }
LABEL_497e71:
                v46 = v41 * v44;
                if !(amd64g_calculate_condition(0, 48, v41, v44, v17) as char) {
                    v50 = a0;
                    *((v50 + 8) as &i64) = v46;
                    *(v50 as &i64) = 14;
                    return v46;
                }
                v34 = a2;
                if !v34 {
                    memcpy(1, a1, v34);
                    *(a0 as &i64) = 8;
                    *((v46 + 8) as &i64) = v34;
                    *((v46 + 16) as &i64) = v36;
                    *((v46 + 24) as &i64) = v34;
                    return v46;
                }
                v53 = __rust_alloc(v34, 1);
                if !v53 {
                    memcpy(v36, a1, v34);
                    v46 = a0;
                    *(v46 as &i64) = 8;
                    *((v46 + 8) as &i64) = v34;
                    *((v46 + 16) as &i64) = v36;
                    *((v46 + 24) as &i64) = v34;
                    return v46;
                }
                memcpy(v36, a1, v34);
                *(a0 as &i64) = 8;
                goto LABEL_497df7;
            }
LABEL_497dcb:
            memcpy(v48, a3, a4);
            v46 = a0;
            *(v46 as &i64) = 7;
            *((v46 + 8) as &i64) = a4;
            *((v46 + 16) as &i64) = v48;
            *((v46 + 24) as &i64) = a4;
            return v46;
        }
        if !(!v30) {
            goto LABEL_497b64;
        }
        if v29 {
            if v29 >= a4 {
                if v29 != a4 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((a3 + v29) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v2 = core::num::<impl core::str::traits::FromStr for u64>::from_str(a3, v29);
        if !v2 {
            v44 = 2;
            goto LABEL_497e71;
        }
        if a4 {
LABEL_497dc9:
            goto LABEL_497dcb;
        }
    }
LABEL_497df7:
    *((v46 + 8) as &i64) = v34;
    *((v46 + 16) as &i64) = v36;
    *((v46 + 24) as &i64) = v34;
    return v46;
}
