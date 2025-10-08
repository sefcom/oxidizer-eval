fn uu_touch::is_first_filename_timestamp(a0: i64, a1: &str, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x30]
    let v1: void*;  // [bp-0x20]
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v4: i64;  // rbx
    let v5: u64;  // r14
    let v6: u64;  // rax

    if !(!a0 && !a2) {
        return 0;
    } else if !a5 < 2 && !v2 {
        v0 = std::env::var(v2, v3);
        if (v0 as i8 & 1) || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((&v0 as &char + 24) as &i64), "199209") {
            return 0;
        }
        v4 = *((*(a4 as &i64) + 8) as &i64);
        v5 = *((*(a4 as &i64) + 16) as &i64);
        v6 = uu_touch::all_digits(v4, v5);
        if !v6 {
            return 0;
        }
        match (v5) {
            8 => {
                return v6 & -0x100 | 1;
            }
            10 => {
                return core::ops::range::RangeBounds::contains(uu_touch::get_year(*((v4 + 8) as &i8), *((v4 + 9) as &i8)) as i32, v2);
            }
            _ => {
                return 0;
            }
        }
        return 0;
    } else {
        return 0;
    }
}
