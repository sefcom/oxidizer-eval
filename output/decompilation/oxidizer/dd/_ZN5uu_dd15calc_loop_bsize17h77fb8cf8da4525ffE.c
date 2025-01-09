fn uu_dd::calc_loop_bsize(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v1: u32;  // [bp+0x8]
    let v2: i8;  // [bp+0x10]
    let v3: u64;  // rax
    let v4: u64;  // rax

    v0 = v3;
    v4 = v2;
    if !a0 {
        return core::cmp::min_by(v4, *(&v1 as &i64) * (a1 - (a2 + a3)));
    } else if a0 != 1 {
        return v4;
    } else {
        return core::cmp::min_by(v4, 0, a1 - a4, -(a5) - (a1 < a4));
    }
}
