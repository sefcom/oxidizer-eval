fn uu_df::filter_mount_list(a0: &struct24, a1: &struct24, a2: u64) -> int {
    let v0: i64;  // [sp-0x238], Other Possible Types: struct16
    let v1: i64;  // [sp-0x228]
    let v2: struct32;  // [sp-0x218]
    let v3: Option<struct152>;  // [sp-0x1f8]
    let v4: i8;  // [bp-0x160]
    let v5: i8;  // [bp-0xc8]
    let v9: i64;  // r12

    v0 = 0;
    v0 = 8;
    v1 = 0;
    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
    match v3 {
        Some(_) => {
            v9 = &v3;
            do {
                memcpy(&v4, v9, 152);
                if uu_df::is_included(&v4, a2) as i8 && uu_df::is_best(v0, v1, &v4) as i8 {
                    memcpy(&v5, &v4, 152);
                    v0 = alloc::vec::Vec<T,A>::push(&v5);
                    v9 = &v3;
                }
            } while ((<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v9, &v2), v3 as i64 != 0x8000000000000000));
        },
        None => {
            return struct24 {
                field_0: v11
                field_16: v1
            };
        },
    }
}
