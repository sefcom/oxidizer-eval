fn uu_expand::expand_shortcuts(a0: &struct24, a1: u64) -> int {
    let v0: i32;  // [sp-0x108], Other Possible Types: Result<struct16, struct10>
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i128;  // [sp-0xf0], Other Possible Types: struct16
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i128;  // [sp-0xd8]
    let v7: i64;  // [sp-0xc8]
    let v8: i256;  // [sp-0xb8], Other Possible Types: Result<struct16, struct8>, struct32
    let v9: i8;  // [bp-0xa8]
    let v10: i192;  // [sp-0x90], Other Possible Types: Option<struct24>
    let v11: struct16;  // [bp-0x78]
    let v12: struct41;  // [sp-0x68]
    let v13: i16;  // [sp-0x38]
    let v16: i256;  // ymm0
    let v17: i128;  // xmm0
    let v18: i256;  // ymm0
    let v19: i64;  // rbx
    let v20: i64;  // rbp
    let v21: i64;  // rax
    let v22: i64;  // r14
    let v23: i64;  // rdx
    let v24: i64;  // rsi
    let v25: i64;  // rdx
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 16) as &i64), 0);
    v3 = *((&v8 as &char + 8) as &i64);
    v4 = v9;
    v5 = 0;
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
    if v10 == 0x8000000000000000 {
        v27 = v3;
        return struct24 {
            field_0: v27
            field_16: v5
        };
    }
    do {
        v17 = v10;
        v18 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v6 = v17;
        v7 = *((&v10 as &char + 16) as &i64);
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v6 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64));
        match v0 {
            Ok(_) => {
                v19 = v1;
                v20 = v2;
                v0 = 0;
                if core::slice::<impl [T]>::starts_with(v19, v20, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
                    v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v19, v20);
                    if !v21 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v22 = v21;
                    v0 = v22;
                    v1 = v21 + v23;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v24, v23) as i32 as u32 as u64) {
                        v12 = <char as core::str::pattern::Pattern>::into_searcher(v22, v23);
                        v11 = struct16 {
                            field_0: 0
                            field_8: v23
                        };
                        v13 = 1;
                        core::iter::traits::iterator::Iterator::fold(&v11, &v3, v23);
                        continue;
                    }
                }
            },
            Err(_) => {
                v2 = v7;
                v26 = v6;
                v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u128 as u256;
                v0 = v26;
                v3 = alloc::vec::Vec<T,A>::push(&v0, v25);
            },
        }
    } while ((v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8), v10 != 0x8000000000000000));
}
