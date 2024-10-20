fn uu_df::columns::Column::from_matches(a0: &u64, a1: void*) -> u64 {
    let v0: &struct_3;  // [sp-0xe0]
    let v1: void*;  // [sp-0xd8], Other Possible Types: struct16
    let v2: u64;  // [sp-0xd0], Other Possible Types: &u64
    let v3: &u64;  // [sp-0xc8], Other Possible Types: u64
    let v4: u64;  // [sp-0xc0]
    let v5: u64;  // [sp-0xb8]
    let v6: &u64;  // [sp-0xb0]
    let v7: void*;  // [sp-0xa8], Other Possible Types: struct32, u64, struct16
    let v8: &u8;  // [sp-0xa0], Other Possible Types: u64
    let v9: &u8;  // [sp-0x98], Other Possible Types: u64
    let v10: u64;  // [sp-0x90]
    let v11: void*;  // [sp-0x88]
    let v12: u64;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v15: u64;  // [sp-0x60]
    let v16: u64;  // [sp-0x58]
    let v17: u64;  // [sp-0x50]
    let v18: u64;  // [sp-0x48]
    let v19: u64;  // [sp-0x40]
    let v20: u64;  // [sp-0x38]
    let v22: u8;  // bpl
    let v23: u8;  // al
    let v24: u64;  // rcx
    let v25: &&struct_0;  // rdx
    let v26: u64;  // rcx
    let v27: &struct_2;  // r8
    let v28: &&struct_0;  // rsi
    let v29: void*;  // rdi
    let v30: &struct_0;  // r9
    let v31: u64;  // rsi
    let v32: &struct_2;  // r15
    let v33: u8;  // dil
    let v34: &struct_4;  // rax
    let v35: &struct_0;  // rax
    let v36: &&struct_0;  // rax
    let v37: void*;  // rdi
    let v38: &struct_0;  // r8
    let v39: u64;  // r14
    let v40: u64;  // rax
    let v41: u64;  // rdx
    let v42: &struct_1;  // r12
    let v43: &u8;  // r13
    let v44: void*;  // rdi
    let v46: u64;  // r14
    let v47: &struct_7;  // rax
    let v48: u64;  // r15
    let v49: void*;  // rbp
    let v50: void*;  // r14
    let v51: &struct_3;  // r13
    let v52: &u64;  // rbp
    let v53: &u64;  // rcx
    let v54: &u64;  // rax
    let v55: u32;  // eax
    let v56: u32;  // ecx
    let v57: &u8;  // r13
    let v59: u64;  // r14

    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.5f995df778c88d2f993662794f843320.15.llvm.13646445757275454229, 10) as i32;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.5f995df778c88d2f993662794f843320.6.llvm.13646445757275454229, 6) as i8;
    v24 = a1->field_10;
    if !v24 {
LABEL_49ad18:
        if v22 {
            if !(!v23) {
                goto LABEL_49ad25;
            }
LABEL_49adc2:
            v34 = __rust_alloc(7, 1);
            v34->field_0 = 0x2010b00;
            v34->field_4 = 1027;
            goto LABEL_49adf1;
        } else {
            if !(!v23) {
                goto LABEL_49ad61;
            }
LABEL_49aee7:
            v35 = __rust_alloc(6, 1);
            v35->field_0 = 0x3020100;
            v35->field_4 = 1284;
LABEL_49af16:
            a0[1] = 6;
            a0[2] = v35;
            a0[3] = 6;
        }
    } else {
        v25 = a1->field_8;
        v26 = v24 * 16;
        v27 = 97;
        v28 = 0;
        v29 = 0;
        while (!(*((v25 + v28 + 8) as &i64) == 6) || !(!(v30->field_4 ^ 29813)) || !(!(v30->field_0 ^ 1886680431))) {
            v28 += 2;
            v27 = &v27[1].padding_1[31];
            v29 += 1;
            if v26 == v28 {
                goto LABEL_49ad18;
            }
        }
        v31 = a1->field_28;
        if v29 >= v31 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v32 = a1->field_20;
        v33 = *((v32 + v27) as &i8);
        if v33 == 3 {
            goto LABEL_49ad18;
        }
        if !v22 {
            if !v23 {
                if v33 == 2 {
                    v36 = 0;
                    v37 = 0;
                    while (*((v25 + v36 + 8) as &i64) != 6 || (v38 = *((v25 + v36) as &i64), !(!(v38->field_4 ^ 29813)) || !(!(v38->field_0 ^ 1886680431)))) {
                        v36 += 2;
                        v32 = &v32[1].padding_1[31];
                        v37 += 1;
                        if v26 == v36 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                    }
                    if v37 >= v31 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v39 = 15398537441398644645;
                    v40 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v32, 9479156756246622757);
                    if !(v40 == 9479156756246622757 && v41 == 15398537441398644645) {
                        v15 = &anon.5f995df778c88d2f993662794f843320.10.llvm.13646445757275454229;
                        v16 = 6;
                        v1 = 0;
                        v2 = v40;
                        v3 = v41;
                        v4 = 9479156756246622757;
                        v5 = 15398537441398644645;
                        v17 = &v15;
                        v18 = <&T as core::fmt::Display>::fmt;
                        v19 = &v1;
                        v20 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                        v7 = "Mismatch between definition and access of `";
                        v8 = 2;
                        v11 = 0;
                        v9 = &v17;
                        v10 = 2;
                        v7 = core::panicking::panic_fmt();
                    }
                    v42 = v32->field_38;
                    v1 = 0;
                    v2 = 8;
                    v3 = 0;
                    v7 = 0;
                    v8 = 1;
                    v43 = 0;
                    v44 = 0;
                    v12 = &(&v42->field_-10)[3 * v32->field_40];
                    v12 = v12;
                    loop {
                        v9 = v43;
                        if !(v44) || !(v44 != v39) {
                            do {
                                if !v42 || v42 == v12 {
                                    a0[3] = v9;
                                    *(&a0[1] as &i128) = *(&v7 as &i128);
                                    *(a0) = 0;
                                    goto LABEL_49b27c;
                                }
                            } while ((v46 = *(&v42->padding_-8[8] as &i64), v42 += 24, !v46));
                            v44 = *(&v42->padding_-8[8] as &i64);
                            v39 = v46 * 32 + v44;
                        }
                        v13 = v44;
                        v47 = clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}}(v13);
                        v39 = v39;
                        v0 = v47->field_8;
                        v48 = v47->field_10;
                        v49 = v2;
                        v6 = v3;
                        if v6 {
                            v50 = 0;
                            do {
                                if v48 == *((v49 + v50 + 8) as &i64) && !bcmp(*((v49 + v50) as &i64), v0, v48) as i64 {
                                    memcpy(v59, v0, v48);
                                    a0[1] = v48;
                                    a0[2] = v59;
                                    a0[3] = v48;
                                    *(a0) = 1;
                                    goto LABEL_49b27c;
                                }
                            } while ((v46 = *(&v42->padding_-8[8] as &i64), v42 += 24, !v46));
                        }
                        v51 = v0;
                        if v6 == v1 {
                            v1 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            v52 = v2;
                        }
                        v53 = v6;
                        v54 = v53 * 16;
                        *((v52 + v54) as &&struct_3) = v51;
                        *((v52 + v54 + 8) as &u64) = v48;
                        v3 = v53 as &char + 1;
                        if v48 == 4 {
                            switch (v51->field_0) {
                            case 1684370293:
                                break;
                            case 1701603686:
LABEL_49b1bf:
                                v57 = v9;
                                if v57 == v7 {
                                    v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                }
                                v44 = v13 + 32;
                                *((v8 + v57) as &i8) = 1;
                                v43 = v57 + 1;
                                v12 = v12;
                                continue;
                            default:
LABEL_49b3bc:
                                core::result::unwrap_failed(); /* do not return */
                            }
                        } else {
                            if v48 != 5 {
                                if v48 != 6 {
                                    core::result::unwrap_failed(); /* do not return */
                                }
                                if !(*(&v51->field_4 as &i16) ^ 25955) && !(v51->field_0 ^ 1920298867) {
                                    goto LABEL_49b1bf;
                                } else {
                                    if !(*(&v51->field_4 as &i16) ^ 25968) && !(v51->field_0 ^ 2037674854) {
                                        goto LABEL_49b1bf;
                                    } else {
                                        if !(*(&v51->field_4 as &i16) ^ 27745) && !(v51->field_0 ^ 1953461353) {
                                            goto LABEL_49b1bf;
                                        } else {
                                            if !(*(&v51->field_4 as &i16) ^ 27753) && !(v51->field_0 ^ 1635148137) {
                                                goto LABEL_49b1bf;
                                            } else {
                                                if !(*(&v51->field_4 as &i16) ^ 29806) && !(v51->field_0 ^ 1701015657) {
                                                    goto LABEL_49b1bf;
                                                } else {
                                                    v55 = v51->field_0 ^ 1735549300;
                                                    v56 = *(&v51->field_4 as &i16) ^ 29797;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if !(v51->field_4 ^ 100) && !(v51->field_0 ^ 1702065513) {
                                goto LABEL_49b1bf;
                            } else if !(v51->field_4 ^ 108) && !(v51->field_0 ^ 1767994977) {
                                goto LABEL_49b1bf;
                            } else {
                                v55 = v51->field_0 ^ 1852138352;
                                v56 = v51->field_4 ^ 116;
                            }
                            if !v56 && !v55 {
                                goto LABEL_49b1bf;
                            } else {
                                goto LABEL_49b3bc;
                            }
                        }
                    }
LABEL_49b27c:
                    if v1 {
                        return a0;
                    }
                    return a0;
                }
                goto LABEL_49aee7;
            } else {
                if v33 == 2 {
                    core::panicking::panic(); /* do not return */
                }
LABEL_49ad61:
                v35 = __rust_alloc(6, 1);
                v35->field_0 = 0x8070600;
                v35->field_4 = 1289;
                goto LABEL_49af16;
            }
        } else {
            if !v23 {
                if v33 == 2 {
                    core::panicking::panic(); /* do not return */
                }
                goto LABEL_49adc2;
            } else {
                if v33 == 2 {
                    core::panicking::panic(); /* do not return */
                }
LABEL_49ad25:
                v34 = __rust_alloc(7, 1);
                v34->field_0 = 0x7060b00;
                v34->field_4 = 2312;
            }
        }
LABEL_49adf1:
        v34->field_6 = 5;
        a0[1] = 7;
        a0[2] = v34;
        a0[3] = 7;
    }
    *(a0) = 0;
    return a0;
}
