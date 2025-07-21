fn uu_wc::compute_number_width(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0xf0]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v4: core::slice::iter::Iter<u8>;  // rax
    let v5: u64;  // rbx
    let v6: void*;  // r14
    let v7: u64;  // rdx

    if !*(a0 as &i64) {
        return (uu_wc::Settings::number_enabled(a1) as i32 == 1 ? 1 : 7);
    } else if *(a0 as &i64) == 1 {
        if uu_wc::Settings::number_enabled(a1) as i32 == 1 && *((a0 + 24) as &i64) == 1 {
            return 1;
        }
        v0 = struct16 {
            field_0: *((a0 + 16) as &i64)
            field_8: *((a0 + 16) as &i64) + *((a0 + 24) as &i64) * 24
        };
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v4 {
            return 1;
        }
        do {
            if *(v4 as &i64) != 9223372036854775809 {
                v1 = std::fs::metadata(v4, v7);
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v4));
        if v6 {
            return core::cmp::max_by(core::num::int_log10::u64(v6) + 1, v5);
        }
        return v5;
    } else {
        return 1;
    }
}
