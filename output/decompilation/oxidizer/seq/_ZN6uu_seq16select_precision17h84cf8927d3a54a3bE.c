fn uu_seq::select_precision(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x8]

    if *(a0 as &i32) != 1 {
        return 0;
    } else if *(a1 as &i32) != 1 {
        return 0;
    } else if *(a2 as &i64) {
        if !*((a2 + 8) as &i64) && !*((a0 + 8) as &i64) && !*((a1 + 8) as &i64) {
            return 1;
        }
        v0 = 1;
        core::cmp::Ord::max(*((a0 + 8) as &i64), *((a1 + 8) as &i64));
        return 1;
    } else {
        return 0;
    }
}
