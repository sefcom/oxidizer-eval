fn uu_sort::general_numeric_compare(a0: u64, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u256;  // ymm1
    let v3: u256;  // ymm0
    let v5: u64;  // cc_ndep
    let v7: u64;  // rax

    if a0 == 3 && a1 == 3 {
        if !(BinaryOp CmpF & 1) {
            return -(amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v5) & 1);
        } else if !(BinaryOp CmpF & 1) {
            return v7 | -0x100 | 1;
        } else {
            v0 = v7 | -0x100 | 1;
            core::option::unwrap_failed(); /* do not return */
        }
    }
    return (a1 <= a0 ? (-0x100 | a0 != a1) & 4294967295 & 4294967295 : 255);
}
