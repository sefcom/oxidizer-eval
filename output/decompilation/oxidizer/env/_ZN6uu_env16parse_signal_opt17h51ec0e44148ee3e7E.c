fn uu_env::parse_signal_opt(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x118], Other Possible Types: u64, struct24, core::cell::UnsafeCell<u64>, struct32
    let v1: u128;  // [bp-0x118]
    let v2: u64;  // [bp-0x110]
    let v3: u64;  // [bp-0x108], Other Possible Types: struct_0 *
    let v4: u32;  // [bp-0x100]
    let v5: void*;  // [bp-0xf8]
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: void*;  // [bp-0xd0]
    let v9: u64;  // [bp-0xc8]
    let v10: std::io::stdio::StderrLock;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u8;  // [bp-0xb0]
    let v13: i64;  // [bp-0xa8]
    let v14: u64;  // [bp-0xa0]
    let v15: Result<struct24, struct24>;  // [bp-0x98]
    let v16: u32;  // [bp-0x88]
    let v17: u136;  // [bp-0x80]
    let v18: struct32;  // [bp-0x68]
    let v19: u128;  // [bp-0x48]
    let v20: i8;  // [bp-0x38]
    let v22: std::io::stdio::StderrLock;  // rax
    let v23: u64;  // rdx
    let v25: u64;  // r14
    let v26: u64;  // rcx
    let v27: u64;  // rax

    if !a2 {
        return 0;
    }
    v17 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16, 0);
    v6 = v2;
    v7 = v3;
    v8 = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v6);
    v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v22 {
        do {
            v25 = v23;
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v22, v25);
            match v0 {
                Err(_) => {
                    v9 = 1;
                    v10 = v22;
                    v11 = v25;
                    v12 = 1;
                    v13 = &v9;
                    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = &g_5488b0;
                    v2 = 2;
                    v5 = 0;
                    v3 = &v13;
                    v4 = 1;
                    v1 as u192 = core::option::Option<T>::map_or_else(a2);
                    v4 = 1;
                    v1 = v19;
                    v3 = *(&v20 as &i64);
                    v27 = alloc::boxed::Box<T>::new(&v1 as u192);
                    return v27;
                },
                Ok(_) => {
                    uu_env::parse_signal_value(v2, v3, v26);
                    if !(!v0 as i64) {
                        break;
                    }
                },
            }
            v9 = v2;
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v9, *((a0 + 104) as &i64), *((a0 + 112) as &i64)) {
                alloc::vec::Vec<T,A>::push(a0 + 96, v2);
            }
            v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18);
        } while (v22);
    }
    return 0;
}
