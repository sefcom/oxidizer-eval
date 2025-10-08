fn uu_unexpand::next_tabstop(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x20]
    let v1: struct16;  // [bp-0x18]

    v0 = a2;
    if a1 == 1 {
        return 1;
    }
    v1 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 8
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0) {
        return 1;
    }
    return 0;
}
