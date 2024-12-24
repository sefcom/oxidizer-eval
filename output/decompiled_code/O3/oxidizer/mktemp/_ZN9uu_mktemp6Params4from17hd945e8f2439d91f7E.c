fn uu_mktemp::Params::from(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x1a5]
    let v1: i32;  // [sp-0x1a4]
    let v2: i64;  // [sp-0x1a0]
    let v3: i64;  // [bp-0x198], Other Possible Types: struct24
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i192;  // [bp-0x178], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v7: i64;  // [sp-0x170]
    let v8: i64;  // [sp-0x168]
    let v9: i128;  // [bp-0x160]
    let v10: i64;  // [sp-0x158]
    let v11: i64;  // [sp-0x150]
    let v12: i128;  // [sp-0x148]
    let v13: i64;  // [sp-0x138]
    let v14: i192;  // [sp-0x128], Other Possible Types: struct24
    let v15: i64;  // [sp-0x118]
    let v16: i64;  // [sp-0x108]
    let v17: i64;  // [sp-0x100]
    let v18: i64;  // [sp-0xf8]
    let v19: i128;  // [sp-0xf0]
    let v20: i64;  // [sp-0xe8]
    let v21: i8;  // [bp-0xe0]
    let v22: i8;  // [bp-0xd8]
    let v23: i8;  // [bp-0xd0]
    let v24: i128;  // [sp-0xc8]
    let v25: i64;  // [sp-0xb8]
    let v26: i64;  // [sp-0xa8]
    let v27: i128;  // [sp-0xa0]
    let v28: i64;  // [sp-0x98]
    let v29: i64;  // [sp-0x90]
    let v30: i64;  // [sp-0x88]
    let v31: i64;  // [sp-0x80]
    let v32: i128;  // [bp-0x78]
    let v33: i64;  // [sp-0x68]
    let v34: i64;  // [sp-0x58]
    let v35: i64;  // [sp-0x50]
    let v36: i192;  // [sp-0x48]
    let v38: i64;  // r14
    let v39: i64;  // r12
    let v40: i64;  // rdx
    let v41: i64;  // r12
    let v44: i64;  // rax
    let v45: i64;  // rbp
    let v46: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // r14
    let v49: i64;  // rbp
    let v51: i64;  // rdi
    let v52: i64;  // rcx
    let v53: i64;  // rdx
    let v54: i64;  // r14
    let v55: i64;  // rbp
    let v56: i64;  // rcx
    let v58: i64;  // rdx
    let v59: i64;  // rax
    let v60: i64;  // rdi
    let v61: i64;  // rax
    let v62: i64;  // rax
    let v63: i128;  // xmm0

    v2 = a1 + 48;
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
    v14 = uu_mktemp::find_last_contiguous_block_of_xs(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v14 {
        v41 = *((&v14 as &char + 8) as &i64);
        v17 = v14.field_16;
        v25 = *((a1 + 40) as &i64);
        v24 = *((a1 + 24) as &i128);
        if v24 == 0x8000000000000000 || (v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v24), v44 = v6, v3 = *((&v6 as &char + 8) as &i128), v18 == 0x8000000000000000) {
            v18 = 0;
            v19 = 1;
            v20 = 0;
        } else {
            v19 = v3;
            v18 = v44;
        }
        v45 = *((a1 + 8) as &i64);
        if v41 {
            v46 = *((a1 + 16) as &i64);
            if v41 >= v46 {
                if v41 != v46 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v45 + v41) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v6 = std::path::Path::join(v19, v20, v45, v41);
        v3 = *((&v6 as &char + 8) as &i128);
        v1 = <T as alloc::string::ToString>::to_string(&v21, &v3) | -0x100 | 1;
        if !(!*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v45, v41) as i8) {
            v47 = 9223372036854775811;
        } else if !(v24 != 0x8000000000000000) || !(std::path::Path::is_absolute(v45, v41) as i8) {
            v48 = v22;
            v49 = v23;
            v6 = 0;
            v0 = core::slice::<impl [T]>::ends_with(v48, v49, core::char::methods::encode_utf8_raw(47, &v6), v40) as i8;
            if v0 {
                v6.field_16 = (stack_base)[208] as i64;
                v6 = v21;
                v51 = 0;
                v52 = 0;
                v53 = 0;
            } else {
                v54 = v22;
                v55 = v23;
                if !std::path::Path::parent(v54, v55, v40, v56) {
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                } else {
                    v6 = struct16 {
                        field_0: v57
                        field_8: v40
                    };
                    v3 = <T as alloc::string::ToString>::to_string(&v6);
                }
                v59 = std::path::Path::file_name(v54, v55, v58, v56);
                if !v59 {
                    v7 = 1;
                    v52 = 0;
                    v53 = 0;
                } else {
                    v6 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v59, v40);
                    match v6 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v7, v6.field_16);
                            v52 = v6;
                        },
                    }
                }
                v6 = v3;
                v51 = v60 | -0x100 | 1;
            }
            v32 = v6;
            v29 = v52;
            v30 = 1;
            v31 = v53;
            v61 = *(v2 as &i64);
            v16 = v51;
            if v61 == 0x8000000000000000 {
                v27 = 1;
                v28 = 0;
                v61 = 0;
            } else {
                v27 = *((a1 + 56) as &i128);
            }
            v26 = v61;
            v62 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v17, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
            if !v62 {
                core::str::slice_error_fail(); /* do not return */
            }
            v34 = v62;
            v35 = v40;
            v36 = format!("{:?}{:?}", &v34, &v26);
            v14 = v36;
            v14.field_16 = (stack_base)[56] as i64;
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v14 as &char + 8) as &i64), *((&v36 as &char + 16) as &i64)) as i8 {
                *((a0 + 24) as &i64) = v15;
                *((a0 + 8) as &i128) = v14;
                *((a0 + 32) as &i64) = 9223372036854775812;
                *(a0 as &i64) = 0x8000000000000000;
                v1 = 0;
                return struct40 {
                    field_0: 0x8000000000000000
                    field_8: *(a1 as &i128)
                    field_24: *((a1 + 16) as &i64)
                    field_32: 9223372036854775809
                };
            }
            v8 = v33;
            v63 = v32;
            v6 = v63;
            v11 = v31;
            v9 = v29;
            v13 = v14.field_16;
            v12 = v14;
            *((a0 + 64) as &i64) = v13;
            *((a0 + 48) as &i128) = v12;
            *(a0 as &i128) = v63;
            *((a0 + 32) as &i64) = v10;
            *((a0 + 40) as &i64) = v11;
            *((a0 + 16) as &i64) = v8;
            *((a0 + 72) as &i64) = v17 - v41;
        } else {
            v47 = 9223372036854775813;
        }
        *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
        *((a0 + 8) as &i128) = *(a1 as &i128);
        *((a0 + 32) as &i64) = v47;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        if *(v2 as &i64) == 0x8000000000000000 {
            v5 = *((a1 + 16) as &i64);
            v3 = *(a1 as &i128);
        } else {
            *(&v6.field_0 as &struct24) = struct24 {
                field_0: v42
                field_8: v42 + v43
                field_16: v43
            };
            v3 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v6);
        }
        *((a0 + 24) as &i64) = v5;
        *((a0 + 8) as &i192) = v3;
        *((a0 + 32) as &i64) = 9223372036854775810;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
