fn uu_env::parse_signal_opt(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i224;  // [sp-0x118], Other Possible Types: Result<struct16, struct10>, struct32, struct16, struct8
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i64;  // [bp-0x100]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xe0]
    let v6: i64;  // [sp-0xd8]
    let v7: i64;  // [sp-0xd0]
    let v8: i64;  // [sp-0xc8]
    let v9: struct8;  // [sp-0xc0]
    let v10: i64;  // [sp-0xb8]
    let v11: i8;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: struct24;  // [sp-0x98], Other Possible Types: i192
    let v15: struct17;  // [bp-0x80]
    let v16: struct32;  // [sp-0x68]
    let v17: i8;  // [bp-0x48]
    let v19: struct8;  // rax
    let v21: i64;  // r14
    let v23: i64;  // r14
    let v24: i64;  // rax

    if !a2 {
        return 0;
    }
    v15 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((&v14 as &char + 16) as &i64), 0);
    v5 = v1;
    v6 = v2;
    v7 = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v5);
    v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v19 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v19 {
        do {
            v21 = v23;
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v19, v21);
            if v0 {
                v8 = 1;
                v9 = v19;
                v10 = v21;
                v11 = 1;
                v12 = &v8;
                v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = &g_5488b0;
                v1 = 2;
                v4 = 0;
                v2 = &v12;
                v3 = 1;
                core::option::Option<T>::map_or_else();
                v0 = v17;
                alloc::boxed::Box<T>::new(&v0);
                goto LABEL_4cc5fe;
            } else {
                v0 = uu_env::parse_signal_value(v1, v2);
                if v0 {
LABEL_4cc5fe:
                    return v24;
                }
            }
            v8 = v1;
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v8, *((a0 + 104) as &i64), *((a0 + 112) as &i64)) as i8 {
                alloc::vec::Vec<T,A>::push(a0 + 96, v8);
            }
            v19 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        } while (v19);
    }
}
