fn uu_expand::expand_shortcuts(a0: u64, a1: u64) -> int {
    let v0: i64;  // [sp-0x110]
    let v1: struct16;  // [sp-0x108], Other Possible Types: i64
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i192;  // [sp-0xb8], Other Possible Types: String
    let v11: i64;  // [sp-0xa0], Other Possible Types: Arguments, Enum
    let v12: i64;  // [sp-0x98]
    let v13: i64;  // [sp-0x90]
    let v14: i64;  // [sp-0x70]
    let v15: i64;  // [sp-0x68]
    let v16: i64;  // [sp-0x60]
    let v17: i64;  // [sp-0x58]
    let v18: i64;  // [sp-0x50]
    let v19: i64;  // [sp-0x48]
    let v20: Argument;  // [bp-0x40]
    let v22: i64;  // r12
    let v23: i64;  // rax
    let v24: i64;  // r15
    let v25: i64;  // r14
    let v26: i64;  // rbp
    let v27: i256;  // ymm0
    let v28: i64;  // rax
    let v29: i64;  // r12
    let v30: i64;  // rbx
    let v31: i64;  // rcx
    let v32: i64;  // rdi
    let v33: i64;  // r13
    let v34: i64;  // rdx
    let v35: i64;  // rsi
    let v36: i32;  // r8d
    let v37: i32;  // r10d
    let v38: i32;  // r9d
    let v39: i64;  // r15
    let v40: i64;  // rax
    let v41: i64;  // rcx
    let v42: i64;  // r12
    let v43: i64;  // rbx
    let v44: i64;  // rax
    let v45: i64;  // rcx
    let v46: i64;  // r12
    let v47: i64;  // rbx
    let v48: i64;  // rax
    let v49: i64;  // rdx
    let v50: i64;  // rdx
    let v52: i64;  // r12
    let v53: i64;  // rax
    let v54: i64;  // rcx
    let v55: i128;  // xmm0
    let v56: i256;  // ymm0
    let v57: i128;  // xmm0

    v22 = *((a1 + 16) as &i64);
    if !v22 {
        v23 = 8;
    } else {
        v24 = 8;
        v23 = __rust_alloc(v22 * 24, 8);
    }
    v1 = v22;
    v2 = v23;
    v3 = 0;
    v25 = *((a1 + 8) as &i64);
    v14 = v25;
    v15 = v25;
    v9 = *(a1 as &i64);
    v16 = v9;
    v8 = v25 + v22 * 24;
    v17 = v8;
    v7 = v25;
    if v22 {
        v6 = "src/uu/expand/src/expand.rs";
        loop {
            v28 = v7;
            v7 = v28 + 24;
            v15 = v7;
            v29 = *(v28 as &i64);
            if v29 == 0x8000000000000000 {
                break;
            }
            v30 = *((v28 + 16) as &i64);
            v5 = *((v28 + 8) as &i64);
            v11 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v28 + 8) as &i64), v30);
            if !(!v11) || !(v31) || !((v32 = v12, *(v32 as &i8) == 45)) {
LABEL_483208:
                v39 = v3;
                if v39 == v1 {
                    v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v40 = v2;
                v41 = v39 * 3;
                *((v40 + v41 * 8) as &i64) = v29;
                *((v40 + v41 * 8 + 8) as &i64) = v5;
                *((v40 + v41 * 8 + 16) as &i64) = v30;
                v24 = v39 + 1;
                v3 = v24;
                goto LABEL_483242;
            } else {
                if v31 == 1 {
                    v33 = 0;
                } else if *((v32 + 1) as &i8) > 191 {
                    v33 = v31 - 1;
                } else {
                    v0 = v29;
                    core::str::slice_error_fail(); /* do not return */
                }
                v34 = v32 + 1;
                v4 = v34;
                if v34 == v32 + v31 {
LABEL_483368:
                    v0 = v29;
                    if v31 != 1 && *(v4 as &i8) <= 191 {
                        v6 = "src/uu/expand/src/expand.rs";
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v42 = 0;
                    v43 = 0;
                    do {
                        v26 = v26;
                        if v33 < v43 {
                            v24 = 0;
                            goto LABEL_483466;
                        }
                        v44 = v33 - v43;
                        v45 = v4;
                        if v44 <= 15 {
                            if v33 == v43 {
                                goto LABEL_4833fe;
                            }
                            v49 = 0;
                            while (*((v45 + v43 + v49) as &i8) != 44) {
                                v49 += 1;
                                if v44 == v49 {
                                    goto LABEL_4833fe;
                                }
                            }
LABEL_483428:
                            v48 = v50 + v43;
                            v43 = v43 + v50 + 1;
                            if !(v48 < v33) || !(*((v4 + v48) as &i8) == 44) {
                                continue;
                            }
                            v24 = v24 | -0x100 | 1;
                            v26 = v43;
                            v11 = v11;
                            v12 = v12;
                            v13 = v13;
                            if !(v48 == v42) {
                                goto LABEL_483472;
                            }
                            goto LABEL_4833b4;
                        }
                        v48 = core::slice::memchr::memchr_aligned(44, v45 + v43);
                        if v48 == 1 {
                            goto LABEL_483428;
                        }
                        if v48 {
                            v24 = v24 | -0x100 | 1;
                            goto LABEL_483472;
                        }
LABEL_4833fe:
                        v24 = 0;
LABEL_483466:
                        v43 = v47;
                        v26 = v46;
                        v48 = v33;
                        v11 = v11;
                        v12 = v12;
                        v13 = v13;
                        if v48 != v42 {
LABEL_483472:
                            v18 = v42 + v4;
                            v19 = v48 - v42;
                            v20 = Argument {
                                value: &v18
                                formatter: <&T as core::fmt::Display>::fmt
                            };
                            v11 = Arguments {
                                pieces: ["--tabs="]
                                args: [&v20]
                                fmt: None
                            };
                            v10 = alloc::fmt::format::format_inner(&v11);
                            v52 = v3;
                            if v52 == v1 {
                                v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            }
                            v53 = v2;
                            v54 = v52 * 3;
                            *((v53 + v54 * 8 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
                            v55 = v10;
                            vvar_40{reg 224} = ((vvar_40{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_526{reg 224}))
                            *((v53 + v54 * 8) as &i128) = v55;
                            v3 = v52 + 1;
                            v11 = v11;
                            v12 = v12;
                            v13 = v13;
                        }
LABEL_4833b4:
                        v13 = v13;
                        v12 = v12;
                        v11 = v11;
                    } while (v24);
LABEL_483242:
                    if v15 == v8 {
                        break;
                    }
                } else {
                    v35 = *(v34 as &i8);
                    if v35 >= 0 {
                        v34 += 1;
                        continue;
                    } else {
                        v36 = v35 & 31;
                        v37 = *((v34 + 1) as &i8) & 63;
                        if (v35 & 255) <= 223 {
                            v34 += 2;
                            v35 = v36 * 64 | v37;
                            continue;
                        } else {
                            v38 = *((v34 + 2) as &i8) & 63 | v37 * 64;
                            if (v35 & 255) < 240 {
                                v34 += 3;
                                v35 = v38 | v36 * 0x1000;
                                if !(v35 != 44) || !(v35 - 48 >= 10) {
                                    continue;
                                }
                            } else {
                                v35 = *((v34 + 3) as &i8) & 63 | v38 * 64 | (v36 & 7) * 0x40000;
                                if v35 == 0x110000 {
                                    goto LABEL_483368;
                                }
                                v34 += 4;
                                continue;
                            }
                        }
                    }
                    goto LABEL_483208;
                }
            }
        }
    }
    *((a0 + 16) as &i64) = v3;
    v57 = v1;
    *(a0 as &i128) = v57;
    return Conv(256->64, ((vvar_40{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_599{reg 224})));
}
