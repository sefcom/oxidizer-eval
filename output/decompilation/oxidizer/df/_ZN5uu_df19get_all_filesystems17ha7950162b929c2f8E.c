fn uu_df::get_all_filesystems(a1: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x1b8]
    let v1: struct16;  // [bp-0x1b8]
    let v2: core::fmt::Arguments;  // [bp-0x1b0]
    let v3: core::fmt::rt::Argument;  // [bp-0x1a8]
    let v4: struct32;  // [bp-0x1a0]
    let v5: u64;  // [bp-0x178]
    let v6: u64;  // [bp-0x170]
    let v7: u64;  // [bp-0x168]
    let v8: struct24;  // [bp-0x160], Other Possible Types: struct32
    let v9: u64;  // [bp-0x160]
    let v10: u64;  // [bp-0x158]
    let v11: i64;  // [bp-0x140]
    let v12: i64;  // [bp-0x138]
    let v13: Option<struct152>;  // [bp-0xc8]
    let v14: Option<struct152>;  // [bp-0xc8]

    if *((a1 + 82) as &i8) {
        sync();
    }
    v0 = 0;
    v2 = 8;
    v3 = 0;
    v8 = uucore::features::fsext::read_fs_list();
    if (((0 ^ v8.field_0) & (0 ^ -(v9))) >> 63) as char {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v10
            field_16: v7
        };
    }
    v5 = v8.field_0;
    v6 = v10;
    v7 = v8.field_16;
    v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
    if let Some(_) = v13 {
        do {
            memcpy(&v8, &v13, 152);
            if uu_df::is_included(&v8, a1) as u8 && uu_df::is_best(v2, v3, &v13) as u8 {
                v1 = alloc::vec::Vec<T,A>::push(&v13);
            }
            v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
        } while (v14 != 0x8000000000000000);
    }
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v4, v2, v3);
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v11 = &v0;
    v12 = a1;
    core::iter::traits::iterator::Iterator::collect(&v4, &v8);
    return Ok(struct24 {
        field_0: *(&v4.field_0 as &i128)
        field_16: v4.field_16
    });
}
