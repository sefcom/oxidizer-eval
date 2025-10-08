fn uu_df::is_included(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: void*;  // rax

    v0 = v2;
    if *((a0 + 144) as &i8) && *((a1 + 80) as &i8) {
        return 0;
    }
    if (*((a0 + 145) as &i8) || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a0 + 56) as &i64), *((a0 + 64) as &i64), "lofs")) && *((a1 + 81) as &i8) != 1 {
        return 0;
    }
    v3 = 0;
    if !((((0 ^ *((a1 + 48) as &i64)) & (0 ^ -(*((a1 + 48) as &i64)))) >> 63) as char) {
        v3 = <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 48, *((a1 + 56) as &i64), *((a1 + 64) as &i64));
        if v3 as u8 {
            return 0;
        }
    }
    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        return <T as core::slice::cmp::SliceContains>::slice_contains(a0 + 48, *((a1 + 32) as &i64), *((a1 + 40) as &i64));
    }
    return v3 & -0x100 | 1;
}
