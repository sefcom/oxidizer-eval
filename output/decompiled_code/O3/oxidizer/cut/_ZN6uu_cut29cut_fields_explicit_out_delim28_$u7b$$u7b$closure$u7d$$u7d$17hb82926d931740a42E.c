fn uu_cut::cut_fields_explicit_out_delim::{{closure}}(a0: &struct_0, a1: &struct_6, a2: &u8, a3: u64) -> u64 {
    let v0: u8;  // [sp-0xd9]
    let v1: u64;  // [sp-0xd8]
    let v3: u8;  // [bp-0xc8]
    let v4: i8;  // [bp-0xc0]
    let v5: i8;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0], Other Possible Types: &u8
    let v7: &u64;  // [sp-0xa8]
    let v8: &u8;  // [sp-0xa0]
    let v9: u64;  // [sp-0x98]
    let v10: &struct_3;  // [sp-0x90]
    let v11: &u8;  // [sp-0x88]
    let v13: u64;  // [sp-0x78]
    let v14: u64;  // [sp-0x70]
    let v15: u64;  // [sp-0x68]
    let v16: u64;  // [sp-0x60]
    let v17: u64;  // [sp-0x58]
    let v18: u64;  // [sp-0x50]
    let v19: u64;  // [sp-0x48]
    let v20: u64;  // [sp-0x40]
    let v21: u64;  // [sp-0x38]
    let v23: &u8;  // rdx
    let v24: u64;  // rcx
    let v25: u64;  // r12
    let v26: &u8;  // rbp
    let v27: u64;  // r14
    let v28: u64;  // rsi
    let v29: &struct_4;  // rax
    let v30: u64;  // rcx
    let v31: &u8;  // rax
    let v32: u64;  // r13
    let v33: &u64;  // r15
    let v34: u64;  // rbx
    let v35: u8;  // al
    let v36: &u8;  // rcx
    let v37: void*;  // r8
    let v38: &u8;  // rdi
    let v39: u64;  // r12
    let v40: &struct_3;  // r14
    let v41: u64;  // r12
    let v42: u64;  // rdx
    let v43: u64;  // rdx
    let v44: u64;  // r8
    let v45: u64;  // rbx
    let v46: u64;  // rbx
    let v47: u64;  // rcx
    let v50: u64;  // rbx
    let v51: u64;  // rcx
    let v53: u64;  // rcx
    let v54: u64;  // rsi
    let v55: u64;  // r13
    let v56: u64;  // r8
    let v57: u64;  // rax
    let v58: u32;  // r12d
    let v59: u64;  // rcx
    let v60: u64;  // rsi
    let v61: u64;  // r13
    let v62: u64;  // r13
    let v63: &u8;  // rbp
    let v64: u64;  // r14
    let v65: u64;  // rsi
    let v66: u64;  // rdx
    let v67: &u8;  // rbp
    let v68: &u8;  // rax
    let v69: u64;  // rax
    let v70: &u8;  // rbp
    let v71: u64;  // r15
    let v72: u64;  // r15
    let v73: u64;  // r14
    let v74: u64;  // rcx
    let v75: u64;  // rcx
    let v76: u64;  // rsi
    let v77: u64;  // rsi
    let v78: u64;  // rdx
    let v80: &u8;  // rbp
    let v81: u64;  // rdx
    let v82: u64;  // rax
    let v83: &u64;  // r15
    let v84: &struct_0;  // rcx
    let v85: &struct_0;  // rcx
    let v86: &struct_0;  // rcx
    let v87: &struct_2;  // rax

    v23 = a2;
    v24 = a3;
    v25 = a3;
    v26 = a2;
    a0 = a0;
    v27 = a1->field_0;
    v28 = v27;
    <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v27, a2, a3);
    if !*(&v3 as &i64) {
        if a1->field_8->field_0 {
            *(&a0->field_0 as &i16) = 0x100;
            return v31;
        }
        v40 = a1->field_10;
        v31 = v40->field_8->field_38();
        if v31 {
            a0->field_8 = v31;
            a0->field_0 = 1;
            return v31;
        }
        if v25 < 1 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v31 = a1->field_18->field_0;
        if v26[1 + v25] != v3 {
            v3 = v31 as u8;
            v87 = v40->field_8;
            goto LABEL_48d3a2;
        }
    } else {
        v10 = a1->field_10;
        v29 = a1->field_20;
        v30 = v29->field_8;
        if !v30 {
            v11 = a1->field_18;
        } else {
            a0 = a0;
            v20 = v4;
            v32 = v5;
            v33 = v29->field_0;
            v21 = &v33[2 * v30];
            v11 = a1->field_18;
            v16 = a1->field_28;
            v15 = a1->field_30;
            v19 = v25 - 1;
            v34 = 1;
            v35 = 0;
            v13 = v32;
            v36 = 1;
            v37 = 0;
            v38 = 0;
            v1 = v25;
            v8 = v26;
            v9 = v27;
            loop {
                v41 = v39;
                v42 = *(v33);
                v17 = v33[1];
                v36 = v36;
                v14 = v42;
                if v42 == v36 {
                    v7 = v33;
                    goto LABEL_48d0d0;
                }
                v45 = &(~(v36))[v42];
                if (v35 & 1) {
                    v38 = v38;
                    if v45 {
                        loop {
                            v46 = v45;
                            v47 = v41;
                            if v47 < v32 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v27, &v26[v32], v47 - v32);
                            if !*(&v3 as &i64) {
                                break;
                            }
                            v32 += v5;
                            if v46 == 1 {
                                goto LABEL_48d076;
                            }
                        }
                    }
                }
                if !v45 {
                    v7 = v33;
                    v34 = 2;
                    v44 = v13;
                } else {
                    v38 = v38;
                    if v45 != 1 {
                        loop {
                            v50 = v45 - 1;
                            v51 = v41;
                            if v51 < v32 {
                                core::slice::index::slice_start_index_len_fail(); /* do not return */
                            }
                            <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v27, &v26[v32], v51 - v32);
                            if !*(&v3 as &i64) {
                                break;
                            }
                            v32 += v5;
                            if v50 == 1 {
                                goto LABEL_48d076;
                            }
                        }
                    }
LABEL_48d076:
                    v53 = v41;
                    if v53 < v32 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v54 = v27;
                    <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v27, &v26[v32], v53 - v32);
                    if !*(&v3 as &i64) {
                        break;
                    }
                    v7 = v33;
                    v55 = v32 + v5;
                    v34 = 2;
                    v43 = v14;
                }
