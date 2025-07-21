fn uu_df::get_all_filesystems(a1: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: &mut [u8];  // [bp-0x90], Other Possible Types: struct24
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: struct24;  // [bp-0x78]
    let v4: u8;  // [bp-0x60]
    let v5: i64;  // [bp-0x40]
    let v6: struct32;  // [bp-0x38], Other Possible Types: u8
    let v8: i64;  // rdi
    let v9: u64;  // rdi

    if *((a0 + 82) as &i8) {
        sync();
    }
    uucore::features::fsext::read_fs_list(a0);
    if v0 != 0x8000000000000000 {
        v3 = v0;
        v3 = v0;
        uu_df::filter_mount_list(&v6, &v3, a0);
        v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
        v5 = a0;
        alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(v9, &v4);
        return;
    }
    *((v8 + 8) as &u64) = v1;
    *((v8 + 16) as &u64) = v2;
    *(v8 as &i64) = 0x8000000000000000;
    return;
}
