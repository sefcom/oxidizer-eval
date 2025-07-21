fn uu_tail::args::Settings::verify(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = struct16 {
        field_0: *((a0 + 32) as &i64)
        field_8: *((a0 + 40) as &i64) * 48 + *((a0 + 32) as &i64)
    };
    v0 = struct16 {
        field_0: *((a0 + 32) as &i64)
        field_8: *((a0 + 40) as &i64) * 48 + *((a0 + 32) as &i64)
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    return 0;
}
