fn uu_join::State::combine(a0: &struct_0, a1: &u64, a2: &struct_0, a3: &struct_3) -> u64 {
    let v0: u8;  // [sp-0xd9]
    let v1: void*;  // [sp-0xd8]
    let v2: u64;  // [sp-0xd0]
    let v3: u8;  // [bp-0xc8]
    let v4: u8;  // [bp-0xc0]
    let v5: u64;  // [sp-0xb8]
    let v6: u64;  // [sp-0xa8]
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98]
    let v9: &struct_2;  // [sp-0x90]
    let v10: u64;  // [sp-0x78]
    let v11: u64;  // [sp-0x70]
    let v12: &struct_1;  // [sp-0x68]
    let v13: u64;  // [sp-0x60]
    let v14: u8;  // [bp-0x58]
    let v15: &struct_0;  // [sp-0x50]
    let v16: u64;  // [sp-0x48]
    let v17: &struct_0;  // [sp-0x40]
    let v18: u64;  // [sp-0x38]
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: u64;  // r15
    let v23: void*;  // rax
    let v24: &struct_2;  // r13
    let v25: &struct_0;  // 4096
    let v26: &struct_0;  // 4096
    let v29: u64;  // rbp
    let v30: u64;  // rdi
    let v31: u64;  // rdi
    let v32: &struct_0;  // r14
    let v33: &struct_2;  // r13
    let v34: &struct_0;  // r12
    let v37: u64;  // rcx
    let v39: u8;  // al
    let v40: u64;  // rsi
    let v46: u64;  // rsi
    let v47: u64;  // rsi
    let v48: u64;  // r15
    let v49: &u8;  // r12
    let v51: &struct_1;  // r13
    let v52: u64;  // r12
    let v55: void*;  // rax
    let v56: void*;  // rax
    let v57: u64;  // r15
    let v60: u64;  // rsi
    let v61: &u8;  // r14
    let v64: u8;  // dl
    let v65: &u8;  // rax
    let v66: u64;  // r12
    let v67: void*;  // rbp
    let v69: u64;  // r15
    let v71: u64;  // r13
    let v72: u64;  // rsi
    let v73: &u8;  // r14
    let v74: u8;  // dl
    let v75: &u8;  // rax

    v5 = uu_join::State::get_current_key(a0);
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
    v10 = a2->field_8;
    if v6 {
        v13 = v21 * 48 + v10;
        v24 = a3->field_8;
        v4 = a0->field_58;
        v3 = a2->field_58;
        v12 = v24 + 1;
        v9 = v24;
        do {
            v30 = v1;
            v1 = v30 + 48;
            v11 = v30;
            v10 = v10;
            loop {
                v24 = v33;
                v37 = v10;
                if v37 == v13 {
                    break;
                }
                v14 = &v5;
                v15 = v34;
                v16 = v31;
                v17 = v32;
                v18 = v37;
                v2 = v37;
                if !vvar_604 {
                    v5 = v5;
                } else {
                    v39 = v24->field_1;
                    v40 = v24->field_8;
                    v16 = v16;
                    if v39 == v4 || v39 == v3 {
                    }
                }
                v46 = v5;
                if !v46 {
                    v7 = v7;
                }
                v47 = v7;
                v29 = v48;
                v49 = a1[2];
                if *(a1) - v49 > v29 {
                    memcpy(&v49[a1[1]], v47, v29);
                    a1[2] = &v49[v29];
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v47, v29);
                    if v23 {
                        return v23;
                    }
                }
                v2 += 48;
                v12 = v12;
                v6 = v6;
                loop {
                    v51 = v12;
                    v52 = v6 - 1;
                    if v6 == 1 {
                        break;
                    }
                    if *(a1) == a1[2] {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, 1, 0);
                        if v23 {
                            return v23;
                        }
                    }
                    if !v51->field_0 {
                        v56 = v5;
                        v7 = v7;
                        if !v56 {
                            goto LABEL_44002d;
                        }
                    } else {
                        v55 = 16;
                        if !(v51->field_1 != v4) || !((v55 = 32, v51->field_1 != v3)) {
                            v56 = uu_join::Line::get_field(*((&v14 + v55) as &i64), v51->field_8);
                            v7 = v7;
                            if !v56 {
                                goto LABEL_44002d;
                            }
                        } else {
                            v56 = 0;
                            v7 = v7;
                            if !0 {
                                goto LABEL_44002d;
                            }
                        }
                    }
LABEL_44002d:
                    v29 = v57;
                    v60 = v7;
                    v61 = a1[2];
                    if *(a1) - v61 > v29 {
                        memcpy(&v61[a1[1]], v60, v29);
                        a1[2] = &v61[v29];
                    } else {
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v60, v29);
                        if v23 {
                            return v23;
                        }
                    }
                }
                v64 = v0;
                v14 = v64;
                v65 = a1[2];
                if *(a1) - v65 > 1 {
                    v65[a1[1]] = v64;
                    a1[2] = v65 + 1;
                    v23 = 0;
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v14, 1);
                }
                v31 = v11;
                v10 = v2;
                v33 = v9;
                if v23 {
                    return v23;
                }
            }
            v25 = v17;
            v26 = v15;
        } while (v1 != v8);
        return 0;
    } else {
        v4 = a0->field_40;
        v3 = a2->field_40;
        v2 = v21 * 48;
        do {
            v6 = v1 + 48;
            v10 = v10;
            v2 = v2;
            loop {
                v66 = v2;
                v67 = v10;
                if !v66 {
                    break;
                }
                v7 = v7;
                v71 = v69;
                v72 = v7;
                v73 = a1[2];
                if *(a1) - v73 > v71 {
                    memcpy(&v73[a1[1]], v72, v71);
                    a1[2] = &v73[v71];
                } else {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v72, v71);
                    if v23 {
                        return v23;
                    }
                }
                v23 = uu_join::Repr<Sep>::print_fields(a1, v1, v4);
                if v23 {
                    return v23;
                }
                v23 = uu_join::Repr<Sep>::print_fields(a1, v67, v3);
                if v23 {
                    return v23;
                }
                v74 = v0;
                v14 = v74;
                v75 = a1[2];
                if *(a1) - v75 <= 1 {
                    v23 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v14, 1);
                } else {
                    v75[a1[1]] = v74;
                    a1[2] = v75 + 1;
                    v23 = 0;
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
