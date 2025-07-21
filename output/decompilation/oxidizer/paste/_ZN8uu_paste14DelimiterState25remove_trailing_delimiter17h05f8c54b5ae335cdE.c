fn uu_paste::DelimiterState::remove_trailing_delimiter(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v3: u64;  // rax
    let v4: u64;  // rax

    if !a0 {
        return v4;
    } else if a1 {
        v3 = *((a2 + 16) as &i64) - a1;
        if *((a2 + 16) as &i64) >= a1 {
            return alloc::vec::Vec<T,A>::truncate(a2, v3) as u64;
        } else if !*((a2 + 16) as &i64) {
            return v3;
        } else {
            v0 = v3;
            core::panicking::panic("assertion failed: output_len == 0"); /* do not return */
        }
    } else {
        return v4;
    }
}
