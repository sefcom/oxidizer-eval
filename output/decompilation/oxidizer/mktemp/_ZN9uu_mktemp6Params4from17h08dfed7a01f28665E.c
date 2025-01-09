fn uu_mktemp::Params::from(a0: void*, a1: &struct80) -> u64 {
    let v0: i8;  // [sp-0x1a1]
    let v1: i64;  // [sp-0x1a0]
    let v2: i128;  // [bp-0x198], Other Possible Types: struct24
    let v3: i64;  // [sp-0x190]
    let v4: i64;  // [sp-0x188]
    let v5: i64;  // [sp-0x180]
    let v6: i128;  // [bp-0x178], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v7: i64;  // [sp-0x168]
    let v8: i64;  // [sp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i128;  // [sp-0x128], Other Possible Types: struct24
    let v11: i64;  // [sp-0x118]
    let v12: i64;  // [sp-0x108]
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i64;  // [sp-0xe8]
    let v17: i8;  // [bp-0xe0]
    let v18: i8;  // [bp-0xd8]
    let v19: i8;  // [bp-0xd0]
    let v20: i128;  // [sp-0xc8]
    let v21: i64;  // [sp-0xb8]
    let v22: i64;  // [sp-0xa8]
    let v23: i128;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98]
    let v25: i64;  // [sp-0x90]
    let v26: i64;  // [sp-0x88]
    let v27: i64;  // [sp-0x80]
    let v28: struct24;  // [sp-0x78]
    let v29: i64;  // [sp-0x58]
    let v30: i64;  // [sp-0x50]
    let v31: i8;  // [bp-0x48]
    let v32: i8;  // [bp-0x38]
    let v34: i64;  // r14
    let v35: i64;  // r12
    let v36: i64;  // rdx
    let v37: i64;  // r13
    let v40: i64;  // rax
    let v41: i64;  // rbp
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // rbp
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i64;  // rdx
    let v48: i64;  // r14
    let v49: i64;  // rbp
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // [bp-0x170]

    v1 = a1 + 48;
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v34 = *((a1 + 8) as &i64);
        v35 = *((a1 + 16) as &i64);
        v6 = 0;
        if !core::slice::<impl [T]>::ends_with(v34, v35, core::char::methods::encode_utf8_raw(88, &v6), v36) as i8 {
            return a0;
        }
    }
    v10 = uu_mktemp::find_last_contiguous_block_of_xs(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v10 {
        v37 = *((&v10 as &char + 8) as &i64);
        v13 = v11;
        v21 = *((a1 + 40) as &i64);
        v20 = *((a1 + 24) as &i128);
        if v20 == 0x8000000000000000 || (v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v20), v40 = v6, v2 = *((&v6 as &char + 8) as &i128), v14 == 0x8000000000000000) {
            v14 = 0;
            v15 = 1;
            v16 = 0;
        } else {
            v15 = v2;
            v14 = v40;
        }
        v41 = *((a1 + 8) as &i64);
        v6 = std::path::Path::join(v15, v16, v41, v37);
        v2 = *((&v6 as &char + 8) as &i128);
        if !*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v41, v37) {
            if !(v20 != 0x8000000000000000) || !(std::path::Path::is_absolute(v41, v37) as i8) {
                v43 = v18;
                v44 = v19;
                v6 = 0;
                v0 = core::slice::<impl [T]>::ends_with(v43, v44, core::char::methods::encode_utf8_raw(47, &v6), v36) as i8;
                if v0 {
                    v7 = v19;
                    v6 = v17;
                    v45 = 1;
                    v12 = 0;
                    v46 = 0;
                    v47 = 0;
                } else {
                    v48 = v18;
                    v49 = v19;
                    if !std::path::Path::parent(v48, v49) {
                        v2 = 0;
                        v3 = 1;
                        v4 = 0;
                    } else {
                        v6 = struct16 {
                            field_0: v50
                            field_8: v36
                        };
                        v2 = <T as alloc::string::ToString>::to_string(&v6);
                    }
                    v51 = std::path::Path::file_name(v48, v49);
                    if !v51 {
                        v45 = 1;
                        v46 = 0;
                        v47 = 0;
                    } else {
                        v6 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v51, v36);
                        match v6 {
                            Err(_) => {
                                core::option::unwrap_failed("src/uu/mktemp/src/mktemp.rs"); /* do not return */
                            },
                            Ok(_) => {
                                v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v45, v7);
                                v46 = v6;
                            },
                        }
                    }
                    v7 = v4;
                    v6 = v2;
                    v12 = v7 & -0x100 | 1;
                }
                v28 = v6;
                v25 = v46;
                v26 = v45;
                v27 = v47;
                v52 = *(v1 as &i64);
                if v52 == 0x8000000000000000 {
                    v23 = 1;
                    v24 = 0;
                    v52 = 0;
                } else {
                    v23 = *((a1 + 56) as &i128);
                }
                v22 = v52;
                v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
                v30 = v36;
                v2 = &v29;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v22;
                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = &g_41a7a8;
                v53 = 2;
                v9 = 0;
                v7 = &v2;
                v8 = 2;
                core::option::Option<T>::map_or_else();
                v10 = v31;
                v11 = v32;
                if <char as core::str::pattern::Pattern>::is_contained_in(*((&v10 as &char + 8) as &i64), v32) {
                    return a0;
                }
            } else {
                v42 = 9223372036854775813;
            }
        } else {
            v42 = 9223372036854775811;
        }
        *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
        *((a0 + 8) as &i128) = *(a1 as &i128);
        *((a0 + 32) as &i64) = v42;
        *(a0 as &i64) = 0x8000000000000000;
    } else if *(v1 as &i64) == 0x8000000000000000 {
        v4 = *((a1 + 16) as &i64);
        v2 = *(a1 as &i128);
    } else {
        v6 = struct24 {
            field_0: v38
            field_8: v38 + v39
            field_16: v39
        };
        v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v6);
    }
}
