fn uu_wc::word_count_from_reader(a1: i32, a2: i64) -> : struct48 {
    let a0: u64;  // rdi
    let v0: core::fmt::rt::Argument;  // [bp-0xc]
    let v2: u8;  // cl
    let v3: u8;  // al
    let v4: struct21;  // dil
    let v5: u8;  // dl
    let v6: u64;  // rdi
    let v7: u64;  // rdi
    let v8: u64;  // rdi
    let v9: u64;  // rdi
    let v10: u64;  // rdx

    v0 = a1;
    v2 = *((a2 + 28) as &i8);
    v3 = *((a2 + 27) as &i8);
    v4 = v3 | v2;
    v5 = *((a2 + 26) as &i8);
    if *((a2 + 24) as &i8) {
        if !*((a2 + 25) as &i8) {
            if !v5 {
                if !v4 {
                    return struct48 {
                        field_0: uu_wc::count_fast::count_bytes_fast(&v0)
                        field_8: 0
                        field_24: 0
                        field_40: v10
                    };
                }
                goto LABEL_4ba0f0;
            } else if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4ba06a;
        }
        if !v5 {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4ba092;
        } else if !v4 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    } else {
        if !*((a2 + 25) as &i8) {
            if !v5 {
                if !v4 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
LABEL_4ba0f0:
                v9 = a0;
                if !v2 {
                    uu_wc::word_count_from_reader_specialized(v9, a1 as u64);
                    return;
                }
                if !v3 {
                    uu_wc::word_count_from_reader_specialized(v9, a1 as u64);
                } else {
                    uu_wc::word_count_from_reader_specialized(v9, a1 as u64);
                }
                return;
            } else if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4ba06a:
            v8 = a0;
            if !v2 {
                uu_wc::word_count_from_reader_specialized(v8, a1 as u64);
                return;
            }
            if !v3 {
                uu_wc::word_count_from_reader_specialized(v8, a1 as u64);
            } else {
                uu_wc::word_count_from_reader_specialized(v8, a1 as u64);
            }
            return;
        }
        if !v5 {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4ba092:
            v7 = a0;
            if !v2 {
                uu_wc::word_count_from_reader_specialized(v7, a1 as u64);
                return;
            }
            if !v3 {
                uu_wc::word_count_from_reader_specialized(v7, a1 as u64);
            } else {
                uu_wc::word_count_from_reader_specialized(v7, a1 as u64);
            }
            return;
        } else if !v4 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    }
    v6 = a0;
    if !v2 {
        uu_wc::word_count_from_reader_specialized(v6, a1 as u64);
        return;
    }
    if !v3 {
        uu_wc::word_count_from_reader_specialized(v6, a1 as u64);
    } else {
        uu_wc::word_count_from_reader_specialized(v6, a1 as u64);
    }
    return;
}
