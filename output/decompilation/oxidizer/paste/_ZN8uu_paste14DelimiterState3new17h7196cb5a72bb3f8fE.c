fn uu_paste::DelimiterState::new(a1: i64, a2: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x28]
    let v2: i64;  // rax
    let v3: i64;  // rsi
    let v4: i64;  // rdx
    let v5: i64;  // r8
    let v6: u64;  // rbx
    let v7: u64;  // r14
    let v8: u64;  // r15

    if a2 {
        if a2 == 1 {
            v2 = *((a1 + 8) as &i64);
            if !v2 {
                return struct8 {
                    field_0: 0
                };
            }
        } else {
            v0 = struct40 {
                field_0: *(a1 as &i128)
                field_16: v6
                field_24: v7
                field_32: v8
            };
            core::iter::adapters::cycle::Cycle<I>::new(a0 + 40, a1, a2 * 16 + a1);
            v3 = a1;
            v2 = a2;
            *((a0 + 8) as &u128) = v0.field_0;
            a2 = 2;
            v4 = 32;
            v5 = 24;
        }
        *((a0 + v5) as &unsigned long) = v3;
        *((a0 + v4) as &unsigned long) = v2;
    }
    *(a0 as &unsigned long) = a2;
    return;
}
