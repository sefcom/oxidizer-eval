fn uu_dd::calc_bsize(a0: u32, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    v3 = gcd::binary_usize(a0, a1);
    if v3 {
        return a1 * (!(v3 | a0) >> 32 ? ((0 CONCAT a0) % (v3 & 4294967295) CONCAT (0 CONCAT a0) / (v3 & 4294967295)) & 4294967295 : (0 CONCAT a0) % v3 CONCAT (0 CONCAT a0) / v3);
    }
    core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
}
