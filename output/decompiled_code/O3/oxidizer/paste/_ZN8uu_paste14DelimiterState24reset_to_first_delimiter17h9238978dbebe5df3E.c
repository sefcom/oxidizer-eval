fn uu_paste::DelimiterState::reset_to_first_delimiter(a0: &struct32) -> u64 {
    let v0: i8;  // [bp-0x28]
    let v1: i8;  // [bp-0x18]
    let v2: u64;  // [sp-0x8]
    let v4: u64;  // rbx
    let v5: struct32;  // rax
    let v6: u128;  // xmm0

    if a0->field_0 == 2 {
        v2 = v4;
        v5 = core::iter::adapters::cycle::Cycle<I>::new(a0->field_18, a0->field_20 * 16 + a0->field_18);
        v6 = v0;
        *((&a0->field_28 as &char + 8) as &i8) = v1;
        (&a0->field_20)[1] = v6;
        return v5;
    }
    return v5;
}
