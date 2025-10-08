fn uu_split::strategy::NumberType::from(a0: i64, a1: void*, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x238]
    let v1: u32;  // [bp-0x238]
    let v2: i64;  // [bp-0x230], Other Possible Types: u64
    let v3: iNone;  // [bp-0x228]
    let v4: iNone;  // [bp-0x218]
    let v5: u64;  // [bp-0x208]
    let v6: u64;  // [bp-0x200]
    let v7: void*;  // [bp-0x1f8]
    let v8: u64;  // [bp-0x1f0]
    let v9: void*;  // [bp-0x1e8], Other Possible Types: u64
    let v10: void*;  // [bp-0x1e0]
    let v11: u64;  // [bp-0x1d8]
    let v12: core::str::pattern::CharSearcher;  // [bp-0x1d0]
    let v13: u16;  // [bp-0x1a0]
    let v14: struct32;  // [bp-0x198]
    let v15: struct32;  // [bp-0x178]
    let v16: struct32;  // [bp-0x158]
    let v17: struct32;  // [bp-0x138]
    let v18: struct32;  // [bp-0x118]
    let v19: struct32;  // [bp-0xf8]
    let v20: struct32;  // [bp-0xd8]
    let v21: struct32;  // [bp-0xb8]
    let v22: struct32;  // [bp-0x98]
    let v23: struct24;  // [bp-0x78]
    let v24: u64;  // [bp-0x68]
    let v25: struct24;  // [bp-0x60]
    let v26: u64;  // [bp-0x50]
    let v27: struct24;  // [bp-0x48]
    let v30: core::result::Result<usize, core::num::error::ParseIntError>;  // rbx
    let v31: u64;  // rcx
    let v32: void*;  // rax
    let v33: void*;  // rax
    let v34: u64;  // rdx
    let v35: void*;  // rax
    let v36: void*;  // r12
    let v37: u64;  // r14
    let v38: i64;  // rax
    let v39: Option<struct8>;  // rax, Other Possible Types: struct56
    let v40: Result<struct40, struct16>;  // rcx
    let v41: u64;  // rax
    let v46: u64;  // rdx
    let v50: u64;  // rax
    let v51: &mut [u8];  // rax:rdx
    let v52: &mut [u8];  // rax:rdx

    v30 = a0;
    v12 = <char as core::str::pattern::Pattern>::into_searcher(a1 as u8, a2, v31);
    v10 = 0;
    v11 = a2;
    v13 = 1;
    v9 = 3;
    v5 = core::str::iter::SplitInternal<P>::next(&v10);
    v7 = a1;
    v9 = 2;
    core::str::iter::SplitInternal<P>::next(&v10);
    if v9 {
        if v9 == 1 {
            v9 = 0;
            core::str::iter::SplitInternal<P>::get_end(&v10);
        } else {
            v9 -= 1;
            core::str::iter::SplitInternal<P>::next(&v10);
        }
        v8 = v34;
        if v9 {
            if v9 == 1 {
                v9 = 0;
                core::str::iter::SplitInternal<P>::get_end(&v10);
            } else {
                v9 -= 1;
                core::str::iter::SplitInternal<P>::next(&v10);
            }
        }
    }
    v36 = v32;
    v30 = a0;
    if v5 {
        if v36 {
            if v33 {
                if !v35 {
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v34, "l") {
                        v18 = uucore::features::parser::parse_size::parse_size_u64(v33, v8);
                        if v18.field_0 as i32 != 4 {
                            v0 = uu_split::strategy::NumberType::from::{{closure}}(v33, v8, &v18);
                            v37 = v2;
                            v4 = v3;
                            if v0.field_0 as i64 != 2 {
                                *((v30 + 16) as void*) = v4;
                                *(v30 as &unsigned long) = v38;
                                *((v30 + 8) as &u64) = v37;
                                return v38;
                            }
                        }
                        v19 = uucore::features::parser::parse_size::parse_size_u64(v36, v6);
                        if v19.field_0 as i32 != 4 {
                            v0 = uu_split::strategy::NumberType::from::{{closure}}(v36, v6, &v19);
                            v39 = v2;
                            v4 = v3;
                            if v0.field_0 as i64 != 2 {
                                *((v30 + 16) as void*) = v4;
                                *(v30 as &Result<struct40, struct16>) = v40;
                                *((v30 + 8) as &Option<struct8>) = v39;
                                return v39;
                            }
                        }
                        if v39 - 1 >= v37 {
                            v25 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v36, v6);
                            *(v30 as &i64) = 1;
                            *((v30 + 8) as &i128) = *(&v25.field_0 as &i128);
                            v41 = v26;
                            *((v30 + 24) as &u64) = v41;
                            return v41;
                        }
                        *((v30 + 8) as &i64) = 3;
                        *((v30 + 16) as &struct56) = v39;
                        *((v30 + 24) as &u64) = v37;
                        *(v30 as &i64) = 2;
                        return v39;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v34, "r") {
                        v21 = uucore::features::parser::parse_size::parse_size_u64(v33, v8);
                        if v21.field_0 as i32 != 4 {
                            v0 = uu_split::strategy::NumberType::from::{{closure}}(v33, v8, &v21);
                            v4 = v3;
                            if v0.field_0 as i64 != 2 {
                                *((v30 + 16) as void*) = v4;
                                *(v30 as &unsigned long) = v38;
                                *((v30 + 8) as &u64) = v37;
                                return v38;
                            }
                        }
                        v22 = uucore::features::parser::parse_size::parse_size_u64(v36, v6);
                        if v22.field_0 as i32 != 4 {
                            v0 = uu_split::strategy::NumberType::from::{{closure}}(v36, v6, &v22);
                            v39 = v2;
                            v4 = v3;
                            if v0.field_0 as i64 != 2 {
                                *((v30 + 16) as void*) = v4;
                                *(v30 as &Result<struct40, struct16>) = v40;
                                *((v30 + 8) as &Option<struct8>) = v39;
                                return v39;
                            }
                        }
                        if v39 - 1 >= v37 {
                            v27 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v36, v6);
                            *(v30 as &i64) = 1;
                            *((v30 + 8) as &i128) = *(&v27.field_0 as &i128);
                            *((v30 + 24) as &u64) = v41;
                            return v41;
                        }
                        *((v30 + 8) as &i64) = 5;
                        *((v30 + 16) as &struct56) = v39;
                        *((v30 + 24) as &u64) = v37;
                        *(v30 as &i64) = 2;
                        return v39;
                    }
                }
            } else {
                if !v35 {
                    v1 = 0;
                    v52 = core::char::methods::encode_utf8_raw(108, &v1, v34);
                    if !core::slice::<impl [T]>::starts_with(v5, v34, v52.data_ptr, v52.length) {
                        v1 = 0;
                        v51 = core::char::methods::encode_utf8_raw(114, &v1, a2);
                        if !core::slice::<impl [T]>::starts_with(v5, v34, v51.data_ptr, v51.length) {
                            v15 = uucore::features::parser::parse_size::parse_size_u64(v36, v6);
                            if v15.field_0 as i32 != 4 {
                                v0 = uu_split::strategy::NumberType::from::{{closure}}(v36, v6, &v15);
                                v37 = v2;
                                v4 = v3;
                                if v0.field_0 as i64 != 2 {
                                    *((v30 + 16) as void*) = v4;
                                    *(v30 as &unsigned long) = v38;
                                    *((v30 + 8) as &u64) = v37;
                                    return v38;
                                }
                            }
                            v16 = uucore::features::parser::parse_size::parse_size_u64(v5, v34);
                            if v16.field_0 as i32 != 4 {
                                v0 = uu_split::strategy::NumberType::from::{{closure}}(v5, v34, &v16);
                                v39 = v2;
                                v4 = v3;
                                if v0.field_0 as i64 != 2 {
                                    *((v30 + 16) as void*) = v4;
                                    *(v30 as &Result<struct40, struct16>) = v40;
                                    *((v30 + 8) as &Option<struct8>) = v39;
                                    return v39;
                                }
                            }
                            if v39 - 1 >= v37 {
                                v23 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v34);
                                *(v30 as &i64) = 1;
                                *((v30 + 8) as &i128) = *(&v23.field_0 as &i128);
                                v41 = v24;
                                *((v30 + 24) as &u64) = v41;
                                return v41;
                            }
                            *((v30 + 8) as &i64) = 1;
                            *((v30 + 16) as &struct56) = v39;
                            *((v30 + 24) as &u64) = v37;
                            *(v30 as &i64) = 2;
                            return v39;
                        }
                    }
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v34, "l") {
                        v17 = uucore::features::parser::parse_size::parse_size_u64(v36, v6);
                        if v17.field_0 as i32 != 4 {
                            v0 = uu_split::strategy::NumberType::from::{{closure}}(v36, v6, &v17);
                            v39 = v2;
                            v4 = v3;
                            if v0.field_0 as i64 != 2 {
                                *((v30 + 16) as void*) = v4;
                                *(v30 as &Result<struct40, struct16>) = v40;
                                *((v30 + 8) as &Option<struct8>) = v39;
                                return v39;
                            }
                        }
                        *((v30 + 8) as &i64) = 2;
                        *((v30 + 16) as &Option<struct8>) = v39;
                        *(v30 as &i64) = 2;
                        return v39;
                    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v34, "r") {
                        v20 = uucore::features::parser::parse_size::parse_size_u64(v36, v6);
                        if v20.field_0 as i32 == 4 {
                            *((v30 + 8) as &i64) = 4;
                            *((v30 + 16) as &Option<struct8>) = v39;
                            *(v30 as &i64) = 2;
                            return v39;
                        }
                        v0 = uu_split::strategy::NumberType::from::{{closure}}(v36, v6, &v20);
                        v39 = v2;
                        v4 = v3;
                        if v0.field_0 as i64 != 2 {
                            *((v30 + 16) as void*) = v4;
                            *(v30 as &Result<struct40, struct16>) = v40;
                            *((v30 + 8) as &Option<struct8>) = v39;
                            return v39;
                        }
                        *((v30 + 8) as &i64) = 4;
                        *((v30 + 16) as &Option<struct8>) = v39;
                        *(v30 as &i64) = 2;
                        return v39;
                    }
                }
            }
        } else {
            if !v33 && !v35 {
                v14 = uucore::features::parser::parse_size::parse_size_u64(v5, v46);
                if v14.field_0 as i32 != 4 {
                    v0 = uu_split::strategy::NumberType::from::{{closure}}(v5, v46, &v14);
                    v39 = v2;
                    v4 = v3;
                    if v0.field_0 as i64 != 2 {
                        *((v30 + 16) as void*) = v4;
                        *(v30 as &Result<struct40, struct16>) = v40;
                        *((v30 + 8) as &Option<struct8>) = v39;
                        return v39;
                    }
                }
                if let Some(_) = v39 {
                    *((v30 + 8) as &i64) = 0;
                    *((v30 + 16) as &Option<struct8>) = v39;
                    *(v30 as &i64) = 2;
                    return v39;
                }
            }
        }
    }
    v50 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30 + 8, v7, a2);
    *(v30 as &i64) = 0;
    return v50;
}
