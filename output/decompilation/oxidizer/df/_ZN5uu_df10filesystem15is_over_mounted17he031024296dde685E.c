fn uu_df::filesystem::is_over_mounted(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v1: i64;  // [bp-0x10]
    let v3: i64;  // rax
    let v4: u64;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 152 + a0
    };
    v1 = a2;
    v3 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v0, &v1 as u8);
    if !v3 {
        return 0;
    }
    v4 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((v3 + 32) as &i64), *((v3 + 40) as &i64), *((a2 + 32) as &i64), *((a2 + 40) as &i64));
    return v4 & -0x100 | v4 ^ 1;
}
