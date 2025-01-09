fn uu_fmt::parasplit::WordSplit::analyze_tabs(a0: &struct40, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v5: u64;  // rbp
    let v7: u64;  // rdx
    let v8: u64;  // rcx
    let v9: u64;  // r12
    let v10: u64;  // r12
    let v12: void*;  // r12
    let v13: struct8;  // rax

    if !(v7 == 9) {
        goto LABEL_4ba665;
    }
    if v5 {
        v8 = a1->field_40;
        if !v8 {
            core::panicking::panic_const::panic_const_div_by_zero("src/uu/fmt/src/parasplit.rs"); /* do not return */
        }
        v12 = v8 * ((!(v10 | v8) >> 32 ? ((0 CONCAT v10) % (v8 & 4294967295) CONCAT (0 CONCAT v10) / (v8 & 4294967295)) & 4294967295 & 4294967295 : (0 CONCAT v10) % v8 CONCAT (0 CONCAT v10) / v8) + 1);
        v5 = 1;
    } else {
        v5 = 1;
        v0 = v9;
        v12 = 0;
    }
    loop {
        v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next();
        return struct40 {
            field_0: v5
            field_8: v0
            field_16: v12
            field_24: v6
            field_32: v13
        };
LABEL_4ba665:
        v12 += 1;
    }
}
