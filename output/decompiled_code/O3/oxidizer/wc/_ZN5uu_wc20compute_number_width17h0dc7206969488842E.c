fn uu_wc::compute_number_width(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0xf0]
    let v1: i64;  // [sp-0xe8]
    let v2: Result<struct176, struct16>;  // [sp-0xe0], Other Possible Types: i1408
    let v4: i64;  // rax
    let v5: i64;  // rbx
    let v6: i64;  // rdx
    let v7: struct8;  // rax
    let v8: i64;  // r14
    let v9: i64;  // rdx
    let v10: i32;  // eax
    let v11: i64;  // rax

    v4 = *(a0 as &i64);
    if !v4 {
        v5 = (uu_wc::Settings::number_enabled(a1, a1, a2) as i32 == 1 ? 1 : 7);
        return v5;
    } else if v4 != 1 {
        return 1;
    } else {
        v6 = *((a0 + 24) as &i64);
        if uu_wc::Settings::number_enabled(a1, a1, a2) as i32 == 1 && v6 == 1 {
            return 1;
        }
        v0 = *((a0 + 16) as &i64);
        v1 = v0 + v6 * 24;
        v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v7 {
            return 1;
        }
        v5 = 1;
        v8 = 0;
        do {
            if *(v7 as &i64) == 9223372036854775809 {
                v5 = 7;
            } else {
                v2 = std::fs::metadata(v7, v9);
                match v2 {
                    Ok(_) => {
                        v10 = *((&v2 as &char + 56) as &i32) & 0xf000;
                        if v10 != 0x8000 {
                            v5 = 7;
                        }
                        v11 = *((&v2 as &char + 80) as &i64);
                        if v10 != 0x8000 {
                            v11 = 0;
                        }
                        v8 += v11;
                    },
                    Err(_) => {
                    },
                }
            }
        } while ((v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v7));
        if v8 {
            return core::cmp::max_by(core::num::int_log10::u64(v8) + 1 & 4294967295, v5);
        }
        return v5;
    }
}
