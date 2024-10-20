fn uu_cut::cut_fields_explicit_out_delim::{{closure}}(a0: &struct_0, a1: &struct_6, a2: &u8, a3: &u8) -> u64 {
    let v0: u8;  // [sp-0xc3]
    let v1: u8;  // [sp-0xc2]
    let v2: u8;  // [sp-0xc1]
    let v4: &u64;  // [sp-0xb8]
    let v5: &u8;  // [sp-0xb0]
    let v6: &u8;  // [sp-0xa8]
    let v7: u64;  // [sp-0xa0]
    let v8: &struct_5;  // [sp-0x98]
    let v9: &u8;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: u64;  // [sp-0x80]
    let v12: u64;  // [sp-0x78], Other Possible Types: &u8
    let v13: &u8;  // [sp-0x70]
    let v14: u64;  // [sp-0x68]
    let v15: u64;  // [sp-0x60]
    let v16: u64;  // [sp-0x58]
    let v17: u64;  // [sp-0x50]
    let v18: u64;  // [sp-0x48]
    let v19: u64;  // [sp-0x40]
    let v20: u64;  // [sp-0x38]
    let v22: &u8;  // rdx
    let v23: &u8;  // rcx
    let v24: &u8;  // r12
    let v25: &u8;  // r13
    let v26: u64;  // rdx
    let v27: u64;  // rdx
    let v28: &u8;  // rbp
    let v29: &u8;  // rbp
    let v30: &u8;  // rax
    let v31: u32;  // eax
    let v32: &struct_5;  // r14
    let v33: &u8;  // rbp
    let v34: &struct_1;  // rax
    let v35: u64;  // rcx
    let v36: &u64;  // r15
    let v37: u8;  // al
    let v38: &u8;  // r14
    let v41: &u8;  // rdx
    let v42: &u8;  // r12
    let v43: u64;  // rsi
    let v44: u64;  // rdi
    let v45: u64;  // rdi
    let v46: u64;  // rsi
    let v47: &u64;  // r15
    let v48: &u8;  // r8
    let v49: u64;  // r15
    let v50: void*;  // r14
    let v51: u64;  // r12
    let v52: u64;  // rax
    let v53: u64;  // rax
    let v54: &u8;  // rdx
    let v55: u32;  // ecx
    let v56: void*;  // r14
    let v57: u64;  // r12
    let v58: u64;  // rax
    let v59: u64;  // rax
    let v60: &u8;  // rdx
    let v61: u32;  // ecx
    let v62: &u8;  // r14
    let v63: u64;  // r14
    let v64: u64;  // rax
    let v65: &u8;  // rdx
    let v66: u64;  // rax
    let v67: u32;  // ecx
    let v70: &u8;  // rbp
    let v71: &u8;  // r8
    let v73: &u8;  // rbp
    let v74: &u8;  // r13
    let v75: &u8;  // rcx
    let v76: &u8;  // r14
    let v77: &u8;  // r14
    let v78: &u8;  // r12
    let v79: u64;  // rsi
    let v80: &u8;  // rax
    let v81: &u8;  // rax
    let v82: &u8;  // rdx
    let v83: u64;  // rsi
    let v84: &u8;  // rbp
    let v85: &u8;  // rbp
    let v86: u64;  // rsi
    let v87: u64;  // rdx
    let v88: &u8;  // rax
    let v89: u64;  // rcx
    let v90: u64;  // rax
    let v91: u64;  // rcx
    let v92: &u8;  // r14
    let v93: u64;  // r12
    let v94: u64;  // rsi
    let v95: u64;  // r13
    let v96: u64;  // r13
    let v97: &u8;  // rdx
    let v98: u32;  // eax
    let v99: u64;  // rsi
    let v100: u64;  // rdx
    let v101: &u8;  // rdx
    let v102: &struct_4;  // rax
    let v103: &struct_0;  // rcx
    let v104: &struct_0;  // rcx
    let v105: &struct_0;  // rcx

    v22 = a2;
    v23 = a3;
    v24 = a3;
    v25 = a2;
    a0 = a0;
    v10 = a3 + a2;
    if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
        if a1->field_8->field_0 {
            *(&a0->field_0 as &i16) = 0x100;
            return v30;
        }
        v32 = a1->field_10;
        v30 = v32->field_8->field_38();
        if v30 {
            a0->field_8 = v30;
            a0->field_0 = 1;
            return v30;
        }
        if v24 < 1 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v30 = a1->field_18->field_0;
        if *((v25 + v24 + 1) as &i8) != v1 {
            v1 = v30 as u8;
            v102 = v32->field_8;
            goto LABEL_48cd36;
        }
    } else {
        v27 = v26 - v25;
        v28 = v27 + 1;
        if v28 < v24 {
            loop {
                v31 = *((v25 + v28) as &i8);
                if v31 != 32 && v31 != 9 {
                    break;
                }
                v28 += 1;
            }
        }
        v33 = v29;
        v8 = a1->field_10;
        v34 = a1->field_20;
        v35 = v34->field_8;
        if !v35 {
            v9 = a1->field_18;
        } else {
            v19 = v27;
            v6 = v25;
            a0 = a0;
            v36 = v34->field_0;
            v20 = &v36[2 * v35];
            v9 = a1->field_18;
            v16 = a1->field_28;
            v15 = a1->field_30;
            v18 = v24 + 1;
            v37 = 0;
            v13 = v33;
            v38 = 1;
            v41 = 0;
            v5 = v24;
            loop {
                v12 = v41;
                v43 = *(v36);
                v44 = v36[1];
                v4 = v36;
                v14 = 1;
                v7 = v43;
                v11 = v44;
                if v43 != v14 {
                    v49 = ~(v14) + v43;
                    v25 = v6;
                    if (v37 & 1) {
                        if v49 {
                            v50 = 0;
                            loop {
                                v51 = v42 - v33;
                                if v42 < v33 {
                                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                                }
                                if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
                                    break;
                                }
                                v52 = v26 - (v25 + v33) + 1;
                                if v52 < v51 {
                                    v54 = v26 + 1;
                                    loop {
                                        v55 = *(v54);
                                        if v55 != 32 && v55 != 9 {
                                            break;
                                        }
                                        v52 += 1;
                                        v54 += 1;
                                    }
                                }
                                v33 = &v33[v53];
                                v50 += 1;
                                v42 = v5;
                                if v50 == v49 {
                                    goto LABEL_48c960;
                                }
                            }
                        }
                    } else {
                        if !v49 {
                            v38 = 2;
                            v45 = v11;
                            v46 = v7;
                            v47 = v4;
                            v48 = v13;
                        } else {
                            if v49 != 1 {
                                v56 = 0;
                                loop {
                                    v57 = v42 - v33;
                                    if v42 < v33 {
                                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                                    }
                                    if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
                                        break;
                                    }
                                    v58 = v26 - (v25 + v33) + 1;
                                    if v58 < v57 {
                                        v60 = v26 + 1;
                                        loop {
                                            v61 = *(v60);
                                            if v61 != 32 && v61 != 9 {
                                                break;
                                            }
                                            v58 += 1;
                                            v60 += 1;
                                        }
                                    }
                                    v33 = &v33[v59];
                                    v56 += 1;
                                    v42 = v5;
                                    if v56 == v49 - 1 {
                                        goto LABEL_48c960;
                                    }
                                }
                            }
LABEL_48c960:
                            v62 = v42;
                            v63 = v62 - v33;
                            if v62 < v33 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
                                break;
                            }
                            v64 = v26 - (v25 + v33) + 1;
                            if v64 >= v63 {
                                v11 = v11;
                                v7 = v7;
                            } else {
                                v65 = v26 + 1;
                                loop {
                                    v67 = *(v65);
                                    if v67 != 32 && (v11 = v11, v7 = v7, v67 != 9) {
                                        break;
                                    }
                                    v64 += 1;
                                    v65 += 1;
                                    if v64 >= v63 {
                                        v11 = v11;
                                        v7 = v7;
                                        break;
                                    }
                                }
                            }
                            v70 = &v33[v66];
                            v38 = 2;
                            v47 = v4;
                        }
                    }
                }
                v73 = v33;
                v17 = v45 - v46;
                v0 = v45 != v46;
                v74 = v25 | -0x100 | 1;
                v75 = v12;
                if (v75 as u8 & 1) && (v30 = v8->field_8->field_38() as u64, v74 = v75 & 4294967295, v30) {
LABEL_48cd64:
                    v103 = a0;
                    v103->field_8 = v30;
                    v103->field_0 = 1;
                    return v30;
                }
                if v38 != 2 {
                    v19 = v19;
                    v13 = v13;
                    goto LABEL_48cb0b;
                }
                v76 = v24;
                v77 = v76 - v73;
                if v76 < v73 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                v71 = v71;
                v12 = v6 + v73;
                if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
