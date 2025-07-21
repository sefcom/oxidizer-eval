fn uu_env::parse_signal_opt(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::cell::UnsafeCell<u64>;  // [bp-0x118], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>, struct28, struct32, struct24, u64
    let v1: u64;  // [bp-0x110]
    let v2: i64;  // [bp-0x108], Other Possible Types: u32
    let v3: u64;  // [bp-0x100]
    let v4: void*;  // [bp-0xf8]
    let v5: u64;  // [bp-0xe0]
    let v6: u64;  // [bp-0xd8]
    let v7: void*;  // [bp-0xd0]
    let v8: u64;  // [bp-0xc8]
    let v9: std::io::stdio::StderrLock;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: u8;  // [bp-0xb0]
    let v12: i64;  // [bp-0xa8]
    let v13: u64;  // [bp-0xa0]
    let v14: Result<struct24, struct24>;  // [bp-0x98]
    let v15: u32;  // [bp-0x88]
    let v16: struct17;  // [bp-0x80]
    let v17: struct32;  // [bp-0x68]
    let v18: u128;  // [bp-0x48]
    let v19: i8;  // [bp-0x38]
    let v21: std::io::stdio::StderrLock;  // rax
    let v22: u64;  // rdx
    let v24: u64;  // r14
    let v25: u64;  // rcx
    let v26: u64;  // rax

    if !a2 {
        return 0;
    }
    v16 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v15, 0);
    v5 = v1;
    v6 = v2;
    v7 = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v5);
    v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
    if v21 {
        do {
            v24 = v22;
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v21, v24);
            match v0 {
                Err(_) => {
                    v8 = 1;
                    v9 = v21;
                    v10 = v24;
                    v11 = 1;
                    v12 = &v8;
                    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = &g_5488b0;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v12;
                    v3 = 1;
                    v0 = core::option::Option<T>::map_or_else(a2);
                    v0 = struct28 {
                        field_0: v18
                        field_16: *(&v19 as &i64)
                        field_24: 1
                    };
                    v26 = alloc::boxed::Box<T>::new(&v0);
                    return v26;
                },
                Ok(_) => {
                    uu_env::parse_signal_value(v1, v2, v25);
                    if !(!v0 as i64) {
                        break;
                    }
                },
            }
            v8 = v1;
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v8, *((a0 + 104) as &i64), *((a0 + 112) as &i64)) {
                alloc::vec::Vec<T,A>::push(a0 + 96, v1);
            }
            v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
        } while (v21);
    }
    return 0;
}
