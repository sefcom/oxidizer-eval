fn uu_wc::word_count_from_reader(a0: u64, a1: u64, a2: u8, a3: i64) -> int {
    let v0: struct16;  // [bp-0x18]
    let v2: u8;  // r9b
    let v3: struct24;  // dil
    let v4: u8;  // al
    let v5: u8;  // r8b
    let v6: u64;  // rdx
    let v7: core::fmt::Arguments;  // rdx
    let v8: u64;  // rdi
    let v9: core::fmt::Arguments;  // rdx
    let v10: u64;  // rdi
    let v11: core::fmt::Arguments;  // rdx
    let v12: u64;  // rdi
    let v13: core::fmt::Arguments;  // rdx
    let v14: core::fmt::rt::Argument;  // rdi

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v2 = *((a3 + 26) as &i8);
    v3 = *((a3 + 28) as &i8);
    v4 = *((a3 + 27) as &i8);
    v5 = v3 | v4;
    if *((a3 + 24) as &i8) {
        if !*((a3 + 25) as &i8) {
            if !v2 {
                if !v5 {
                    return struct48 {
                        field_0: uu_wc::count_fast::count_bytes_fast(&v0)
                        field_8: 0
                        field_24: 0
                        field_40: v6
                    };
                }
                goto LABEL_4662d3;
            } else if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_466249;
        }
        if !v2 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_466288;
        } else if !v5 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    } else {
        if !*((a3 + 25) as &i8) {
            if !v2 {
                if !v5 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
LABEL_4662d3:
                v13 = a2;
                if !v3 {
                    uu_wc::word_count_from_reader_specialized(a0, a1, v13);
                    return;
                }
                v14 = a0;
                if !v4 {
                    uu_wc::word_count_from_reader_specialized(v14, a1, v13);
                } else {
                    uu_wc::word_count_from_reader_specialized(v14, a1, v13);
                }
                return;
            } else if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_466249:
            v11 = a2;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v11);
                return;
            }
            v12 = a0;
            if !v4 {
                uu_wc::word_count_from_reader_specialized(v12, a1, v11);
            } else {
                uu_wc::word_count_from_reader_specialized(v12, a1, v11);
            }
            return;
        }
        if !v2 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_466288:
            v9 = a2;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v9);
                return;
            }
            v10 = a0;
            if !v4 {
                uu_wc::word_count_from_reader_specialized(v10, a1, v9);
            } else {
                uu_wc::word_count_from_reader_specialized(v10, a1, v9);
            }
            return;
        } else if !v5 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    }
    v7 = a2;
    if !v3 {
        uu_wc::word_count_from_reader_specialized(a0, a1, v7);
        return;
    }
    v8 = a0;
    if !v4 {
        uu_wc::word_count_from_reader_specialized(v8, a1, v7);
    } else {
        uu_wc::word_count_from_reader_specialized(v8, a1, v7);
    }
    return;
}
