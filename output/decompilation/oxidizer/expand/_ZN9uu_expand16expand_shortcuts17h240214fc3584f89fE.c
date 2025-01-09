fn uu_expand::expand_shortcuts(a0: &struct24, a1: u64) -> int {
    let v0: i64;  // [sp-0x108], Other Possible Types: Result<struct16, struct10>, struct24
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0], Other Possible Types: struct16
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i128;  // [sp-0xd8]
    let v7: i64;  // [sp-0xc8]
    let v8: i192;  // [sp-0xb8], Other Possible Types: struct32, Result<struct16, struct8>
    let v9: i192;  // [sp-0x90], Other Possible Types: Option<struct24>
    let v10: struct16;  // [bp-0x78]
    let v11: struct41;  // [sp-0x68]
    let v12: i16;  // [sp-0x38]
    let v15: i256;  // ymm0
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i64;  // rbx
    let v19: i64;  // rbp
    let v20: i64;  // rax
    let v21: i64;  // r14
    let v22: i64;  // rdx

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 16) as &i64), 0);
    v3 = *((&v8 as &char + 8) as &i64);
    v4 = *((&v8 as &char + 16) as &i64);
    v5 = 0;
    v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
    match v9 {
        None => {
            return struct24 {
                field_0: v24
                field_16: v5
            };
        },
        Some(_) => {
            do {
                v16 = v9;
                v17 = v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 as u128 as u256;
                v6 = v16;
                v7 = *((&v9 as &char + 16) as &i64);
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v6 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64));
                match v0 {
                    Ok(_) => {
                        v18 = v1;
                        v19 = v2;
                        v0 = 0;
                        if core::slice::<impl [T]>::starts_with(v18, v19, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
                            v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v18, v19);
                            v21 = v20;
                            v0 = v21;
                            v1 = v20 + v22;
                            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32 as u32 as u64) {
                                v11 = <char as core::str::pattern::Pattern>::into_searcher(v21, v22);
                                v10 = struct16 {
                                    field_0: 0
                                    field_8: v22
                                };
                                v12 = 1;
                                core::iter::traits::iterator::Iterator::fold(&v10, &v3);
                                continue;
                            }
                        }
                    },
                    Err(_) => {
                        v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u128 as u256;
                        v0 = struct24 {
                            field_0: v23
                            field_16: v7
                        };
                        v3 = alloc::vec::Vec<T,A>::push(&v0);
                    },
                }
            } while ((v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8), v9 != 0x8000000000000000));
        },
    }
}
