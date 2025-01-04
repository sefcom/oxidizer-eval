fn uu_mktemp::Params::from(a0: &struct40, a1: &struct80, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x1a1]
    let v1: i64;  // [sp-0x1a0]
    let v2: i128;  // [bp-0x198], Other Possible Types: struct24
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i128;  // [bp-0x178], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v6: i64;  // [sp-0x168]
    let v7: i128;  // [bp-0x160]
    let v8: i64;  // [sp-0x158]
    let v9: i64;  // [sp-0x150]
    let v10: i128;  // [sp-0x148]
    let v11: i64;  // [sp-0x138]
    let v12: i128;  // [sp-0x128], Other Possible Types: struct24
    let v13: i64;  // [sp-0x118]
    let v14: i64;  // [sp-0x108]
    let v15: i64;  // [sp-0x100]
    let v16: i64;  // [sp-0xf8]
    let v17: i64;  // [sp-0xf0]
    let v18: i64;  // [sp-0xe8]
    let v19: i8;  // [bp-0xe0]
    let v20: i8;  // [bp-0xd8]
    let v21: i8;  // [bp-0xd0]
    let v22: i128;  // [sp-0xc8]
    let v23: i64;  // [sp-0xb8]
    let v24: i64;  // [sp-0xa8]
    let v25: i64;  // [sp-0xa0]
    let v26: i64;  // [sp-0x98]
    let v27: i64;  // [sp-0x90]
    let v28: i64;  // [sp-0x88]
    let v29: i64;  // [sp-0x80]
    let v30: i128;  // [bp-0x78]
    let v31: i64;  // [sp-0x68]
    let v32: i64;  // [sp-0x58]
    let v33: i64;  // [sp-0x50]
    let v34: i192;  // [sp-0x48]
    let v36: i64;  // r14
    let v37: i64;  // r12
    let v38: i64;  // rdx
    let v39: i64;  // r13
    let v42: i64;  // rax
    let v43: i64;  // rbp
    let v44: i64;  // rsi
    let v45: i64;  // rax
    let v46: i64;  // r14
    let v47: i64;  // rbp
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v50: i64;  // rdx
    let v51: i64;  // r14
    let v52: i64;  // rbp
    let v53: i64;  // rcx
    let v55: i64;  // rdx
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i128;  // xmm0

    v1 = a1 + 48;
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v36 = *((a1 + 8) as &i64);
        v37 = *((a1 + 16) as &i64);
        v5 = 0;
        if !core::slice::<impl [T]>::ends_with(v36, v37, core::char::methods::encode_utf8_raw(88, &v5), v38) as i8 {
            return struct40 {
                field_0: 0x8000000000000000
                field_8: *(a1 as &i128)
                field_24: *((a1 + 16) as &i64)
                field_32: 9223372036854775809
            };
        }
    }
    v12 = uu_mktemp::find_last_contiguous_block_of_xs(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v12 {
        v39 = *((&v12 as &char + 8) as &i64);
        v15 = v13;
        v23 = *((a1 + 40) as &i64);
        v22 = *((a1 + 24) as &i128);
        if v22 == 0x8000000000000000 || (v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22), v42 = v5, v2 = *((&v5 as &char + 8) as &i128), v16 == 0x8000000000000000) {
            v16 = 0;
            v17 = 1;
            v18 = 0;
        } else {
            v17 = v2;
            v16 = v42;
        }
        v43 = *((a1 + 8) as &i64);
        if v39 {
            v44 = *((a1 + 16) as &i64);
            if v39 >= v44 {
                if v39 != v44 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v43 + v39) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v5 = std::path::Path::join(v17, v18, v43, v39);
        v2 = *((&v5 as &char + 8) as &i128);
        v14 = <T as alloc::string::ToString>::to_string(&v19, &v2) | -0x100 | 1;
        if !(!*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v43, v39) as i8) {
            v45 = 9223372036854775811;
        } else if !(v22 != 0x8000000000000000) || !(std::path::Path::is_absolute(v43, v39) as i8) {
            v46 = v20;
            v47 = v21;
            v5 = 0;
            v0 = core::slice::<impl [T]>::ends_with(v46, v47, core::char::methods::encode_utf8_raw(47, &v5), v38) as i8;
            if v0 {
                v6 = v21;
                v5 = v19;
                v48 = 1;
                v14 = 0;
                v49 = 0;
                v50 = 0;
            } else {
                v51 = v20;
                v52 = v21;
                if !std::path::Path::parent(v51, v52, v38, v53) {
                    v2 = 0;
                    v3 = 1;
                    v4 = 0;
                } else {
                    v5 = struct16 {
                        field_0: v54
                        field_8: v38
                    };
                    v2 = <T as alloc::string::ToString>::to_string(&v5);
                }
                v56 = std::path::Path::file_name(v51, v52, v55, v53);
                if !v56 {
                    v48 = 1;
                    v49 = 0;
                    v50 = 0;
                } else {
                    v5 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v56, v38);
                    match v5 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(v48, v6);
                            v49 = v5;
                        },
                    }
                }
                v6 = v4;
                v5 = v2;
                v14 = v6 | -0x100 | 1;
            }
            v30 = v5;
            v27 = v49;
            v28 = v48;
            v29 = v50;
            v57 = *(v1 as &i64);
            if v57 == 0x8000000000000000 {
                v25 = 1;
                v26 = 0;
                v57 = 0;
            } else {
                v25 = *((a1 + 56) as &i128);
            }
            v24 = v57;
            v58 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v15, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
            if !v58 {
                core::str::slice_error_fail(); /* do not return */
            }
            v32 = v58;
            v33 = v38;
            v34 = format!("{:?}{:?}", &v32, &v24);
            v12 = v34;
            v13 = *((&v34 as &char + 16) as &i64);
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v12 as &char + 8) as &i64), *((&v34 as &char + 16) as &i64)) as i8 {
                return struct40 {
                    field_0: 0x8000000000000000
                    field_8: *(a1 as &i128)
                    field_24: *((a1 + 16) as &i64)
                    field_32: 9223372036854775809
                };
            }
            v6 = v31;
            v59 = v30;
            v5 = v59;
            v9 = v29;
            v7 = v27;
            v11 = v13;
            v10 = v12;
            *((a0 + 64) as &i64) = v11;
            *((a0 + 48) as &i128) = v10;
            *(a0 as &i128) = v59;
            *((a0 + 32) as &i64) = v8;
            *((a0 + 40) as &i64) = v9;
            *((a0 + 16) as &i64) = v6;
            *((a0 + 72) as &i64) = v15 - v39;
        } else {
            v45 = 9223372036854775813;
        }
        *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
        *((a0 + 8) as &i128) = *(a1 as &i128);
        *((a0 + 32) as &i64) = v45;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        if *(v1 as &i64) == 0x8000000000000000 {
            v4 = *((a1 + 16) as &i64);
            v2 = *(a1 as &i128);
        } else {
            *(&v5.field_0 as &struct24) = struct24 {
                field_0: v40
                field_8: v40 + v41
                field_16: v41
            };
            v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v5);
        }
        *((a0 + 24) as &i64) = v4;
        *((a0 + 8) as &i192) = v2;
        *((a0 + 32) as &i64) = 9223372036854775810;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
