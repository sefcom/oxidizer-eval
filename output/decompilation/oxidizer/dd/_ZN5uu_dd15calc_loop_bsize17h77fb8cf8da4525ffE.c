fn uu_dd::calc_loop_bsize(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u64, a7: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v1: u64;  // rax

    v0 = v1;
    if !a0 {
        return core::cmp::min_by(a7, a6 * (a1 - (a2 + a3)));
    } else if a0 != 1 {
        return a7;
    } else {
        return core::cmp::min_by(a7, 0, a1 - a4, -(a5) - (a1 < a4));
    }
}
