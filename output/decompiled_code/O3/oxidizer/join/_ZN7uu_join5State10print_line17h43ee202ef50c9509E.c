fn uu_join::State::print_line(a0: u64, a1: u8, a2: &u64, a3: u64, a4: &struct_1) -> u64 {
    let v0: u8;  // [sp-0x55]
    let v1: u64;  // [sp-0x48]
    let v2: &struct_1;  // [sp-0x40]
    let v4: u64;  // r14
    let v5: &struct_0;  // r12
    let v6: u64;  // rbp
    let v7: &struct_1;  // r14
    let v8: u64;  // rax
    let v9: u64;  // 4096
    let v10: u64;  // 4096
    let v13: void*;  // rsi
    let v14: u64;  // r13
    let v15: &u8;  // r14
    let v16: void*;  // rax
    let v18: u64;  // rsi
    let v19: u64;  // rbp
    let v20: u64;  // r13
    let v21: &u8;  // r15
    let v23: &struct_2;  // r12
    let v24: u64;  // r14
    let v25: &u8;  // rax
    let v26: u64;  // 4096
    let v27: u64;  // 4096
    let v28: u64;  // rsi
    let v30: void*;  // rax
    let v31: u64;  // rbp
    let v32: u64;  // r13
    let v33: u64;  // rsi
    let v34: &u8;  // r15
    let v35: &u8;  // rcx

    v4 = a4->field_10;
    v2 = a4;
    if !v4 {
        v7 = a4;
        v8 = uu_join::Line::get_field(a3, a0);
        if !v8 {
            v8 = v7->field_18;
            v14 = v7->field_20;
        }
        v15 = a2[2];
        if *(a2) - v15 > v14 {
            memcpy(&v15[a2[1]], v8, v14);
            a2[2] = &v15[v14];
        } else {
            v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v8, v14);
            if v16 {
                return v16;
            }
        }
        v16 = uu_join::Repr<Sep>::print_fields(a2, a3, a0);
        if v16 {
            return v16;
        }
    } else {
        v5 = a4->field_8;
        v1 = a4->field_18;
        v6 = a4->field_20;
        if !vvar_399 {
            goto LABEL_43d8d9;
        } else if v5->field_1 != a1 {
            v13 = 0;
        } else {
LABEL_43d8d9:
            v13 = uu_join::Line::get_field(v9, v10);
        }
        if !v13 {
            v1 = v1;
        }
        v18 = v1;
        v20 = v19;
        v21 = a2[2];
        if *(a2) - v21 > v20 {
            memcpy(&v21[a2[1]], v18, v20);
            a2[2] = &v21[v20];
        } else {
            v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v18, v20);
            if v16 {
                return v16;
            }
        }
        v23 = v5 + 1;
        loop {
            v24 = v4 - 1;
            if v4 == 1 {
                break;
            }
            v25 = a2[2];
            if *(a2) - v25 >= 2 {
                v25[a2[1]] = 32;
                a2[2] = v25 + 1;
            } else {
                v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &g_4122cd, 1);
                if v16 {
                    return v16;
                }
            }
            if !v23->field_0 {
LABEL_43d98a:
                v30 = uu_join::Line::get_field(v26, v27);
                v1 = v1;
                if !v30 {
                    goto LABEL_43d9a3;
                }
                goto LABEL_43d99d;
            } else if v23->field_1 == a1 {
                v28 = v23->field_8;
                goto LABEL_43d98a;
            } else {
                v30 = 0;
                v1 = v1;
                if !0 {
                    goto LABEL_43d9a3;
                }
LABEL_43d99d:
LABEL_43d9a3:
                v32 = v31;
                v33 = v1;
                v34 = a2[2];
                if *(a2) - v34 > v32 {
                    memcpy(&v34[a2[1]], v33, v32);
                    a2[2] = &v34[v32];
                    v23 += 1;
                } else {
                    v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v33, v32);
                    v23 += 1;
                    if v16 {
                        return v16;
                    }
                }
            }
        }
    }
    v0 = v2->field_28;
    v35 = a2[2];
    if *(a2) - v35 > 1 {
        v35[a2[1]] = v0;
        a2[2] = v35 + 1;
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &v0, 1);
    return v16;
}
