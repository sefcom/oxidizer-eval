fn uu_join::State::combine(a0: &struct_2, a1: &u64, a2: &struct_2, a3: &struct_1) -> u64 {
    let v0: u8;  // [sp-0xe9]
    let v1: void*;  // [sp-0xe8]
    let v2: u64;  // [sp-0xe0]
    let v3: u8;  // [bp-0xd8]
    let v4: u8;  // [bp-0xd0]
    let v5: u64;  // [sp-0xc8]
    let v6: u64;  // [sp-0xb8]
    let v7: &struct_1;  // [sp-0xb0]
    let v8: &struct_1;  // [sp-0xa8]
    let v9: u64;  // [sp-0xa0]
    let v10: u64;  // [sp-0x98]
    let v11: u64;  // [sp-0x80]
    let v12: &struct_0;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v14: &struct_0;  // [sp-0x68]
    let v15: u64;  // [sp-0x60]
    let v16: u64;  // [bp-0x58]
    let v17: &struct_2;  // [sp-0x50]
    let v18: u64;  // [sp-0x48]
    let v19: &struct_2;  // [sp-0x40]
    let v20: u64;  // [sp-0x38]
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: &struct_1;  // rsi
    let v25: u64;  // r12
    let v26: void*;  // rax
    let v27: &struct_0;  // rdx
    let v28: &struct_2;  // 4096
    let v29: &struct_2;  // 4096
    let v32: u64;  // rdi
    let v33: u64;  // rdi
    let v34: &struct_0;  // rdx
    let v35: &struct_2;  // rbp
    let v36: &struct_2;  // r13
    let v41: u8;  // al
    let v42: u64;  // rsi
    let v48: u64;  // rsi
    let v49: u64;  // rsi
    let v50: &u8;  // r13
    let v51: &struct_1;  // rsi
    let v52: &struct_0;  // r13
    let v53: &struct_1;  // rsi
    let v55: &u8;  // r14
    let v59: void*;  // rax
    let v60: void*;  // rax
    let v63: u64;  // rsi
    let v64: &u8;  // r15
    let v66: u8;  // dl
    let v67: &u8;  // rax
    let v68: void*;  // r14
    let v69: u64;  // rbp
    let v72: &struct_1;  // r13
    let v73: u64;  // rsi
    let v74: &u8;  // r15
    let v75: &struct_1;  // r15
    let v76: u8;  // dl
    let v77: &u8;  // rax

    v5 = uu_join::State::get_current_key(a0);
    v22 = a0->field_10;
    if !v22 {
        return 0;
    }
    v1 = a0->field_8;
    v10 = v22 * 48 + v1;
    v23 = a2->field_10;
    v24 = *(&a3->padding_0[264] as &i64);
    v25 = a3->field_110;
    v9 = a3->field_120;
    v8 = a3->field_128;
    v0 = a3->field_148;
    v6 = a3->field_140;
    v7 = v24;
    v11 = a2->field_8;
    if v6 {
        v15 = v23 * 48 + v11;
        v27 = a3->field_138;
        v4 = a0->field_58;
        v3 = a2->field_58;
        v14 = v27 + 1;
        v12 = v27;
        do {
            v32 = v1;
            v1 = v32 + 48;
            v13 = v32;
            v11 = v11;
            loop {
                v27 = v34;
                if v2 == v15 {
                    break;
                }
                v16 = &v5;
                v17 = v36;
                v18 = v33;
                v19 = v35;
                v2 = v11;
                v20 = v2;
                if !v27->field_0 {
                    v5 = v5;
                } else {
                    v41 = v27->field_1;
                    v42 = v27->field_8;
                    v18 = v18;
                    if v41 == v4 || (v18 = v2, v41 == v3) {
                    }
                }
                v48 = v5;
                if !v48 {
                    v9 = v9;
                }
                v49 = v9;
                if !v48 {
                    v8 = v8;
                }
                a3 = v8;
                v50 = a1[2];
                if *(a1) - v50 > a3 {
                    memcpy(&v50[a1[1]], v49, a3);
                    *(&a1[2] as &unsigned long) = v50 + a3;
                } else {
                    v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v49, a3);
                    if v26 {
                        return v26;
                    }
                }
                v2 += 48;
                v6 = v6;
                v14 = v14;
                loop {
                    v52 = v14;
                    v53 = v51;
                    if v6 == 1 {
                        break;
                    }
                    v55 = a1[2];
                    if *(a1) - v55 > v25 {
                        memcpy(&v55[a1[1]], v53, v25);
                        a1[2] = &v55[v25];
                    } else {
                        v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v53, v25);
                        if v26 {
                            return v26;
                        }
                    }
                    if !v52->field_0 {
                        v60 = v5;
                        v9 = v9;
                        v8 = v8;
                        if !v60 {
                            goto LABEL_43fb4f;
                        }
                    } else {
                        v59 = 16;
                        if !(v52->field_1 != v4) || !((v59 = 32, v52->field_1 != v3)) {
                            v60 = uu_join::Line::get_field(*((&v16 + v59) as &i64), v52->field_8);
                            v9 = v9;
                            v8 = v8;
                            if !v60 {
                                goto LABEL_43fb4f;
                            }
                        } else {
                            v60 = 0;
                            v9 = v9;
                            v8 = v8;
                            if !0 {
                                goto LABEL_43fb4f;
                            }
                        }
                    }
LABEL_43fb4f:
                    a3 = v8;
                    v63 = v9;
                    v64 = a1[2];
                    if *(a1) - v64 <= a3 {
                        v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v63, a3);
                    } else {
                        memcpy(&v64[a1[1]], v63, a3);
                        *(&a1[2] as &unsigned long) = v64 + a3;
                        v26 = 0;
                    }
                    v51 = v7;
                    if v26 {
                        return v26;
                    }
                }
                v66 = v0;
                v16 = v66;
                v67 = a1[2];
                if *(a1) - v67 <= 1 {
                    a3 = v53;
                    v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v16, 1);
                } else {
                    v67[a1[1]] = v66;
                    a1[2] = v67 + 1;
                    v26 = 0;
                }
                v33 = v13;
                v34 = v12;
                v11 = v2;
                if v26 {
                    return v26;
                }
            }
            v28 = v19;
            v29 = v17;
        } while (v1 != v10);
        return 0;
    } else {
        v4 = a0->field_40;
        v3 = a2->field_40;
        v2 = v23 * 48;
        do {
            v6 = v1 + 48;
            v2 = v2;
            v11 = v11;
            loop {
                v68 = v11;
                v69 = v2;
                if !v69 {
                    break;
                }
                v9 = v9;
                v8 = v8;
                v72 = v8;
                v73 = v9;
                v74 = a1[2];
                if *(a1) - v74 > v72 {
                    memcpy(&v74[a1[1]], v73, v72);
                    *(&a1[2] as &unsigned long) = v74 + v72;
                } else {
                    v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v73, v72);
                    if v26 {
                        return v26;
                    }
                }
                v75 = v7;
                v26 = uu_join::Repr<Sep>::print_fields(v75, v25, a1, v1, v4);
                if v26 {
                    return v26;
                }
                v26 = uu_join::Repr<Sep>::print_fields(v75, v25, a1, v68, v3);
                if v26 {
                    return v26;
                }
                v76 = v0;
                v16 = v76;
                v77 = a1[2];
                if *(a1) - v77 > 1 {
                    v77[a1[1]] = v76;
                    a1[2] = v77 + 1;
                    v26 = 0;
                } else {
                    v26 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &v16, 1);
                }
                if v26 {
                    return v26;
                }
            }
            v1 = v6;
        } while (v1 != v10);
        return 0;
    }
}
