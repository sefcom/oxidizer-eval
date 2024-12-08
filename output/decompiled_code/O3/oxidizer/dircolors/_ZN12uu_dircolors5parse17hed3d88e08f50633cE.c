fn uu_dircolors::parse(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i8;  // [sp-0x3b1]
    let v1: i64;  // [bp-0x3b0]
    let v2: i64;  // [sp-0x3a8]
    let v3: i64;  // [sp-0x3a0]
    let v4: i64;  // [sp-0x398]
    let v5: i8;  // [bp-0x390]
    let v6: i64;  // [sp-0x388]
    let v7: i64;  // [sp-0x380]
    let v8: i32;  // [sp-0x378], Other Possible Types: Result<struct16, struct24>, struct32, struct48
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
    let v40: struct24;  // [sp-0x278], Other Possible Types: i192
    let v41: i8;  // [bp-0x25d]
    let v42: i8;  // [bp-0x25a]
    let v43: i8;  // [bp-0x256]
    let v44: i8;  // [bp-0x253]
    let v45: i8;  // [bp-0x24f]
    let v46: i8;  // [bp-0x24c]
    let v47: i64;  // [sp-0x248]
    let v48: i64;  // [sp-0x218]
    let v49: i64;  // [sp-0x210]
    let v50: i128;  // [bp-0x208]
    let v51: i64;  // [sp-0x1f8]
    let v52: i128;  // [bp-0x1e8]
    let v53: i64;  // [sp-0x1d8]
    let v54: i128;  // [sp-0x1c8]
    let v55: i64;  // [sp-0x1b8]
    let v56: i128;  // [sp-0x1a8]
    let v57: i64;  // [sp-0x198]
    let v58: i64;  // [sp-0x190]
    let v59: i64;  // [sp-0x188]
    let v60: i192;  // [sp-0x180], Other Possible Types: struct24
    let v61: i64;  // [sp-0x168]
    let v62: i64;  // [sp-0x160]
    let v63: i128;  // [sp-0x158], Other Possible Types: struct56
    let v64: i64;  // [sp-0x148]
    let v65: struct32;  // [sp-0x120], Other Possible Types: i256
    let v66: i192;  // [sp-0x100]
    let v67: i128;  // [sp-0xe8]
    let v68: struct24;  // [sp-0xd8], Other Possible Types: i192
    let v69: i192;  // [sp-0xc0]
    let v70: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v71: i192;  // [sp-0x90]
    let v72: struct24;  // [sp-0x78], Other Possible Types: i192
    let v73: i192;  // [sp-0x60]
    let v74: i192;  // [sp-0x48]
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i256;  // ymm0
    let v79: i256;  // ymm0
    let v80: i64;  // rdx
    let v81: i64;  // 4098
    let v82: i128;  // xmm0
    let v83: i256;  // ymm0
    let v84: i128;  // xmm0
    let v85: i64;  // r13
    let v86: i64;  // rdx
    let v87: i64;  // rbp
    let v88: i128;  // xmm0
    let v91: i64;  // rcx
    let v92: i64;  // r13
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm0
    let v96: i128;  // xmm0
    let v97: i128;  // xmm0
    let v98: i64;  // rax
    let v99: i128;  // xmm0
    let v100: i128;  // xmm0
    let v101: i64;  // rcx
    let v102: i64;  // rcx
    let v103: i64;  // rsi
    let v104: i64;  // rcx
    let v105: i64;  // rax

    v8 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1790, 0);
    v35 = v9;
    v36 = v10;
    v37 = 0;
    uu_dircolors::get_colors_format_strings(&v8, a2);
    v57 = v10;
    v76 = v8;
    v56 = v76;
    v55 = v13;
    v77 = v11;
    v79 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
    v54 = v77;
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v56 as &char + 8) as &i64), v57 + *((&v56 as &char + 8) as &i64)), v80);
    v8 = std::env::var("TERM");
    v81 = v8;
    match v8 {
        Ok(_) => {
            v51 = v11;
            v84 = *((&v8 as &char + 8) as &i128);
            v83 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 as u128 as u256;
            v50 = v84;
        },
        Err(_) => {
            v64 = v11;
            v82 = *((&v8 as &char + 8) as &i128);
            v83 = v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u128 as u256;
            v63 = v82;
            uu_dircolors::parse::{{closure}}(&v50, &v63);
        },
    }
    v59 = *((&v50 as &char + 8) as &i64);
    v58 = v51;
    v8 = <I as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v63 = core::iter::traits::iterator::Iterator::enumerate(&v8);
    v0 = *(a2 as &i8);
    v1 = 0;
    v85 = &v52;
    loop {
        v65 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v63, v86);
        v87 = v87 | -0x100 | *((&v65 as &char + 8) as &i64) != 0x8000000000000000;
        if *((&v65 as &char + 8) as &i64) == 0x8000000000000000 {
            break;
        }
        v53 = *((&v65 as &char + 24) as &i64);
        v88 = *((&v65 as &char + 8) as &i128);
        v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
        v52 = v88;
        v48 = v65 + 1;
        if v80 {
            v60 = uu_dircolors::escape(<str as uu_dircolors::StrUtils>::purify(alloc::str::<impl core::borrow::Borrow<str> for alloc::string::String>::borrow(*((&v52 as &char + 8) as &i64), *((&v65 as &char + 24) as &i64)), v80, v80), v80);
            v8 = <str as uu_dircolors::StrUtils>::split_two(*((&v60 as &char + 8) as &i64), *((&v60 as &char + 16) as &i64));
            v33 = v8;
            v34 = v8.field_8;
            v38 = v8.field_16;
            v39 = v8.field_24;
            if !v39 {
                v2 = 0;
                v3 = a3;
                v4 = a4;
                v5 = 0;
                v66 = format!("{:?}:{:?}: invalid line;  missing second token", &v2, &v48);
                v101 = a0;
                *((v101 + 24) as &i64) = *((&v66 as &char + 16) as &i64);
                *((v101 + 8) as &i192) = v66;
                *(v101 as &i64) = 1;
                return v105;
            }
            v40 = alloc::str::<impl str>::to_lowercase(v8, v34);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "term") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "colorterm") as i8 {
                v92 = v85 | -0x100 | 1;
                if !<str as uu_dircolors::StrUtils>::fnmatch(v59, v58, v38, v39) as i8 {
                    v92 = v92 | -0x100 | (v1 != 1) * 2 | 1;
                }
            } else {
                v91 = (v1 == 1 ? 2 : v1);
                v92 = v85 | -0x100 | 3;
                if v91 != 3 {
                    v92 = v91 & 4294967295;
                    v93 = *((&v40 as &char + 8) as &i128);
                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
                    v67 = v93;
                    v1 = v33;
                    v47 = v34;
                    v8 = 0;
                    if !core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(46, &v8), v80) as i8 {
                        v1 = v33;
                        v47 = v34;
                        v8 = 0;
                        if core::slice::<impl [T]>::starts_with(v1, v47, core::char::methods::encode_utf8_raw(42, &v8), v80) as i8 {
                            if v0 != 2 {
                                v71 = format!("{:?}={:?}:", &v33, &v38);
                                v97 = v71;
                                v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
                                v8 = v97;
                                v8.field_16 = (stack_base)[128] as i64;
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                            } else {
                                v29 = &v38;
                                v30 = <&T as core::fmt::Display>::fmt;
                                v31 = &v33;
                                v32 = <&T as core::fmt::Display>::fmt;
                                v8 = 2;
                                v8.field_16 = 2;
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
                                v28 = (&v43)[3];
                                v27 = v43;
                                v2 = "\x1b[";
                                v3 = 4;
                                v6 = &v8;
                                v7 = 3;
                                v4 = &v29;
                                v5 = 2;
                                v70 = core::option::Option<T>::map_or_else(&v2);
                                v96 = v70;
                                v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
                                v8 = v96;
                                v8.field_16 = (stack_base)[152] as i64;
                                v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                            }
                        } else {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "options") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "color") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v40 as &char + 8) as &i64), *((&v40 as &char + 16) as &i64), "eightbit") as i8 {
                                v61 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E;
                                v62 = _ZN6uucore8features6colors20FILE_ATTRIBUTE_CODES17hcf826f5b9b128681E + 1184;
                                v98 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v61, &v67);
                                if !v98 {
                                    v29 = 0;
                                    v30 = a3;
                                    v31 = a4;
                                    v32 = 0;
                                    v74 = format!("{:?}:{:?}: unrecognized keyword {:?}", &v29, &v48, &v33);
                                    v102 = a0;
                                    *((v102 + 24) as &i64) = *((&v74 as &char + 16) as &i64);
                                    *((v102 + 8) as &i192) = v74;
                                    *(v102 as &i64) = 1;
                                    return v105;
                                }
                                v49 = v98 + 16;
                                if v0 != 2 {
                                    v73 = format!("{:?}={:?}:", &v49, &v38);
                                    v100 = v73;
                                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                                    v8 = v100;
                                    v8.field_16 = (stack_base)[80] as i64;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                                } else {
                                    v29 = &v38;
                                    v30 = <&T as core::fmt::Display>::fmt;
                                    v31 = &v49;
                                    v32 = <&T as core::fmt::Display>::fmt;
                                    v8 = 2;
                                    v8.field_16 = 2;
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
                                    v72 = core::option::Option<T>::map_or_else(&v2);
                                    v99 = v72;
                                    v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
                                    v8 = v99;
                                    v8.field_16 = (stack_base)[104] as i64;
                                    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                                }
                            }
                        }
                    } else if v0 != 2 {
                        v69 = format!("*{:?}={:?}:", &v33, &v38);
                        v95 = v69;
                        v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
                        v8 = v95;
                        v8.field_16 = (stack_base)[176] as i64;
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                    } else {
                        v29 = &v38;
                        v30 = <&T as core::fmt::Display>::fmt;
                        v31 = &v33;
                        v32 = <&T as core::fmt::Display>::fmt;
                        v8 = 2;
                        v8.field_16 = 2;
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
                        v68 = core::option::Option<T>::map_or_else(&v2);
                        v94 = v68;
                        v83 = v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
                        v8 = v94;
                        v8.field_16 = (stack_base)[200] as i64;
                        v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8.field_8, v10 + v8.field_8), v80);
                    }
                }
            }
            v1 = v92;
            v85 = &v52;
        }
    }
    if *(a2 as &i8) == 2 {
        v35 = alloc::string::String::pop(v103, v80);
    }
    v35 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v54 as &char + 8) as &i64), v55 + *((&v54 as &char + 8) as &i64)), v80);
    v104 = a0;
    *((v104 + 24) as &i64) = v37;
    *((v104 + 8) as &i128) = v35;
    *(v104 as &i64) = 0;
    return v105;
}
