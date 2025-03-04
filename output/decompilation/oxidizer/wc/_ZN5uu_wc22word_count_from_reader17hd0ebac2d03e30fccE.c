fn uu_wc::word_count_from_reader(a0: &struct48, a1: u32, a2: &u64) -> u64 {
    let v0: u32;  // [bp-0xc]
    let v2: u8;  // cl
    let v3: u8;  // al
    let v4: u8;  // dil
    let v5: u8;  // r8b
    let v6: u8;  // dl
    let v7: &struct_0;  // rdi
    let v8: &struct_0;  // rdi
    let v9: &struct_0;  // rdi
    let v10: &struct_0;  // rdi
    let v11: u64;  // rdx

    v2 = *((&a2[3] as &char + 4) as &i8);
    v3 = *((&a2[3] as &char + 3) as &i8);
    v4 = v3 | v2;
    v5 = *((&a2[3] as &char + 1) as &i8);
    v6 = *((&a2[3] as &char + 2) as &i8);
    if !a2[3] as i8 {
        if !v5 {
            if !v6 {
                if !v4 {
                    core::panicking::panic("internal error: entered unreachable code", "src/uu/wc/src/wc.rs"); /* do not return */
                }
LABEL_4ba0f0:
                v10 = a0;
                if !v2 {
                    return uu_wc::word_count_from_reader_specialized(v10, a1);
                }
                if v3 {
                    return uu_wc::word_count_from_reader_specialized(v10, a1);
                }
                return uu_wc::word_count_from_reader_specialized(v10, a1);
            }
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba06a:
                v9 = a0;
                if !v2 {
                    return uu_wc::word_count_from_reader_specialized(v9, a1);
                }
                if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v9, a1);
                }
                return uu_wc::word_count_from_reader_specialized(v9, a1);
            }
        } else if !v6 {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba092:
                v8 = a0;
                if !v2 {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                } else if !v3 {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                } else {
                    return uu_wc::word_count_from_reader_specialized(v8, a1);
                }
            }
        } else {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
LABEL_4ba00e:
                v7 = a0;
                if !v2 {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                } else if v3 {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                } else {
                    return uu_wc::word_count_from_reader_specialized(v7, a1);
                }
            }
        }
    } else {
        if v5 {
            if !v6 {
                if !(!v4) {
                    goto LABEL_4ba092;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            } else {
                if !(!v4) {
                    goto LABEL_4ba00e;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        } else {
            if !v6 {
                if !(!v4) {
                    goto LABEL_4ba0f0;
                }
                *(&a0->field_0 as &long long) = uu_wc::count_fast::count_bytes_fast(&v0);
                *(&a0->field_16 as &i128) = 0;
                *(&a0->field_40 as &i128) = 0;
                a0[1].field_16 = v11;
            } else {
                if !(!v4) {
                    goto LABEL_4ba06a;
                }
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
        }
    }
    return;
}
