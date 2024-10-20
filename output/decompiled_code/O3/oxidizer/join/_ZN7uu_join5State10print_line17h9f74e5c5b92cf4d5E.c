fn uu_join::State::print_line(a0: u64, a1: u8, a2: &u64, a3: u64, a4: &struct_2) -> u64 {
    let v0: u8;  // [sp-0x5e]
    let v1: u8;  // [sp-0x5d]
    let v2: &struct_2;  // [sp-0x58]
    let v3: u64;  // [sp-0x48]
    let v4: u64;  // [sp-0x40]
    let v6: u64;  // r12
    let v7: &struct_1;  // r15
    let v8: u64;  // r14
    let v9: &struct_2;  // r14
    let v10: u64;  // rax
    let v11: u64;  // 4096
    let v12: u64;  // 4096
    let v15: void*;  // rsi
    let v16: u64;  // r13
    let v17: &u8;  // r14
    let v18: void*;  // rax
    let v20: u64;  // rsi
    let v21: u64;  // r14
    let v22: u64;  // r13
    let v23: &u8;  // rbp
    let v24: &struct_0;  // r15
    let v25: u64;  // r12
    let v26: &u8;  // rax
    let v27: u64;  // rdx
    let v28: u64;  // 4096
    let v29: u64;  // 4096
    let v30: u64;  // rsi
    let v32: void*;  // rax
    let v33: u64;  // r14
    let v34: u64;  // r13
    let v35: u64;  // rsi
    let v36: &u8;  // rbp
    let v37: &u8;  // rcx

    v6 = a4->field_10;
    v2 = a4;
    if !v6 {
        v9 = a4;
        v10 = uu_join::Line::get_field(a3, a0);
        if !v10 {
            v10 = v9->field_18;
            v16 = v9->field_20;
        }
        v17 = a2[2];
        if *(a2) - v17 > v16 {
            memcpy(&v17[a2[1]], v10, v16);
            a2[2] = &v17[v16];
        } else {
            v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v10, v16);
            if v18 {
                return v18;
            }
        }
        v18 = uu_join::Repr<Sep>::print_fields(v2, a2, a3, a0);
        if v18 {
            return v18;
        }
    } else {
        v0 = a4->field_29;
        v7 = a4->field_8;
        v3 = a4->field_18;
        v8 = a4->field_20;
        if !vvar_409 {
            goto LABEL_43e154;
        } else if v7->field_1 != a1 {
            v15 = 0;
        } else {
LABEL_43e154:
            v15 = uu_join::Line::get_field(v11, v12);
        }
        if !v15 {
            v3 = v3;
        }
        v20 = v3;
        v22 = v21;
        v23 = a2[2];
        if *(a2) - v23 > v22 {
            memcpy(&v23[a2[1]], v20, v22);
            a2[2] = &v23[v22];
        } else {
            v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v20, v22);
            if v18 {
                return v18;
            }
        }
        v24 = v7 + 1;
        v4 = &v2->field_29;
        loop {
            v25 = v6 - 1;
            if v6 == 1 {
                break;
            }
            v26 = a2[2];
            if *(a2) - v26 >= 2 {
                v27 = v0;
                v26[a2[1]] = v27;
                a2[2] = v26 + 1;
            } else {
                v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v4, 1);
                if v18 {
                    return v18;
                }
            }
            if !v24->field_0 {
LABEL_43e20a:
                v32 = uu_join::Line::get_field(v28, v29);
                v3 = v3;
                if !v32 {
                    goto LABEL_43e223;
                }
                goto LABEL_43e21d;
            } else if v24->field_1 == a1 {
                v30 = v24->field_8;
                goto LABEL_43e20a;
            } else {
                v32 = 0;
                v3 = v3;
                if !0 {
                    goto LABEL_43e223;
                }
LABEL_43e21d:
LABEL_43e223:
                v34 = v33;
                v35 = v3;
                v36 = a2[2];
                if *(a2) - v36 > v34 {
                    memcpy(&v36[a2[1]], v35, v34);
                    a2[2] = &v36[v34];
                    v24 += 1;
                } else {
                    v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v35, v34);
                    v24 += 1;
                    if v18 {
                        return v18;
                    }
                }
            }
        }
    }
    v1 = v2->field_28;
    v37 = a2[2];
    if *(a2) - v37 > 1 {
        v37[a2[1]] = v1;
        a2[2] = v37 + 1;
        return 0;
    }
    v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &v1, 1);
    return v18;
}
