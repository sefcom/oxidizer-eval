fn bat::style::StyleComponentList::contains_override(a0: i64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 2
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
}
