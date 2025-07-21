fn uu_wc::word_count_from_reader(a1: i64, a2: i8, a3: i64) -> : struct48 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x18]
    let v2: u8;  // dil
    let v3: u8;  // al
    let v4: struct24;  // r8b
    let v5: u8;  // cl
    let v6: u64;  // rdx
    let v7: u64;  // rdx
    let v8: u64;  // rdx
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rdi
    let v12: u64;  // rdi
    let v13: u64;  // rdi
    let v14: u64;  // rdi

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v2 = *((a3 + 28) as &i8);
    v3 = *((a3 + 27) as &i8);
    v4 = v3 | v2;
    v5 = *((a3 + 26) as &i8);
    if *((a3 + 24) as &i8) {
        if !*((a3 + 25) as &i8) {
            if !v5 {
                if !v4 {
                    return struct48 {
                        field_0: uu_wc::count_fast::count_bytes_fast(&v0)
                        field_8: 0
                        field_24: 0
                        field_40: v10
                    };
                }
                goto LABEL_4b9f14;
            } else if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4b9e71;
        }
        if !v5 {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4b9ea4;
        } else if !v4 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    } else {
        if !*((a3 + 25) as &i8) {
            if !v5 {
                if !v4 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
LABEL_4b9f14:
                v9 = a2;
                if !v2 {
                    uu_wc::word_count_from_reader_specialized(a0, a1, v9);
                    return;
                }
                v14 = a0;
                if !v3 {
                    uu_wc::word_count_from_reader_specialized(v14, a1, v9);
                } else {
                    uu_wc::word_count_from_reader_specialized(v14, a1, v9);
                }
                return;
            } else if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4b9e71:
            v8 = a2;
            if !v2 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v8);
                return;
            }
            v13 = a0;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(v13, a1, v8);
            } else {
                uu_wc::word_count_from_reader_specialized(v13, a1, v8);
            }
            return;
        }
        if !v5 {
            if !v4 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4b9ea4:
            v7 = a2;
            if !v2 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v7);
                return;
            }
            v12 = a0;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(v12, a1, v7);
            } else {
                uu_wc::word_count_from_reader_specialized(v12, a1, v7);
            }
            return;
        } else if !v4 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    }
    v6 = a2;
    if !v2 {
        uu_wc::word_count_from_reader_specialized(a0, a1, v6);
        return;
    }
    v11 = a0;
    if !v3 {
        uu_wc::word_count_from_reader_specialized(v11, a1, v6);
    } else {
        uu_wc::word_count_from_reader_specialized(v11, a1, v6);
    }
    return;
}
