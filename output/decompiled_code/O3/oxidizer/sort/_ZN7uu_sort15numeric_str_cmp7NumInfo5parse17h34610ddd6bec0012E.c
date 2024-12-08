fn uu_sort::numeric_str_cmp::NumInfo::parse(a0: void*, a1: u32, a2: void*, a3: void*) -> u64 {
    let v1: void*;  // [sp-0x80], Other Possible Types: &struct_0
    let v2: u32;  // [sp-0x78]
    let v3: u32;  // [sp-0x74]
    let v4: &struct_0;  // [bp-0x70], Other Possible Types: u32
    let v5: u64;  // [sp-0x68]
    let v6: u64;  // [sp-0x60]
    let v7: void*;  // [sp-0x58]
    let v8: &struct_0;  // [sp-0x50]
    let v9: &struct_1;  // [sp-0x40]
    let v10: &struct_0;  // [sp-0x38]
    let v12: &struct_0;  // rbx
    let v13: &struct_1;  // r15
    let v15: u64;  // rdx
    let v16: u8;  // cl
    let v17: struct8;  // r12
    let v18: u64;  // r13
    let v19: u32;  // ecx
    let v20: u64;  // rax
    let v21: u64;  // r14
    let v22: void*;  // r15
    let v23: struct8;  // rax
    let v24: struct8;  // rax
    let v25: u64;  // rdx
    let v26: u64;  // rdx
    let v27: u64;  // rax
    let v28: u64;  // rsi
    let v43: u64;  // rdx
    let v44: &struct_0;  // rax
    let v45: &struct_0;  // rcx
    let v46: &struct_0;  // rbp
    let v47: u8;  // bpl
    let v48: u8;  // bpl
    let v49: u8;  // bpl
    let v50: u64;  // r14
    let v54: u64;  // rsi
    let v56: &struct_0;  // rcx
    let v57: &struct_0;  // r12
    let v58: u64;  // rcx
    let v59: &struct_0;  // r15
    let v60: u8;  // bpl
    let v61: u64;  // r14
    let v63: u64;  // rdx
    let v66: u8;  // cl
    let v67: u8;  // dl
    let v92: struct8;  // rax
    let v96: u64;  // rdx

    v12 = a3;
    v13 = a0;
    v5 = a1;
    v6 = a1 + a2;
    v7 = 0;
    if v15 == 0x110000 {
        v16 = 0;
    } else {
        v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(a1 + a2, a2);
        v18 = v15 & 4294967295;
        v19 = a3->field_0;
        v20 = a3->field_4;
        v3 = v20;
        v4 = v19;
        v10 = a3;
        if v20 != 0x110000 {
            v9 = a0;
            if v19 != 0x110000 {
                v2 = v2;
                v21 = -1;
                v8 = 0;
                v24 = 0;
                v1 = 0;
                v22 = 0;
            } else {
                v2 = v2;
                v21 = -1;
                v4 = 0;
                v23 = 0;
                v1 = 0;
                v22 = 0;
                loop {
                    v17 = v17;
                    v23 = v18 - 9 & 4294967295;
                    if !(v23 as u32 >= 5) || !(v18 != 32) {
                        goto LABEL_55ffa9;
                    }
                    if v18 <= 127 {
                        if !(v23 as u32 >= 5) || !(v18 != 32) {
                            goto LABEL_55ffcb;
                        }
                        v2 = 0;
                        goto LABEL_55ffa9;
                    } else {
                        v23 = core::unicode::unicode_data::white_space::lookup(v18 & 4294967295);
                        if !(v23 as u32 >= 5) || !(v18 != 32) {
                            goto LABEL_55ffa9;
                        }
                    }
LABEL_55ffcb:
                    if v18 == v3 {
                        if !(!(v4 as i8 & 1)) {
                            goto LABEL_0x56058e;
                        }
                        *(&v4 as &struct8) = v23 | -0x100 | 1;
                        goto LABEL_55ffa9;
                    }
                    if v18 - 58 < -10 {
                        goto LABEL_0x560551;
                    }
                    v44 = v22 - 1;
                    v45 = v4;
                    v46 = v45 & 4294967295;
                    v47 = v46 as u8 & 1;
                    v48 = v46 | -0x100 | v47;
                    if v18 != 48 || !v44 {
                        goto LABEL_560059;
                    } else {
                        if !v47 {
                            v1 = v44 | -0x100 | 1;
                        } else {
                            v50 = v21 - 1;
LABEL_560059:
                            v21 = (v49 ^ 1) + v50;
                            v22 = v18 != 48 | !v44;
                            v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v54, v50);
                            if v15 == 0x110000 {
                                goto LABEL_0x5604ee;
                            }
                            v18 = v15 & 4294967295;
                            loop {
                                v12 = v57;
                                if v18 == v3 {
                                    v1 = v56 | -0x100 | 1;
                                    if !(!v47) {
                                        goto LABEL_0x560591;
                                    }
                                    *(&v4 as &struct8) = v17 | -0x100 | 1;
                                    goto LABEL_55ffa9;
                                } else {
                                    v58 = v18 - 58 & 4294967295;
                                    if v58 < -10 {
                                        goto LABEL_0x560374;
                                    }
                                    v59 = v22 - 1;
                                    if !(v18 != 48 || !v59) {
                                        if v47 {
                                            v61 = v21 - 1;
                                        } else {
                                            v1 = v17 | -0x100 | 1;
                                            v22 = 0;
                                            goto LABEL_55ffa9;
                                        }
                                    }
                                    v63 = v61;
                                    v21 = (v60 ^ 1) + v63;
                                    v66 = !v59;
                                    v67 = v18 != 48;
                                    v22 = v67 | v66;
                                    v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v54, v63 | -0x100 | v67 | -0x100 | v67 | v66);
                                    v18 = v15 & 4294967295;
                                }
                            }
                        }
LABEL_55ffa9:
                        v23 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v54, v43);
                        v18 = v15 & 4294967295;
                    }
                }
            }
        } else if v19 != 0x110000 {
            v9 = a0;
            v2 = v20 | -0x100 | 1;
            v21 = -1;
            v1 = 0;
            v22 = 0;
        } else {
            v2 = v20 | -0x100 | 1;
            v1 = 0;
            do {
                v25 = v26;
                if false {
LABEL_55ff18:
                    v27 = v18 - 58 & 4294967295;
                    if v27 < -10 {
                        goto LABEL_0x5605d7;
                    }
                    if v18 == 48 {
                        v1 = v27 | -0x100 | 1;
                        goto LABEL_55fef9;
                    } else {
                        v92 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v28, v25);
                        if v15 == 0x110000 {
                            v21 = 0;
                        } else {
                            v18 = v15 & 4294967295;
                            v21 = 0;
                            if v18 - 58 < -10 {
LABEL_560589:
                            } else {
                                loop {
                                    v21 += 1;
                                    v92 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v28, v96);
                                    if v15 == 0x110000 {
                                        break;
                                    }
                                    v18 = v15 & 4294967295;
                                    if v18 - 58 < -10 {
                                        goto LABEL_560589;
                                    }
                                }
                            }
                        }
                    }
                }
                if !(v23 as u32 >= 5) || !(v18 != 32) {
                    goto LABEL_55fef9;
                }
                if v18 > 127 && (!(v23 as u32 >= 5) || !(v18 != 32)) {
                    goto LABEL_55fef9;
                }
                if !(v23 as u32 >= 5) || !(v18 != 32) {
                    goto LABEL_55ff18;
                }
                v2 = 0;
LABEL_55fef9:
                v17 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v28, v25);
                v18 = v15 & 4294967295;
            } while (v15 != 0x110000);
            v16 = v1 as u8;
        }
    }
}
