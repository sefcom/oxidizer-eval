fn uu_wc::compute_number_width(a0: &u64, a1: u32) -> u64 {
    let v0: u64;  // [sp-0xf0]
    let v1: u64;  // [sp-0xe8]
    let v2: struct16;  // [sp-0xe0], Other Possible Types: u128
    let v3: i8;  // [bp-0xa8]
    let v5: u64;  // rax
    let v6: u64;  // rbx
    let v7: u64;  // rdx
    let v8: struct8;  // rax
    let v9: void*;  // r14
    let v11: u64;  // r14
    let v12: u64;  // rbx
    let v13: u32;  // eax
    let v14: u64;  // r14
    let v15: u64;  // rbx

    v5 = *(a0);
    if !v5 {
        v6 = (uu_wc::Settings::number_enabled(a1) as i32 == 1 ? 1 : 7);
        return v6;
    } else if v5 != 1 {
        return 1;
    } else {
        v7 = a0[3];
        if uu_wc::Settings::number_enabled(a1) as i32 == 1 && v7 == 1 {
            return 1;
        }
        v0 = a0[2];
        v1 = v0 + v7 * 24;
        v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v8 {
            return 1;
        }
        v9 = 0;
        do {
            if *(v8 as &i64) == 9223372036854775809 {
                v11 = v9;
                v12 = 7;
            } else {
                v2 = std::fs::metadata(v8);
                if v2 as i64 != 2 {
                    v13 = v3 & 0xf000;
                }
                v11 = v14;
                v12 = v15;
            }
        } while ((v9 = v11, v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v8));
        if v9 {
            return core::cmp::max_by(core::num::int_log10::u64(v9) + 1 & 4294967295, v12);
        }
        return v6;
    }
}
