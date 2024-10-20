fn uu_od::parse_formats::parse_type_string(a0: void*, a1: &u64, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x278]
    let v1: i8;  // [sp-0x149]
    let v2: i64;  // [bp-0x148], Other Possible Types: String
    let v3: i64;  // [sp-0x141]
    let v4: i64;  // [sp-0x128], Other Possible Types: struct16
    let v5: i64;  // [sp-0x120]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0xf8]
    let v8: i64;  // [sp-0xf0]
    let v9: i64;  // [sp-0xe8]
    let v10: i32;  // [sp-0xdc]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xc8]
    let v14: i8;  // [sp-0xc0]
    let v15: Arguments;  // [bp-0xb8]
    let v16: i64;  // [bp-0x88], Other Possible Types: Argument
    let v17: i128;  // [bp-0x80], Other Possible Types: Argument
    let v18: i8;  // [bp-0x70]
    let v19: i64;  // [sp-0x68], Other Possible Types: Argument, String
    let v20: Argument;  // [bp-0x60]
    let v21: i64;  // [sp-0x58]
    let v22: i64;  // [sp-0x50]
    let v23: i64;  // [bp-0x48]
    let v24: i64;  // [sp-0x41]
    let v26: i64;  // rsi
    let v27: i64;  // r15
    let v28: i64;  // r12
    let v29: i32;  // eax
    let v30: i32;  // edx
    let v31: i32;  // ecx
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // rbx
    let v35: i64;  // rax
    let v36: i64;  // r14
    let v37: i64;  // rcx
    let v38: i64;  // rsi
    let v39: i64;  // r15
    let v40: i64;  // rbx
    let v41: i64;  // r12
    let v42: i32;  // ecx
    let v43: i32;  // edi
    let v44: i32;  // esi
    let v45: i64;  // r12
    let v46: i64;  // r12
    let v47: i64;  // r12
    let v48: i64;  // r12
    let v49: i64;  // rax
    let v50: i64;  // r15
    let v51: i64;  // r13
    let v52: i32;  // eax
    let v53: i32;  // edx
    let v54: i32;  // ecx
    let v55: i64;  // r12
    let v56: i32;  // eax
    let v57: i32;  // edx
    let v58: i32;  // ecx
    let v59: i8;  // dl
    let v60: i64;  // rax
    let v61: i8;  // r13b
    let v62: i64;  // rdx
    let v63: i64;  // rcx
    let v64: i64;  // rsi
    let v65: i64;  // rax
    let v67: i8;  // r15b

    v7 = 0;
    v8 = 8;
    v9 = 0;
    if a2 {
        v26 = a1;
        v27 = *(v26 as &i8);
        if v27 >= 0 {
            v28 = v26 + 1;
            goto LABEL_4992ce;
        }
        v29 = v27 & 31;
        v30 = *((v26 + 1) as &i8) & 63;
        if (v27 & 255) <= 223 {
            v28 = v26 + 2;
            v27 = v29 * 64 | v30;
            goto LABEL_4992ce;
        }
        v31 = *((v26 + 2) as &i8) & 63 | v30 * 64;
        if (v27 & 255) <= 239 {
            v28 = v26 + 3;
            v27 = v31 | v29 * 0x1000;
            goto LABEL_4992ce;
        } else {
            v27 = *((v26 + 3) as &i8) & 63 | v31 * 64 | (v29 & 7) * 0x40000;
            if v27 != 0x110000 {
                v26 = a1;
                v28 = v26 + 4;
LABEL_4992ce:
                v34 = v26 + a2;
                v10 = v27;
                switch (v10) {
                case 102:
                    break;
                case 117:
                    goto LABEL_499490;
                case 120:
                    goto LABEL_499490;
                case 97:
                    break;
                case 111:
LABEL_499490:
                    break;
                default:
                    v11 = 0;
                    v12 = a1;
                    v13 = a2;
                    v14 = 1;
                    v16 = Argument {
                        value: &v10
                        formatter: <char as core::fmt::Display>::fmt
                    };
                    v17 = Argument {
                        value: <char as core::fmt::Display>::fmt
                        formatter: &v11
                    };
                    v18 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v15 = Arguments {
                        pieces: ["unexpected char '", "' in format specification "]
                        args: [&v16, &v17]
                        fmt: None
                    };
                    v19 = alloc::fmt::format::format_inner(&v15);
                    v35 = v19;
                    v36 = *((&v19 as &char + 8) as &i8);
                    v2 = *((&v19 as &char + 9) as &i64);
                    v3 = v21;
                    if v35 != 0x8000000000000000 {
                        v37 = v2;
                        v38 = a0;
                        *((v38 + 24) as &i64) = v3;
                        *((v38 + 17) as &i64) = v37;
                        *((v38 + 8) as &i64) = v35;
                        *((v38 + 16) as &i8) = v36;
                        *(v38 as &i64) = 1;
                        goto LABEL_499de8;
                    } else {
                        v0 = 124;
                        break;
                    }
                }
                if v28 == v34 {
                    v39 = 0x110000;
                } else {
                    v39 = *(v28 as &i8);
                    if v39 >= 0 {
                        v41 = v28 + 1;
                    } else {
                        v42 = v39 & 31;
                        v43 = *((v28 + 1) as &i8) & 63;
                        if (v39 & 255) <= 223 {
                            v45 = v28 + 2;
                            v39 = v42 * 64 | v43;
                        } else {
                            v44 = *((v28 + 2) as &i8) & 63 | v43 * 64;
                            if (v39 & 255) < 240 {
                                v47 = v28 + 3;
                                v39 = v44 | v42 * 0x1000;
                            } else {
                                v46 = v28 + 4;
                                v39 = *((v28 + 3) as &i8) & 63 | v44 * 64 | (v42 & 7) * 0x40000;
                            }
                        }
                    }
                }
                v48 = v40;
                v1 = 0;
                if !2 {
                    goto LABEL_499587;
                }
                switch (v39) {
                case 70:
                    v1 = 4;
                    v50 = *(v48 as &i8);
                    if v50 >= 0 {
                        v48 += 1;
                        if v50 == 122 {
                            goto LABEL_4998ca;
                        }
                        break;
                    } else {
                        v56 = v50 & 31;
                        v57 = *((v48 + 1) as &i8) & 63;
                        if (v50 & 255) <= 223 {
                            v48 += 2;
                            v39 = v56 * 64 | v57;
                            goto LABEL_4998c0;
                        }
                        v58 = *((v48 + 2) as &i8) & 63 | v57 * 64;
                        if (v50 & 255) < 240 {
                            v48 += 3;
                            if (v58 | v56 << 12) == 122 {
                                goto LABEL_4998ca;
                            }
                            break;
                        } else {
                            v48 += 4;
                            if (*((v48 + 3) as &i8) & 63 | v58 << 6 | (v56 & 7) << 18) == 122 {
LABEL_4998ca:
                                if v48 != v34 {
                                    v67 = *(v48 as &i8);
                                }
                            }
                        }
                    }
                default:
LABEL_499587:
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    if 10 <= v39 - 48 {
LABEL_4997d0:
                        goto LABEL_4997d3;
                    } else {
                        v49 = 1;
                        do {
                            v51 = v49;
                            if v6 - 1 == v4 {
                                v4 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            }
                            *((v5 + v51 - 1) as &i8) = v39;
                            v6 = v51;
                            if v48 == v34 {
                                v39 = 0x110000;
                                break;
                            }
                            v39 = *(v48 as &i8);
                            if v39 >= 0 {
                                v48 += 1;
                            } else {
                                v52 = v39 & 31;
                                v53 = *((v48 + 1) as &i8) & 63;
                                if (v39 & 255) <= 223 {
                                    v48 += 2;
                                    v39 = v52 * 64 | v53;
                                } else {
                                    v54 = *((v48 + 2) as &i8) & 63 | v53 * 64;
                                    if (v39 & 255) < 240 {
                                        v48 += 3;
                                        v39 = v54 | v52 * 0x1000;
                                    } else {
                                        v48 += 4;
                                        v39 = *((v48 + 3) as &i8) & 63 | v54 * 64 | (v52 & 7) * 0x40000;
                                    }
                                }
                            }
                            v49 = v6 + 1;
                        } while (v39 - 48 < 10);
                        v48 = v55;
                        if !v6 {
                            goto LABEL_4997d0;
                        }
                        if !(core::num::<impl core::str::traits::FromStr for u8>::from_str() as i64 & 1) {
                            v1 = v59;
                        } else {
                            v16 = 0;
                            v17 = *((&v4 as &char + 8) as &i128);
                            v18 = 1;
                            v11 = 0;
                            v12 = a1;
                            v13 = a2;
                            v14 = 1;
                            v19 = Argument {
                                value: &v16
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v20 = Argument {
                                value: <os_display::Quoted as core::fmt::Display>::fmt
                                formatter: &v11
                            };
                            v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                            v15 = Arguments {
                                pieces: ["invalid number ", " in format specification "]
                                args: [&v19, &v20]
                                fmt: None
                            };
                            v2 = alloc::fmt::format::format_inner(&v15);
                            v60 = v2;
                            v61 = *((&v2 as &char + 8) as &i8);
                            v62 = *((&v2 as &char + 16) as &i64);
                            v23 = *((&v2 as &char + 9) as &i64);
                            v24 = v62;
                            if v60 == 0x8000000000000000 {
                                v1 = v61;
                            } else {
                                v63 = v23;
                                v64 = a0;
                                *((v64 + 24) as &i64) = v24;
                                *((v64 + 17) as &i64) = v63;
                                *((v64 + 8) as &i64) = v60;
                                *((v64 + 16) as &i8) = v1;
                                *(v64 as &i64) = 1;
LABEL_499de8:
                                v65 = v7;
                                if v65 {
                                    return v33;
                                }
                                return v33;
                            }
                        }
LABEL_4997d3:
                        if !v4 {
LABEL_4998c0:
                            if v39 == 122 {
                                goto LABEL_4998ca;
                            }
                            break;
                        } else {
                            if v39 == 122 {
                                goto LABEL_4998ca;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    v32 = a0;
    *((v32 + 24) as &i64) = v9;
    *((v32 + 8) as &i64) = v7;
    v33 = v8;
    *((v32 + 16) as &i64) = v33;
    *(v32 as &i64) = 0;
    return v33;
}
