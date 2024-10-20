fn uu_env::split_iterator::SplitIterator::split() -> u32 {
    let v0: i64;  // [bp-0xa8], Other Possible Types: Enum, struct40
    let v1: i8;  // [bp-0xa4]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i128;  // [bp-0x90]
    let v5: i8;  // [bp-0x88]
    let v7: i32;  // [sp-0x74]
    let v8: i32;  // [sp-0x70]
    let v9: i32;  // [sp-0x6c]
    let v10: i128;  // [bp-0x6b]
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [bp-0x60]
    let v13: i128;  // [bp-0x5b]
    let v14: i8;  // [bp-0x58]
    let v15: i64;  // [bp-0x50]
    let v16: i32;  // [sp-0x4c]
    let v17: i64;  // [sp-0x40]
    let v18: i64;  // [sp-0x38]
    let v20: i64;  // rsi
    let v21: i64;  // r12
    let v22: i64;  // r13
    let v23: i256;  // ymm0
    let v24: i256;  // ymm1
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i32;  // eax
    let v28: i64;  // r8
    let v29: i64;  // r9
    let v30: i64;  // rdx
    let v31: i64;  // rcx
    let v32: i64;  // rsi
    let v33: i64;  // rdi
    let v34: i32;  // r15d
    let v35: i64;  // r15
    let v37: i64;  // rcx
    let v38: i64;  // rax
    let v39: i64;  // rcx
    let v40: i64;  // rdi
    let v41: i32;  // eax
    let v42: i64;  // rax
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // rdx
    let v48: i32;  // eax
    let v49: i64;  // rbp
    let v51: i8;  // al
    let v52: i64;  // rax
    let v53: i8;  // al
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i64;  // rax
    let v59: i64;  // rdi
    let v60: i64;  // r15
    let v61: i64;  // rdi
    let v62: i64;  // r14
    let v63: i64;  // rdi
    let v64: i64;  // rcx
    let v65: i64;  // rax

    v21 = v20 + 24;
    v18 = &v0;
    loop {
        v25 = *((v20 + 32) as &i64);
        v26 = *((v20 + 56) as &i64);
        if v25 < v26 {
LABEL_4a5771:
            v0 = "mid > len";
            v2 = 1;
            v3 = 8;
            v4 = 0;
            core::panicking::panic_fmt(v18); /* do not return */
        }
        if v25 == v26 {
LABEL_4a564b:
            v62 = v61;
            *((v62 + 24) as &i64) = *((v20 + 80) as &i64);
            *((v62 + 8) as &i128) = *((v20 + 64) as &i128);
            *(v62 as &i32) = 8;
            if !*(v20 as &i64) {
                break;
            }
            goto LABEL_4a5735;
        } else {
            v27 = uu_env::native_int_str::get_char_from_native_int(*((*(v21 as &i64) + v26) as &i8)) as i32;
            if v27 == 0x110000 {
                v27 = 65533;
            }
            if v27 <= 31 {
                if v27 - 9 < 5 {
                    goto LABEL_4a5212;
                }
                goto LABEL_4a5482;
            }
            if v27 > 91 {
                if v27 != 92 {
                    if v27 == 0x110000 {
                        goto LABEL_4a564b;
                    }
LABEL_4a5482:
                    uu_env::split_iterator::SplitIterator::state_unquoted();
                    v34 = v0;
                    if v34 == 8 {
                        continue;
                    }
                    v7 = v1;
                    v22 = v4;
                    v37 = v5;
                    v3 = v3;
                    v2 = v2;
                    goto LABEL_4a5636;
                }
                uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, v21, v30, v31, v28, v29);
                if v0 == 0x8000000000000000 {
                    goto LABEL_4a5685;
                }
                v35 = *((v20 + 56) as &i64);
                if *((v20 + 32) as &i64) < v35 {
                    goto LABEL_4a5771;
                }
                if *((v20 + 32) as &i64) == v35 {
LABEL_4a55bc:
                    v52 = __rust_alloc(9, 1);
                    *(v52 as &i64) = 7310584013770220868;
                    *((v52 + 8) as &i8) = 114;
                    v8 = 1;
                    v11 = v35;
                    v12 = 9;
                    v14 = v52;
                    v15 = 9;
                    v34 = 1;
                    v8 = v8;
                    goto LABEL_4a561a;
                }
                v48 = uu_env::native_int_str::get_char_from_native_int(*((*(v21 as &i64) + v35) as &i8)) as i32;
                v49 = (v48 == 0x110000 ? 65533 : v48);
                if v49 - 34 <= 65 {
                    goto *((4329256 + (v49 - 34 & 4294967295) * 4) as &i32) + 4329256;
                }
                if v49 == 10 {
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, v21, v30, v31, v28, v29);
                    v32 = v0;
                    if !(v32 == 0x8000000000000000) {
                        goto LABEL_4a523a;
                    }
                    v53 = v3;
                    v8 = 5;
                    v11 = v2;
                    v12 = v11;
                    v14 = v53;
                    v34 = 5;
                    v8 = v8;
                    goto LABEL_4a561a;
                }
                if v49 == 0x110000 {
                    v35 = *((v20 + 56) as &i64);
                    goto LABEL_4a55bc;
                }
                v0 = uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(v20, v49 & 4294967295, v31, v28, v29);
                v34 = v0;
                v51 = *((&v0 as &char + 4) as &i8);
                if v8 != 8 {
                    v16 = (&v5)[4];
                    v54 = *((&v0 as &char + 5) as &i128);
                    vvar_15{reg 224} = ((vvar_15{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_567{reg 224}))
                    v55 = v0;
                    vvar_16{reg 256} = ((vvar_16{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_569{reg 256}))
                    v13 = v55;
                    v10 = v54;
                    v8 = v34;
                    v9 = v51;
                    v8 = v8;
                } else if !v9 {
                    v56 = *((v20 + 56) as &i64);
                    v8 = 3;
                    v9 = v49;
                    v11 = v56;
                    v34 = 3;
                    v8 = v8;
                } else {
                    uu_env::split_iterator::SplitIterator::state_unquoted();
                    v34 = v8;
                    v8 = v8;
                    if v34 == 8 {
                        continue;
                    }
                }
LABEL_4a561a:
                v8 = v8;
                v7 = v9;
                v22 = *((&v12 as &char + 8) as &i64);
                v37 = (&v12)[1];
                v11 = v11;
                v2 = v11;
LABEL_4a5636:
                v11 = v11;
                v17 = v37;
                if !(v34 == 7) {
                    goto LABEL_4a5645;
                }
            } else {
                if v27 == 32 {
LABEL_4a5212:
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, v21, v30, v31, v28, v29);
                    v32 = v0;
                    v2 = v2;
                    if !(v32 == 0x8000000000000000) {
                        goto LABEL_4a523a;
                    }
LABEL_4a5682:
LABEL_4a5685:
                    v22 = v60 & -0x100 | *((&v0 as &char + 16) as &i8);
                    v34 = 5;
                } else {
                    if !(v27 == 35) {
                        goto LABEL_4a5482;
                    }
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, v21, v30, v31, v28, v29);
                    v33 = v2;
                    if v0 == 0x8000000000000000 {
                        goto LABEL_4a5682;
                    }
                    v38 = *((v20 + 32) as &i64);
                    v39 = *((v20 + 56) as &i64);
                    loop {
                        if v38 < v39 {
                            v0 = "mid > len";
LABEL_4a57b7:
                            v2 = 1;
                            v3 = 8;
                            v4 = 0;
                            v0 = core::panicking::panic_fmt();
                        }
                        v34 = 6;
                        if v38 == v39 {
                            break;
                        }
                        v41 = uu_env::native_int_str::get_char_from_native_int(*((*(v21 as &i64) + v39) as &i8)) as i32;
                        if v41 == 0x110000 {
                            v41 = 65533;
                        }
                        if v41 == 0x110000 {
                            break;
                        }
                        if v41 != 10 {
                            v42 = *((v20 + 48) as &i64);
                            if v42 {
                                v44 = 0;
                                do {
                                    if *((*((v20 + 40) as &i64) + v44) as &i8) == 10 {
                                        v46 = *((v20 + 32) as &i64);
                                        v47 = *((v20 + 56) as &i64);
                                        v39 = v47 + v44;
                                        *((v20 + 56) as &i64) = v39;
                                        if v46 < v39 {
                                            v0 = "mid > len";
                                            goto LABEL_4a57b7;
                                        } else {
                                            v45 = v47 + *(v21 as &i64) + v44;
                                            v33 = v46 - v47 - v44;
                                            goto LABEL_4a52c4;
                                        }
                                    }
                                } while ((v44 += 1, v42 != v44));
                            }
                            v39 = *((v20 + 32) as &i64);
                            *((v20 + 56) as &i64) = v39;
                            v45 = *((v20 + 24) as &i64) + v39;
                            v33 = 0;
LABEL_4a52c4:
                            *((v20 + 40) as &i64) = v45;
                            *((v20 + 48) as &i64) = v33;
                        } else {
                            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, v21, v30, v31, v28, v29);
                            v32 = v0;
                            if v32 == 0x8000000000000000 {
                                v39 = v3;
                                v34 = 5;
                                v40 = v2;
                                break;
                            }
LABEL_4a523a:
                        }
                    }
                    v2 = v40;
                    v22 = v22 & -0x100 | v39 & 4294967295;
                    if v34 == 7 {
                        continue;
                    }
LABEL_4a5645:
                    if v34 == 6 {
                        goto LABEL_4a564b;
                    }
                }
                v64 = v63;
                *((v64 + 4) as &i32) = v7;
                *((v64 + 8) as &i64) = v2;
                v65 = v64;
                *((v65 + 16) as &i64) = v59;
                *((v65 + 24) as &i64) = v22;
                *((v65 + 32) as &i64) = v17;
                *(v65 as &i32) = v34;
                if !*((v20 + 64) as &i64) {
                    break;
                }
LABEL_4a5735:
                break;
            }
        }
    }
}
