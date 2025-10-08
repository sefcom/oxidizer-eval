fn uu_env::parse_signal_opt(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0xf8], Other Possible Types: struct17, struct32
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xf8]
    let v2: u128;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: u32;  // [bp-0xe0]
    let v6: u64;  // [bp-0xc8]
    let v7: struct16;  // [bp-0xc8]
    let v8: u64;  // [bp-0xc0]
    let v9: void*;  // [bp-0xb8]
    let v10: u64;  // [bp-0xb0]
    let v11: core::fmt::Arguments;  // [bp-0xa8]
    let v12: u64;  // [bp-0xa0]
    let v13: u8;  // [bp-0x98]
    let v14: u64;  // [bp-0x90]
    let v15: u64;  // [bp-0x80]
    let v16: struct32;  // [bp-0x68]
    let v17: alloc::string::String;  // [bp-0x48]
    let v19: u64;  // rdx
    let v20: struct21;  // rax
    let v21: u64;  // rdx
    let v22: core::fmt::Arguments;  // rax
    let v24: u64;  // r14
    let v25: u64;  // rbp

    if !a2 {
        return 0;
    }
    v0 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    core::iter::traits::iterator::Iterator::collect(&v14, &v0);
    v6 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v15, 8, 16, "src/uu/env/src/env.rs");
    v8 = v19;
    v9 = 0;
    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
    v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v20 {
        do {
            if v21 {
                v7 = alloc::vec::Vec<T,A>::push(v20, v21, "src/uu/env/src/env.rs");
            }
            v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v20);
    }
    v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
    if !v22 {
        return v25;
    }
    do {
        v24 = v19;
        v1 = core::str::converts::from_utf8(v22, v24);
        match v1 {
            Ok(_) => {
                v0 = uu_env::parse_signal_value(v3, v4);
                v25 = v0.field_0;
                if v0.field_0 {
                    break;
                }
                continue;
            },
            Err(_) => {
                v10 = 1;
                v11 = v22;
                v12 = v24;
                v13 = 1;
                v17 = format!("{}: invalid signal", &v10);
                v5 = 1;
                v2 = *(&v17.vec.buf.inner.cap as &i128) as u128;
                v4 = v17.vec.len;
                v25 = alloc::boxed::Box<T>::new(&v2 as u384) as u64;
            },
        }
        v10 = v3;
        if !<usize as core::slice::cmp::SliceContains>::slice_contains(&v10, *((a0 + 104) as &i64), *((a0 + 112) as &i64)) {
            alloc::vec::Vec<T,A>::push(a0 + 96, v3);
        }
        v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16);
    } while (v22);
    return v25;
}
