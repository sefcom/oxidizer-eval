fn uu_unexpand::next_tabstop(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x20]
    let v1: &u64;  // [sp-0x18]
    let v2: u64;  // [sp-0x10]

    v0 = a2;
    if a1 != 1 {
        v1 = a0;
        v2 = &a0[a1];
        if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0) {
            return 0;
        }
    } else if !*(a0) {
        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
    }
    return 1;
}
