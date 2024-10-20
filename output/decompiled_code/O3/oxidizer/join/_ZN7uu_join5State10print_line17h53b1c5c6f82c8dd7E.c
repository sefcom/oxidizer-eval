fn uu_join::State::print_line(a0: u64, a1: u8, a2: &u64, a3: u64, a4: &struct_1) -> u64 {
    let v0: u8;  // [sp-0x65]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v5: u64;  // r15
    let v6: u64;  // r12
    let v7: &struct_0;  // rbp
    let v8: u64;  // rax
    let v9: u64;  // 4096
    let v10: u64;  // 4096
    let v13: void*;  // rsi
    let v14: u64;  // r14
    let v15: &u8;  // r15
    let v16: void*;  // rax
    let v18: u64;  // rsi
    let v19: u64;  // r14
    let v20: &u8;  // r13
    let v21: &struct_2;  // rbp
    let v22: u64;  // r15
    let v23: &u8;  // r14
    let v25: u64;  // 4096
    let v26: u64;  // 4096
    let v27: u64;  // rsi
    let v29: void*;  // rax
    let v30: u64;  // r14
    let v31: u64;  // rsi
    let v32: &u8;  // r13
    let v33: &u8;  // rcx

    v5 = a4->field_140;
    if !v5 {
        v8 = uu_join::Line::get_field(a3, a0);
        if !v8 {
            v8 = a4->field_120;
            v14 = a4->field_128;
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
        v16 = uu_join::Repr<Sep>::print_fields(a4->field_108, a4->field_110, a2, a3, a0);
        if v16 {
            return v16;
        }
    } else {
        v1 = a4->field_108;
        v6 = a4->field_110;
        v7 = a4->field_138;
        v3 = a4->field_120;
        v2 = a4->field_128;
        if !vvar_415 {
            goto LABEL_43dbd1;
        } else if v7->field_1 != a1 {
            v13 = 0;
        } else {
LABEL_43dbd1:
            v13 = uu_join::Line::get_field(v9, v10);
        }
        if !v13 {
            v3 = v3;
        }
        v18 = v3;
        if !v13 {
            v2 = v2;
        }
        v19 = v2;
        v20 = a2[2];
        if *(a2) - v20 > v19 {
            memcpy(&v20[a2[1]], v18, v19);
            a2[2] = &v20[v19];
        } else {
            v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v18, v19);
            if v16 {
                return v16;
            }
        }
        v21 = v7 + 1;
        loop {
            v22 = v5 - 1;
            if v5 == 1 {
                break;
            }
            v23 = a2[2];
            if *(a2) - v23 > v6 {
                memcpy(&v23[a2[1]], v1, v6);
                a2[2] = &v23[v6];
            } else {
                v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v1, v6);
                if v16 {
                    return v16;
                }
            }
            if !v21->field_0 {
LABEL_43dc8a:
                v29 = uu_join::Line::get_field(v25, v26);
                v3 = v3;
                v2 = v2;
                if !v29 {
                    goto LABEL_43dca5;
                }
                goto LABEL_43dc9f;
            } else if v21->field_1 == a1 {
                v27 = v21->field_8;
                goto LABEL_43dc8a;
            } else {
                v29 = 0;
                v3 = v3;
                v2 = v2;
                if !0 {
                    goto LABEL_43dca5;
                }
LABEL_43dc9f:
LABEL_43dca5:
                v30 = v2;
                v31 = v3;
                v32 = a2[2];
                if *(a2) - v32 > v30 {
                    memcpy(&v32[a2[1]], v31, v30);
                    a2[2] = &v32[v30];
                    v21 += 1;
                } else {
                    v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v31, v30);
                    v21 += 1;
                    if v16 {
                        return v16;
                    }
                }
            }
        }
    }
    v0 = a4->field_148;
    v33 = a2[2];
    if *(a2) - v33 > 1 {
        v33[a2[1]] = v0;
        a2[2] = v33 + 1;
        return 0;
    }
    v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, &v0, 1);
    return v16;
}
