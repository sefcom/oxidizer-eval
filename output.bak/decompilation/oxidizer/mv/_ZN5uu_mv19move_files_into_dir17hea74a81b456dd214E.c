fn uu_mv::move_files_into_dir(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i8;  // [sp-0x301]
    let v1: i128;  // [sp-0x300], Other Possible Types: struct24
    let v2: i64;  // [sp-0x2f8]
    let v3: i64;  // [sp-0x2e8]
    let v4: i64;  // [sp-0x2d0], Other Possible Types: struct24, struct56
    let v5: i64;  // [sp-0x2c8]
    let v6: i64;  // [sp-0x2c0]
    let v7: i64;  // [sp-0x290], Other Possible Types: struct24
    let v8: i128;  // [bp-0x278]
    let v9: i64;  // [sp-0x268]
    let v10: struct24;  // [sp-0x258], Other Possible Types: i192
    let v11: i200;  // [sp-0x240], Other Possible Types: Result<struct24, struct8>
    let v12: i1088;  // [bp-0x228], Other Possible Types: struct24, struct25, struct1, struct136
    let v13: i64;  // [sp-0x220]
    let v14: i64;  // [sp-0x218]
    let v15: i64;  // [bp-0x210]
    let v16: i64;  // [sp-0x208]
    let v17: i128;  // [sp-0x198], Other Possible Types: struct24
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x178], Other Possible Types: struct24, Result<struct136, struct5>, struct16, struct20, Option<struct16>
    let v20: i64;  // [sp-0x170]
    let v21: i64;  // [sp-0x168]
    let v22: i64;  // [bp-0x160]
    let v23: i64;  // [sp-0x158]
    let v24: i64;  // [sp-0x150]
    let v25: i128;  // [sp-0xc8]
    let v26: i64;  // [sp-0xb8]
    let v27: struct16;  // [bp-0xa8]
    let v28: i64;  // [sp-0x98]
    let v29: i64;  // [sp-0x90]
    let v30: i256;  // [sp-0x88], Other Possible Types: struct32, struct16
    let v31: i8;  // [bp-0x58]
    let v32: i8;  // [bp-0x48]
    let v33: i128;  // [sp-0x40]
    let v35: i64;  // rdx
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i256;  // ymm0
    let v40: i128;  // xmm0
    let v41: i64;  // rax
    let v42: i256;  // ymm0
    let v43: i64;  // r15
    let v44: i64;  // r14
    let v45: i128;  // xmm0
    let v46: i256;  // ymm0
    let v47: i64;  // rax
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: i256;  // ymm0
    let v53: i128;  // xmm0
    let v56: i64;  // r9
    let v58: i64;  // rax
    let v59: i128;  // xmm0
    let v60: i64;  // rax

    v19 = std::thread::local::LocalKey<T>::try_with();
    v30 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v19), v35);
    if !std::path::Path::is_dir(a2, a3) as i8 {
        v12 = struct25 {
            field_0: 1
            field_8: a2
            field_16: a3
            field_24: 1
        };
        v4 = <T as alloc::string::ToString>::to_string(&v12);
        v19 = 7;
        return alloc::boxed::Box<T>::new(&v19);
    }
    v19 = std::fs::canonicalize(a2, a3);
    if v19 != 0x8000000000000000 {
        v18 = v21;
        v37 = v19;
        v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
        v17 = v37;
    } else {
        v17 = uu_mv::move_files_into_dir::{{closure}}(a2, a3, v20);
    }
    if !*((a4 + 51) as &i8) {
        v3 = 0;
        goto LABEL_4ea143;
    } else {
        v3 = core::ops::function::FnOnce::call_once();
        if a1 <= 1 {
LABEL_4ea143:
            v8 = 0;
        } else {
            v4 = indicatif::progress_bar::ProgressBar::new(a1);
            v19 = indicatif::style::ProgressStyle::with_template(&g_426c0f);
            v12 = core::result::Result<T,E>::unwrap(&v19, "src/uu/mv/src/mv.rs");
            v19 = indicatif::progress_bar::ProgressBar::with_style(&v4, &v12);
            v12 = indicatif::multi::MultiProgress::add(&v3, &v19);
            v40 = v12;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
            v8 = v40;
            v9 = v14;
        }
    }
    v27 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27);
    if !v41 {
        return 0;
    }
    v0 = *((a4 + 54) as &i8);
    do {
        v43 = *((v41 + 8) as &i64);
        v44 = *((v41 + 16) as &i64);
        v19 = std::fs::metadata(v43, v44);
        if v19 == 2 {
            v12 = struct25 {
                field_0: 1
                field_8: v43
                field_16: v44
                field_24: 1
            };
            v4 = <T as alloc::string::ToString>::to_string(&v12);
            v22 = v6;
            v45 = v4;
            v46 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
            v20 = v45;
            v19 = 0;
            uucore::mods::error::set_exit_code(1);
            v1 = uucore::util_name();
            v2 = v35;
            eprintln!("{:?}: {:?}", &v1, &v19);
            v6 = v6;
        } else {
            if v8 {
                v19 = std::sys::os_str::bytes::Slice::to_string_lossy(v43, v44);
                v12 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v20, v21);
                indicatif::progress_bar::ProgressBar::set_message(&v8, &v12);
            }
            v47 = std::path::Path::file_name(v43, v44);
            if !v47 {
                v12 = struct25 {
                    field_0: 1
                    field_8: v43
                    field_16: v44
                    field_24: 1
                };
                v4 = <T as alloc::string::ToString>::to_string(&v12);
                v22 = v6;
                v48 = v4;
                v46 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v20 = v48;
                v19 = 0;
                uucore::mods::error::set_exit_code(1);
                v1 = uucore::util_name();
                v2 = v35;
                eprintln!("{:?}: {:?}", &v1, &v19);
                v6 = v6;
            } else {
                v10 = std::path::Path::join(a2, a3, v47, v35);
                if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v30, &v10) && v0 != 2 {
                    v49 = *((&v10 as &char + 8) as &i128);
                    v1 = v49;
                    v4 = v43;
                    v5 = v44;
                    v12 = &v1;
                    v13 = <std::path::Display as core::fmt::Display>::fmt;
                    v14 = &v4;
                    v15 = <std::path::Display as core::fmt::Display>::fmt;
                    v19 = "will not overwrite just-created '";
                    v20 = 3;
                    v23 = 0;
                    v21 = &v12;
                    v22 = 2;
                    core::option::Option<T>::map_or_else();
                    v22 = 1;
                    v50 = v31;
                    v46 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                    v19 = v50;
                    v21 = v32;
                    v1 = alloc::boxed::Box<T>::new(&v19);
                    v2 = &g_587f60;
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v1) as i32);
                    v4 = uucore::util_name();
                    v5 = v35;
                    eprintln!("{:?}: {:?}", &v4, &v1);
                    v20 = v20;
                    v21 = v21;
                } else {
                    v11 = std::fs::canonicalize(v43, v44);
                    if v11 == 0x8000000000000000 {
                        goto LABEL_0x4ea61c;
                    }
                    v51 = v11;
                    v52 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
                    v25 = v51;
                    v26 = *((&v11 as &char + 16) as &i64);
                    if <std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v25 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), *((&v17 as &char + 8) as &i64), v18) as i8 {
                        v28 = v43;
                        v29 = v44;
                        v7 = uucore::features::fs::normalize_path(a2, a3);
                        v53 = *((&v7 as &char + 8) as &i128);
                        v33 = v53;
                        v19 = std::path::Path::components(*((&v17 as &char + 8) as &i64), v18);
                        v12 = struct1 {
                            field_0: 10
                        };
                        v4 = core::iter::traits::iterator::Iterator::fold(&v19, &v12);
                        v1 = core::option::Option<T>::map_or_else(&v4, a2, a3);
                        v19 = &v28;
                        v20 = <std::path::Display as core::fmt::Display>::fmt;
                        v21 = &v33;
                        v22 = <std::path::Display as core::fmt::Display>::fmt;
                        v23 = &v1;
                        v24 = <alloc::string::String as core::fmt::Display>::fmt;
                        *(&v12 as &&str) = "cannot move '";
                        v13 = 4;
                        v16 = 0;
                        v14 = &v19;
                        v15 = 3;
                        core::option::Option<T>::map_or_else();
                        v21 = v6;
                        v59 = v4;
                        v46 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
                        v19 = v59;
                        v22 = 1;
                        v1 = alloc::boxed::Box<T>::new(&v19);
                        v2 = &g_587f60;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v1) as i32);
                        v4 = uucore::util_name();
                        v5 = v35;
                        eprintln!("{:?}: {:?}", &v4, &v1);
                        v20 = v20;
                        v21 = v21;
                        if v11 == 0x8000000000000000 {
                            v20 = v20;
                            v21 = v21;
                        }
                    } else {
                        v56 = v3;
                        if v56 {
                            v58 = stack_base + -744;
                        }
                        v7 = uu_mv::rename(v43, v44, *((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64), a4, v58);
                        v20 = v20;
                        v21 = v21;
                        if v7 {
                            v19 = <T as alloc::string::ToString>::to_string(&v7);
                            if !v21 {
                                v19 = v7;
                                uucore::mods::error::set_exit_code(1);
                                v20 = v20;
                                v21 = v21;
                            } else {
                                v60 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, v41, &v10);
                                if v3 {
                                    indicatif::multi::MultiProgress::suspend(&v3, v60);
                                    v20 = v20;
                                    v21 = v21;
                                } else {
                                    v1 = v60;
                                    uucore::mods::error::set_exit_code(1);
                                    v4 = uucore::util_name();
                                    v5 = v35;
                                    eprintln!("{:?}: {:?}", &v4, &v1);
                                    v20 = v20;
                                    v21 = v21;
                                }
                            }
                        }
                        v21 = v21;
                        v20 = v20;
                        if v8 {
                            indicatif::progress_bar::ProgressBar::inc(&v8, 1);
                        }
                        v19 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v10);
                        v46 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
                        v12 = struct24 {
                            field_0: v38 as u128
                            field_16: v21
                        };
                        v30 = hashbrown::map::HashMap<K,V,S,A>::insert(&v12);
                        v6 = v6;
                        continue;
                    }
                }
                v21 = v21;
                v20 = v20;
                v6 = v6;
            }
        }
    } while ((v6 = v6, v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v27), v41));
}
