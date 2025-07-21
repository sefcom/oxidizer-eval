fn uu_yes::prepare_buffer() -> : struct8 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: i64;  // rdi
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v6: u64;  // r14
    let v7: u64;  // rax

    v0 = v2;
    v4 = *((v3 + 16) as &i64);
    if v4 * 2 > 0x4000 {
        return;
    } else if v4 {
        v6 = 0x4000 - v5;
        if v4 >= v6 {
            return;
        }
        do {
            v7 = core::cmp::min_by(v6 - v4, v4);
        } while ((alloc::vec::Vec<T,A>::extend_from_within(v3, v7), v4 = *((v3 + 16) as &i64), *((v3 + 16) as &i64) < v6));
        return;
    } else {
        core::panicking::panic("assertion failed: !buf.is_empty()"); /* do not return */
    }
}
