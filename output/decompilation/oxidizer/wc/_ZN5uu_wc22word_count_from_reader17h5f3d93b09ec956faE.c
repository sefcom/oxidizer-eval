fn uu_wc::word_count_from_reader(a1: i64, a2: i8, a3: i64) -> : struct48 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v1: u8;  // [bp-0x10]
    let v3: u8;  // dil
    let v4: u8;  // al
    let v5: u8;  // r8b
    let v6: u8;  // cl
    let v7: u64;  // rdx
    let v8: u64;  // rdx
    let v9: u64;  // rdx
    let v10: u64;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rdi
    let v13: u64;  // rdi
    let v14: u64;  // rdi
    let v15: u64;  // rdi

    v0 = a1;
    v1 = a2;
    v3 = *((a3 + 28) as &i8);
    v4 = *((a3 + 27) as &i8);
    v5 = v4 | v3;
    v6 = *((a3 + 26) as &i8);
    if *((a3 + 24) as &i8) {
        if !*((a3 + 25) as &i8) {
            if !v6 {
                if !v5 {
                    return struct56 {
                        field_0: uu_wc::count_fast::count_bytes_fast(&v0)
                        field_8: <UNKNOWN>
                        field_24: <UNKNOWN>
                        field_40: <UNKNOWN>
                    };
                }
                goto LABEL_4b9f14;
            } else if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4b9e71;
        }
        if !v6 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
            goto LABEL_4b9ea4;
        } else if !v5 {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
        }
    } else {
        if !*((a3 + 25) as &i8) {
            if !v6 {
                if !v5 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
LABEL_4b9f14:
                v10 = a2;
                if !v3 {
                    uu_wc::word_count_from_reader_specialized(a0, a1, v10);
                    return;
                }
                v15 = a0;
                if !v4 {
                    uu_wc::word_count_from_reader_specialized(v15, a1, v10);
                } else {
                    uu_wc::word_count_from_reader_specialized(v15, a1, v10);
                }
                return;
            } else if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4b9e71:
            v9 = a2;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v9);
                return;
            }
            v14 = a0;
            if !v4 {
                uu_wc::word_count_from_reader_specialized(v14, a1, v9);
            } else {
                uu_wc::word_count_from_reader_specialized(v14, a1, v9);
            }
            return;
        }
        if !v6 {
            if !v5 {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0, &v0);
            }
LABEL_4b9ea4:
            v8 = a2;
            if !v3 {
                uu_wc::word_count_from_reader_specialized(a0, a1, v8);
                return;
            }
            v13 = a0;
            if !v4 {
                uu_wc::word_count_from_reader_specialized(v13, a1, v8);
            } else {
                uu_wc::word_count_from_reader_specialized(v13, a1, v8);
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
    v12 = a0;
    if !v4 {
        uu_wc::word_count_from_reader_specialized(v12, a1, v7);
    } else {
        uu_wc::word_count_from_reader_specialized(v12, a1, v7);
    }
    return;
}
