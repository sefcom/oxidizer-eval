fn uu_df::is_best(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v3: i64;  // rax

    v0 = a0;
    v1 = a1 * 152 + a0;
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v3 {
        do {
            if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v3 + 8) as &i64), *((v3 + 16) as &i64), *((a2 + 8) as &i64), *((a2 + 16) as &i64)) as i8 && uu_df::mount_info_lt(a2, v3) as i8 {
                return 0;
            }
        } while ((v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v3));
    }
    return v3 & -0x100 | 1;
}
