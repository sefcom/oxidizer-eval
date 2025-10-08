fn starship::module::Module::is_empty(a0: i64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: *((a0 + 56) as &i64)
        field_8: *((a0 + 64) as &i64) * 56 + *((a0 + 56) as &i64)
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v0);
}
