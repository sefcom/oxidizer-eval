fn uu_df::filter_mount_list(a0: i64, a1: &struct24, a2: i64) -> long long {
    let v0: void*;  // [bp-0x238]
    let v1: struct16;  // [bp-0x238]
    let v2: u64;  // [bp-0x230]
    let v3: void*;  // [bp-0x228]
    let v4: i64;  // [bp-0x220]
    let v5: struct32;  // [bp-0x218]
    let v6: Option<struct152>;  // [bp-0x1f8]
    let v7: u1216;  // [bp-0x160]
    let v8: u8;  // [bp-0xc8]
    let v10: i64;  // r12
    let v11: i64;  // rbp

    v0 = 0;
    v2 = 8;
    v3 = 0;
    v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v5);
    if let Some(_) = v6 {
        do {
            memcpy(&v7, v10, 152);
            if uu_df::is_included(&v7, a2) as i8 && uu_df::is_best(8, v3, &v7) as i8 {
                memcpy(&v8, &v7, 152);
                v1 = alloc::vec::Vec<T,A>::push(&v8);
            }
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v10, v11);
        } while (v6 != 0x8000000000000000);
    }
    *((v4 + 16) as &void*) = v3;
    *(v4 as &i128) = *(&v1.field_0 as &i128);
    return v4;
}
