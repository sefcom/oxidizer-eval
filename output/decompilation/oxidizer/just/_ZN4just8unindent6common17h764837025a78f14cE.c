fn just::unindent::common(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: struct64;  // [bp-0x60]
    let v4: core::option::Option<&str>;  // r15

    v0 = struct24 {
        field_0: a0
        field_8: a0 + a1
        field_16: 0
    };
    v1 = core::iter::traits::iterator::Iterator::zip(&v0, a2, a3 + a2);
    return core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(None, v4, a0, a1) as u64;
}
