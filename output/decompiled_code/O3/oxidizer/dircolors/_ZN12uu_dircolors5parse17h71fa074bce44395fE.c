fn uu_dircolors::parse(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [sp-0x3b1]
    let v1: i64;  // [bp-0x3b0]
    let v2: i64;  // [sp-0x3a8]
    let v3: i64;  // [sp-0x3a0]
    let v4: i64;  // [sp-0x398]
    let v5: i64;  // [bp-0x390]
    let v6: i64;  // [sp-0x388]
    let v7: i64;  // [sp-0x380]
    let v8: i256;  // [sp-0x378], Other Possible Types: Result<struct24, struct8>, struct48, struct32
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
    let v32: i64;  // [bp-0x2b8]
    let v33: i64;  // [sp-0x2b0]
    let v34: i64;  // [sp-0x2a8]
    let v35: struct16;  // [sp-0x2a0], Other Possible Types: i128, struct8
    let v36: i64;  // [sp-0x298]
    let v37: i64;  // [sp-0x290]
    let v38: i64;  // [sp-0x288]
    let v39: i64;  // [sp-0x280]
    let v40: i192;  // [sp-0x278], Other Possible Types: struct24
    let v41: i8;  // [bp-0x25d]
    let v42: i8;  // [bp-0x25a]
    let v43: i8;  // [bp-0x256]
    let v44: i8;  // [bp-0x253]
    let v45: i8;  // [bp-0x24f]
    let v46: i8;  // [bp-0x24c]
    let v47: i64;  // [sp-0x248]
    let v48: i64;  // [sp-0x218]
    let v49: i64;  // [sp-0x210]
    let v50: i128;  // [sp-0x208], Other Possible Types: struct24
    let v51: i64;  // [sp-0x1f8]
    let v52: i8;  // [bp-0x1e8]
    let v53: i64;  // [sp-0x1d8]
    let v54: i128;  // [sp-0x1c8]
    let v55: i64;  // [sp-0x1b8]
    let v56: i128;  // [sp-0x1a8]
    let v57: i64;  // [sp-0x198]
    let v58: i64;  // [sp-0x190]
    let v59: i64;  // [sp-0x188]
    let v60: struct24;  // [sp-0x180], Other Possible Types: i192
    let v61: struct16;  // [bp-0x168]
    let v62: i448;  // [sp-0x158], Other Possible Types: struct56
    let v63: i64;  // [sp-0x148]
    let v64: i256;  // [sp-0x120], Other Possible Types: struct32
    let v65: i192;  // [sp-0x100]
    let v66: i128;  // [sp-0xe8]
    let v67: struct24;  // [sp-0xd8], Other Possible Types: i192
    let v68: i192;  // [sp-0xc0]
    let v69: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v70: i192;  // [sp-0x90]
    let v71: struct24;  // [sp-0x78], Other Possible Types: i192
    let v72: i192;  // [sp-0x60]
    let v73: i192;  // [sp-0x48]
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i256;  // ymm0
    let v78: i256;  // ymm0
    let v79: i64;  // rdx
    let v80: i64;  // 4098
    let v81: i128;  // xmm0
    let v82: i256;  // ymm0
    let v83: i128;  // xmm0
    let v84: i64;  // r13
    let v85: i64;  // rdx
    let v86: i64;  // rbp
    let v87: i128;  // xmm0
    let v90: i64;  // rcx
    let v91: i64;  // r13
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm0
    let v96: i128;  // xmm0
    let v97: i64;  // rax
    let v98: i128;  // xmm0
    let v99: i128;  // xmm0
    let v100: i64;  // rcx
    let v101: i64;  // rcx
    let v102: i64;  // rsi
    let v103: i64;  // rcx
    let v104: i64;  // rax

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x6fe, 0);
    v35 = v9;
    v36 = v10;
    v37 = 0;
    uu_dircolors::get_colors_format_strings(&v8, a2);
    v57 = v10;
    v75 = v8;
    v56 = v75;
    v55 = v13;
    v76 = v11;
    v78 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
    v54 = v76;
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v56 as &char + 8) as &i64), v57 + *((&v56 as &char + 8) as &i64)), v79);
    v8 = std::env::var("TERM");
    v80 = v8;
    match v8 {
        Ok(_) => {
            v51 = v11;
            v83 = *((&v8 as &char + 8) as &i128);
            v82 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 as u128 as u256;
            v50 = v83;
        },
        Err(_) => {
            v63 = v11;
            v81 = *((&v8 as &char + 8) as &i128);
            v82 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u128 as u256;
            v62 = v81;
            v50 = uu_dircolors::parse::{{closure}}(&v62);
        },
    }
    v59 = *((&v50 as &char + 8) as &i64);
    v58 = v51;
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v62 = core::iter::traits::iterator::Iterator::enumerate(&v8);
    v0 = *(a2 as &i8);
    v1 = 0;
    v84 = &v52;
    loop {
        v64 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v62, v85);
        v86 = v86 | -0x100 | *((&v64 as &char + 8) as &i64) != 0x8000000000000000;
        if *((&v64 as &char + 8) as &i64) == 0x8000000000000000 {
            break;
        }
        v53 = *((&v64 as &char + 24) as &i64);
        v87 = *((&v64 as &char + 8) as &i128);
        v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87;
        v52 = v87;
        v48 = v64 + 1;
        if v79 {
            v60 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(*((&v52 as &char + 8) as &i64), *((&v64 as &char + 24) as &i64)), v79, v79), v79);
            v8 = <str as uu_dircolors::StrUtils>::split_two(*((&v60 as &char + 8) as &i64), *((&v60 as &char + 16) as &i64));
            v33 = v8;
            v34 = v9;
            v38 = v10;
            v39 = v11;
            if !v39 {
                v2 = 0;
                v3 = a3;
                v4 = a4;
                v5 = 0;
                v65 = format!("{:?}:{:?}: invalid line;  missing second token", &v2, &v48);
                v100 = a0;
                *((v100 + 24) as &i64) = *((&v65 as &char + 16) as &i64);
                *((v100 + 8) as &i192) = v65;
                *(v100 as &i64) = 1;
                return v104;
            }
            v40 = alloc::str::<impl str>::to_lowercase(v8, v34);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "term") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "colorterm") as i8 {
                v91 = v84 | -0x100 | 1;
                v9 = v9;
                v11 = v11;
                if !<str as uu_dircolors::StrUtils>::fnmatch(v59, v58, v38, v39) as i8 {
                    v91 = v91 | -0x100 | (v1 != 1) * 2 | 1;
                    v9 = v9;
                    v11 = v11;
                }
            } else {
                v90 = (v1 == 1 ? 2 : v1);
                v91 = v84 | -0x100 | 3;
                v9 = v9;
                v11 = v11;
                if v90 != 3 {
                    v91 = v90 & 4294967295;
                    v92 = *((&v40 as &char + 8) as &i128);
                    v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92;
                    v66 = v92;
                    v1 = v33;
                    v47 = v34;
                    v8 = 0;
                    if !core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(46, &v8), v79) as i8 {
                        v1 = v33;
                        v47 = v34;
                        v8 = 0;
                        if core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(42, &v8), v79) as i8 {
                            if v0 != 2 {
                                v70 = format!("{:?}={:?}:", &v33, &v38);
                                v96 = v70;
                                v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
                                v8 = v96;
                                v10 = *((&v70 as &char + 16) as &i64);
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                                v9 = v9;
                                v11 = v11;
                            } else {
                                v29 = &v38;
                                v30 = <&T as core::fmt::Display>::fmt;
                                v31 = &v33;
                                v32 = <&T as core::fmt::Display>::fmt;
                                v8 = 2;
                                v10 = 2;
                                v12 = 0;
                                v13 = 32;
                                v14 = 3;
                                v16 = v44;
                                v15 = v43;
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
                                v28 = v44;
                                v27 = v43;
                                v2 = "\x1b[";
                                v3 = 4;
                                v6 = &v8;
                                v7 = 3;
                                v4 = &v29;
                                v5 = 2;
                                v69 = core::option::Option<T>::map_or_else(&v2);
                                v95 = v69;
                                v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
                                v8 = v95;
                                v10 = *((&v69 as &char + 16) as &i64);
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                                v9 = v9;
                                v11 = v11;
                            }
                        } else {
                            v9 = v9;
                            v11 = v11;
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "options") as i8 {
                                v9 = v9;
                                v11 = v11;
                                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "color") as i8 {
                                    v9 = v9;
                                    v11 = v11;
                                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "eightbit") as i8 {
                                        v61 = struct16 {
                                            field_0: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E
                                            field_8: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17h4c28990ed9a93d44E + 1184
                                        };
                                        v97 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v61, &v66);
                                        if !v97 {
                                            v29 = 0;
                                            v30 = a3;
                                            v31 = a4;
                                            v32 = 0;
                                            v73 = format!("{:?}:{:?}: unrecognized keyword {:?}", &v29, &v48, &v33);
                                            v101 = a0;
                                            *((v101 + 24) as &i64) = *((&v73 as &char + 16) as &i64);
                                            *((v101 + 8) as &i192) = v73;
                                            *(v101 as &i64) = 1;
                                            return v104;
                                        }
                                        v49 = v97 + 16;
                                        if v0 != 2 {
                                            v72 = format!("{:?}={:?}:", &v49, &v38);
                                            v99 = v72;
                                            v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                                            v8 = v99;
                                            v10 = *((&v72 as &char + 16) as &i64);
                                            v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                                            v9 = v9;
                                            v11 = v11;
                                        } else {
                                            v29 = &v38;
                                            v30 = <&T as core::fmt::Display>::fmt;
                                            v31 = &v49;
                                            v32 = <&T as core::fmt::Display>::fmt;
                                            v8 = 2;
                                            v10 = 2;
                                            v12 = 0;
                                            v13 = 32;
                                            v14 = 3;
                                            v16 = v46;
                                            v15 = v45;
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
                                            v28 = v46;
                                            v27 = v45;
                                            v2 = "\x1b[";
                                            v3 = 4;
                                            v6 = &v8;
                                            v7 = 3;
                                            v4 = &v29;
                                            v5 = 2;
                                            v71 = core::option::Option<T>::map_or_else(&v2);
                                            v98 = v71;
                                            v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
                                            v8 = v98;
                                            v10 = *((&v71 as &char + 16) as &i64);
                                            v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                                            v9 = v9;
                                            v11 = v11;
                                        }
                                    }
                                }
                            }
                        }
                    } else if v0 != 2 {
                        v68 = format!("*{:?}={:?}:", &v33, &v38);
                        v94 = v68;
                        v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
                        v8 = v94;
                        v10 = *((&v68 as &char + 16) as &i64);
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                        v9 = v9;
                        v11 = v11;
                    } else {
                        v29 = &v38;
                        v30 = <&T as core::fmt::Display>::fmt;
                        v31 = &v33;
                        v32 = <&T as core::fmt::Display>::fmt;
                        v8 = 2;
                        v10 = 2;
                        v12 = 0;
                        v13 = 32;
                        v14 = 3;
                        v16 = v42;
                        v15 = v41;
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
                        v28 = v42;
                        v27 = v41;
                        v2 = "\x1b[";
                        v3 = 4;
                        v6 = &v8;
                        v7 = 3;
                        v4 = &v29;
                        v5 = 2;
                        v67 = core::option::Option<T>::map_or_else(&v2);
                        v93 = v67;
                        v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
                        v8 = v93;
                        v10 = *((&v67 as &char + 16) as &i64);
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v9, v10 + v9), v79);
                        v9 = v9;
                        v11 = v11;
                    }
                }
            }
            v11 = v11;
            v9 = v9;
            v1 = v91;
            v84 = &v52;
        }
    }
    if *(a2 as &i8) == 2 {
        v35 = alloc::string::String::pop(v102, v79);
    }
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v54 as &char + 8) as &i64), v55 + *((&v54 as &char + 8) as &i64)), v79);
    v103 = a0;
    *((v103 + 24) as &i64) = v37;
    *((v103 + 8) as &i128) = v35;
    *(v103 as &i64) = 0;
    return v104;
}
