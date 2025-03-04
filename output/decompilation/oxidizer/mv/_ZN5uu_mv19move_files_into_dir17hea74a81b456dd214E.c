fn uu_mv::move_files_into_dir(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i8;  // [sp-0x301]
    let v1: i64;  // [sp-0x300], Other Possible Types: struct24, int
    let v2: i64;  // [sp-0x2f8]
    let v3: i64;  // [sp-0x2e8]
    let v4: i64;  // [sp-0x2d0], Other Possible Types: struct24, struct56, String
    let v5: i64;  // [sp-0x2c8]
    let v6: i64;  // [sp-0x2c0]
    let v7: i64;  // [sp-0x290], Other Possible Types: struct24
    let v9: iNone;  // [bp-0x278], Other Possible Types: unsigned long
    let v10: i64;  // [sp-0x268]
    let v11: struct24;  // [sp-0x258]
    let v12: Result<struct24, struct8>;  // [sp-0x240]
    let v13: struct24;  // [bp-0x228], Other Possible Types: struct25, struct1, struct136
    let v14: i64;  // [sp-0x218]
    let v15: iNone;  // [sp-0x198], Other Possible Types: unsigned long, struct24
    let v16: i64;  // [sp-0x178], Other Possible Types: struct24, Result<struct136, struct5>, String, Option<struct16>, struct20
    let v17: i64;  // [sp-0x170], Other Possible Types: int
    let v18: i64;  // [sp-0x168]
    let v19: i64;  // [bp-0x160], Other Possible Types: unsigned int
    let v20: iNone;  // [sp-0xc8]
    let v21: i64;  // [sp-0xb8]
    let v22: struct16;  // [bp-0xa8]
    let v23: i64;  // [sp-0x98]
    let v24: i64;  // [sp-0x90]
    let v25: struct16;  // [sp-0x88], Other Possible Types: struct32
    let v26: String;  // [sp-0x58]
    let v27: iNone;  // [sp-0x40]
    let v29: i64;  // rdx
    let v31: iNone;  // xmm0
    let v32: iNone;  // ymm0
    let v33: iNone;  // ymm0
    let v34: iNone;  // xmm0
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v37: i64;  // r15
    let v38: i64;  // r14
    let v39: iNone;  // xmm0
    let v41: iNone;  // ymm0
    let v42: i64;  // rax
    let v43: iNone;  // xmm0
    let v45: iNone;  // xmm0
    let v46: i64;  // rax
    let v47: iNone;  // xmm0

    v16 = std::thread::local::LocalKey<T>::try_with();
    v25 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v16), v29);
    if !std::path::Path::is_dir(a2, a3) as i8 {
        v13 = struct25 {
            field_0: 1
            field_8: a2
            field_16: a3
            field_24: 1
        };
        v4 = <T as alloc::string::ToString>::to_string(&v13);
        v16 = 7;
        return alloc::boxed::Box<T>::new(&v16);
    }
    v16 = std::fs::canonicalize(a2, a3);
    if v16 != 0x8000000000000000 {
        v15 = v18;
        v31 = v16 as i128;
        v33 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u256;
        v15 = v31;
    } else {
        v15 = uu_mv::move_files_into_dir::{{closure}}(a2, a3, v17);
    }
    if !*((a4 + 51) as &i8) {
        v3 = 0;
        goto LABEL_4ea143;
    } else {
        v3 = core::ops::function::FnOnce::call_once();
        if a1 <= 1 {
LABEL_4ea143:
            *(&v9 as &i64) = 0;
        } else {
            v4 = indicatif::progress_bar::ProgressBar::new(a1);
            v16 = indicatif::style::ProgressStyle::with_template(&g_426c0f);
            v13 = core::result::Result<T,E>::unwrap(&v16, "src/uu/mv/src/mv.rs");
            v16 = indicatif::progress_bar::ProgressBar::with_style(&v4, &v13);
            v13 = indicatif::multi::MultiProgress::add(&v3, &v16);
            v34 = v13.field_0;
            v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256;
            v9 = v34;
            v10 = v14;
        }
    }
    v22 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22);
    if !v35 {
        return 0;
    }
    v36 = v35;
    v0 = *((a4 + 54) as &i8);
    do {
        v37 = *((v36 + 8) as &i64);
        v38 = *((v36 + 16) as &i64);
        v16 = std::fs::metadata(v37, v38);
        match v16 {
            Err(_) => {
                v13 = struct25 {
                    field_0: 1
                    field_8: v37
                    field_16: v38
                    field_24: 1
                };
                v4 = <T as alloc::string::ToString>::to_string(&v13);
                v19 = v6;
                v39 = v4.field_0;
                v17 = v39;
                v16 = 0;
                uucore::mods::error::set_exit_code(1);
                v1 = uucore::util_name();
                v2 = v29;
                eprintln!("{}: {}", &v1, &v16);
                v17 = v17;
                v18 = v18;
                v41 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256;
                continue;
            },
            Ok(_) => {
                if v9 as i64 {
                    v16 = std::sys::os_str::bytes::Slice::to_string_lossy(v37, v38);
                    v13 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(v17, v18);
                    indicatif::progress_bar::ProgressBar::set_message(&v9, &v13);
                }
            },
        }
        v42 = std::path::Path::file_name(v37, v38);
        if !v42 {
            v13 = struct25 {
                field_0: 1
                field_8: v37
                field_16: v38
                field_24: 1
            };
            v4 = <T as alloc::string::ToString>::to_string(&v13);
            v19 = v6;
            v43 = v4.field_0;
            v17 = v43;
            v16 = 0;
            uucore::mods::error::set_exit_code(1);
            v1 = uucore::util_name();
            v2 = v29;
            eprintln!("{}: {}", &v1, &v16);
            v17 = v17;
            v18 = v18;
            v41 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256;
            continue;
        }
        v11 = std::path::Path::join(a2, a3, v42, v29);
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v25, &v11) && v0 != 2 {
            *(&v1 as &i128) = *((&v11.field_0 as &char + 8) as &i128);
            v4 = v37;
            v5 = v38;
            v26 = format!("will not overwrite just-created '{}' with '{}'", &v1, &v4);
            *(&v19 as &i32) = 1;
            v16 = v26;
            v1 = alloc::boxed::Box<T>::new(&v16);
            v2 = &g_587f60;
            uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v1) as i32);
            v4 = uucore::util_name();
            v5 = v29;
            eprintln!("{}: {}", &v4, &v1);
            goto LABEL_4ea1a9;
        } else {
            v12 = std::fs::canonicalize(v37, v38);
            match v12 {
                Err(_) => {
LABEL_4ea629:
                    v7 = uu_mv::rename() as u64;
                    if v7 {
                        v16 = <T as alloc::string::ToString>::to_string(&v7);
                        if v18 {
                            v46 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v7, v36, &v11);
                            if !v3 {
                                v1 = v46;
                                uucore::mods::error::set_exit_code(1);
                                v4 = uucore::util_name();
                                v5 = v29;
                                eprintln!("{}: {}", &v4, &v1);
                            } else {
                                indicatif::multi::MultiProgress::suspend(&v3, v46);
                            }
                        } else {
                            v16 = v7;
                            uucore::mods::error::set_exit_code(1);
                        }
                    }
                    if v9 as i64 {
                        indicatif::progress_bar::ProgressBar::inc(&v9, 1);
                    }
                    v16 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v11);
                    v47 = v16.field_0;
                    v13 = struct24 {
                        field_0: v47
                        field_16: v18
                    };
                    v25 = hashbrown::map::HashMap<K,V,S,A>::insert(&v13);
                    v17 = v17;
                    v18 = v18;
                    v41 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256;
                },
                Ok(_) => {
                    v45 = v12 as i128;
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256;
                    v20 = v45;
                    v21 = *((&v12 as &char + 16) as &i64);
                    if !<std::path::PathBuf as core::cmp::PartialEq>::eq((&v20)[8] as i64, *((&v12 as &char + 16) as &i64), (&v15)[8] as i64, v15) as i8 {
                        goto LABEL_4ea629;
                    } else {
                        v23 = v37;
                        v24 = v38;
                        v7 = uucore::features::fs::normalize_path(a2, a3);
                        v27 = *((&v7.field_0 as &char + 8) as &i128);
                        v16 = std::path::Path::components((&v15)[8] as i64, v15);
                        v13 = struct1 {
                            field_0: 10
                        };
                        v4 = core::iter::traits::iterator::Iterator::fold(&v16, &v13);
                        v1 = core::option::Option<T>::map_or_else(&v4, a2, a3);
                        v4 = format!("cannot move '{}' to a subdirectory of itself, '{}/{}'", &v23, &v27, &v1);
                        v16 = v4;
                        *(&v19 as &i32) = 1;
                        v1 = alloc::boxed::Box<T>::new(&v16);
                        v2 = &g_587f60;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v1) as i32 as u32 as u64);
                        v4 = uucore::util_name();
                        v5 = v29;
                        eprintln!("{}: {}", &v4, &v1);
                    }
LABEL_4ea1a9:
                    v17 = v17;
                    v18 = v18;
                },
            }
        }
    } while ((v18 = v18, v17 = v17, v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v22), v36));
}