LABEL_48d0d0:
                v32 = v32;
                v57 = v17;
                v18 = v57 - v43;
                v0 = v57 != v43;
                v58 = v41 | -0x100 | 1;
                if (v38 as u8 & 1) && (v6 = v38, v31 = v10->field_8->field_38() as u64, v36 = v6, v58 = v36 as u32, v31) {
LABEL_48d3d5:
                    v84 = a0;
                    v84->field_8 = v31;
                    v84->field_0 = 1;
                    return v31;
                }
                if v34 != 2 {
                    v20 = v20;
                    v13 = v13;
                    v6 = v6;
                    goto LABEL_48d19d;
                }
                v6 = v56;
                v59 = v1;
                if v59 < v32 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v27, &v26[v32], v59 - v32);
                if !*(&v3 as &i64) {
                    v6 = v6;
                    goto LABEL_48d320;
                }
                v60 = v4 + v32;
                v61 = v32 + v5;
                v6 = v6;
LABEL_48d19d:
                v37 = v13;
                v32 = v62;
                v65 = v20;
                v66 = v65;
                if v65 < v6 {
                    core::slice::index::slice_index_order_fail(); /* do not return */
                }
                if v65 > v1 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
                v67 = v8;
                v68 = v10->field_8->field_38();
                if v68 {
                    v85 = a0;
                    v85->field_8 = v68;
                    v31 = v68 | -0x100 | 1;
                    v85->field_0 = 1;
                    return v31;
                }
                v69 = v17;
                v36 = v69 + 1;
                if v69 == v14 {
                    v9 = v9;
                    continue;
                }
                v36 = v36;
                v71 = -0x100 | v0;
                v69 = v18;
                if v69 < v71 {
                    goto LABEL_48d2f0;
                }
                v32 = v32;
                v72 = v71;
                v73 = v72 + (v72 < v69);
                v67 = v67 | -0x100 | 1;
                if (v31 = v10->field_8->field_38() as u64, v67 = v58 as u64, v31) {
                    goto LABEL_48d3d5;
                }
                v74 = v1;
                v75 = v74 - v32;
                if v74 < v32 {
                    core::slice::index::slice_start_index_len_fail(); /* do not return */
                }
                v76 = v9;
                <uu_cut::matcher::ExactMatcher as uu_cut::matcher::Matcher>::next_match(&v3, v9, &v8[v32], v74 - v32);
                if *(&v3 as &i64) {
                    v77 = v4 + v32;
                    v78 = v77;
                    if v77 < v37 {
                        core::slice::index::slice_index_order_fail(); /* do not return */
                    }
                    if v77 > v74 {
                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                    }
                    v37 = v32 + v5;
                    v68 = v10->field_8->field_38();
                    if v68 {
                        vvar_1094{reg 24} = a0;
                        v85->field_8 = v68;
                        v85->field_0 = 1;
                        return v31;
                    }
                    v69 = v18;
                    if !(v72 >= v69) && !((v58 = v67 as u32, v73 > v69)) {
                        continue;
                    }
                    v58 = v67 as u32;
                } else {
                    v58 = v67 as u32;
                    v63 = v8;
                    v64 = v9;
LABEL_48d320:
                    v80 = v63;
                    v37 = v6;
                    v81 = v1;
                    if v1 < v37 {
                        core::slice::index::slice_start_index_len_fail(); /* do not return */
                    }
                    v68 = v10->field_8->field_38();
                    if v68 {
                        vvar_1088{reg 24} = a0;
                        v85->field_8 = v68;
                        v85->field_0 = 1;
                        return v31;
                    }
                    v82 = v1;
                    if !v82 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v69 = v80[1 + v82];
                    if v69 == *(v11) {
                        v86 = a0;
                        v86->padding_1[0] = 1;
                        v86->field_0 = 0;
                        return 0;
                    }
                }
LABEL_48d2f0:
                v70 = v8;
                v9 = v9;
                v33 = v83 + 2;
                v34 = 2;
                v35 = v69 | -0x100 | 1;
                v38 = v58;
                v39 = v1;
                if v33 == v21 {
                    break;
                }
            }
        }
        v3 = *(v11);
        v87 = v10->field_8;
LABEL_48d3a2:
        v31 = v87->field_38();
        if v31 {
            a0->field_8 = v31;
            a0->field_0 = 1;
            return v31;
        }
    }
    *(&a0->field_0 as &i16) = 0x100;
    return v31;
}
