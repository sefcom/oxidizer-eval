fn uu_numfmt::handle_args(a0: &u64, a1: u64, a2: u64) -> u64 {
    let v0: u128;  // [sp-0x58]
    let v1: u128;  // [sp-0x48]
    let v2: u128;  // [sp-0x38]
    let v3: u128;  // [sp-0x28]
    let v5: void*;  // rax

    v3 = *(&a0[6] as &i128);
    v2 = *(&a0[4] as &i128);
    v1 = *(&a0[2] as &i128);
    v0 = *(&a0 as &i128);
    while (<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(a1, a2)) {
        v5 = uu_numfmt::format_and_handle_validation() as i64;
        if v5 {
            return v5;
        }
    }
    return 0;
}
