fn uu_fmt::linebreak::slice_if_fresh(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8, a6: u8, a7: u8, a8: u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // rax

    v0 = v1;
    if a1 {
        core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4, a2, a3);
    }
    return struct24 {
        field_0: v4
        field_8: a2
        field_16: v6
    };
}
