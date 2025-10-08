fn uu_df::is_best(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: u32;  // ebx
    let v4: u32;  // ebx
    let v5: u64;  // rbp
    let v6: u64;  // rbp

    v0 = v2;
    v4 = v3 & -0x100 | 1;
    if !a1 {
        return v4;
    }
    loop {
        v6 = v5;
        if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a2 + 8) as &i64), *((a2 + 16) as &i64)) && uu_df::mount_info_lt(a2, a0) {
            return 0;
        }
        a0 += 152;
        v5 = v6 - 152;
        if v6 == 152 {
            return v4;
        }
    }
}
