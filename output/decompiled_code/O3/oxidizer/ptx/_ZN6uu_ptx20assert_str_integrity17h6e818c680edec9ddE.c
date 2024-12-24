fn uu_ptx::assert_str_integrity(a0: u64, a1: u64, a2: u64) -> u64 {
    let v1: u64;  // rax

    if a1 > a2 {
        core::panicking::panic(); /* do not return */
    } else if a2 > a0 {
        core::panicking::panic(); /* do not return */
    } else {
        return v1;
    }
}
