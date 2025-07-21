fn uu_df::Options::get_intersected_types(a1: i64, a2: i64, a3: i64, a4: i64) -> Option<struct24> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0x80]
    let v1: struct16;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: void*;  // [bp-0x70]
    let v4: struct24;  // [bp-0x68]
    let v5: alloc::string::String;  // [bp-0x68]
    let v6: struct24;  // [bp-0x58]
    let v7: u64;  // [bp-0x40]
    let v8: u64;  // [bp-0x38]
    let v10: u64;  // rax
    let v11: i64;  // rdi
    let v12: i64;  // r12

    v0 = 0;
    v2 = 8;
    v3 = 0;
    v7 = a0;
    v8 = a0 + a1 * 24;
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v10 {
        do {
            if <T as core::slice::cmp::SliceContains>::slice_contains(v10, a2, a3) {
                v5 = <alloc::string::String as core::clone::Clone>::clone(v10);
                v1 = alloc::vec::Vec<T,A>::push(&v5);
            }
        } while ((v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v7), v10));
        v6 = v3;
        v4 = *(&v1.field_0 as &i128);
        if v3 {
            *((v11 + 16) as &void*) = v3;
            *(v11 as &i128) = *(&v1.field_0 as &i128);
            return;
        }
    }
    *(v12 as &i64) = 0x8000000000000000;
    return;
}
