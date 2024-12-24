fn uu_fmt::linebreak::slice_if_fresh(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u8) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: i64;  // [bp+0x8]
    let v2: u8;  // [bp+0x10]
    let v3: u8;  // [bp+0x18]
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // rdi

    v0 = v4;
    if !a1 {
        v5 = v1;
        v6 = (v3 & v5 | v2) + 1;
    } else {
        v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4, a2, a3);
        if !v5 {
            core::str::slice_error_fail(); /* do not return */
        }
    }
    return struct24 {
        field_0: 0
        field_8: a2
        field_16: a3
    };
}
