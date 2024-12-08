fn uu_mktemp::Params::from(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x1a5]
    let v1: i32;  // [sp-0x1a4]
    let v2: i64;  // [sp-0x1a0]
    let v3: i128;  // [bp-0x198], Other Possible Types: struct24
    let v4: i64;  // [sp-0x190]
    let v5: i64;  // [sp-0x188]
    let v6: i128;  // [bp-0x178], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v7: i64;  // [sp-0x168]
    let v8: i128;  // [bp-0x160]
    let v9: i64;  // [sp-0x158]
    let v10: i64;  // [sp-0x150]
    let v11: i128;  // [sp-0x148]
    let v12: i64;  // [sp-0x138]
    let v13: i192;  // [sp-0x128], Other Possible Types: struct24
    let v14: i64;  // [sp-0x118]
    let v15: i64;  // [sp-0x108]
    let v16: i64;  // [sp-0x100]
    let v17: i64;  // [sp-0xf8]
    let v18: i128;  // [sp-0xf0]
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
    let v31: i128;  // [sp-0x78]
    let v32: i64;  // [sp-0x68]
    let v33: i64;  // [sp-0x58]
    let v34: i64;  // [sp-0x50]
    let v35: i192;  // [sp-0x48]
    let v37: i64;  // r14
    let v38: i64;  // r12
    let v39: i64;  // rdx
    let v40: i64;  // r12
    let v43: i64;  // rax
    let v44: i64;  // rbp
    let v45: i64;  // rsi
    let v46: i64;  // rax
    let v47: i64;  // r14
    let v48: i64;  // rbp
    let v49: i64;  // rax
    let v50: i64;  // rdi
    let v51: i64;  // rcx
    let v52: i64;  // rdx
    let v53: i64;  // r14
    let v54: i64;  // rbp
    let v55: i64;  // rcx
    let v57: i64;  // rdx
    let v58: i64;  // rax
    let v59: i64;  // rdi
    let v60: i64;  // rax
    let v61: i64;  // rax
    let v62: i128;  // xmm0

    v2 = a1 + 48;
    if *((a1 + 48) as &i64) != 0x8000000000000000 {
        v37 = *((a1 + 8) as &i64);
        v38 = *((a1 + 16) as &i64);
        v6 = 0;
        if !core::slice::<impl [T]>::ends_with(v37, v38, core::char::methods::encode_utf8_raw(88, &v6), v39) as i8 {
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
        v40 = *((&v13 as &char + 8) as &i64);
        v16 = v13.field_16;
        v24 = *((a1 + 40) as &i64);
        v23 = *((a1 + 24) as &i128);
        if v23 == 0x8000000000000000 || (v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v23), v43 = v6, v3 = *((&v6 as &char + 8) as &i128), v17 == 0x8000000000000000) {
            v17 = 0;
            v18 = 1;
            v19 = 0;
        } else {
            v18 = v3;
            v17 = v43;
        }
        v44 = *((a1 + 8) as &i64);
        if v40 {
            v45 = *((a1 + 16) as &i64);
            if v40 >= v45 {
                if v40 != v45 {
                    core::str::slice_error_fail(); /* do not return */
                }
            } else {
                if *((v44 + v40) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
            }
        }
        v6 = std::path::Path::join(v18, v19, v44, v40);
        v3 = *((&v6 as &char + 8) as &i128);
        v1 = <T as alloc::string::ToString>::to_string(&v20, &v3) | -0x100 | 1;
        if !(!*((a1 + 75) as &i8) || !<char as core::str::pattern::Pattern>::is_contained_in(v44, v40) as i8) {
            v46 = 9223372036854775811;
        } else if !(v23 != 0x8000000000000000) || !(std::path::Path::is_absolute(v44, v40) as i8) {
            v47 = v21;
            v48 = v22;
            v6 = 0;
            v0 = core::slice::<impl [T]>::ends_with(v47, v48, core::char::methods::encode_utf8_raw(47, &v6), v39) as i8;
            if v0 {
                v6.field_16 = (stack_base)[208] as i64;
                v6 = v20;
                v49 = 1;
                v50 = 0;
                v51 = 0;
                v52 = 0;
            } else {
                v53 = v21;
                v54 = v22;
                if !std::path::Path::parent(v53, v54, v39, v55) {
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                } else {
                    v6 = struct16 {
                        field_0: v56
                        field_8: v39
                    };
                    v3 = <T as alloc::string::ToString>::to_string(&v6);
                }
                v58 = std::path::Path::file_name(v53, v54, v57, v55);
                if !v58 {
                    v49 = 1;
                    v51 = 0;
                    v52 = 0;
                } else {
                    v6 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v58, v39);
                    match v6 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v49, v6.field_16);
                            v51 = v6;
                        },
                    }
                }
                v6.field_16 = vvar_747{stack -392};
                v6 = v3;
                v50 = v59 | -0x100 | 1;
            }
            v32 = v7;
            v31 = v6;
            v28 = v51;
            v29 = v49;
            v30 = v52;
            v60 = *(v2 as &i64);
            v15 = v50;
            if v60 == 0x8000000000000000 {
                v26 = 1;
                v27 = 0;
                v60 = 0;
            } else {
                v26 = *((a1 + 56) as &i128);
            }
            v25 = v60;
            v61 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
            if !v61 {
                core::str::slice_error_fail(); /* do not return */
            }
            v33 = v61;
            v34 = v39;
            v35 = format!("{:?}{:?}", &v33, &v25);
            v13 = v35;
            v13.field_16 = (stack_base)[56] as i64;
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v13 as &char + 8) as &i64), *((&v35 as &char + 16) as &i64)) as i8 {
                *((a0 + 24) as &i64) = v14;
                *((a0 + 8) as &i128) = v13;
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
            v7 = v32;
            v62 = v31;
            v6 = v62;
            v10 = v30;
            v8 = v28;
            v12 = v13.field_16;
            v11 = v13;
            *((a0 + 64) as &i64) = v12;
            *((a0 + 48) as &i128) = v11;
            *(a0 as &i128) = v62;
            *((a0 + 32) as &i64) = v9;
            *((a0 + 40) as &i64) = v10;
            *((a0 + 16) as &i64) = v7;
            *((a0 + 72) as &i64) = v16 - v40;
        } else {
            v46 = 9223372036854775813;
        }
        *((a0 + 24) as &i64) = *((a1 + 16) as &i64);
        *((a0 + 8) as &i128) = *(a1 as &i128);
        *((a0 + 32) as &i64) = v46;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        if *(v2 as &i64) == 0x8000000000000000 {
            v5 = *((a1 + 16) as &i64);
            v3 = *(a1 as &i128);
        } else {
            *(&v6.field_0 as &struct24) = struct24 {
                field_0: v41
                field_8: v41 + v42
                field_16: v42
            };
            v3 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v6);
        }
        *((a0 + 24) as &i64) = v5;
        *((a0 + 8) as &i192) = v3;
        *((a0 + 32) as &i64) = 9223372036854775810;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
