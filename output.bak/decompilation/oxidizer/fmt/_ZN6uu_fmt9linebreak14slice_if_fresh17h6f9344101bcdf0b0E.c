fn uu_fmt::linebreak::slice_if_fresh(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v4: u64;  // rax

    v0 = v4;
    if a1 && !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4, a2, a3) {
        core::str::slice_error_fail(a2, a3, a4, a3, "src/uu/fmt/src/linebreak.rs"); /* do not return */
    }
    return struct24 {
        field_0: v9
        field_8: v10
        field_16: v12
    };
}
