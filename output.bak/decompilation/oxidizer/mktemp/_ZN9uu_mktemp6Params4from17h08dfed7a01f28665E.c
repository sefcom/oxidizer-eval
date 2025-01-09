fn uu_mktemp::Params::from(a0: &struct40, a1: &struct80) -> u64 {
    let v0: i8;  // [sp-0x1a1]
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [bp-0x198], Other Possible Types: struct24
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i192;  // [bp-0x178], Other Possible Types: struct24, struct16, Result<struct16, struct10>
    let v7: i64;  // [sp-0x168]
    let v8: i128;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i64;  // [sp-0x150]
    let v11: i128;  // [sp-0x148]
    let v12: i64;  // [sp-0x138]
    let v13: i128;  // [sp-0x128], Other Possible Types: struct24
    let v14: i64;  // [sp-0x118]
    let v15: i64;  // [sp-0x108]
    let v16: i64;  // [sp-0x100]
    let v17: i64;  // [sp-0xf8]
    let v18: i64;  // [sp-0xf0]
    let v19: i64;  // [sp-0xe8]
    let v20: i8;  // [bp-0xe0]
    let v21: i8;  // [bp-0xd8]
    let v22: i8;  // [bp-0xd0]
    let v23: i128;  // [sp-0xc8]
    let v24: i64;  // [sp-0xb8]
    let v25: i64;  // [sp-0xa8]
    let v26: i64;  // [sp-0xa0]
    let v27: i64;  // [sp-0x98]
    let v28: i64;  // [sp-0x90]
    let v29: i64;  // [sp-0x88]
    let v30: i64;  // [sp-0x80]
    let v31: i128;  // [sp-0x78], Other Possible Types: struct24
    let v32: i64;  // [sp-0x68]
    let v33: i64;  // [sp-0x58]
    let v34: i64;  // [sp-0x50]
    let v35: i8;  // [bp-0x48]
    let v36: i8;  // [bp-0x38]
    let v38: i64;  // r14
    let v39: i64;  // r12
    let v40: i64;  // rdx
    let v41: i64;  // r13
    let v44: i64;  // rax
    let v45: i64;  // rbp
    let v46: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // r14
    let v49: i64;  // rbp
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // rdx
    let v53: i64;  // r14
    let v54: i64;  // rbp
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rbp
    let v59: i64;  // r14
    let v60: i64;  // rax
    let v61: i128;  // xmm0
    let v62: i64;  // [bp-0x170]

    v1 = a1 + 48;
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v38 = *((a1 + 8) as &i64);
        v39 = *((a1 + 16) as &i64);
        v6 = 0;
        if !core::slice::<impl [T]>::ends_with(v38, v39, core::char::methods::encode_utf8_raw(88, &v6), v40) as i8 {
            return struct40 {
                field_0: 0x8000000000000000
                field_8: *(a1 as &i128)
                field_24: *((a1 + 16) as &i64)
                field_32: 9223372036854775809
            };
        }
    }
    v13 = uu_mktemp::find_last_contiguous_block_of_xs(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v13 {
        v41 = *((&v13 as &char + 8) as &i64);
        v16 = v14;
        v24 = *((a1 + 40) as &i64);
        v23 = *((a1 + 24) as &i128);
        if v23 == 0x8000000000000000 || (v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v23), v44 = v6, v2 = *((&v6 as &char + 8) as &i128), v17 == 0x8000000000000000) {
            v17 = 0;
            v18 = 1;
            v19 = 0;
        } else {
            v18 = v2;
            v17 = v44;
        }
        v45 = *((a1 + 8) as &i64);
        if v41 {
            v46 = *((a1 + 16) as &i64);
            if v41 >= v46 {
                if v41 != v46 {
                    core::str::slice_error_fail(v45, v46, 0, v41, "src/uu/mktemp/src/mktemp.rs"); /* do not return */
                }
            } else {
                if *((v45 + v41) as &i8) <= 191 {
                    core::str::slice_error_fail(v45, v46, 0, v41, "src/uu/mktemp/src/mktemp.rs"); /* do not return */
                }
            }
        }
        v6 = std::path::Path::join(v18, v19, v45, v41);
        v2 = *((&v6 as &char + 8) as &i128);
        v15 = <T as alloc::string::ToString>::to_string(&v20, &v2) | -0x100 | 1;
        if !(!*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v45, v41)) {
            v47 = 9223372036854775811;
        } else if !(v23 != 0x8000000000000000) || !(std::path::Path::is_absolute(v45, v41) as i8) {
            v48 = v21;
            v49 = v22;
            v6 = 0;
            v0 = core::slice::<impl [T]>::ends_with(v48, v49, core::char::methods::encode_utf8_raw(47, &v6), v40) as i8;
            if v0 {
                v7 = v22;
                v6 = v20;
                v50 = 1;
                v15 = 0;
                v51 = 0;
                v52 = 0;
            } else {
                v53 = v21;
                v54 = v22;
                if !std::path::Path::parent(v53, v54) {
                    v2 = 0;
                    v3 = 1;
                    v4 = 0;
                } else {
                    v6 = struct16 {
                        field_0: v55
                        field_8: v40
                    };
                    v2 = <T as alloc::string::ToString>::to_string(&v6);
                }
                v56 = std::path::Path::file_name(v53, v54);
                if !v56 {
                    v50 = 1;
                    v51 = 0;
                    v52 = 0;
                } else {
                    v6 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v56, v40);
                    match v6 {
                        Err(_) => {
                            core::option::unwrap_failed("src/uu/mktemp/src/mktemp.rs"); /* do not return */
                        },
                        Ok(_) => {
                            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v50, v7);
                            v51 = v6;
                        },
                    }
                }
                v7 = v4;
                v6 = v2;
                v15 = v7 | -0x100 | 1;
            }
            v31 = v6;
            v28 = v51;
            v29 = v50;
            v30 = v52;
            v57 = *(v1 as &i64);
            if v57 == 0x8000000000000000 {
                v26 = 1;
                v27 = 0;
                v57 = 0;
            } else {
                v26 = *((a1 + 56) as &i128);
            }
            v25 = v57;
            v58 = *((a1 + 8) as &i64);
            v59 = *((a1 + 16) as &i64);
            v60 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16, v58, v59);
            if !v60 {
                core::str::slice_error_fail(v58, v59, v16, v59, "src/uu/mktemp/src/mktemp.rs"); /* do not return */
            }
            v33 = v60;
            v34 = v40;
            v2 = &v33;
            v3 = <&T as core::fmt::Display>::fmt;
            v4 = &v25;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &g_41a7a8;
            v62 = 2;
            v9 = 0;
            v7 = &v2;
            v8 = 2;
            core::option::Option<T>::map_or_else();
            v13 = v35;
            v14 = v36;
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v13 as &char + 8) as &i64), v36) {
                return struct40 {
                    field_0: 0x8000000000000000
                    field_8: v13
                    field_24: v14
                    field_32: 9223372036854775812
                };
            }
            v7 = v32;
            v61 = v31;
            v6 = v61;
            v10 = v30;
            v8 = v28;
            v12 = v14;
            v11 = v13;
            *((a0 + 64) as &i64) = v12;
            *((a0 + 48) as &i128) = v11;
            *(a0 as &i128) = v61;
            *((a0 + 32) as &i64) = v9;
            *((a0 + 40) as &i64) = v10;
            *((a0 + 16) as &i64) = v7;
            *((a0 + 72) as &i64) = v16 - v41;
        } else {
            v47 = 9223372036854775813;
        }
        *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
        *((a0 + 8) as &i128) = *(a1 as &i128);
        *((a0 + 32) as &i64) = v47;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        if *(v1 as &i64) == 0x8000000000000000 {
            v4 = *((a1 + 16) as &i64);
            v2 = *(a1 as &i128);
        } else {
            v6 = struct24 {
                field_0: v42
                field_8: v42 + v43
                field_16: v43
            };
            v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v6);
        }
        *((a0 + 24) as &i64) = v4;
        *((a0 + 8) as &i192) = v2;
        *((a0 + 32) as &i64) = 9223372036854775810;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
