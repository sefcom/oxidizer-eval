fn uu_fmt::linebreak::BreakArgs::compute_width(a0: i64, a1: i64, a2: u64, a3: u32) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rdi
    let v3: u64;  // rax

    if a3 {
        return 0;
    }
    v1 = *((a1 + 48) as &i64);
    if *(a1 as &i32) != 1 {
        return v1;
    }
    v2 = *((a0 + 64) as &i64);
    v3 = *((a1 + 8) as &i64) + a2;
    return v1 - a2 + v2 * ((!(v3 | v2) >> 32 ? ((0 CONCAT v3) % (v2 & 4294967295) CONCAT (0 CONCAT v3) / (v2 & 4294967295)) & 4294967295 : (0 CONCAT v3) % v2 CONCAT (0 CONCAT v3) / v2) + 1);
}
