fn uu_fmt::linebreak::BreakArgs::compute_width(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rdi
    let v3: u64;  // rax

    if a3 {
        return 0;
    }
    v1 = a1[6];
    if *(a1) {
        v2 = a0->field_40;
        v3 = a1[1] + a2;
        v1 = v1 - a2 + v2 * ((!(v3 | v2) >> 32 ? ((0 CONCAT v3) % (v2 & 4294967295) CONCAT (0 CONCAT v3) / (v2 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v3) % v2 CONCAT (0 CONCAT v3) / v2) + 1);
        return v1;
    }
    return v1;
}
