fn uu_ptx::assert_str_integrity(a0: u32, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax

    if a1 > a2 {
        core::panicking::panic("assertion failed: beg <= end", "src/uu/ptx/src/ptx.rs"); /* do not return */
    } else if a2 > a0 {
        core::panicking::panic("assertion failed: end <= s.len()", "src/uu/ptx/src/ptx.rs"); /* do not return */
    } else {
        return v1;
    }
}
