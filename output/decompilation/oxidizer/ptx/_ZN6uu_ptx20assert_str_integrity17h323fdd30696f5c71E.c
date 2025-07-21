fn uu_ptx::assert_str_integrity(a0: i64, a1: i64, a2: i64) -> long long {
    let v1: u64;  // rax

    if a1 > a2 {
        core::panicking::panic("assertion failed: beg <= end"); /* do not return */
    } else if a2 <= a0 {
        return v1;
    } else {
        core::panicking::panic("assertion failed: end <= s.len()"); /* do not return */
    }
}
