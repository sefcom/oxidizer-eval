fn uu_mv::handle_multiple_paths(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: i64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: struct24;  // [bp-0x88], Other Possible Types: u64
    let v3: u64;  // [bp-0x80]
    let v4: i64;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: void*;  // [bp-0x68]
    let v7: u64;  // [bp-0x58]
    let v8: u128;  // [bp-0x50]
    let v9: u8;  // [bp-0x40]
    let v10: u8;  // [bp-0x38]
    let v13: u64;  // rax
    let v14: u64;  // rdx

    if *((a2 + 48) as &i8) {
        v7 = 1;
        v8 = *((a0 + 56) as &i128);
        v9 = 1;
        v0 = &v7;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = "mv: extra operand ";
        v3 = 1;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        v2 = core::option::Option<T>::map_or_else(a2);
        return alloc::boxed::Box<T>::new(&v10);
    } else if a1 {
        v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1 - 1, a0, a1);
        return uu_mv::move_files_into_dir(v13, v14, *((a0 + (a1 - 1) * 24 + 8) as &i64), *((a0 + (a1 - 1) * 24 + 16) as &i64), a2);
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
}
