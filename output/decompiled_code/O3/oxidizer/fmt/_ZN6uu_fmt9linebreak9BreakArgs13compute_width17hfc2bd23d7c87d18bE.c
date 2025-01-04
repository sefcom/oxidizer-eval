fn uu_fmt::linebreak::BreakArgs::compute_width(a0: &struct_0, a1: &u64, a2: u64, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rdi
    let v4: u64;  // rax

    if a3 {
        return 0;
    }
    v2 = a1[6];
    if !*(a1) {
        return v2;
    }
    v3 = a0->field_40;
    if v3 {
        v4 = a1[1] + a2;
        v2 = v2 - a2 + v3 * ((!(v4 | v3) >> 32 ? ((0 CONCAT v4) % (v3 & 4294967295) CONCAT (0 CONCAT v4) / (v3 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v4) % v3 CONCAT (0 CONCAT v4) / v3) + 1);
        return v2;
    }
    v0 = v2;
    core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
}
