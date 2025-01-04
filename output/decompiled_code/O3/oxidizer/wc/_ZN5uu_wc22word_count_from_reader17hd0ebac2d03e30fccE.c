fn uu_wc::word_count_from_reader(a0: &struct48, a1: u32, a2: &u64) -> u64 {
    let v0: u32;  // [sp-0xc]
    let v2: u32;  // esi
    let v3: u8;  // cl
    let v4: u8;  // al
    let v5: u8;  // dil
    let v6: u8;  // r8b
    let v7: u8;  // dl
    let v8: &struct_0;  // rdi
    let v9: &struct_0;  // rdi
    let v10: &struct_0;  // rdi
    let v11: &struct_0;  // rdi
    let v12: u64;  // rdx

    v2 = a1;
    v0 = a1;
    v3 = *((&a2[3] as &char + 4) as &i8);
    v4 = *((&a2[3] as &char + 3) as &i8);
    v5 = v4 | v3;
    v6 = *((&a2[3] as &char + 1) as &i8);
    v7 = *((&a2[3] as &char + 2) as &i8);
    if !a2[3] as i8 {
        if !v6 {
            if !v7 {
                if !v5 {
                    core::panicking::panic(); /* do not return */
                }
LABEL_4ba0f0:
                v11 = a0;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v11, v2);
                }
                if v4 {
                    return uu_wc::word_count_from_reader_specialized(v11, v2);
                }
                return uu_wc::word_count_from_reader_specialized(v11, v2);
            }
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba06a:
                v10 = a0;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v10, v2);
                }
                if !v4 {
                    return uu_wc::word_count_from_reader_specialized(v10, v2);
                }
                return uu_wc::word_count_from_reader_specialized(v10, v2);
            }
        } else if !v7 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba092:
                v9 = a0;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v9, v2);
                } else if !v4 {
                    return uu_wc::word_count_from_reader_specialized(v9, v2);
                } else {
                    return uu_wc::word_count_from_reader_specialized(v9, v2);
                }
            }
        } else {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba00e:
                v8 = a0;
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v8, v2);
                } else if v4 {
                    return uu_wc::word_count_from_reader_specialized(v8, v2);
                } else {
                    return uu_wc::word_count_from_reader_specialized(v8, v2);
                }
            }
        }
    } else {
        if v6 {
            if !v7 {
                if !(!v5) {
                    goto LABEL_4ba092;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
                if !(!v5) {
                    goto LABEL_4ba00e;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        } else {
            if !v7 {
                if !(!v5) {
                    goto LABEL_4ba0f0;
                }
                *(&a0->field_0 as &long long) = uu_wc::count_fast::count_bytes_fast(&v0);
                *(&a0->field_16 as &i128) = 0;
                *(&a0->field_40 as &i128) = 0;
                a0[1].field_16 = v12;
            } else {
                if !(!v5) {
                    goto LABEL_4ba06a;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
    }
    return;
}
