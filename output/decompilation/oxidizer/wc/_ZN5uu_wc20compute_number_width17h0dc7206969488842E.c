fn uu_wc::compute_number_width(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe8]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v5: core::option::Option<u32>;  // rax
    let v6: u64;  // rbx
    let v7: void*;  // r14
    let v8: u64;  // rdx

    if !*(a0 as &i64) {
        return (uu_wc::Settings::number_enabled(a1) as i32 == 1 ? 1 : 7);
    } else if *(a0 as &i64) == 1 {
        if uu_wc::Settings::number_enabled(a1) as i32 == 1 && *((a0 + 24) as &i64) == 1 {
            return 1;
        }
        v0 = *((a0 + 16) as &i64);
        v1 = *((a0 + 16) as &i64) + *((a0 + 24) as &i64) * 24;
        v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        match v5 {
            None => {
                return 1;
            },
            Some(_) => {
                do {
                    if *(v5 as &i64) != 9223372036854775809 {
                        v2 = std::fs::metadata(v5, v8);
                    }
                } while ((v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v5));
                if v7 {
                    return core::cmp::max_by((core::num::int_log10::u64(v7) + 1) as u64, v6);
                }
                return v6;
            },
        }
    } else {
        return 1;
    }
}
