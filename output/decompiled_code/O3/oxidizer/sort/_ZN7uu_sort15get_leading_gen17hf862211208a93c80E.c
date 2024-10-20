fn uu_sort::get_leading_gen(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0x80], Other Possible Types: &struct_0
    let v1: void*;  // [sp-0x78]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: &struct_0;  // [sp-0x60], Other Possible Types: u64
    let v5: &struct_0;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48], Other Possible Types: void*
    let v9: u64;  // [sp-0x38]
    let v11: &struct_0;  // rax
    let v12: u64;  // rdx
    let v13: u64;  // rbx
    let v14: u64;  // rcx
    let v15: &struct_4;  // rsi
    let v16: u64;  // r8
    let v17: u64;  // r9
    let v18: u64;  // rcx
    let v19: &struct_2;  // rsi
    let v22: u64;  // rcx
    let v23: &struct_1;  // rsi
    let v26: &struct_0;  // rax
    let v27: u64;  // rax
    let v28: void*;  // rcx
    let v29: u64;  // rdx
    let v30: &struct_0;  // rcx
    let v31: u8;  // dl
    let v32: void*;  // r12
    let v33: u64;  // rcx
    let v34: u64;  // r9
    let v35: u64;  // r8
    let v36: &struct_0;  // r15
    let v37: u64;  // rbp
    let v38: u64;  // rcx
    let v40: u64;  // r8
    let v41: u32;  // eax
    let v42: &struct_0;  // r15
    let v43: u64;  // r9
    let v44: u32;  // eax
    let v45: u32;  // r13d
    let v46: u32;  // r14d
    let v47: u64;  // r12
    let v48: &struct_3;  // rax
    let v49: u32;  // eax
    let v50: &struct_3;  // rax
    let v51: &struct_0;  // rax
    let v52: void*;  // rcx
    let v53: u64;  // rdx
    let v54: &struct_0;  // rax
    let v55: &struct_0;  // rcx
    let v56: u8;  // dl

    v11 = core::str::<impl str>::trim_start_matches(a0, a1);
    v13 = a1 - v12;
    if v12 <= 3 {
        if !(v12 == 3) {
            goto LABEL_4ccc21;
        }
        if !v11 {
            goto LABEL_4cd159;
        }
    } else if v11->field_3 <= 191 {
        goto LABEL_4ccc21;
    }
    v14 = v11->field_0;
    if (((v14 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v14) == 105 {
        v15 = 0;
        do {
            if v15 == 2 {
                return v13;
            }
        } while ((v16 = *((v11 + v15 + 1) as &i8) as u8 as u64, v17 = *((v15 + &g_429d2b) as &i8) as u8 as u64, v15 += 1, ((((v16 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v16 as u8) == ((((v17 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v17 as u8)));
        if &v15->padding_0[1] as &struct_4 >= 2 {
            return v13;
        }
    }
LABEL_4ccc21:
    if v12 <= 4 {
        if !(v12 == 4) {
            goto LABEL_4cccbe;
        }
        if !v11 {
LABEL_4cd160:
            core::str::slice_error_fail(); /* do not return */
        }
    } else if v11->field_4 < 192 {
        goto LABEL_4cccbe;
    }
    v18 = v11->field_0;
    if (((v18 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v18) == 45 {
        v19 = -1;
        do {
            if v19 == 2 {
                return v13;
            }
        } while ((v16 = *((v11 + v15 + 1) as &i8) as u8 as u64, v17 = *((v15 + &g_429d2b) as &i8) as u8 as u64, v15 += 1, ((((v16 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v16 as u8) == ((((v17 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v17 as u8)));
        if v19 > 2 {
            return v13;
        }
    }
LABEL_4cccbe:
    if v12 <= 3 {
        if !(v12 == 3) {
            goto LABEL_4ccd61;
        }
        if v11 {
LABEL_4cccde:
            v22 = v11->field_0;
            if (((v22 - 65 & 4294967295 & 255 & 255) < 26) << 5 | v22) == 110 {
                v23 = 0;
                do {
                    if v23 == 2 {
                        return v13;
                    }
                } while ((v16 = *((v11 + v15 + 1) as &i8) as u8 as u64, v17 = *((v15 + &g_429d2b) as &i8) as u8 as u64, v15 += 1, ((((v16 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v16 as u8) == ((((v17 - 65 & 4294967295 & 255 & 255) < 26) as u8 as u64 << 5) as u8 | v17 as u8)));
                if &v23->padding_0[1] as &struct_1 <= 1 {
                    goto LABEL_4ccd61;
                }
            }
        }
    } else {
        if !(v11->field_3 < 192) {
            goto LABEL_4cccde;
        }
LABEL_4ccd61:
        v5 = v11;
        v6 = &(&v11->field_0)[v12];
        v7 = 0;
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v26 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 0);
        v13 = v13;
        if v26 {
            v26 = v26->field_8;
            if v26 as u32 == 45 || v26 as u32 == 43 {
                v27 = v4;
                if v27 {
                    v28 = v1;
                    v29 = v3;
                    if v28 > v29 + 1 {
                        v28 = 0;
                    }
                    v3 = v29 + -(v28) + 1;
                    v26 = v27 - 1;
                    v4 = v26;
                } else {
                    v26 = v5;
                    if v26 && v26 != v6 {
                        v30 = &v26->field_1;
                        v5 = v30;
                        v31 = v26->field_0;
                        if v31 < 0 {
                            v30 = &v26->field_2;
                            v5 = v30;
                            if v31 >= 224 {
                                v30 = &v26->field_3;
                                v5 = v30;
                                if v31 >= 240 {
                                    v30 = &v26->field_4;
                                    v5 = v30;
                                }
                            }
                        }
                        v7 += v30 - v26;
                    }
                }
            }
        }
        v9 = a1;
        v0 = v26 | -0x100 | 1;
        v32 = 0;
        loop {
            v33 = v1;
            v5 = v5;
            v7 = v7;
            v3 = v3;
            v4 = v4;
            loop {
                v32 = v32;
                v4 = v4;
                v3 = v3;
                v7 = v7;
                v5 = v5;
                do {
                    v37 = v34;
                    if v4 {
                        v40 = v3 + -(v38) + 1;
                        v3 = v40;
                        v4 = &v4->field_1;
                        v4 = v4;
                        v41 = *((v2 + v3 * 16 + 8) as &i32);
                        goto LABEL_4cce6a;
                    }
                    if !(v5) || !(v5 != v6) {
                        return v13;
                    }
                    v42 = &v5->field_1;
                    v5 = v42;
                    v43 = v5->field_0;
                    if v43 >= 0 {
LABEL_4ccea5:
                        v41 = v43;
                        goto LABEL_4ccf20;
                    }
                    v44 = v43 & 31;
                    v42 = &v5->field_2;
                    v5 = v42;
                    v45 = v5->field_1 & 63;
                    if (v43 & 255) <= 223 {
                        v41 = v44 * 64 | v45;
                        goto LABEL_4ccf20;
                    }
                    v42 = &v5->field_3;
                    v5 = v42;
                    v46 = v5->field_2 & 63 | v45 * 64;
                    if (v43 & 255) >= 240 {
                        v42 = &v5->field_4;
                        v5 = v42;
                        v43 = v5->field_3 & 63 | v46 * 64 | (v44 & 7) * 0x40000;
                        goto LABEL_4ccea5;
                    }
                    v41 = v46 | v44 * 0x1000;
LABEL_4ccf20:
                    v7 = v42 - v5 + v37;
                    v7 = v7;
LABEL_4cce6a:
                    v3 = v35;
                    v5 = v36;
                } while (v41 - 48 < 10);
                switch (v41) {
                case 46:
                    v47 = v32 | -0x100 | 1;
                    if !(!v32 as u8 & v0 as i8) {
                        return v13;
                    }
                    break;
                case 69: case 101:
                    if (v0 as i8 & 1) && (v48 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 0), v48) {
                        goto LABEL_4ccf8b;
                    } else {
                        goto LABEL_4cd12b;
                    }
                default:
LABEL_4cd12b:
                    return v13;
                }
LABEL_4ccf8b:
                v49 = v48->field_8;
                if v49 == 45 || v49 == 43 {
                    v50 = itertools::peek_nth::PeekNth<I>::peek_nth(&v1, 2);
                    if !v50 {
                        return v13;
                    } else if v50->field_8 - 48 <= 9 {
                        v51 = v4;
                        if v51 {
                            v52 = v1;
                            v53 = v3;
                            v0 = 0;
                            if v52 > v53 + 1 {
                                v52 = 0;
                            }
                            v3 = v53 + -(v52) + 1;
                            v4 = &v51->field_1;
                            break;
                        } else {
                            v54 = v5;
                            v0 = 0;
                            if v54 {
                                v0 = 0;
                                if v54 != v6 {
                                    v55 = &v54->field_1;
                                    v5 = v55;
                                    v56 = v54->field_0;
                                    if v56 < 0 {
                                        v55 = &v54->field_2;
                                        v5 = v55;
                                        if v56 >= 224 {
                                            v55 = &v54->field_3;
                                            v5 = v55;
                                            if v56 >= 240 {
                                                v55 = &v54->field_4;
                                                v5 = v55;
                                            }
                                        }
                                    }
                                    v7 += v55 - v54;
                                    v0 = 0;
                                    break;
                                }
                            }
                        }
                    } else {
                        return v13;
                    }
                } else {
                    v0 = 0;
                    if v49 - 48 < 10 {
                        break;
                    }
                }
            }
        }
    }
LABEL_4cd159:
    goto LABEL_4cd160;
}
