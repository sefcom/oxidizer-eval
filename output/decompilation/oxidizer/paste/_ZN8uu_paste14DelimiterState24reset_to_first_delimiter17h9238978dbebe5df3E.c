fn uu_paste::DelimiterState::reset_to_first_delimiter() -> : struct32 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x28]
    let v1: u128;  // [bp-0x18]
    let v2: u64;  // [bp-0x8]
    let v4: i64;  // rdi
    let v5: u64;  // rbx
    let v6: u64;  // rcx

    if *(v4 as &i32) != 2 {
        return;
    }
    v2 = v5;
    core::iter::adapters::cycle::Cycle<I>::new(*((v4 + 24) as &i64), *((v4 + 32) as &i64) * 16 + *((v4 + 24) as &i64), v6);
    *((v4 + 56) as &u128) = v1;
    *((v4 + 40) as &u128) = v0;
    return;
}
