fn uu_df::Options::get_intersected_types(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x80], Other Possible Types: struct16, int
    let v1: i64;  // [sp-0x70]
    let v2: iNone;  // [sp-0x68], Other Possible Types: struct24
    let v3: i64;  // [sp-0x58]
    let v4: struct16;  // [bp-0x40]
    let v6: i64;  // rax
    let v7: i64;  // rbx
    let v8: i64;  // rax

    v0 = 0;
    v0 = 8;
    v1 = 0;
    v4 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 24
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    if !v6 {
        v3 = v1;
        v2 = *(&v0 as &i128);
    }
    v7 = v6;
    do {
        if <T as core::slice::cmp::SliceContains>::slice_contains(v7, a3, a4) as i8 {
            v2 = <alloc::string::String as core::clone::Clone>::clone(v7);
            v0 = alloc::vec::Vec<T,A>::push(&v2);
        }
    } while ((v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4), v7));
    v3 = v1;
    v2 = v0 as i128;
    v8 = v1;
    return struct24 {
        field_0: v0 as i128
        field_16: v8
    };
}
