fn uu_expand::tabstops_parse(a0: void*, a1: u64, a2: u64) -> int {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xc8], Other Possible Types: struct24, u32
    let v1: struct24;  // [bp-0xc8], Other Possible Types: u192
    let v2: u64;  // [bp-0xc0]
    let v3: i64;  // [bp-0xb8], Other Possible Types: u64
    let v4: u64;  // [bp-0xb0]
    let v5: struct16;  // [bp-0xb0]
    let v6: u64;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: iNone;  // [bp-0x98]
    let v9: u64;  // [bp-0x88]
    let v10: u8;  // [bp-0x80]
    let v11: u8;  // [bp-0x7f]
    let v12: u64;  // [bp-0x78]
    let v13: struct16;  // [bp-0x70]
    let v14: struct16;  // [bp-0x69]
    let v15: struct40;  // [bp-0x60]
    let v16: u64;  // [bp-0x59]
    let v17: u16;  // [bp-0x38]
    let v19: u64;  // rax
    let v20: u64;  // rdx
    let v21: i64;  // rax
    let v22: u8;  // r12b
    let v23: u64;  // rdx
    let v25: u8;  // r15b
    let v26: u64;  // rdx
    let v29: u64;  // r13
    let v32: u64;  // r15
    let v33: u64;  // rax
    let v34: u64;  // rcx
    let v36: u64;  // rdx
    let v43: i64;  // rax
    let v44: &mut [u8];  // rax:rdx
    let v45: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v46: &mut [u8];  // rax:rdx

    v19 = core::str::<impl str>::trim_start_matches(a1, a2);
    if !v20 {
        v43 = alloc::alloc::Global::alloc_impl(8, 8);
        *(v43 as &i64) = 8;
        *(&a0[8] as &i8) = 0;
        *(&a0[16] as &i64) = 1;
        *(&a0[24] as &struct_1 *) = v43;
        *(&a0[32] as &i64) = 1;
    }
    v4 = 0;
    v6 = 8;
    v7 = 0;
    v15 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v19, a2);
    v13 = struct16 {
        field_0: 0
        field_8: v20
    };
    v17 = 1;
    core::str::iter::SplitInternal<P>::next(&v13);
    if v21 {
        do {
            if v23 {
                do {
                    v26 -= 1;
                    if *(v21 as &i8) != 43 && *(v21 as &i8) != 47 {
                        v0 = core::str::converts::from_utf8(v21, v26);
                        v29 = core::result::Result<T,E>::unwrap(&v0);
                        v45 = core::num::<impl usize>::from_ascii_radix(&v10, v29, a2);
                        if v10 != 1 {
                            if !(v25 & 1) {
                                v5 = alloc::vec::Vec<T,A>::push(v12);
                            } else {
                                if v22 == 1 {
                                    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/");
                                } else {
                                    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("+");
                                }
                                v9 = v3;
                                v8 = v1 as i128;
                                return struct32 {
                                    field_0: 9223372036854775810
                                    field_8: v8
                                    field_24: v9
                                };
                            }
                        } else {
                            if v11 == 2 {
                                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v29, v20);
                                *(&a0[24] as &struct_1 *) = v3;
                                *(&a0[8] as &i128) = *(&v0.field_0 as &i128);
                            }
                            v32 = core::str::<impl str>::trim_start_matches(v29, v20);
                            v0 = 0;
                            v46 = core::char::methods::encode_utf8_raw(47, &v0, a2);
                            if !core::slice::<impl [T]>::starts_with(v32, v20, v46.data_ptr, v34) {
                                v0 = 0;
                                v44 = core::char::methods::encode_utf8_raw(43, &v0, a2);
                                if !core::slice::<impl [T]>::starts_with(v32, v20, v44.data_ptr, v34) {
                                    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v32, v20);
                                    return struct32 {
                                        field_0: v33
                                        field_8: *(&v0.field_0 as &i128)
                                        field_24: v3
                                    };
                                }
                            }
                            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v32, v20, v36, v34) as u64, 1);
                            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v32, v20);
                            return struct48 {
                                field_0: v0.field_0
                                field_8: v2
                                field_16: v3
                                field_24: *(&v0.field_0 as &i128)
                                field_40: v3
                            };
                        }
                    }
                } while (v26 != 1);
            }
            core::str::iter::SplitInternal<P>::next(&v13);
        } while (v21);
        if v7 == 1 {
            v16 = v7;
            *(&v14.field_0 as &i128) = *(&v4 as &i128);
            return struct48 {
                field_0: 9223372036854775814
                field_8: v22
                field_9: <UNKNOWN>
                field_24: v16
                field_32: <UNKNOWN>
            };
        } else if v7 {
            v16 = v7;
            *(&v14.field_0 as &i128) = *(&v4 as &i128);
            return struct48 {
                field_0: 9223372036854775814
                field_8: v22
                field_9: <UNKNOWN>
                field_24: v16
                field_32: <UNKNOWN>
            };
        }
    }
    *(alloc::alloc::Global::alloc_impl(8, 8) as &i64) = 8;
    v16 = v7;
    *(&v14.field_0 as &i128) = *(&v4 as &i128);
    return struct48 {
        field_0: 9223372036854775814
        field_8: v22
        field_9: <UNKNOWN>
        field_24: v16
        field_32: <UNKNOWN>
    };
}
