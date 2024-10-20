fn uu_join::State::combine(a0: &struct_2, a1: &u64, a2: &struct_2, a3: &struct_1) -> u64 {
    let v0: u8;  // [sp-0xd9]
    let v1: void*;  // [sp-0xd8]
    let v2: u64;  // [sp-0xd0]
    let v3: u64;  // [sp-0xc8]
    let v4: u8;  // [bp-0xb8]
    let v5: u8;  // [bp-0xb0]
    let v6: u64;  // [sp-0xa8]
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98]
    let v9: &struct_0;  // [sp-0x90]
    let v10: u64;  // [sp-0x88]
    let v11: u64;  // [sp-0x70]
    let v12: u64;  // [sp-0x68]
    let v13: &struct_3;  // [sp-0x60]
    let v14: u8;  // [bp-0x58]
    let v15: &struct_2;  // [sp-0x50]
    let v16: u64;  // [sp-0x48]
    let v17: &struct_2;  // [sp-0x40]
    let v18: u64;  // [sp-0x38]
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: &struct_1;  // r15
    let v23: void*;  // rax
    let v24: u64;  // rdx
    let v25: &struct_0;  // rsi
    let v26: u64;  // rdi
    let v27: &struct_2;  // 4096
    let v28: &struct_2;  // 4096
    let v31: u64;  // rcx
    let v32: &struct_0;  // rsi
    let v33: u64;  // rdx
    let v34: u64;  // rcx
    let v35: &struct_2;  // rbp
    let v36: &struct_2;  // r14
    let v37: u64;  // r8
    let v41: u8;  // al
    let v42: u64;  // rsi
    let v48: u64;  // rsi
    let v49: u64;  // rsi
    let v50: &struct_1;  // r15
    let v51: &u8;  // r12
    let v53: &struct_3;  // rbp
    let v54: u64;  // r12
    let v55: &u8;  // rax
    let v58: void*;  // rax
    let v59: void*;  // rax
    let v60: &struct_1;  // r15
    let v63: u64;  // rsi
    let v64: &u8;  // r14
    let v67: u8;  // dl
    let v68: &u8;  // rax
    let v69: u64;  // r12
    let v70: void*;  // rbp
    let v72: &struct_1;  // r15
    let v74: &struct_1;  // r13
    let v75: u64;  // rsi
    let v76: &u8;  // r14
    let v77: u8;  // dl
    let v78: &u8;  // rax

    v3 = uu_join::State::get_current_key(a0);
    v20 = a0->field_10;
    if !v20 {
        return 0;
    }
    v1 = a0->field_8;
    v8 = v20 * 48 + v1;
    v21 = a2->field_10;
    v7 = a3->field_18;
    v22 = a3->field_20;
    v0 = a3->field_28;
    v6 = a3->field_10;
    v12 = a2->field_8;
    if v6 {
        v24 = v21 * 48 + v12;
        v25 = a3->field_8;
        v5 = a0->field_58;
        v4 = a2->field_58;
        v13 = v25 + 1;
        v26 = &v3;
        v10 = v24;
        v9 = v25;
        do {
            v31 = v1;
            v1 = v31 + 48;
            v11 = v31;
            v12 = v12;
            loop {
                v37 = v12;
                v24 = v33;
                v25 = v32;
                if v37 == v24 {
                    break;
                }
                v14 = v26;
                v15 = v35;
                v16 = v34;
                v17 = v36;
                v18 = v37;
                v2 = v37;
                if !vvar_617 {
                    v3 = v3;
                } else {
                    v41 = v25->field_1;
                    v42 = v25->field_8;
                    v16 = v16;
                    if v41 == v5 || v41 == v4 {
                    }
                }
                v48 = v3;
                if !v48 {
                    v7 = v7;
                }
                v49 = v7;
                a3 = v50;
                v51 = a1[2];
                if *(a1) - v51 > a3 {
                    memcpy(&v51[a1[1]], v49, a3);
                    *(&a1[2] as &unsigned long) = v51 + a3;
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v49, a3);
                    if v23 {
                        return v23;
                    }
                }
                v2 += 48;
                v13 = v13;
                v6 = v6;
                loop {
                    v53 = v13;
                    v54 = v6 - 1;
                    if v6 == 1 {
                        break;
                    }
                    v55 = a1[2];
                    if *(a1) - v55 >= 2 {
                        v55[a1[1]] = 32;
                        a1[2] = v55 + 1;
                    } else {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &g_4122cd, 1);
                        if v23 {
                            return v23;
                        }
                    }
                    if !v53->field_0 {
                        v59 = v3;
                        v7 = v7;
                        if !v59 {
                            goto LABEL_43f61d;
                        }
                    } else {
                        v58 = 16;
                        if !(v53->field_1 != v5) || !((v58 = 32, v53->field_1 != v4)) {
                            v59 = uu_join::Line::get_field(*((&v14 + v58) as &i64), v53->field_8);
                            v7 = v7;
                            if !v59 {
                                goto LABEL_43f61d;
                            }
                        } else {
                            v59 = 0;
                            v7 = v7;
                            if !0 {
                                goto LABEL_43f61d;
                            }
                        }
                    }
LABEL_43f61d:
                    a3 = v60;
                    v63 = v7;
                    v64 = a1[2];
                    if *(a1) - v64 > a3 {
                        memcpy(&v64[a1[1]], v63, a3);
                        *(&a1[2] as &unsigned long) = v64 + a3;
                    } else {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v63, a3);
                        if v23 {
                            return v23;
                        }
                    }
                }
                v67 = v0;
                v14 = v67;
                v68 = a1[2];
                if *(a1) - v68 > 1 {
                    v68[a1[1]] = v67;
                    a1[2] = v68 + 1;
                    v23 = 0;
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v14, 1);
                }
                v26 = &v3;
                v32 = v9;
                v33 = v10;
                v34 = v11;
                v12 = v2;
                if v23 {
                    return v23;
                }
            }
            v27 = v15;
            v28 = v17;
        } while (v1 != v8);
        return 0;
    } else {
        v5 = a0->field_40;
        v4 = a2->field_40;
        v2 = v21 * 48;
        do {
            v6 = v1 + 48;
            v12 = v12;
            v2 = v2;
            loop {
                v69 = v2;
                v70 = v12;
                if !v69 {
                    break;
                }
                v7 = v7;
                v74 = v72;
                v75 = v7;
                v76 = a1[2];
                if *(a1) - v76 > v74 {
                    memcpy(&v76[a1[1]], v75, v74);
                    *(&a1[2] as &unsigned long) = v76 + v74;
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v75, v74);
                    if v23 {
                        return v23;
                    }
                }
                v23 = uu_join::Repr<Sep>::print_fields(a1, v1, v5);
                if v23 {
                    return v23;
                }
                v23 = uu_join::Repr<Sep>::print_fields(a1, v70, v4);
                if v23 {
                    return v23;
                }
                v77 = v0;
                v14 = v77;
                v78 = a1[2];
                if *(a1) - v78 > 1 {
                    v78[a1[1]] = v77;
                    a1[2] = v78 + 1;
                    v23 = 0;
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v14, 1);
                }
                if v23 {
                    return v23;
                }
            }
            v1 = v6;
        } while (v1 != v8);
        return 0;
    }
}
