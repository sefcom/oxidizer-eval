fn uu_wc::word_count_from_reader(a0: &struct48, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u8;  // [sp-0x10]
    let v3: u64;  // rsi
    let v4: u8;  // dil
    let v5: u8;  // al
    let v6: u8;  // r8b
    let v7: u8;  // r9b
    let v8: u8;  // cl
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rdx
    let v13: u64;  // rdx
    let v14: &struct_0;  // rdi
    let v15: &struct_0;  // rdi
    let v16: &struct_0;  // rdi
    let v17: &struct_0;  // rdi

    v3 = a1;
    v0 = a1;
    v1 = a2;
    v4 = *((&a3[3] as &char + 4) as &i8);
    v5 = *((&a3[3] as &char + 3) as &i8);
    v6 = v5 | v4;
    v7 = *((&a3[3] as &char + 1) as &i8);
    v8 = *((&a3[3] as &char + 2) as &i8);
    if !a3[3] as i8 {
        if !v7 {
            if !v8 {
                if !v6 {
                    core::panicking::panic("internal error: entered unreachable code", "src/uu/wc/src/wc.rs"); /* do not return */
                }
LABEL_4b9f14:
                v12 = a2 & 4294967295;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(a0, v3, v12);
                }
                v17 = a0;
                if !v5 {
                    return uu_wc::word_count_from_reader_specialized(v17, v3, v12);
                }
                return uu_wc::word_count_from_reader_specialized(v17, v3, v12);
            }
            if !v6 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4b9e71:
                v11 = a2 & 4294967295;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(a0, v3, v11);
                }
                v16 = a0;
                if v5 {
                    return uu_wc::word_count_from_reader_specialized(v16, v3, v11);
                }
                return uu_wc::word_count_from_reader_specialized(v16, v3, v11);
            }
        } else if !v8 {
            if !v6 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4b9ea4:
                v10 = a2 & 4294967295;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(a0, v3, v10);
                }
                v15 = a0;
                if !v5 {
                    return uu_wc::word_count_from_reader_specialized(v15, v3, v10);
                }
                return uu_wc::word_count_from_reader_specialized(v15, v3, v10);
            }
        } else {
            if !v6 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4b9e11:
                v9 = a2 & 4294967295;
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(a0, v3, v9);
                }
                v14 = a0;
                if !v5 {
                    return uu_wc::word_count_from_reader_specialized(v14, v3, v9);
                }
                return uu_wc::word_count_from_reader_specialized(v14, v3, v9);
            }
        }
    } else {
        if v7 {
            if !v8 {
                if !(!v6) {
                    goto LABEL_4b9ea4;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
                if !(!v6) {
                    goto LABEL_4b9e11;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        } else {
            if !v8 {
                if !(!v6) {
                    goto LABEL_4b9f14;
                }
                *(&a0->field_0 as &long long) = uu_wc::count_fast::count_bytes_fast(&v0);
                *(&(&a0->field_0)[1] as &i128) = 0;
                *((&a0->field_8 as &char + 8) as &i128) = 0;
                *((&a0->field_18 as &char + 8) as &u64) = v13;
            } else {
                if !(!v6) {
                    goto LABEL_4b9e71;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
    }
    return;
}
