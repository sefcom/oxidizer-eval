fn uu_paste::DelimiterState::reset_to_first_delimiter() -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x28]
    let v1: u128;  // [bp-0x18]
    let v3: u64;  // rbx

    if *(a0 as &i32) != 2 {
        return;
    }
    v0 = struct40 {
        field_0: core::iter::adapters::cycle::Cycle<I>::new(*((a0 + 24) as &i64), *((a0 + 32) as &i64) * 16 + *((a0 + 24) as &i64))
        field_32: v3
    };
    *((a0 + 56) as &u128) = v1;
    *((a0 + 40) as &i64) = v0.field_0;
    return;
}
