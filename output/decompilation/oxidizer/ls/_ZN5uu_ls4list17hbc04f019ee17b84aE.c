fn uu_ls::list(a0: &struct24, a1: i64) -> u64 {
    let v0: u8;  // [sp-0x539]
    let v1: u8;  // [bp-0x530]
    let v2: u64;  // [bp-0x530]
    let v3: u8;  // [bp-0x530]
    let v4: iNone;  // [bp-0x528], Other Possible Types: struct32
    let v5: &str;  // [bp-0x528]
    let v6: iNone;  // [bp-0x518]
    let v7: u64;  // [bp-0x508]
    let v8: i64;  // [bp-0x500]
    let v9: core::option::Option<char>;  // [sp-0x4f0], Other Possible Types: u64
    let v10: void*;  // [bp-0x4e8], Other Possible Types: struct16
    let v11: u64;  // [bp-0x4e0]
    let v12: void*;  // [bp-0x4d8]
    let v13: void*;  // [bp-0x4d0], Other Possible Types: struct16
    let v14: u64;  // [bp-0x4c8]
    let v15: void*;  // [bp-0x4c0]
    let v16: u64;  // [bp-0x4b8]
    let v17: u8;  // [bp-0x4b0]
    let v18: u64;  // [bp-0x4a8]
    let v19: struct24;  // [bp-0x4a0], Other Possible Types: struct33, u64
    let v20: u64;  // [bp-0x480]
    let v21: i64;  // [bp-0x470]
    let v22: void*;  // [bp-0x460]
    let v23: u64;  // [bp-0x458]
    let v24: u128;  // [bp-0x450]
    let v25: u64;  // [bp-0x440]
    let v26: u128;  // [bp-0x438]
    let v27: u64;  // [bp-0x430]
    let v29: struct9;  // [bp-0x428]
    let v32: iNone;  // [bp-0x418]
    let v33: iNone;  // [bp-0x408]
    let v34: u64;  // [bp-0x3f8]
    let v35: iNone;  // [bp-0x3f0]
    let v36: iNone;  // [bp-0x3e0]
    let v37: iNone;  // [bp-0x3d0]
    let v38: iNone;  // [bp-0x3c0]
    let v39: i64;  // [bp-0x3b0]
    let v40: u8;  // [sp-0x3a8]
    let v41: u8;  // [sp-0x393]
    let v42: iNone;  // [bp-0x390]
    let v43: iNone;  // [bp-0x380]
    let v44: iNone;  // [bp-0x370]
    let v45: iNone;  // [bp-0x360]
    let v46: iNone;  // [bp-0x350]
    let v47: iNone;  // [bp-0x340]
    let v48: void*;  // [bp-0x328], Other Possible Types: struct16, struct24, struct40, u8
    let v49: struct24;  // [bp-0x328], Other Possible Types: struct48
    let v50: u64;  // [bp-0x320]
    let v51: u64;  // [bp-0x320]
    let v52: i8;  // [bp-0x318], Other Possible Types: u64
    let v53: u64;  // [bp-0x318]
    let v54: u64;  // [bp-0x318]
    let v55: u64;  // [bp-0x310]
    let v56: u64;  // [bp-0x310]
    let v57: i8;  // [bp-0x308]
    let v58: i8;  // [bp-0x2f8]
    let v59: iNone;  // [bp-0x1f8]
    let v60: struct16;  // [bp-0x1f8], Other Possible Types: u64
    let v61: i64;  // [bp-0x1f8]
    let v62: u64;  // [bp-0x1f0]
    let v63: u128;  // [bp-0x1f0]
    let v64: iNone;  // [bp-0x1e8], Other Possible Types: u128
    let v65: u64;  // [bp-0x1e0]
    let v66: u128;  // [bp-0x1d8]
    let v67: u64;  // [bp-0x1d8]
    let v68: i64;  // [bp-0x1d0], Other Possible Types: u8
    let v69: u64;  // [bp-0xc0]
    let v70: u8;  // [bp-0xb8]
    let v73: u64;  // 4100
    let v74: i64;  // r14
    let v75: u64;  // rax
    let v76: i64;  // rdx
    let v77: u64;  // rax
    let v78: void*;  // rax
    let v79: i64;  // rcx
    let v82: u64;  // rdx
    let v83: i64;  // rax
    let v84: i64;  // r13
    let v85: struct24;  // rax
    let v86: core::result::Result<alloc::string::String, std::env::VarError>;  // r15, Other Possible Types: unsigned long
    let v87: u64;  // rax
    let v89: i64;  // r12
    let v90: u64;  // r13
    let v91: core::result::Result<(), std::io::error::Error>;  // rax
    let v92: u64;  // rax
    let v93: u64;  // rax
    let v94: u64;  // rax
    let v95: u64;  // rax
    let v96: u64;  // rax
    let v97: iNone;  // xmm0
    let v98: u128;  // xmm1
    let v99: u64;  // r14
    let v100: i64;  // rax
    let v101: struct24;  // [bp-0x478], Other Possible Types: u64

    v10 = 0;
    v11 = 8;
    v12 = 0;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v22 = 0;
    v23 = 8;
    v24 = 0;
    v25 = 8;
    v26 = 0;
    v2 = *((a0 + 16) as &i64);
    v19 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::stdout());
    v73 = *((a1 + 24) as &i64);
    v75 = std::thread::local::LocalKey<T>::with();
    *(&v6 as &u128) = g_6865a8.field_0;
    *(&v4 as &u128) = g_686598.field_0;
    v7 = v75;
    v8 = v76;
    v77 = std::thread::local::LocalKey<T>::with();
    *(&v64 as &u128) = g_6865a8.field_0;
    *(&v59 as &u128) = g_686598.field_0;
    v67 = v77;
    v68 = v76;
    uu_ls::TimeStyler::new(&v48, a1 + 184);
    v9 = 0x8000000000000000;
    v34 = v20;
    v33 = *(&v19.field_16 as &i128);
    v32 = *(&v19.field_0 as &i128);
    v39 = v74;
    v40 = 2;
    v41 = (((0 ^ v73) & (0 ^ -(v73))) >> 63) * 2;
    v42 = v4 as i128;
    v43 = v6 as i128;
    v44 = *(&v7 as &i128);
    v45 = v59 as i128;
    v46 = v64 as i128;
    v47 = *(&v67 as &i128);
    v38 = *(&v58 as &i128);
    v37 = *(&v57 as &i128);
    v36 = *(&v52 as &i128);
    v35 = *(&v48 as &i128);
    v4 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
    if v78 {
        v79 = a1;
        v0 = *((v79 + 240) as &i8);
        do {
            v48 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v78, v82);
            v101 = v49;
            v48 = 0;
            v19 = 0x8000000000000000;
            uu_ls::PathData::new(&v59 as u8, &v101, &v48, &v19, *((v79 + 243) as &i8), *((v79 + 250) as &i8), 1);
            if !uu_ls::PathData::get_metadata(&v59 as u8, &v32) {
                continue;
            }
            v83 = uu_ls::PathData::file_type(&v59 as u8, &v32);
            if !v83 {
                uucore::mods::error::set_exit_code(1);
            } else if !(v0 & 1) && (*(v83 as &i32) & 0xf000) == 0x4000 {
                memcpy(&v48, &v59 as u8, 304);
                v13 = alloc::vec::Vec<T,A>::push(&v48, "src/uu/ls/src/ls.rs");
            }
            memcpy(&v48, &v59 as u8, 304);
            v10 = alloc::vec::Vec<T,A>::push(&v48, "src/uu/ls/src/ls.rs");
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
        } while (v78);
    }
    v84 = a1;
    uu_ls::sort_entries(8, v12, v84);
    uu_ls::sort_entries(8, 0, v84);
    v54 = v53;
    if v41 != 2 {
        v54 = v53;
        if uu_ls::colors::StyleManager::get_normal_style(v39) {
            v41 = 1;
            v40 = 2;
            v5 = "\x1b[0m";
            v61 = &v5 as u64;
            v62 = <&T as core::fmt::Display>::fmt;
            v48 = struct40 {
                field_0: "\x01"
                field_16: &v61
                field_24: 1
            };
            v85 = std::io::Write::write_fmt(&v32, &v48);
            v54 = v52;
            if v85 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v85);
                return v86;
            }
        }
    }
    uu_ls::display_items(8, v12, v84, &v32, &v22);
    if v86 {
        return v86;
    }
    v19 = struct24 {
        field_0: 8
        field_8: ""
    };
    v87 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
    if v76 {
        v89 = v76;
        v3 = *((v84 + 246) as &i8);
        v0 = 2 <= v2 | *((v84 + 238) as &i8);
        v9 = 9223372036854775810;
        do {
            vvar_1349{stack -1064} = struct9 OrderedDict([(0, 𝜙@64b [((5874093, None), vvar_1004{stack -1064}), ((5874024, None), None)]), (8, 𝜙@64b [((5874093, None), vvar_1005{stack -1056}), ((5874024, None), None)])])
            v90 = v89 + 24;
            std::fs::read_dir(&v29, v90);
            if v29.field_8 == 2 {
                v18 = v29.field_0;
                v91 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v32);
                v84 = a1;
                match v91 {
                    Ok(_) => {
                        v48 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v89 + 32) as &i64), *((v89 + 40) as &i64) as i32);
                        v65 = v54;
                        v63 = *(&v48.field_0 as &i128) as u128;
                        v67 = v18;
                        v68 = *((v89 + 297) as &i8);
                        v60 = 9223372036854775810;
                        uucore::mods::error::set_exit_code((v68 + 1) as u64);
                        v101 = uucore::util_name();
                        v21 = v76;
                        eprintln!("{}: {}", &v101, &v60);
                        v51 = v50;
                        v53 = v52;
                        v55 = v56;
                        continue;
                    },
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v91);
                    },
                }
            }
            v16 = v29.field_0;
            v17 = v29.field_8;
            v53 = v54;
            if (v0 & 1) {
                if v87 || v12 {
                    v48 = struct40 {
                        field_0: "\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v94 = std::io::Write::write_fmt(&v32, &v48);
                    if !v94 {
                        v95 = uu_ls::show_dir_name(v89, &v32, a1);
                        if !v95 {
                            v48 = struct40 {
                                field_0: "\n"
                                field_8: 1
                                field_16: 8
                                field_24: 0
                            };
                            v96 = std::io::Write::write_fmt(&v32, &v48);
                            v51 = v50;
                            v53 = v52;
                            if !v96 {
                                goto LABEL_59a411;
                            }
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v96);
                        } else {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v95);
                        }
                    } else {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v94);
                    }
                } else {
                    if (v1 & 1) {
                        uu_ls::dired::indent(&v32);
                        if v86 {
                            return v86;
                        }
                    }
                    v92 = uu_ls::show_dir_name(v89, &v32, a1);
                    if !v92 {
                        v48 = struct40 {
                            field_0: "\n"
                            field_8: 1
                            field_16: 8
                            field_24: 0
                        };
                        v93 = std::io::Write::write_fmt(&v32, &v48);
                        if !v93 {
                            v51 = v50;
                            v53 = v52;
                            if (v1 & 1) {
                                uu_ls::dired::calculate_subdired(&v22, *((v89 + 16) as &i64));
                                v27 = v27 + *((v89 + 16) as &i64) + 3;
                                v51 = v50;
                                v53 = v52;
                                goto LABEL_59a411;
                            }
                        } else {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v93);
                        }
                    } else {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v92);
                    }
                }
                v86 = v100;
                return v86;
            } else {
LABEL_59a411:
                v49 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                v97 = v49.field_0;
                v98 = v49.field_16;
                v66 = *(&v49.field_32 as &i128);
                v64 = v98;
                v59 = v97;
                v48 = uucore::features::fs::FileInformation::from_path(v90, *((v89 + 296) as &i8));
                v84 = a1;
                v99 = v51;
                if v48.field_0 as i32 != 1 {
                    memcpy(&v70, &v49 as u8, 136);
                    v69 = v99;
                    v60 = hashbrown::map::HashMap<K,V,S,A>::insert(&v69);
                    uu_ls::enter_directory(v89, v16, v17, v84, &v32, &v60, &v22);
                    v51 = v51;
                    v53 = v53;
                    if v86 {
                        return v86;
                    }
                } else {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v99);
                }
            }
            v54 = v53;
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
            v89 = v76;
        } while (v76);
        if (v1 & 1) {
            goto LABEL_59a5ff;
        }
    } else if (*((v84 + 246) as &i8) & 1) {
LABEL_59a5ff:
        if !*((v84 + 247) as &i8) {
            uu_ls::dired::print_dired_output(v84, &v22, &v32);
        }
    }
    return v86;
}
