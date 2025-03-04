fn uu_dircolors::parse(a0: &struct32, a1: u32, a2: &u8, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x3b1]
    let v1: i64;  // [sp-0x3b0]
    let v2: i32;  // [bp-0x3b0]
    let v3: struct40;  // [bp-0x3a8], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x3a0]
    let v5: i64;  // [sp-0x398]
    let v6: i8;  // [bp-0x390]
    let v7: i64;  // [sp-0x380]
    let v8: i64;  // [sp-0x378], Other Possible Types: String, struct24, unsigned int, Result<struct16, struct16>, struct48, struct32
    let v9: i64;  // [sp-0x370]
    let v10: i64;  // [sp-0x368]
    let v11: i64;  // [bp-0x360], Other Possible Types: char
    let v12: i64;  // [sp-0x358]
    let v13: i64;  // [sp-0x350]
    let v14: i8;  // [sp-0x348]
    let v15: i32;  // [bp-0x347]
    let v16: i32;  // [sp-0x344]
    let v17: i64;  // [sp-0x340]
    let v18: i64;  // [sp-0x330]
    let v19: i64;  // [sp-0x320]
    let v20: i64;  // [sp-0x318]
    let v21: i8;  // [sp-0x310]
    let v22: i64;  // [sp-0x308]
    let v23: i64;  // [sp-0x2f8]
    let v24: i64;  // [sp-0x2e8]
    let v25: i64;  // [sp-0x2e0]
    let v26: i8;  // [sp-0x2d8]
    let v27: i32;  // [bp-0x2d7]
    let v28: i32;  // [sp-0x2d4]
    let v29: i64;  // [sp-0x2d0]
    let v30: i64;  // [sp-0x2c8]
    let v31: i64;  // [sp-0x2c0]
    let v32: i64;  // [bp-0x2b8], Other Possible Types: char
    let v33: i64;  // [sp-0x2b0]
    let v34: i64;  // [sp-0x2a8]
    let v35: struct16;  // [sp-0x2a0], Other Possible Types: struct8, unsigned long
    let v36: i64;  // [sp-0x298]
    let v37: i64;  // [sp-0x290]
    let v38: i64;  // [sp-0x288]
    let v39: i64;  // [sp-0x280]
    let v40: struct24;  // [sp-0x278]
    let v41: i8;  // [bp-0x25d]
    let v42: i8;  // [bp-0x25a]
    let v43: i8;  // [bp-0x256]
    let v44: i8;  // [bp-0x253]
    let v45: i8;  // [bp-0x24f]
    let v46: i8;  // [bp-0x24c]
    let v47: i64;  // [sp-0x248]
    let v48: i64;  // [sp-0x218]
    let v49: i64;  // [sp-0x210]
    let v50: iNone;  // [sp-0x208], Other Possible Types: struct24, unsigned long
    let v51: iNone;  // [sp-0x1e8]
    let v52: i64;  // [sp-0x1d8]
    let v53: iNone;  // [sp-0x1c8]
    let v54: i64;  // [sp-0x1b8]
    let v55: iNone;  // [sp-0x1a8]
    let v56: i64;  // [sp-0x198]
    let v57: i64;  // [sp-0x190]
    let v58: i64;  // [sp-0x188]
    let v59: struct24;  // [sp-0x180]
    let v60: struct16;  // [bp-0x168]
    let v61: struct56;  // [bp-0x158], Other Possible Types: struct24
    let v62: struct32;  // [sp-0x120]
    let v63: String;  // [sp-0x100]
    let v64: iNone;  // [sp-0xe8]
    let v65: struct24;  // [sp-0xd8]
    let v66: String;  // [sp-0xc0]
    let v67: struct24;  // [sp-0xa8]
    let v68: String;  // [sp-0x90]
    let v69: struct24;  // [sp-0x78]
    let v70: String;  // [sp-0x60]
    let v71: String;  // [sp-0x48]
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm0
    let v75: iNone;  // ymm0
    let v76: iNone;  // ymm0
    let v77: i64;  // 4098
    let v79: iNone;  // ymm0
    let v80: iNone;  // xmm0
    let v81: iNone;  // ymm0
    let v83: i64;  // rbp
    let v84: iNone;  // xmm0
    let v86: i64;  // rdx
    let v88: i64;  // rsi
    let v90: i64;  // rax
    let v91: i32;  // r13d

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x6fe, 0);
    v35 = v9;
    v36 = v10;
    v37 = 0;
    uu_dircolors::get_colors_format_strings(&v8, a2);
    v56 = v10;
    v73 = v8 as i128;
    v55 = v73;
    v54 = v13;
    v74 = *(&v11 as &i128);
    v76 = (v75 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256;
    v53 = v74;
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice((&v55)[8] as i64, v56 + (&v55)[8] as i64), a2);
    v8 = std::env::var("TERM");
    v77 = v8 as i64;
    match v8 {
        Ok(_) => {
            v50 = v11;
            v80 = *((&v8 as &char + 8) as &i128);
            v79 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u256;
            v50 = v80;
        },
        Err(_) => {
            v79 = v76 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v8 as &char + 8) as &i128) as u128 as u256;
            v61 = struct24 {
                field_0: v78
                field_16: v11
            };
            v50 = uu_dircolors::parse::{{closure}}(&v61);
        },
    }
    v58 = (&v50)[8] as i64;
    v57 = v50;
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v61 = core::iter::traits::iterator::Iterator::enumerate(&v8);
    v0 = *(a2 as &i8);
    *(&v2 as &i32) = 0;
    v81 = v79;
    loop {
        v62 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v61);
        v83 = v83 & -0x100 | v62.field_8 as i64 != 0x8000000000000000;
        if v62.field_8 as i64 == 0x8000000000000000 {
            break;
        }
        v52 = v62.field_24;
        v84 = v62.field_8;
        v51 = v84;
        v48 = v62.field_0 + 1;
        if !v86 {
            v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u256;
        } else {
            v59 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow((&v51)[8] as i64, v62.field_24), v86), a2);
            v8 = <str as uu_dircolors::StrUtils>::split_two(*((&v59.field_0 as &char + 8) as &i64), v59.field_16);
            v88 = v8.field_0;
            v33 = v8.field_0;
            v34 = v9;
            v38 = v10;
            v39 = v11;
            if !v39 {
                v3 = 0;
                v4 = a3;
                v5 = a4;
                *(&v6 as &i8) = 0;
                v63 = format!("{}:{}: invalid line;  missing second token", &v3, &v48);
                return struct32 {
                    field_0: 1
                    field_8: *(&v63.ptr as &i128)
                    field_24: v63.len
                };
            }
            v40 = alloc::str::<impl str>::to_lowercase(v88, v34);
            if !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40.field_0 as &char + 8) as &i64), v40.field_16, "term") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40.field_0 as &char + 8) as &i64), v40.field_16, "colorterm") as i8) && (v2 as u8 == 1 ? 2 : v2 as u64) != 3 {
                v64 = *((&v40.field_0 as &char + 8) as &i128);
                v1 = v33;
                v47 = v34;
                *(&v8 as &i32) = 0;
                if !core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(46, &v8), v86) as i8 {
                    v1 = v33;
                    v47 = v34;
                    *(&v8 as &i32) = 0;
                    if core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(42, &v8), v86) as i8 {
                        if v0 != 2 {
                            v68 = format!("{}={}:", &v33, &v38);
                            v8 = v68;
                            v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                        } else {
                            v29 = &v38;
                            v30 = <&T as core::fmt::Display>::fmt;
                            v31 = &v33;
                            *(&v32 as &void*) = <&T as core::fmt::Display>::fmt;
                            *(&v8 as &i64) = 2;
                            v10 = 2;
                            v12 = 0;
                            v13 = 32;
                            v14 = 3;
                            v16 = *(&v44 as &i32);
                            *(&v15 as &i32) = *(&v43 as &i32);
                            v17 = 2;
                            v18 = 2;
                            v19 = 1;
                            v20 = 32;
                            v21 = 3;
                            v22 = 2;
                            v23 = 2;
                            v24 = 0;
                            v25 = 32;
                            v26 = 3;
                            v28 = *(&v44 as &i32);
                            *(&v27 as &i32) = *(&v43 as &i32);
                            v3 = struct40 {
                                field_0: "\x1b["
                                field_8: 4
                                field_16: &v29
                                field_24: 2
                                field_32: &v8
                            };
                            v7 = 3;
                            v67 = core::option::Option<T>::map_or_else(&v3);
                            v8 = v67;
                            v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                        }
                    } else {
                        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40.field_0 as &char + 8) as &i64), v40.field_16, "options") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40.field_0 as &char + 8) as &i64), v40.field_16, "color") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40.field_0 as &char + 8) as &i64), v40.field_16, "eightbit") as i8 {
                            v60 = struct16 {
                                field_0: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E
                                field_8: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E + 1184
                            };
                            v90 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v60, &v64);
                            if !v90 {
                                v29 = 0;
                                v30 = a3;
                                v31 = a4;
                                *(&v32 as &i8) = 0;
                                v71 = format!("{}:{}: unrecognized keyword {}", &v29, &v48, &v33);
                            } else {
                                v49 = v90 + 16;
                                if v0 != 2 {
                                    v70 = format!("{}={}:", &v49, &v38);
                                    v8 = v70;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                                } else {
                                    v29 = &v38;
                                    v30 = <&T as core::fmt::Display>::fmt;
                                    v31 = &v49;
                                    *(&v32 as &void*) = <&T as core::fmt::Display>::fmt;
                                    *(&v8 as &i64) = 2;
                                    v10 = 2;
                                    v12 = 0;
                                    v13 = 32;
                                    v14 = 3;
                                    v16 = *(&v46 as &i32);
                                    *(&v15 as &i32) = *(&v45 as &i32);
                                    v17 = 2;
                                    v18 = 2;
                                    v19 = 1;
                                    v20 = 32;
                                    v21 = 3;
                                    v22 = 2;
                                    v23 = 2;
                                    v24 = 0;
                                    v25 = 32;
                                    v26 = 3;
                                    v28 = *(&v46 as &i32);
                                    *(&v27 as &i32) = *(&v45 as &i32);
                                    v3 = struct40 {
                                        field_0: "\x1b["
                                        field_8: 4
                                        field_16: &v29
                                        field_24: 2
                                        field_32: &v8
                                    };
                                    v7 = 3;
                                    v69 = core::option::Option<T>::map_or_else(&v3);
                                    v8 = v69;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                                }
                            }
                        }
                    }
                } else if v0 == 2 {
                    v29 = &v38;
                    v30 = <&T as core::fmt::Display>::fmt;
                    v31 = &v33;
                    *(&v32 as &void*) = <&T as core::fmt::Display>::fmt;
                    *(&v8 as &i64) = 2;
                    v10 = 2;
                    v12 = 0;
                    v13 = 32;
                    v14 = 3;
                    v16 = *(&v42 as &i32);
                    *(&v15 as &i32) = *(&v41 as &i32);
                    v17 = 2;
                    v18 = 2;
                    v19 = 1;
                    v20 = 32;
                    v21 = 3;
                    v22 = 2;
                    v23 = 2;
                    v24 = 0;
                    v25 = 32;
                    v26 = 3;
                    v28 = *(&(&v41)[3] as &i32);
                    *(&v27 as &i32) = *(&v41 as &i32);
                    v3 = struct40 {
                        field_0: "\x1b["
                        field_8: 4
                        field_16: &v29
                        field_24: 2
                        field_32: &v8
                    };
                    v7 = 3;
                    v65 = core::option::Option<T>::map_or_else(&v3);
                    v8 = v65;
                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                } else {
                    v66 = format!("*{}={}:", &v33, &v38);
                    v8 = v66;
                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), a2);
                }
            }
            v2 = v91;
            v10 = v10;
            v9 = v9;
            v11 = v11;
            v81 = v75;
        }
    }
    if *(a2 as &i8) == 2 {
        v35 = alloc::string::String::pop();
    }
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice((&v53)[8] as i64, v54 + (&v53)[8] as i64), a2);
}
