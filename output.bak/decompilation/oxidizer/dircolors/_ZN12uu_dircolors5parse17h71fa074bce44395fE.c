fn uu_dircolors::parse(a0: &struct32, a1: u32, a2: &u8, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x3b1]
    let v1: i32;  // [bp-0x3b0]
    let v2: i64;  // [sp-0x3a8]
    let v3: i64;  // [sp-0x3a0]
    let v4: i64;  // [sp-0x398]
    let v5: i64;  // [bp-0x390]
    let v6: i64;  // [sp-0x388]
    let v7: i64;  // [sp-0x380]
    let v8: i256;  // [sp-0x378], Other Possible Types: Result<struct16, struct16>, struct48, struct32
    let v9: i64;  // [sp-0x370]
    let v10: i64;  // [sp-0x368]
    let v11: i64;  // [bp-0x360]
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
    let v32: i8;  // [bp-0x2b8]
    let v33: i64;  // [sp-0x2b0]
    let v34: i64;  // [sp-0x2a8]
    let v35: struct16;  // [bp-0x2a0], Other Possible Types: struct8, i128
    let v36: i64;  // [sp-0x290]
    let v37: i64;  // [sp-0x288]
    let v38: i64;  // [sp-0x280]
    let v39: i192;  // [sp-0x278], Other Possible Types: struct24
    let v40: i8;  // [bp-0x25d]
    let v41: i8;  // [bp-0x25a]
    let v42: i8;  // [bp-0x256]
    let v43: i8;  // [bp-0x253]
    let v44: i8;  // [bp-0x24f]
    let v45: i8;  // [bp-0x24c]
    let v46: i64;  // [sp-0x248]
    let v47: i64;  // [sp-0x218]
    let v48: i64;  // [sp-0x210]
    let v49: i192;  // [sp-0x208], Other Possible Types: struct24
    let v50: i64;  // [sp-0x1f8]
    let v51: i8;  // [bp-0x1e8]
    let v52: i64;  // [sp-0x1d8]
    let v53: i128;  // [sp-0x1c8]
    let v54: i64;  // [sp-0x1b8]
    let v55: i128;  // [sp-0x1a8]
    let v56: i64;  // [sp-0x198]
    let v57: i64;  // [sp-0x190]
    let v58: i64;  // [sp-0x188]
    let v59: struct24;  // [sp-0x180], Other Possible Types: i192
    let v60: struct16;  // [bp-0x168]
    let v61: struct56;  // [bp-0x158], Other Possible Types: struct24, i448
    let v62: i256;  // [sp-0x120], Other Possible Types: struct32
    let v65: i128;  // [sp-0xe8]
    let v66: i8;  // [bp-0xd8]
    let v67: i8;  // [bp-0xc8]
    let v68: i8;  // [bp-0xc0]
    let v69: i8;  // [bp-0xb0]
    let v70: i8;  // [bp-0xa8]
    let v71: i8;  // [bp-0x98]
    let v72: i8;  // [bp-0x90]
    let v73: i8;  // [bp-0x80]
    let v74: i8;  // [bp-0x78]
    let v75: i8;  // [bp-0x68]
    let v76: i8;  // [bp-0x60]
    let v77: i8;  // [bp-0x50]
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i256;  // ymm0
    let v84: i256;  // ymm0
    let v85: i64;  // rdx
    let v86: i64;  // 4098
    let v87: i256;  // ymm0
    let v88: i128;  // xmm0
    let v89: i64;  // r13
    let v90: i64;  // rbp
    let v91: i128;  // xmm0
    let v93: i64;  // rsi
    let v94: i64;  // rcx
    let v95: i64;  // r13
    let v96: i128;  // xmm0
    let v97: i128;  // xmm0
    let v98: i128;  // xmm0
    let v99: i128;  // xmm0
    let v100: i128;  // xmm0
    let v101: i64;  // rax
    let v102: i128;  // xmm0
    let v103: i128;  // xmm0

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x6fe, 0);
    v35 = v8;
    v36 = 0;
    uu_dircolors::get_colors_format_strings(&v8, a2);
    v56 = v10;
    v81 = v8;
    v55 = v81;
    v54 = v13;
    v82 = v11;
    v84 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82;
    v53 = v82;
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v55 as &char + 8) as &i64), v56 + *((&v55 as &char + 8) as &i64)), v85);
    v8 = std::env::var("TERM");
    v86 = v8;
    match v8 {
        Ok(_) => {
            v50 = v11;
            v88 = *((&v8 as &char + 8) as &i128);
            v87 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 as u128 as u256;
            v49 = v88;
        },
        Err(_) => {
            v87 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v8 as &char + 8) as &i128) as u128 as u256;
            v61 = struct24 {
                field_0: v83 as u128
                field_16: v11
            };
            v49 = uu_dircolors::parse::{{closure}}(&v61);
        },
    }
    v58 = *((&v49 as &char + 8) as &i64);
    v57 = v50;
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v61 = core::iter::traits::iterator::Iterator::enumerate(&v8);
    v0 = *(a2 as &i8);
    v1 = 0;
    v89 = &v51;
    loop {
        v62 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v61);
        v90 = v90 | -0x100 | *((&v62 as &char + 8) as &i64) != 0x8000000000000000;
        if *((&v62 as &char + 8) as &i64) == 0x8000000000000000 {
            break;
        }
        v52 = *((&v62 as &char + 24) as &i64);
        v91 = *((&v62 as &char + 8) as &i128);
        v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91;
        v51 = v91;
        v47 = v62 + 1;
        if v85 {
            v59 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(), v85), v85);
            v8 = <str as uu_dircolors::StrUtils>::split_two(*((&v59 as &char + 8) as &i64), *((&v59 as &char + 16) as &i64));
            v93 = v8;
            v33 = v8;
            v34 = v9;
            v37 = v10;
            v38 = v11;
            if !v38 {
                v2 = 0;
                v3 = a3;
                v4 = a4;
                v5 = 0;
                v29 = &v2;
                v30 = <os_display::Quoted as core::fmt::Display>::fmt;
                v31 = &v47;
                v32 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v8 = &g_524418;
                v9 = 3;
                v12 = 0;
                v10 = &v29;
                v11 = 2;
                core::option::Option<T>::map_or_else();
                return struct32 {
                    field_0: 1
                    field_8: v63
                    field_24: v64
                };
            }
            v39 = alloc::str::<impl str>::to_lowercase(v93, v34);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "term") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "colorterm") as i8 {
                v95 = v89 | -0x100 | 1;
                if !<str as uu_dircolors::StrUtils>::fnmatch(v58, v57, v37, v38) as i8 {
                    v95 = v95 | -0x100 | (v1 != 1) * 2 | 1;
                }
            } else {
                v94 = (v1 == 1 ? 2 : v1);
                v95 = v89 | -0x100 | 3;
                if v94 != 3 {
                    v95 = v94 & 4294967295;
                    v96 = *((&v39 as &char + 8) as &i128);
                    v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
                    v65 = v96;
                    v1 = v33;
                    v46 = v34;
                    v8 = 0;
                    if !core::slice::<impl [T]>::starts_with(v1, v46, core::char::methods::encode_utf8_raw(46, &v8), v85) as i8 {
                        v1 = v33;
                        v46 = v34;
                        v8 = 0;
                        if core::slice::<impl [T]>::starts_with(v1, v46, core::char::methods::encode_utf8_raw(42, &v8), v85) as i8 {
                            if v0 != 2 {
                                v2 = &v33;
                                v3 = <&T as core::fmt::Display>::fmt;
                                v4 = &v37;
                                v5 = <&T as core::fmt::Display>::fmt;
                                v8 = &g_524478;
                                v9 = 3;
                                v12 = 0;
                                v10 = &v2;
                                v11 = 2;
                                core::option::Option<T>::map_or_else();
                                v100 = v72;
                                v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                                v8 = v100;
                                v10 = v73;
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                            } else {
                                v29 = &v37;
                                v30 = <&T as core::fmt::Display>::fmt;
                                v31 = &v33;
                                v32 = <&T as core::fmt::Display>::fmt;
                                v8 = 2;
                                v10 = 2;
                                v12 = 0;
                                v13 = 32;
                                v14 = 3;
                                v16 = v43;
                                v15 = v42;
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
                                v28 = v43;
                                v27 = v42;
                                v2 = "\x1b[";
                                v3 = 4;
                                v6 = &v8;
                                v7 = 3;
                                v4 = &v29;
                                v5 = 2;
                                core::option::Option<T>::map_or_else();
                                v99 = v70;
                                v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                                v8 = v99;
                                v10 = v71;
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                            }
                        } else {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "options") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "color") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "eightbit") as i8 {
                                v60 = struct16 {
                                    field_0: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E
                                    field_8: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E + 1184
                                };
                                v101 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v60, &v65);
                                if !v101 {
                                    v29 = 0;
                                    v30 = a3;
                                    v31 = a4;
                                    v32 = 0;
                                    v8 = &v29;
                                    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                                    v10 = &v47;
                                    v11 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                    v12 = &v33;
                                    v13 = <&T as core::fmt::Display>::fmt;
                                    v2 = &g_5244a8;
                                    v3 = 3;
                                    v6 = 0;
                                    v4 = &v8;
                                    v5 = 3;
                                    core::option::Option<T>::map_or_else();
                                    return struct32 {
                                        field_0: 1
                                        field_8: v78
                                        field_24: v79
                                    };
                                }
                                v48 = v101 + 16;
                                if v0 != 2 {
                                    v2 = &v48;
                                    v3 = <&T as core::fmt::Display>::fmt;
                                    v4 = &v37;
                                    v5 = <&T as core::fmt::Display>::fmt;
                                    v8 = &g_524478;
                                    v9 = 3;
                                    v12 = 0;
                                    v10 = &v2;
                                    v11 = 2;
                                    core::option::Option<T>::map_or_else();
                                    v103 = v76;
                                    v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v103;
                                    v8 = v103;
                                    v10 = v77;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                                } else {
                                    v29 = &v37;
                                    v30 = <&T as core::fmt::Display>::fmt;
                                    v31 = &v48;
                                    v32 = <&T as core::fmt::Display>::fmt;
                                    v8 = 2;
                                    v10 = 2;
                                    v12 = 0;
                                    v13 = 32;
                                    v14 = 3;
                                    v16 = v45;
                                    v15 = v44;
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
                                    v28 = (&v44)[3];
                                    v27 = v44;
                                    v2 = "\x1b[";
                                    v3 = 4;
                                    v6 = &v8;
                                    v7 = 3;
                                    v4 = &v29;
                                    v5 = 2;
                                    core::option::Option<T>::map_or_else();
                                    v102 = v74;
                                    v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102;
                                    v8 = v102;
                                    v10 = v75;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                                }
                            }
                        }
                    } else if v0 != 2 {
                        v2 = &v33;
                        v3 = <&T as core::fmt::Display>::fmt;
                        v4 = &v37;
                        v5 = <&T as core::fmt::Display>::fmt;
                        *(&v8 as &&str) = "*";
                        v9 = 3;
                        v12 = 0;
                        v10 = &v2;
                        v11 = 2;
                        core::option::Option<T>::map_or_else();
                        v98 = v68;
                        v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
                        v8 = v98;
                        v10 = v69;
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                    } else {
                        v29 = &v37;
                        v30 = <&T as core::fmt::Display>::fmt;
                        v31 = &v33;
                        v32 = <&T as core::fmt::Display>::fmt;
                        v8 = 2;
                        v10 = 2;
                        v12 = 0;
                        v13 = 32;
                        v14 = 3;
                        v16 = v41;
                        v15 = v40;
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
                        v28 = v41;
                        v27 = v40;
                        v2 = "\x1b[";
                        v3 = 4;
                        v6 = &v8;
                        v7 = 3;
                        v4 = &v29;
                        v5 = 2;
                        core::option::Option<T>::map_or_else();
                        v97 = v66;
                        v87 = v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
                        v8 = v97;
                        v10 = v67;
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v85);
                    }
                }
            }
            v1 = v95;
            v89 = &v51;
        }
    }
    if *(a2 as &i8) == 2 {
        v35 = alloc::string::String::pop();
    }
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v53 as &char + 8) as &i64), v54 + *((&v53 as &char + 8) as &i64)), v85);
    return struct32 {
        field_0: 0
        field_8: v35
        field_24: v36
    };
}
