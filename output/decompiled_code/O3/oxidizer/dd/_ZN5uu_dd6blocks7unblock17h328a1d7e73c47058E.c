fn uu_dd::blocks::unblock(a0: u64, a1: u64, a2: u64, a3: u64) -> u64 {
    let v0: void*;  // [sp-0x48]
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v3: u64;  // [sp-0x18]
    let v4: u64;  // [sp-0x10]
    let v5: u64;  // [sp-0x8]

    if a3 {
        v3 = a1;
        v4 = a2;
        v5 = a3;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        return core::iter::traits::iterator::Iterator::fold(a0, &v3, &v0);
    }
    panic!("chunk size must be non-zero");
}
