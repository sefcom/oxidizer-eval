fn uu_ln::exec(a0: i64, a1: i64, a2: &struct56) -> long long {
    let v0: std::sys::os_str::bytes::Buf;  // [bp-0x50]
    let v1: struct24;  // [sp-0x50], Other Possible Types: u192
    let v2: u32;  // [bp-0x48]
    let v3: u32;  // [bp-0x40]
    let v6: u64;  // r12
    let v7: u64;  // rax
    let v8: u64;  // cc_ndep
    let v10: u64;  // rdx

    if *((a2 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        v7 = uu_ln::link_files_in_dir(a0, a1, v2, v3, a2);
    } else if *((a2 + 51) as &i8) {
        if a1 == 1 {
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0);
        } else if a1 > 2 {
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 48);
        } else {
            if a1 {
                return uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
            }
            core::panicking::panic("assertion failed: !files.is_empty()"); /* do not return */
            return uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
        }
        return alloc::boxed::Box<T>::new(&v1);
    } else {
        v6 = a1 - 1;
        if a1 == 1 {
            v0 = std::sys::os_str::bytes::Slice::to_owned(".");
            v7 = uu_ln::link_files_in_dir(a0, 1, v2, v3, a2);
        } else {
            if amd64g_calculate_condition(2, 8, a1, 1, v8) as char {
                core::option::unwrap_failed(); /* do not return */
            }
            v0 = std::sys::os_str::bytes::Slice::to_owned(*((a0 + v6 * 24 + 8) as &i64), *((a0 + v6 * 24 + 16) as &i64));
            if !(a1 > 2 || std::path::Path::is_dir(v2, v3)) {
                goto LABEL_0x4b9a02;
            }
            v7 = uu_ln::link_files_in_dir(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, a0, a1), v10, v2, v3, a2);
        }
    }
    return v7;
}
