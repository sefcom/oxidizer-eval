fn uu_numfmt::handle_args(a0: &u64, a1: u32) -> u64 {
    let v0: u128;  // [sp-0x58]
    let v1: u128;  // [sp-0x48]
    let v2: u128;  // [sp-0x38]
    let v3: u128;  // [sp-0x28]
    let v5: struct8;  // rax
    let v6: u32;  // rdx
    let v7: void*;  // rax

    v3 = *(&a0[6] as &i128);
    v2 = *(&a0[4] as &i128);
    v1 = *(&a0[2] as &i128);
    v0 = *(&a0 as &i128);
    loop {
        v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next();
        if !v5 {
            return 0;
        }
        v7 = uu_numfmt::format_and_handle_validation(v5, v6, a1);
        if v7 {
            return v7;
        }
    }
}
