fn uu_df::is_included(a0: i64, a1: i64) -> long long {
    let v1: u64;  // rax

    if (!*((a0 + 144) as &i8) || !*((a1 + 80) as &i8)) && (!*((a0 + 145) as &i8) || *((a1 + 81) as &i8)) && (*((a1 + 48) as &i64) == 0x8000000000000000 || !((v1 = <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 48, *((a1 + 56) as &i64), *((a1 + 64) as &i64)) as u64, v1 as u8))) {
        if *((a1 + 24) as &i64) == 0x8000000000000000 {
            return v1 & -0x100 | 1;
        }
        return <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 48, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
    }
    return 0;
}
