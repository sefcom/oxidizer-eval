fn zoxide::db::stream::Stream::filter_by_exclude(a0: i64, a1: i64, a2: i64, a3: i64) -> u8 {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 56 + a0
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0, a2, a3) ^ 1;
}
