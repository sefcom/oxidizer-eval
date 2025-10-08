fn uu_mktemp::find_last_contiguous_block_of_xs(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // r14
    let v5: core::option::Option<&str>;  // rax
    let v6: u64;  // rax

    v0 = v2;
    v4 = v3 + 3;
    v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v4, a1, a2) as u64;
    v6 = 1;
    return struct24 {
        field_0: v2
        field_8: core::option::Option<T>::map_or(core::str::<impl str>::rfind(v5, v3) as i8, v3)
        field_16: v4
    };
}
