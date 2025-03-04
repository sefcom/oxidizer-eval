fn uu_expand::expand_shortcuts(a0: &struct24, a1: u64) -> int {
    let v0: i64;  // [sp-0x108], Other Possible Types: Result<struct16, struct10>, struct24, unsigned int
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0], Other Possible Types: struct16
    let v4: i64;  // [sp-0xe0]
    let v5: iNone;  // [sp-0xd8]
    let v6: i64;  // [sp-0xc8]
    let v7: Result<struct16, struct8>;  // [sp-0xb8], Other Possible Types: struct32
    let v8: Option<struct24>;  // [sp-0x90], Other Possible Types: int
    let v9: struct16;  // [bp-0x78]
    let v10: struct41;  // [sp-0x68]
    let v11: i16;  // [sp-0x38]
    let v14: iNone;  // xmm0
    let v15: i64;  // rbx
    let v16: i64;  // rbp
    let v17: i64;  // rax
    let v18: i64;  // r14
    let v19: i64;  // rdx
    let v22: iNone;  // ymm0

    v7 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 16) as &i64), 0);
    v3 = *((&v7 as &char + 8) as &i64);
    v3 = *((&v7 as &char + 16) as &i64);
    v4 = 0;
    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    match v8 {
        None => {
            return struct24 {
                field_0: v21
                field_16: v4
            };
        },
        Some(_) => {
            do {
                v14 = v8 as i128;
                v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 as u256;
                v5 = v14;
                v6 = (&v8)[16] as i64;
                v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from((&v5)[8] as i64, (&v8)[16] as i64);
                match v0 {
                    Ok(_) => {
                        v15 = v1;
                        v16 = v2;
                        *(&v0 as &i32) = 0;
                        if core::slice::<impl [T]>::starts_with(v15, v16, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
                            v17 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v15, v16);
                            v18 = v17;
                            v0 = v18;
                            v1 = v17 + v19;
                            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32 as u32 as u64) {
                                v10 = <char as core::str::pattern::Pattern>::into_searcher(v18, v19);
                                v9 = struct16 {
                                    field_0: 0
                                    field_8: v19
                                };
                                v11 = 1;
                                core::iter::traits::iterator::Iterator::fold(&v9, &v3);
                                continue;
                            }
                        }
                    },
                    Err(_) => {
                        v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256;
                        v0 = struct24 {
                            field_0: v20
                            field_16: v6
                        };
                        v3 = alloc::vec::Vec<T,A>::push(&v0);
                    },
                }
            } while ((v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7), v8 as i64 != 0x8000000000000000));
        },
    }
}
