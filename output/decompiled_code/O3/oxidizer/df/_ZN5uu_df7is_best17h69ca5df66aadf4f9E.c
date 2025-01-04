fn uu_df::is_best(a0: u64, a1: u64, a2: &u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v3: struct8;  // rax
    let v6: u64;  // rax

    v0 = a0;
    v1 = a1 * 152 + a0;
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v3 {
        do {
            if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v3 + 8) as &i64), *((v3 + 16) as &i64), a2[1], a2[2]) as i8 && uu_df::mount_info_lt(a2, v3) as i8 {
                return 0;
            }
        } while ((v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v3));
    }
    v6 = v3 | -0x100 | 1;
    return v6;
}
