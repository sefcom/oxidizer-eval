fn uu_wc::compute_number_width(a0: i64, a1: i64) -> long long {
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v3: u32;  // eax
    let v4: u64;  // rdx
    let v5: i64;  // r14
    let v6: u64;  // r13
    let v7: struct32;  // rbx
    let v8: void*;  // r15
    let v9: u64;  // r13

    if !*(a0 as &i64) {
        return (uu_wc::Settings::number_enabled(a1) == 1 ? 1 : 7);
    } else if *(a0 as &i64) == 1 {
        v3 = uu_wc::Settings::number_enabled(a1);
        v4 = *((a0 + 24) as &i64);
        if v3 == 1 && v4 == 1 {
            return 1;
        }
        if !v4 {
            return 1;
        }
        loop {
            v9 = v6;
            if *(v5 as &i64) == 9223372036854775809 {
                v7 = 7;
                v5 += 24;
                v6 = v9 - 24;
                if v9 == 24 {
                    break;
                }
            } else {
                v1 = std::fs::metadata(v5, v4 * 8);
                v5 += 24;
                v6 = v9 - 24;
                if v9 == 24 {
                    break;
                }
            }
        }
        if v8 {
            return core::cmp::Ord::max(core::num::int_log10::u64(v8) + 1, v7);
        }
        return v7;
    } else {
        return 1;
    }
}
