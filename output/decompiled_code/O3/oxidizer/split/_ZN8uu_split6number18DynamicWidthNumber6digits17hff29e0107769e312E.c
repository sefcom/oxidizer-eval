fn uu_split::number::DynamicWidthNumber::digits(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct16;  // [sp-0x48], Other Possible Types: u128, void*
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: u64;  // r14
    let v5: u64;  // rbp
    let v6: u64;  // rax
    let v7: u64;  // r15
    let v8: u64;  // r14
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u32;  // edx
    let v13: u32;  // eax
    let v14: u128;  // xmm0

    v4 = a1;
    v5 = a2 & 4294967295;
    v6 = v5 * (v5 - 1);
    v7 = 2;
    if v6 <= a1 {
        do {
            v4 -= v6;
            v7 += 1;
            v6 = v5 * v6;
        } while (v4 >= v6);
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if v4 {
        if !a2 {
            core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
        }
        do {
            if !v10 >> 32 {
                v13 = v10;
                v12 = ((0 CONCAT v13) % (v5 & 4294967295) CONCAT (0 CONCAT v13) / (v5 & 4294967295)) >> 32;
                v11 = ((0 CONCAT v13) % (v5 & 4294967295) CONCAT (0 CONCAT v13) / (v5 & 4294967295)) & 4294967295 & 4294967295;
            } else {
                v10 = v8;
                v11 = (0 CONCAT v10) % v5 CONCAT (0 CONCAT v10) / v5;
                v12 = ((0 CONCAT v10) % v5 CONCAT (0 CONCAT v10) / v5) >> 64;
            }
        } while ((v0 = alloc::vec::Vec<T,A>::push(v12 as u64), v10 >= v5));
    }
    v0 = alloc::vec::Vec<T,A>::resize(v7, 0);
    core::slice::<impl [T]>::reverse(v1, v2);
    v14 = v0;
    return struct24 {
        field_0: v14
        field_16: v2
    };
}
