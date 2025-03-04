fn uu_split::number::DynamicWidthNumber::digits(a0: &struct24, a1: u64, a2: u64) -> int {
    let v0: struct16;  // [sp-0x48], Other Possible Types: void*
    let v1: u64;  // [sp-0x40]
    let v2: void*;  // [sp-0x38]
    let v4: u64;  // r14
    let v5: u64;  // rbp
    let v6: u64;  // rax
    let v7: u64;  // r15
    let v8: u64;  // r14
    let v9: u64;  // rax
    let v10: u32;  // edx
    let v11: u64;  // r13
    let v12: u32;  // eax

    v4 = a1;
    v5 = a2;
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
        do {
            v8 = v4;
            if !v8 >> 32 {
                v12 = v8;
                v10 = ((0 CONCAT v12) % (v5 & 4294967295) CONCAT (0 CONCAT v12) / (v5 & 4294967295)) >> 32;
                v11 = ((0 CONCAT v12) % (v5 & 4294967295) CONCAT (0 CONCAT v12) / (v5 & 4294967295)) & 4294967295 & 4294967295;
            } else {
                v9 = v8;
                v10 = ((0 CONCAT v9) % v5 CONCAT (0 CONCAT v9) / v5) >> 64;
                v11 = (0 CONCAT v9) % v5 CONCAT (0 CONCAT v9) / v5;
            }
        } while ((v0 = alloc::vec::Vec<T,A>::push(v10 as u64), v4 = v11, v8 >= v5));
    }
    v0 = alloc::vec::Vec<T,A>::resize(v7, 0);
    core::slice::<impl [T]>::reverse(v1, v2);
    return struct24 {
        field_0: v14
        field_16: v2
    };
}
