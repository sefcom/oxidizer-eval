fn uu_ln::exec(a0: u32, a1: u32, a2: &struct56) -> u64 {
    let v0: struct24;  // [sp-0x50], Other Possible Types: i192
    let v1: i64;  // [sp-0x38]
    let v3: i64;  // r12
    let v4: i64;  // rax
    let v5: i64;  // cc_ndep
    let v7: i64;  // rdx

    if *((a2 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a2 + 32) as &i64), *((a2 + 40) as &i64));
        uu_ln::link_files_in_dir(a0, a1, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a2);
        return v4;
    }
    if !*((a2 + 51) as &i8) {
        v3 = a1 - 1;
        if a1 == 1 {
            v0 = std::sys::os_str::bytes::Slice::to_owned(".");
            uu_ln::link_files_in_dir(a0, 1, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a2);
            return v4;
        }
        if amd64g_calculate_condition(2, 8, a1, 1, v5) as char {
            core::option::unwrap_failed("src/uu/ln/src/ln.rs"); /* do not return */
        }
        v0 = std::sys::os_str::bytes::Slice::to_owned(*((a0 + v3 * 24 + 8) as &i64), *((a0 + v3 * 24 + 16) as &i64));
        if !(a1 <= 2) || !(!std::path::Path::is_dir(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i8) {
            v4 = uu_ln::link_files_in_dir(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v3, a0, a1), v7, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), a2);
            return v4;
        }
    } else if a1 == 1 {
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0);
        vvar_249{stack -56} = 9223372036854775812;
        alloc::boxed::Box<T>::new(&v0);
        return v4;
    } else if a1 > 2 {
        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 48);
        v1 = 9223372036854775812;
        v4 = alloc::boxed::Box<T>::new(&v0);
        return v4;
    } else if !a1 {
        core::panicking::panic("assertion failed: !files.is_empty()", "src/uu/ln/src/ln.rs"); /* do not return */
    }
    v4 = uu_ln::link(*((a0 + 8) as &i64), *((a0 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64), a2);
    return v4;
}
