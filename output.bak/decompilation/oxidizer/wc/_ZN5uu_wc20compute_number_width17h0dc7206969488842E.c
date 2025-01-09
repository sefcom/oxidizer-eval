fn uu_wc::compute_number_width(a0: &u64, a1: u32) -> u64 {
    let v0: u64;  // [sp-0xf0]
    let v1: u64;  // [sp-0xe8]
    let v2: struct16;  // [sp-0xe0], Other Possible Types: u128
    let v3: i8;  // [bp-0xa8]
    let v4: i8;  // [bp-0x90]
    let v6: u64;  // rax
    let v7: u64;  // rbx
    let v8: u64;  // rdx
    let v9: struct8;  // rax
    let v10: void*;  // r14
    let v11: u32;  // eax
    let v12: u64;  // rax

    v6 = *(a0);
    if !v6 {
        v7 = (uu_wc::Settings::number_enabled(a1) as i32 == 1 ? 1 : 7);
        return v7;
    } else if v6 != 1 {
        return 1;
    } else {
        v8 = a0[3];
        if uu_wc::Settings::number_enabled(a1) as i32 == 1 && v8 == 1 {
            return 1;
        }
        v0 = a0[2];
        v1 = v0 + v8 * 24;
        v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v9 {
            return 1;
        }
        v7 = 1;
        v10 = 0;
        do {
            if *(v9 as &i64) == 9223372036854775809 {
                v7 = 7;
            } else {
                v2 = std::fs::metadata(v9);
                if v2 as i64 != 2 {
                    v11 = v3 & 0xf000;
                    if v11 != 0x8000 {
                        v7 = 7;
                    }
                    v12 = v4;
                    if v11 != 0x8000 {
                        v12 = 0;
                    }
                    v10 += v12;
                }
            }
        } while ((v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v9));
        if v10 {
            return core::cmp::max_by(core::num::int_log10::u64(v10) + 1 & 4294967295, v7);
        }
        return v7;
    }
}
