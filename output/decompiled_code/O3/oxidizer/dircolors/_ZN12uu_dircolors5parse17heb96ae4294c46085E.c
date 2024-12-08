fn uu_dircolors::parse(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [sp-0x3b1]
    let v1: i64;  // [bp-0x3b0]
    let v2: i64;  // [sp-0x3a8]
    let v3: i64;  // [sp-0x3a0]
    let v4: i64;  // [sp-0x398]
    let v5: i64;  // [bp-0x390]
    let v6: i64;  // [sp-0x388]
    let v7: i64;  // [sp-0x380]
    let v8: i192;  // [sp-0x378], Other Possible Types: Result<struct24, struct8>, struct48, struct32
    let v9: i64;  // [sp-0x370]
    let v10: i64;  // [sp-0x368]
    let v11: i64;  // [bp-0x360]
    let v12: i64;  // [sp-0x350]
    let v13: i8;  // [sp-0x348]
    let v14: i32;  // [bp-0x347]
    let v15: i32;  // [sp-0x344]
    let v16: i64;  // [sp-0x340]
    let v17: i64;  // [sp-0x330]
    let v18: i64;  // [sp-0x320]
    let v19: i64;  // [sp-0x318]
    let v20: i8;  // [sp-0x310]
    let v21: i64;  // [sp-0x308]
    let v22: i64;  // [sp-0x2f8]
    let v23: i64;  // [sp-0x2e8]
    let v24: i64;  // [sp-0x2e0]
    let v25: i8;  // [sp-0x2d8]
    let v26: i32;  // [bp-0x2d7]
    let v27: i32;  // [sp-0x2d4]
    let v28: i64;  // [sp-0x2d0]
    let v29: i64;  // [sp-0x2c8]
    let v30: i64;  // [sp-0x2c0]
    let v31: i8;  // [bp-0x2b8]
    let v32: i64;  // [sp-0x2b0]
    let v33: i64;  // [sp-0x2a8]
    let v34: struct16;  // [sp-0x2a0], Other Possible Types: i128, struct8
    let v35: i64;  // [sp-0x298]
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
    let v49: i128;  // [bp-0x208]
    let v50: i64;  // [sp-0x1f8]
    let v51: i128;  // [bp-0x1e8]
    let v52: i64;  // [sp-0x1d8]
    let v53: i128;  // [sp-0x1c8]
    let v54: i64;  // [sp-0x1b8]
    let v55: i128;  // [sp-0x1a8]
    let v56: i64;  // [sp-0x198]
    let v57: i64;  // [sp-0x190]
    let v58: i64;  // [sp-0x188]
    let v59: struct24;  // [sp-0x180], Other Possible Types: i192
    let v60: struct16;  // [bp-0x168]
    let v61: i128;  // [sp-0x158], Other Possible Types: struct56
    let v62: i64;  // [sp-0x148]
    let v63: struct32;  // [sp-0x120], Other Possible Types: i256
    let v64: i192;  // [sp-0x100]
    let v65: i128;  // [sp-0xe8]
    let v66: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v67: i192;  // [sp-0xc0]
    let v68: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v69: i192;  // [sp-0x90]
    let v70: i192;  // [sp-0x78], Other Possible Types: struct24
    let v71: i192;  // [sp-0x60]
    let v72: i192;  // [sp-0x48]
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i256;  // ymm0
    let v77: i256;  // ymm0
    let v78: i64;  // rdx
    let v79: i64;  // 4098
    let v80: i128;  // xmm0
    let v81: i256;  // ymm0
    let v82: i128;  // xmm0
    let v83: i64;  // r13
    let v84: i64;  // rdx
    let v85: i64;  // rbp
    let v86: i128;  // xmm0
    let v88: i64;  // rsi
    let v89: i64;  // rcx
    let v90: i64;  // r13
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm0
    let v96: i64;  // rax
    let v97: i128;  // xmm0
    let v98: i128;  // xmm0
    let v99: i64;  // rcx
    let v100: i64;  // rcx
    let v101: i64;  // rsi
    let v102: i64;  // rcx
    let v103: i64;  // rax

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1790, 0);
    v34 = v9;
    v35 = v10;
    v36 = 0;
    uu_dircolors::get_colors_format_strings(&v8, a2);
    v56 = v10;
    v74 = v8;
    v55 = v74;
    v54 = v12;
    v75 = v11;
    v77 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
    v53 = v75;
    v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v55 as &char + 8) as &i64), v56 + *((&v55 as &char + 8) as &i64)), v78);
    v8 = std::env::var("TERM");
    v79 = v8;
    match v8 {
        Ok(_) => {
            v50 = v11;
            v82 = *((&v8 as &char + 8) as &i128);
            v81 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u128 as u256;
            v49 = v82;
        },
        Err(_) => {
            v62 = v11;
            v80 = *((&v8 as &char + 8) as &i128);
            v81 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u128 as u256;
            v61 = v80;
            uu_dircolors::parse::{{closure}}(&v49, &v61);
        },
    }
    v58 = *((&v49 as &char + 8) as &i64);
    v57 = v50;
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v61 = core::iter::traits::iterator::Iterator::enumerate(&v8);
    v0 = *(a2 as &i8);
    v1 = 0;
    v83 = &v51;
    loop {
        v63 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v61, v84);
        v85 = v85 | -0x100 | *((&v63 as &char + 8) as &i64) != 0x8000000000000000;
        if *((&v63 as &char + 8) as &i64) == 0x8000000000000000 {
            break;
        }
        v52 = *((&v63 as &char + 24) as &i64);
        v86 = *((&v63 as &char + 8) as &i128);
        v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
        v51 = v86;
        v47 = v63 + 1;
        if v78 {
            v59 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(*((&v51 as &char + 8) as &i64), *((&v63 as &char + 24) as &i64)), v78, v78), v78);
            v8 = <str as uu_dircolors::StrUtils>::split_two(*((&v59 as &char + 8) as &i64), *((&v59 as &char + 16) as &i64));
            v88 = v8;
            v32 = v8;
            v33 = v8.field_8;
            v37 = v8.field_16;
            v38 = v8.field_24;
            if !v38 {
                v2 = 0;
                v3 = a3;
                v4 = a4;
                v5 = 0;
                v64 = format!("{:?}:{:?}: invalid line;  missing second token", &v2, &v47);
                v99 = a0;
                *((v99 + 24) as &i64) = *((&v64 as &char + 16) as &i64);
                *((v99 + 8) as &i192) = v64;
                *(v99 as &i64) = 1;
                return v103;
            }
            v39 = alloc::str::<impl str>::to_lowercase(v88, v33);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "term") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "colorterm") as i8 {
                v90 = v83 | -0x100 | 1;
                if !<str as uu_dircolors::StrUtils>::fnmatch(v58, v57, v37, v38) as i8 {
                    v90 = v90 | -0x100 | (v1 != 1) * 2 | 1;
                }
            } else {
                v89 = (v1 == 1 ? 2 : v1);
                v90 = v83 | -0x100 | 3;
                if v89 != 3 {
                    v90 = v89 & 4294967295;
                    v91 = *((&v39 as &char + 8) as &i128);
                    v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91;
                    v65 = v91;
                    v1 = v32;
                    v46 = v33;
                    v8 = 0;
                    if !core::slice::<impl [T]>::starts_with(v1, v46, core::char::methods::encode_utf8_raw(46, &v8), v78) as i8 {
                        v1 = v32;
                        v46 = v33;
                        v8 = 0;
                        if core::slice::<impl [T]>::starts_with(v1, v46, core::char::methods::encode_utf8_raw(42, &v8), v78) as i8 {
                            if v0 == 2 {
                                v28 = &v37;
                                v29 = <&T as core::fmt::Display>::fmt;
                                v30 = &v32;
                                v31 = <&T as core::fmt::Display>::fmt;
                                v8 = 2;
                                v8.field_16 = 2;
                                v8.field_32 = 0;
                                v8.40 = 32;
                                v13 = 3;
                                v15 = v43;
                                v14 = v42;
                                v16 = 2;
                                v17 = 2;
                                v18 = 1;
                                v19 = 32;
                                v20 = 3;
                                v21 = 2;
                                v22 = 2;
                                v23 = 0;
                                v24 = 32;
                                v25 = 3;
                                v27 = v43;
                                v26 = v42;
                                v2 = "\x1b[";
                                v3 = 4;
                                v6 = &v8;
                                v7 = 3;
                                v4 = &v28;
                                v5 = 2;
                                v68 = core::option::Option<T>::map_or_else(&v2);
                                v94 = v68;
                                v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
                                v8 = v94;
                                v8.field_16 = (stack_base)[152] as i64;
                                v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                            } else {
                                v69 = format!("{:?}={:?}:", &v32, &v37);
                                v95 = v69;
                                v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
                                v8 = v95;
                                v8.field_16 = (stack_base)[128] as i64;
                                v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                            }
                        } else {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "options") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "color") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v39 as &char + 8) as &i64), *((&v39 as &char + 16) as &i64), "eightbit") as i8 {
                                v60 = struct16 {
                                    field_0: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E
                                    field_8: _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E + 1184
                                };
                                v96 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v60, &v65);
                                if !v96 {
                                    v28 = 0;
                                    v29 = a3;
                                    v30 = a4;
                                    v31 = 0;
                                    v72 = format!("{:?}:{:?}: unrecognized keyword {:?}", &v28, &v47, &v32);
                                    v100 = a0;
                                    *((v100 + 24) as &i64) = *((&v72 as &char + 16) as &i64);
                                    *((v100 + 8) as &i192) = v72;
                                    *(v100 as &i64) = 1;
                                    return v103;
                                }
                                v48 = v96 + 16;
                                if v0 != 2 {
                                    v71 = format!("{:?}={:?}:", &v48, &v37);
                                    v98 = v71;
                                    v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
                                    v8 = v98;
                                    v8.field_16 = (stack_base)[80] as i64;
                                    v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                                } else {
                                    v28 = &v37;
                                    v29 = <&T as core::fmt::Display>::fmt;
                                    v30 = &v48;
                                    v31 = <&T as core::fmt::Display>::fmt;
                                    v8 = 2;
                                    v8.field_16 = 2;
                                    v8.field_32 = 0;
                                    v8.40 = 32;
                                    v13 = 3;
                                    v15 = v45;
                                    v14 = v44;
                                    v16 = 2;
                                    v17 = 2;
                                    v18 = 1;
                                    v19 = 32;
                                    v20 = 3;
                                    v21 = 2;
                                    v22 = 2;
                                    v23 = 0;
                                    v24 = 32;
                                    v25 = 3;
                                    v27 = v45;
                                    v26 = v44;
                                    v2 = "\x1b[";
                                    v3 = 4;
                                    v6 = &v8;
                                    v7 = 3;
                                    v4 = &v28;
                                    v5 = 2;
                                    v70 = core::option::Option<T>::map_or_else(&v2);
                                    v97 = v70;
                                    v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
                                    v8 = v97;
                                    v8.field_16 = (stack_base)[104] as i64;
                                    v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                                }
                            }
                        }
                    } else if v0 != 2 {
                        v67 = format!("*{:?}={:?}:", &v32, &v37);
                        v93 = v67;
                        v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
                        v8 = v93;
                        v8.field_16 = (stack_base)[176] as i64;
                        v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                    } else {
                        v28 = &v37;
                        v29 = <&T as core::fmt::Display>::fmt;
                        v30 = &v32;
                        v31 = <&T as core::fmt::Display>::fmt;
                        v8 = 2;
                        v8.field_16 = 2;
                        v8.field_32 = 0;
                        v8.40 = 32;
                        v13 = 3;
                        v15 = v41;
                        v14 = v40;
                        v16 = 2;
                        v17 = 2;
                        v18 = 1;
                        v19 = 32;
                        v20 = 3;
                        v21 = 2;
                        v22 = 2;
                        v23 = 0;
                        v24 = 32;
                        v25 = 3;
                        v27 = v41;
                        v26 = v40;
                        v2 = "\x1b[";
                        v3 = 4;
                        v6 = &v8;
                        v7 = 3;
                        v4 = &v28;
                        v5 = 2;
                        v66 = core::option::Option<T>::map_or_else(&v2);
                        v92 = v66;
                        v81 = v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92;
                        v8 = v92;
                        v8.field_16 = (stack_base)[200] as i64;
                        v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v78);
                    }
                }
            }
            v1 = v90;
            v83 = &v51;
        }
    }
    if *(a2 as &i8) == 2 {
        v34 = alloc::string::String::pop(v101, v78);
    }
    v34 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v53 as &char + 8) as &i64), v54 + *((&v53 as &char + 8) as &i64)), v78);
    v102 = a0;
    *((v102 + 24) as &i64) = v36;
    *((v102 + 8) as &i128) = v34;
    *(v102 as &i64) = 0;
    return v103;
}
