fn uu_ln::exec(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x50]
    let v1: struct24;  // [sp-0x50], Other Possible Types: int
    let v2: i64;  // [sp-0x38]
    let v4: i64;  // r12
    let v6: i64;  // cc_ndep
    let v9: i64;  // rax
    let v10: i64;  // rdx

    if *((a2 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        uu_ln::link_files_in_dir(a0, a1, v0.field_8, v0.field_16, a2);
        return v9;
    }
    if !*((a2 + 51) as &i8) {
        v4 = a1 - 1;
        if a1 == 1 {
            v0 = std::sys::os_str::bytes::Slice::to_owned(".");
            uu_ln::link_files_in_dir(a0, 1, v0.field_8, v0.field_16, a2);
            return v9;
        }
        if amd64g_calculate_condition(2, 8, a1, 1, v6) as char {
            core::option::unwrap_failed("src/uu/ln/src/ln.rs"); /* do not return */
        }
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a0 + v4 * 24 + 8) as &i64), *((a0 + v4 * 24 + 16) as &i64));
        if !(a1 <= 2) || !(!std::path::Path::is_dir(v0.field_8, v0.field_16) as i8) {
            uu_ln::link_files_in_dir(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, a0, a1), v10, v0.field_8, v0.field_16, a2);
            return v9;
        }
    } else if a1 == 1 {
        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0);
        vvar_246{stack -56} = 9223372036854775812;
        alloc::boxed::Box<T>::new(&v1);
        return v9;
    } else if a1 > 2 {
        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 48);
        v2 = 9223372036854775812;
        v9 = alloc::boxed::Box<T>::new(&v1);
        return v9;
    } else if !a1 {
        core::panicking::panic("assertion failed: !files.is_empty()", "src/uu/ln/src/ln.rs"); /* do not return */
    }
    v9 = uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
    return v9;
}
