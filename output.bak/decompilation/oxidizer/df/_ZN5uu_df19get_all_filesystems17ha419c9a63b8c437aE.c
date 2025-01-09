fn uu_df::get_all_filesystems(a0: &struct24, a1: void*) -> u64 {
    let v0: struct24;  // [sp-0x90]
    let v1: struct24;  // [bp-0x78]
    let v4: struct32;  // [sp-0x60], Other Possible Types: i256
    let v5: i64;  // [sp-0x40]
    let v6: i192;  // [sp-0x38], Other Possible Types: struct24

    if *((a1 + 82) as &i8) {
        sync();
    }
    v0 = uucore::features::fsext::read_fs_list();
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v2
        field_16: v3
    };
    *(&v1.field_0 as &struct24) = struct24 {
        field_0: v8
        field_8: v9
        field_16: v10
    };
    v6 = uu_df::filter_mount_list(&v1, a1);
    v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v5 = a1;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v4);
}