LABEL_48cc9b:
                    v24 = v78;
                    v101 = v24;
                    if v24 < v71 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v88 = v8->field_8->field_38();
                    if v88 {
                        vvar_1400{reg 24} = a0;
                        v104->field_8 = v88;
                        v104->field_0 = 1;
                        return v30;
                    } else if !v24 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    } else {
                        v90 = *((v6 + v24 - 1) as &i8);
                        if v90 == *(v9) {
                            v105 = a0;
                            v105->padding_1[0] = 1;
                            v105->field_0 = 0;
                            return 0;
                        }
                    }
                    goto LABEL_48cce9;
                } else {
                    v79 = v26 - v12;
                    v80 = v79 + 1;
                    if v80 < v77 {
                        v82 = v26 + 1;
                        loop {
                            v75 = *(v82);
                            if v75 as u32 != 32 && v75 as u32 != 9 {
                                break;
                            }
                            v80 += 1;
                            v82 += 1;
                        }
                    }
                    v83 = &v73[v79];
                    v84 = v73 + v81;
LABEL_48cb0b:
                    v71 = v13;
                    v85 = v73;
                    v86 = v19;
                    v87 = v86;
                    if v86 < v71 {
                        core::slice::index::slice_index_order_fail(); /* do not return */
                    }
                    if v86 > v24 {
                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                    }
                    v88 = v8->field_8->field_38();
                    if v88 {
                        v104 = a0;
                        v104->field_8 = v88;
                        v30 = v88 | -0x100 | 1;
                        v104->field_0 = 1;
                        return v30;
                    }
                    v89 = v11;
                    v90 = v89 + 1;
                    v14 = v90;
                    if v89 != v7 && (v91 = -0x100 | v0 as u64, v90 = v17, v90 >= v91) {
                        v73 = v85;
                        v7 = v91;
                        v91 += v91 < v90;
                        v92 = v77 | -0x100 | 1;
                        if (v30 = v8->field_8->field_38() as u64, v92 = v74 & 4294967295, v30) {
                            goto LABEL_48cd64;
                        }
                        v93 = v24 - v73;
                        if v24 < v73 {
                            core::slice::index::slice_start_index_len_fail(); /* do not return */
                        }
                        if !_ZN6memchr4arch6x86_646memchr11memchr2_raw2FN17hf57128d13a3de6c5E() {
                            v74 = v92 & 4294967295;
                            v4 = v4;
                            v78 = v5;
                            goto LABEL_48cc9b;
                        } else {
                            v94 = v26 - (v6 + v73);
                            v95 = v94 + 1;
                            if v95 < v93 {
                                v97 = v26 + 1;
                                loop {
                                    v98 = *(v97);
                                    if v98 != 32 && v98 != 9 {
                                        break;
                                    }
                                    v95 += 1;
                                    v97 += 1;
                                }
                            }
                            v99 = &v73[v94];
                            v100 = v99;
                            v24 = v5;
                            if v99 < v71 {
                                core::slice::index::slice_index_order_fail(); /* do not return */
                            }
                            if v99 > v24 {
                                core::slice::index::slice_end_index_len_fail(); /* do not return */
                            }
                            v88 = v8->field_8->field_38();
                            if v88 {
                                vvar_1406{reg 24} = a0;
                                v104->field_8 = v88;
                                v104->field_0 = 1;
                                return v30;
                            }
                            v71 = &v73[v96];
                            v90 = v17;
                            if !(v7 >= v90) && !((v74 = v92 & 4294967295, v91 > v90)) {
                                continue;
                            }
                            v74 = v92 & 4294967295;
                        }
                    }
LABEL_48cce9:
                    v36 = v4 + 2;
                    v38 = 2;
                    v37 = v90 | -0x100 | 1;
                    v41 = v74 & 4294967295;
                    if v36 == v20 {
                        break;
                    }
                }
            }
        }
        v2 = *(v9);
        v102 = v8->field_8;
LABEL_48cd36:
        v30 = v102->field_38();
        if v30 {
            a0->field_8 = v30;
            a0->field_0 = 1;
            return v30;
        }
    }
    *(&a0->field_0 as &i16) = 0x100;
    return v30;
}
