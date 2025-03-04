fn uu_wc::compute_number_width(a0: &u64, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xf0]
    let v1: i64;  // [sp-0xe8]
    let v2: Result<struct176, struct8>;  // [sp-0xe0]
    let v4: i64;  // rax
    let v5: i64;  // rbx
    let v6: i64;  // rdx
    let v7: struct8;  // rax
    let v8: i64;  // r14
    let v10: i64;  // r14
    let v11: i64;  // rbx
    let v12: i32;  // eax
    let v13: i64;  // r14
    let v14: i64;  // rbx

    v4 = *(a0 as &i64);
    if !v4 {
        v5 = (uu_wc::Settings::number_enabled(a1) as i32 == 1 ? 1 : 7);
        return v5;
    } else if v4 as u32 != 1 {
        return 1;
    } else {
        v6 = *((a0 + 24) as &i64);
        if uu_wc::Settings::number_enabled(a1) as i32 == 1 && v6 == 1 {
            return 1;
        }
        v0 = *((a0 + 16) as &i64);
        v1 = v0 + v6 * 24;
        v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v7 {
            return 1;
        }
        v8 = 0;
        do {
            if *(v7 as &i64) == 9223372036854775809 {
                v10 = v8;
                v11 = 7;
            } else {
                v2 = std::fs::metadata(v7);
                match v2 {
                    Ok(_) => {
                        v12 = *((&v2 as &char + 56) as &i32) & 0xf000;
                    },
                    Err(_) => {
                        v10 = v13;
                        v11 = v14;
                    },
                }
            }
        } while ((v8 = v10, v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v7));
        if v8 {
            return core::cmp::max_by(core::num::int_log10::u64(v8) + 1 & 4294967295, v11);
        }
        return v5;
    }
}
