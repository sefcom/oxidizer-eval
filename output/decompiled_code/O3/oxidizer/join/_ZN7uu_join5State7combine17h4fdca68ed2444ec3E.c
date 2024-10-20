fn uu_join::State::combine(a0: &struct_0, a1: &u64, a2: &struct_0, a3: &struct_3) -> u64 {
    let v0: u8;  // [sp-0xe9]
    let v1: void*;  // [sp-0xe8]
    let v2: u64;  // [sp-0xe0]
    let v3: u64;  // [sp-0xd8]
    let v4: u8;  // [bp-0xc8]
    let v5: u8;  // [bp-0xc0]
    let v6: u64;  // [sp-0xb8]
    let v7: u64;  // [sp-0xb0]
    let v8: u64;  // [sp-0xa8]
    let v9: u64;  // [sp-0xa0]
    let v10: &struct_1;  // [sp-0x98]
    let v11: u64;  // [sp-0x90]
    let v12: u64;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v14: &struct_2;  // [sp-0x60]
    let v15: u8;  // [bp-0x58]
    let v16: &struct_0;  // [sp-0x50]
    let v17: u64;  // [sp-0x48]
    let v18: &struct_0;  // [sp-0x40]
    let v19: u64;  // [sp-0x38]
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: void*;  // rax
    let v24: u64;  // rdx
    let v25: &struct_1;  // rsi
    let v26: u8;  // bl
    let v27: u64;  // rdi
    let v28: &struct_0;  // 4096
    let v29: &struct_0;  // 4096
    let v32: u64;  // rbp
    let v33: u64;  // rcx
    let v34: &struct_1;  // rsi
    let v35: u64;  // rdx
    let v36: u64;  // rcx
    let v37: &struct_0;  // r15
    let v38: &struct_0;  // r12
    let v39: u64;  // r8
    let v43: u8;  // al
    let v44: u64;  // rsi
    let v50: u64;  // rsi
    let v51: u64;  // rsi
    let v52: u64;  // rbp
    let v53: &u8;  // r15
    let v55: &struct_2;  // r12
    let v56: &u8;  // rax
    let v59: void*;  // rax
    let v60: void*;  // rax
    let v63: u64;  // r15
    let v64: u64;  // rsi
    let v65: &u8;  // r13
    let v68: u8;  // dl
    let v69: &u8;  // rax
    let v70: u64;  // rbx
    let v71: void*;  // rbp
    let v74: u64;  // r15
    let v75: u64;  // rsi
    let v76: &u8;  // r13
    let v77: u8;  // dl
    let v78: &u8;  // rax

    v3 = uu_join::State::get_current_key(a0);
    v21 = a0->field_10;
    if !v21 {
        return 0;
    }
    v1 = a0->field_8;
    v9 = v21 * 48 + v1;
    v22 = a2->field_10;
    v8 = a3->field_18;
    v7 = a3->field_20;
    v0 = a3->field_28;
    v6 = a3->field_10;
    v13 = a2->field_8;
    if v6 {
        v24 = v22 * 48 + v13;
        v25 = a3->field_8;
        v26 = a3->field_29;
        v5 = a0->field_58;
        v4 = a2->field_58;
        v14 = v25 + 1;
        v27 = &v3;
        v11 = v24;
        v10 = v25;
        do {
            v33 = v1;
            v1 = v33 + 48;
            v12 = v33;
            v13 = v13;
            loop {
                v39 = v13;
                v24 = v35;
                v25 = v34;
                if v39 == v24 {
                    break;
                }
                v15 = v27;
                v16 = v37;
                v17 = v36;
                v18 = v38;
                v19 = v39;
                v2 = v39;
                if !vvar_627 {
                    v3 = v3;
                } else {
                    v43 = v25->field_1;
                    v44 = v25->field_8;
                    v17 = v17;
                    if v43 == v5 || v43 == v4 {
                    }
                }
                v50 = v3;
                if !v50 {
                    v8 = v8;
                }
                v51 = v8;
                if !v50 {
                    v7 = v7;
                }
                v52 = v7;
                v53 = a1[2];
                if *(a1) - v53 > v52 {
                    memcpy(&v53[a1[1]], v51, v52);
                    a1[2] = &v53[v52];
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v51, v52);
                    if v23 {
                        return v23;
                    }
                }
                v2 += 48;
                v6 = v6;
                v14 = v14;
                loop {
                    v55 = v14;
                    v32 = v6 - 1;
                    if v6 == 1 {
                        break;
                    }
                    v56 = a1[2];
                    if *(a1) - v56 >= 2 {
                        v56[a1[1]] = v26;
                        a1[2] = v56 + 1;
                    } else {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &a3->field_29 as &struct_3, 1);
                        if v23 {
                            return v23;
                        }
                    }
                    if !v55->field_0 {
                        v60 = v3;
                        v8 = v8;
                        v7 = v7;
                        if !v60 {
                            goto LABEL_43f12f;
                        }
                    } else {
                        v59 = 16;
                        if !(v55->field_1 != v5) || !((v59 = 32, v55->field_1 != v4)) {
                            v60 = uu_join::Line::get_field(*((&v15 + v59) as &i64), v55->field_8);
                            v8 = v8;
                            v7 = v7;
                            if !v60 {
                                goto LABEL_43f12f;
                            }
                        } else {
                            v60 = 0;
                            v8 = v8;
                            v7 = v7;
                            if !0 {
                                goto LABEL_43f12f;
                            }
                        }
                    }
LABEL_43f12f:
                    v63 = v7;
                    v64 = v8;
                    v65 = a1[2];
                    if *(a1) - v65 > v63 {
                        memcpy(&v65[a1[1]], v64, v63);
                        a1[2] = &v65[v63];
                    } else {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v64, v63);
                        if v23 {
                            return v23;
                        }
                    }
                }
                v68 = v0;
                v15 = v68;
                v69 = a1[2];
                if *(a1) - v69 <= 1 {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v15, 1);
                } else {
                    v69[a1[1]] = v68;
                    a1[2] = v69 + 1;
                    v23 = 0;
                }
                v27 = &v3;
                v34 = v10;
                v35 = v11;
                v36 = v12;
                v13 = v2;
                if v23 {
                    return v23;
                }
            }
            v28 = v16;
            v29 = v18;
        } while (v1 != v9);
        return 0;
    } else {
        v5 = a0->field_40;
        v4 = a2->field_40;
        v2 = v22 * 48;
        do {
            v6 = v1 + 48;
            v13 = v13;
            v2 = v2;
            loop {
                v70 = v2;
                v71 = v13;
                if !v70 {
                    break;
                }
                v8 = v8;
                v7 = v7;
                v74 = v7;
                v75 = v8;
                v76 = a1[2];
                if *(a1) - v76 > v74 {
                    memcpy(&v76[a1[1]], v75, v74);
                    a1[2] = &v76[v74];
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v75, v74);
                    if v23 {
                        return v23;
                    }
                }
                v23 = uu_join::Repr<Sep>::print_fields(a3, a1, v1, v5);
                if v23 {
                    return v23;
                }
                v23 = uu_join::Repr<Sep>::print_fields(a3, a1, v71, v4);
                if v23 {
                    return v23;
                }
                v77 = v0;
                v15 = v77;
                v78 = a1[2];
                if *(a1) - v78 <= 1 {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v15, 1);
                } else {
                    v78[a1[1]] = v77;
                    a1[2] = v78 + 1;
                    v23 = 0;
                }
                if v23 {
                    return v23;
                }
            }
            v1 = v6;
        } while (v1 != v9);
        return 0;
    }
}
