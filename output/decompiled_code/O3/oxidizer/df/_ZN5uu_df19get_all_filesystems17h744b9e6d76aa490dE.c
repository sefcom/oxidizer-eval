fn uu_df::get_all_filesystems(a0: &u64, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x88]
    let v2: struct24;  // [sp-0x70]
    let v3: i64;  // [sp-0x58], Other Possible Types: struct24
    let v4: i64;  // [sp-0x50]
    let v5: i64;  // [sp-0x48]
    let v6: struct40;  // [bp-0x40]

    if *((a1 + 82) as &i8) {
        sync();
    }
    v2 = uucore::features::fsext::read_fs_list(a1, a2, a3, a4, a5);
    if v3 == 0x8000000000000000 {
        *((a0 + 8) as &i64) = v4;
        *((a0 + 16) as &i64) = v5;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v3 = struct24 {
        field_0: v8
        field_8: v9
        field_16: v10
    };
    uu_df::filter_mount_list(&v0, &v3, a1);
    v6 = struct40 {
        field_0: v10
        field_8: v10
        field_16: v0
        field_24: v1 * 152 + v10
        field_32: a1
    };
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(a0, &v6);
    return a0;
}
