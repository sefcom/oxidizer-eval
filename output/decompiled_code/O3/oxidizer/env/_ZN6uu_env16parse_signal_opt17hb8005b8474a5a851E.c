fn uu_env::parse_signal_opt(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i128;  // [sp-0x118], Other Possible Types: Result<struct16, struct10>, struct32
    let v1: i64;  // [sp-0x110]
    let v2: i64;  // [sp-0x108]
    let v3: i32;  // [bp-0x100]
    let v4: i64;  // [sp-0xe0]
    let v5: i64;  // [sp-0xd8]
    let v6: i64;  // [sp-0xd0]
    let v7: i64;  // [sp-0xc8]
    let v8: i64;  // [sp-0xc0]
    let v9: i64;  // [sp-0xb8]
    let v10: i8;  // [sp-0xb0]
    let v11: struct24;  // [sp-0x98], Other Possible Types: i192
    let v12: struct17;  // [bp-0x80]
    let v13: struct32;  // [sp-0x68]
    let v14: i192;  // [sp-0x48]
    let v16: struct8;  // rax
    let v18: i64;  // r14
    let v19: i64;  // rdx
    let v20: i64;  // r14
    let v21: i64;  // r14

    if !a2 {
        return 0;
    }
    v12 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12, a2);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((&v11 as &char + 16) as &i64), 0);
    v4 = v1;
    v5 = v2;
    v6 = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v0, &v4);
    v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v16 {
        do {
            v18 = v20;
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v16, v18);
            if v0 {
                v7 = 1;
                v8 = v16;
                v9 = v18;
                v10 = 1;
                v14 = format!("{:?}: invalid signal", &v7);
                v3 = 1;
                v0 = v14;
                v0.field_16 = (stack_base)[56] as i64;
                v21 = alloc::boxed::Box<T>::new(&v0);
                return v21;
            }
            uu_env::parse_signal_value(&v0, v1, v0.field_16);
            v21 = v0;
            if v21 {
                return v21;
            }
            v7 = v1;
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v7, *((a0 + 104) as &i64), *((a0 + 112) as &i64)) as i8 {
                alloc::vec::Vec<T,A>::push(a0 + 96, v7, v19);
            }
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        } while (v16);
    }
}
