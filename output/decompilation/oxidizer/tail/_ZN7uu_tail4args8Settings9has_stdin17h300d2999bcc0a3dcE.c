fn uu_tail::args::Settings::has_stdin(a0: i64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: *((a0 + 32) as &i64)
        field_8: *((a0 + 40) as &i64) * 48 + *((a0 + 32) as &i64)
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
}
