fn uu_dd::calc_loop_bsize(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v1: u64;  // rax

    v0 = v1;
    if !a0 {
        return core::cmp::min_by(a7, a6 * (a1 - (a2 + a3)));
    } else if a0 == 1 {
        return core::cmp::min_by(a7, 0, a1 - a4, -(a5) - (a1 < a4));
    } else {
        return a7;
    }
}
