fn uu_df::is_best(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct16;  // [bp-0x38]
    let v2: i64;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 152 + a0
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v2 {
        do {
            if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v2 + 8) as &i64), *((v2 + 16) as &i64), *((a2 + 8) as &i64), *((a2 + 16) as &i64)) as i8 && uu_df::mount_info_lt(a2, v2) as i8 {
                return 0;
            }
        } while ((v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0), v2));
    }
    return v2 & -0x100 | 1;
}
