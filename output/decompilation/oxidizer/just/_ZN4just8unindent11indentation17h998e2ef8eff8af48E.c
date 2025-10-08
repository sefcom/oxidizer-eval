fn just::unindent::indentation(a0: u64, a1: u64) -> long long {
    let v0: struct25;  // [bp-0x38]
    let v2: struct80;  // r15

    v0 = struct25 {
        field_0: a0
        field_8: a0 + a1
        field_16: 0
        field_24: 0
    };
    return core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v2, a0, a1) as u64;
}
