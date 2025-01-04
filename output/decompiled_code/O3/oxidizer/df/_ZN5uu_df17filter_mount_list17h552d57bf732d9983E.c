fn uu_df::filter_mount_list(a0: &struct24, a1: &struct24, a2: u64) -> int {
    let v0: i128;  // [sp-0x238], Other Possible Types: struct16
    let v1: i64;  // [sp-0x230]
    let v2: i64;  // [sp-0x228]
    let v3: struct32;  // [sp-0x218], Other Possible Types: i256
    let v4: Option<struct152>;  // [sp-0x1f8], Other Possible Types: i1216
    let v5: i8;  // [bp-0x160]
    let v6: i8;  // [bp-0xc8]
    let v9: i64;  // r12
    let v11: i64;  // rdx
    let v12: i128;  // xmm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v4 != 0x8000000000000000 {
        v9 = &v4;
        do {
            memcpy(&v5, v9, 152);
            if uu_df::is_best(v1, v2, &v5) as i8 && uu_df::is_included(&v5, a2) as i8 {
                memcpy(&v6, &v5, 152);
                v0 = alloc::vec::Vec<T,A>::push(&v6, v11);
                v9 = &v4;
            }
        } while ((<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v9, &v3), v4 != 0x8000000000000000));
    }
    v12 = v0;
    return struct24 {
        field_0: v12
        field_16: v2
    };
}
