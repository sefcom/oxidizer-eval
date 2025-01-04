fn uu_yes::prepare_buffer(a0: &struct8) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rsi
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // r14
    let v7: u32;  // rdx

    v0 = v2;
    v3 = a0->field_10;
    v4 = v3 * 2;
    if v4 > 0x4000 {
        return v4;
    } else if !v3 {
        core::panicking::panic(); /* do not return */
    } else {
        v5 = 0x4000;
        if v3 <= 0x4000 {
            v4 = ((0 CONCAT 0x4000) % (v3 & 4294967295) CONCAT (0 CONCAT 0x4000) / (v3 & 4294967295)) & 4294967295;
            v5 = ((0 CONCAT 0x4000) % (v3 & 4294967295) CONCAT (0 CONCAT 0x4000) / (v3 & 4294967295)) >> 32 & 4294967295;
        }
        v6 = 0x4000 - v5;
        if v3 >= v6 {
            return v4;
        }
        do {
            v4 = alloc::vec::Vec<T,A>::extend_from_within(a0, core::cmp::min_by(v6 - v3, v3), v7);
            v3 = a0->field_10;
        } while (v3 < v6);
        return v4;
    }
}
