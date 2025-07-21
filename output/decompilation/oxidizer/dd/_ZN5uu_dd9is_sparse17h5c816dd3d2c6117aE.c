fn uu_dd::is_sparse(a0: i64, a1: i64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    v0 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0);
}
