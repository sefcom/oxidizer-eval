fn uu_wc::word_count_from_reader(a0: &struct_0, a1: u64, a2: u64, a3: &u64) -> u64 {
    let v0: u8;  // [bp-0x18]
    let v1: u8;  // [sp-0x10]
    let v3: u8;  // dil
    let v4: u8;  // al
    let v5: u8;  // r8b
    let v6: u8;  // r9b
    let v7: u8;  // cl
    let v8: u64;  // rdx
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: &struct48;  // rdi
    let v14: &struct48;  // rdi
    let v15: &struct48;  // rdi
    let v16: &struct48;  // rdi

    v1 = a2;
    v3 = *((&a3[3] as &char + 4) as &i8);
    v4 = *((&a3[3] as &char + 3) as &i8);
    v5 = v4 | v3;
    v6 = *((&a3[3] as &char + 1) as &i8);
    v7 = *((&a3[3] as &char + 2) as &i8);
    if !a3[3] as i8 {
        if !v6 {
            if !v7 {
                if !v5 {
                    core::panicking::panic(); /* do not return */
                }
LABEL_4ba2e4:
                v11 = a2 & 4294967295;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v11);
                }
                v16 = a0;
                if v4 {
                    return uu_wc::word_count_from_reader_specialized(v16, a1, v11);
                }
                return uu_wc::word_count_from_reader_specialized(v16, a1, v11);
            }
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba241:
                v10 = a2 & 4294967295;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v10);
                }
                v15 = a0;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(v15, a1, v10);
                }
                return uu_wc::word_count_from_reader_specialized(v15, a1, v10);
            }
        } else if !v7 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba274:
                v9 = a2 & 4294967295;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v9);
                }
                v14 = a0;
                if v4 {
                    return uu_wc::word_count_from_reader_specialized(v14, a1, v9);
                }
                return uu_wc::word_count_from_reader_specialized(v14, a1, v9);
            }
        } else {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba1e1:
                v8 = a2 & 4294967295;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(a0, a1, v8);
                }
                v13 = a0;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(v13, a1, v8);
                }
                return uu_wc::word_count_from_reader_specialized(v13, a1, v8);
            }
        }
    } else {
        if v6 {
            if !v7 {
                if !(!v5) {
                    goto LABEL_4ba274;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
                if !(!v5) {
                    goto LABEL_4ba1e1;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        } else {
            if !v7 {
                if !(!v5) {
                    goto LABEL_4ba2e4;
                }
                *(&a0->field_0 as &long long) = uu_wc::count_fast::count_bytes_fast(&v0, a1, a2);
                *(&(&a0->field_0)[1] as &i128) = 0;
                *((&a0->field_8 as &char + 8) as &i128) = 0;
                *((&a0->field_18 as &char + 8) as &u64) = v12;
            } else {
                if !(!v5) {
                    goto LABEL_4ba241;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
    }
    return;
}
