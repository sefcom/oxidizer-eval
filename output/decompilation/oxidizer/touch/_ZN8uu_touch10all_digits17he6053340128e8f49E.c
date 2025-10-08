fn uu_touch::all_digits(a0: u64, a1: u64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0);
}
