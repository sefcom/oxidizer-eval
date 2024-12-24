fn uu_ls::enter_directory(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [bp-0x568]
    let v1: i64;  // [sp-0x560]
    let v2: i8;  // [sp-0x549]
    let v3: i32;  // [sp-0x53c]
    let v4: i64;  // [sp-0x538]
    let v5: i64;  // [bp-0x530]
    let v6: i64;  // [bp-0x528]
    let v7: i8;  // [sp-0x520], Other Possible Types: struct16
    let v8: i64;  // [sp-0x518]
    let v9: i64;  // [sp-0x510]
    let v10: i64;  // [sp-0x508], Other Possible Types: struct9
    let v11: i8;  // [sp-0x500]
    let v12: i64;  // [bp-0x4f8]
    let v13: i64;  // [sp-0x4f0]
    let v14: i64;  // [bp-0x4e8]
    let v15: i64;  // [sp-0x4d8]
    let v16: i64;  // [bp-0x4c8], Other Possible Types: Option<struct40>, struct8
    let v17: i64;  // [sp-0x4c0]
    let v18: i64;  // [sp-0x4b8]
    let v19: i8;  // [bp-0x4a0]
    let v20: i192;  // [sp-0x490], Other Possible Types: struct24
    let v21: i64;  // [sp-0x470]
    let v22: i64;  // [sp-0x468]
    let v23: i8;  // [sp-0x460], Other Possible Types: struct24, Option<struct8>, struct8
    let v24: i64;  // [sp-0x458]
    let v25: i64;  // [bp-0x450]
    let v26: i64;  // [bp-0x448]
    let v27: i64;  // [sp-0x440]
    let v28: i64;  // [sp-0x438]
    let v29: i64;  // [sp-0x330]
    let v30: i8;  // [sp-0x328]
    let v31: i192;  // [sp-0x320], Other Possible Types: struct24, struct8
    let v32: i64;  // [sp-0x310]
    let v33: struct8;  // [bp-0x1f0]
    let v34: i8;  // [bp-0x1e8]
    let v35: i8;  // [bp-0x160]
    let v36: i64;  // [bp+0x8]
    let v37: i8;  // [bp+0x10]
    let v38: i32;  // eax
    let v39: i32;  // r12d
    let v40: i64;  // r15
    let v41: i64;  // r14
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i32;  // eax
    let v45: i32;  // ebp
    let v46: i32;  // r15d
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i256;  // ymm0
    let v50: i64;  // rdx
    let v51: i256;  // ymm1
    let v52: i64;  // r12
    let v53: i128;  // xmm0
    let v54: i64;  // rsi
    let v55: i64;  // rdx
    let v56: i64;  // rax
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i64;  // rax
    let v60: i64;  // r13
    let v61: i64;  // r15
    let v63: i64;  // rax
    let v64: i64;  // rcx
    let v65: i64;  // rcx
    let v66: i64;  // rax
    let v67: i64;  // rdx
    let v68: i64;  // rbp
    let v69: i64;  // r14
    let v70: i64;  // rax
    let v71: i128;  // xmm0
    let v73: i64;  // rax
    let v74: i64;  // rax
    let v75: i128;  // xmm0
    let v76: i64;  // r14
    let v77: i64;  // rcx
    let v78: i64;  // rax
    let v79: i64;  // rdx

    v29 = a1;
    v30 = a2;
    v2 = *((a3 + 240) as &i8);
    v21 = a3;
    if v2 {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v38 = *((a3 + 235) as &i8);
        v39 = *((a3 + 242) as &i8);
    } else {
        v40 = a3;
        v6 = a1;
        v3 = a2;
        v41 = alloc::alloc::Global::alloc_impl(608);
        v23 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
        *(&v14 as &struct24) = v23.field_16;
        v42 = v23;
        v12 = v42;
        v23 = 0;
        v31 = std::sys::os_str::bytes::Slice::to_owned(".");
        v18 = v31.field_16;
        v43 = v31;
        v16 = v43;
        v44 = *((v40 + 235) as &i8);
        v39 = *((v40 + 242) as &i8);
        v0 = 0;
        v45 = v44;
        v46 = v39;
        uu_ls::PathData::new(&v31, &v12, &v23, &v16, v45, v46);
        v20 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v16 = struct8 {
            field_0: 0
        };
        v23 = std::sys::os_str::bytes::Slice::to_owned("..");
        *(&v14 as &struct24) = v23.field_16;
        v47 = v23;
        v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v12 = v47;
        v0 = 0;
        uu_ls::PathData::new(&v23, &v20, &v16, &v12, v45, v46);
        memcpy(v41, &v31, 304);
        memcpy(v41 + 304, &v23, 304);
        v38 = alloc::slice::hack::into_vec(&v7, v41, 2) | -0x100 | v45;
    }
    v10 = v6;
    v11 = v3;
    v6 = v38;
    v3 = v39;
    loop {
        v16 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10, v50);
        if !v16 {
            break;
        }
        v52 = v18;
        if v12 {
            v15 = v19;
            v53 = *((&v16 as &char + 24) as &i128);
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
            v14 = v53;
            v12 = v17;
            v13 = v52;
            if uu_ls::should_display(&v12, v21) as i8 {
                v20 = std::fs::DirEntry::path(&v12);
                v28 = v15;
                v57 = v12;
                v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
                v58 = v14;
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
                v26 = v58;
                v24 = v57;
                v23 = struct8 {
                    field_0: 1
                };
                v31 = struct8 {
                    field_0: 0x8000000000000000
                };
                v0 = 0;
                uu_ls::PathData::new(&v35, &v20, &v23, &v31, v6, v3);
                v7 = alloc::vec::Vec<T,A>::push(&v35, v55);
            }
        } else {
            v22 = v52;
            v56 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v54, v55);
            if v56 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
                return v59;
            }
            v24 = v52;
            v23 = 1;
            uucore::mods::error::set_exit_code();
            v4 = uucore::util_name();
            v5 = v55;
            eprintln!("{:?}: {:?}", &v4, &v23);
        }
    }
    v60 = v21;
    v61 = v36;
    uu_ls::sort_entries(v7.field_8, v9, v60);
    if *((v60 + 248) as &i8) == 1 || (v24 = v24, *((v60 + 234) as &i8)) {
        v23 = uu_ls::return_total(v7.field_8, v9, v60, a4);
        v59 = v23.field_8;
        if v31 == 0x8000000000000000 {
            return v59;
        }
        v31 = v23;
        v31.field_8 = vvar_436{reg 128};
        v32 = v23.field_16;
        v16 = v59;
        v17 = v32;
        v12 = &v16;
        v13 = <&T as core::fmt::Display>::fmt;
        v23 = &g_423d10;
        v23.field_8 = 1;
        v27 = 0;
        v23.field_16 = stack_base + -1272;
        v26 = 1;
        v63 = std::io::Write::write_fmt(a4, &v23);
        if v63 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v63);
            return v59;
        }
        if *((v60 + 238) as &i8) {
            v64 = *((v61 + 48) as &i64);
            if !v64 {
                v65 = *((v61 + 16) as &i64);
                v64 = (!v65 ? 0 : *((v65 * 16 + *((v61 + 8) as &i64) - 8) as &i64) + 1);
            }
            *((v61 + 48) as &i64) = v32 + v64 + 2;
        }
        v24 = v24;
    }
    v59 = uu_ls::display_items(v7.field_8, v9, v60, a4, v61, v37);
    if v59 {
        return v59;
    }
    if !*((v60 + 230) as &i8) {
        return 0;
    }
    v12 = *((&v7 as &char + 8) as &i192);
    v66 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
    if v66 {
        v6 = *((v60 + 238) as &i8);
        do {
            v68 = v66 + 24;
            v10 = std::fs::read_dir(v66 + 24, v67);
            if v10.field_8 != 2 {
                v4 = v10;
                v23 = uucore::features::fs::FileInformation::from_path(v68, *((v66 + 296) as &i8));
                match v23 {
                    Some(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                        return v59;
                    },
                    None => {
                        memcpy(&v34, &v23, 136);
                        v33 = struct8 {
                            field_0: v72
                        };
                    },
                }
                if !hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v33) as i8 {
                    *(&v23 as &&str) = "\n";
                    v24 = 1;
                    v25 = 8;
                    v26 = 0;
                    v74 = std::io::Write::write_fmt(a4, &v23);
                    if v74 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
                        return v59;
                    }
                    if v6 {
                        *((v36 + 48) as &i64) = 2;
                        v59 = uu_ls::dired::indent(a4);
                        if v59 {
                            return v59;
                        }
                        v23 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v66 + 32) as &i64), *((v66 + 40) as &i64));
                        v76 = v23.field_16;
                        uu_ls::dired::calculate_subdired(v36, v76);
                        v77 = v36;
                        *((v77 + 48) as &i64) = *((v77 + 48) as &i64) + v76 + 3;
                    }
                    uu_ls::show_dir_name(v66, a4, v60);
                    *(&v23 as &&str) = "\n";
                    v24 = 1;
                    v25 = 8;
                    v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v26 = 0;
                    v78 = std::io::Write::write_fmt(a4, &v23);
                    if v78 {
                        v59 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
                        return v59;
                    }
                    v79 = *((&v4 as &char + 8) as &i8);
                    v1 = v37;
                    v0 = v36;
                    v59 = uu_ls::enter_directory(v66, v4, v79, v60, a4, a5);
                    if v59 {
                        return v59;
                    }
                    v23 = uucore::features::fs::FileInformation::from_path(v68, *((v66 + 296) as &i8));
                    match v23 {
                        Some(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                            return v59;
                        },
                        None => {
                            memcpy(&v31, &v25, 136);
                            v31 = struct8 {
                                field_0: v80
                            };
                            hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v31);
                        },
                    }
                } else {
                    v73 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v54, v55);
                    if v73 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
                        return v59;
                    }
                    v31 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68);
                    v26 = v31.field_16;
                    v75 = v31;
                    v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
                    v24 = v75;
                    v23 = 5;
                    uucore::mods::error::set_exit_code();
                    v20 = uucore::util_name();
                    v20.8 = vvar_638{reg 32};
                    eprintln!("{:?}: {:?}", &v20, &v23);
                }
            } else {
                v69 = v10;
                v4 = v69;
                v70 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v54, v55);
                if v70 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                    return v59;
                }
                v16 = v69;
                v31 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v68);
                v27 = v31.field_16;
                v71 = v31;
                v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
                v25 = v71;
                v24 = v69;
                v23.1 = *((vvar_132{reg 40} + 297) as &i8);
                v23 = 2;
                uucore::mods::error::set_exit_code();
                v20 = uucore::util_name();
                v20.8 = vvar_585{reg 32};
                eprintln!("{:?}: {:?}", &v20, &v23);
            }
        } while ((v66 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12), v66));
    }
}
