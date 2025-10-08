fn uu_yes::prepare_buffer() -> : struct8 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rsi
    let v4: u64;  // r14

    v0 = v2;
    v3 = *((a0 + 16) as &i64);
    if v3 > 0x2000 {
        return;
    } else if v3 {
        v4 = 0x4000 - (((0 CONCAT 0x4000) % (v3 & 4294967295) CONCAT (0 CONCAT 0x4000) / (v3 & 4294967295)) >> 32 & 65535) & 4294967295;
        do {
            alloc::vec::Vec<T,A>::extend_from_within(a0, core::cmp::Ord::min(v4 - v3, v3));
            v3 = *((a0 + 16) as &i64);
        } while (*((a0 + 16) as &i64) < v4);
        return;
    } else {
        core::panicking::panic("assertion failed: !buf.is_empty()"); /* do not return */
    }
}
