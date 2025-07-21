fn uu_df::table::Header::get_headers(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: void*;  // [bp-0x78]
    let v3: struct16;  // [bp-0x70]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) + *((a1 + 8) as &i64)
    };
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3);
    if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3) {
        return struct24 {
            field_0: *(&v0 as &i128)
            field_16: 0
        };
    }
    goto ((&g_415ad0.field_0)[*(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v3) as &i8)] + &g_415ad0.field_0) as i64;
}
