fn uu_df::get_all_filesystems(a0: &u64, a1: void*) -> u64 {
    let v0: struct24;  // [sp-0x90]
    let v1: i64;  // [sp-0x78], Other Possible Types: struct24
    let v4: struct32;  // [sp-0x60], Other Possible Types: i256
    let v5: i64;  // [sp-0x40]
    let v6: i8;  // [bp-0x38]

    if *((a1 + 82) as &i8) {
        sync();
    }
    v0 = uucore::features::fsext::read_fs_list();
    if v1 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v2
            field_16: v3
        };
    }
    v1 = struct24 {
        field_0: v8
        field_8: v9
        field_16: v10
    };
    uu_df::filter_mount_list(&v6, &v1, a1);
    v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v5 = a1;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v4);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v2
        field_16: v3
    };
}
