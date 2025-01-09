fn uu_ls::enter_directory(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [bp-0x568]
    let v1: i64;  // [sp-0x560]
    let v2: i8;  // [sp-0x549]
    let v3: i32;  // [sp-0x53c]
    let v4: i64;  // [sp-0x538]
    let v5: i64;  // [bp-0x530]
    let v6: i64;  // [bp-0x528]
    let v7: i64;  // [sp-0x520], Other Possible Types: struct16
    let v8: i64;  // [sp-0x518]
    let v9: i64;  // [sp-0x510]
    let v10: i64;  // [sp-0x508], Other Possible Types: struct9
    let v11: i8;  // [sp-0x500]
    let v12: i128;  // [bp-0x4f8], Other Possible Types: struct24, Argument
    let v13: i64;  // [sp-0x4f0]
    let v14: i64;  // [bp-0x4e8]
    let v15: i64;  // [sp-0x4d8]
    let v16: i64;  // [bp-0x4c8], Other Possible Types: Option<struct40>
    let v17: i64;  // [sp-0x4c0]
    let v18: i64;  // [sp-0x4b8]
    let v19: i64;  // [bp-0x4a0]
    let v20: i64;  // [sp-0x490], Other Possible Types: struct24
    let v21: i64;  // [sp-0x488]
    let v22: i64;  // [sp-0x470]
    let v23: i64;  // [sp-0x468]
    let v24: i192;  // [sp-0x460], Other Possible Types: struct24, Option<struct8>, struct40, Arguments
    let v25: i8;  // [sp-0x45f]
    let v26: i64;  // [sp-0x458]
    let v27: i64;  // [sp-0x450]
    let v28: i64;  // [bp-0x448]
    let v29: i64;  // [sp-0x440]
    let v30: i64;  // [sp-0x438]
    let v31: i64;  // [sp-0x330]
    let v32: i8;  // [sp-0x328]
    let v33: i64;  // [sp-0x320], Other Possible Types: struct24, struct8
    let v34: i64;  // [sp-0x318]
    let v35: i64;  // [sp-0x310]
    let v36: struct8;  // [bp-0x1f0]
    let v37: i8;  // [bp-0x1e8]
    let v38: i8;  // [bp-0x160]
    let v39: i64;  // [bp+0x8]
    let v40: i8;  // [bp+0x10]
    let v41: i32;  // eax
    let v42: i32;  // r12d
    let v43: i64;  // r15
    let v44: i64;  // r14
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i32;  // eax
    let v48: i32;  // ebp
    let v49: i32;  // r15d
    let v50: i128;  // xmm0
    let v51: i256;  // ymm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm1
    let v54: i64;  // r12
    let v55: i128;  // xmm0
    let v56: i64;  // rax
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i64;  // rdx
    let v60: i64;  // rax
    let v61: i64;  // r13
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rbp
    let v67: i64;  // r14
    let v68: i64;  // rax
    let v69: i128;  // xmm0
    let v71: i64;  // rax
    let v72: i64;  // rax
    let v73: i128;  // xmm0
    let v74: i64;  // r14
    let v75: i64;  // rcx
    let v76: i64;  // rax
    let v77: i64;  // rdx

    v31 = a1;
    v32 = a2;
    v2 = *((a3 + 240) as &i8);
    v22 = a3;
    if v2 {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v41 = *((a3 + 235) as &i8);
        v42 = *((a3 + 242) as &i8);
    } else {
        v43 = a3;
        v6 = a1;
        v3 = a2;
        v44 = alloc::alloc::Global::alloc_impl();
        v24 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
        v14 = v27;
        v45 = v24;
        v12 = v45;
        v24 = 0;
        v33 = std::sys::os_str::bytes::Slice::to_owned(".");
        v18 = v35;
        v46 = v33;
        v16 = v46;
        v47 = *((v43 + 235) as &i8);
        v42 = *((v43 + 242) as &i8);
        v0 = 0;
        v48 = v47;
        v49 = v42;
        uu_ls::PathData::new(&v33, &v12, &v24, &v16, v48, v49);
        v20 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v16 = 0;
        v24 = std::sys::os_str::bytes::Slice::to_owned("..");
        v14 = v27;
        v50 = v24;
        v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v12 = v50;
        v0 = 0;
        uu_ls::PathData::new(&v24, &v20, &v16, &v12, v48, v49);
        memcpy(v44, &v33, 304);
        memcpy(v44 + 304, &v24, 304);
        v41 = alloc::slice::hack::into_vec(&v7, v44, 2) | -0x100 | v48;
    }
    v10 = v6;
    v11 = v3;
    v6 = v41;
    v3 = v42;
    loop {
        v35 = v35;
        v16 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10);
        if !v16 {
            break;
        }
        v54 = v18;
        if !v12 {
            v23 = v54;
            v56 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
            if v56 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
                return v60;
            }
            v26 = v54;
            v24 = 1;
            uucore::mods::error::set_exit_code(1);
            v4 = uucore::util_name();
            v5 = v59;
            eprintln!("{:?}: {:?}", &v4, &v24);
            v35 = v35;
        } else {
            v15 = v19;
            v55 = *((&v16 as &char + 24) as &i128);
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55;
            v14 = v55;
            v12 = v17;
            v13 = v54;
            if uu_ls::should_display(&v12, v22) as i8 {
                v20 = std::fs::DirEntry::path(&v12);
                v30 = v15;
                v57 = v12;
                v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
                v58 = v14;
                v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
                v28 = v58;
                v26 = v57;
                v24 = 1;
                v33 = 0x8000000000000000;
                v0 = 0;
                uu_ls::PathData::new(&v38, &v20, &v24, &v33, v6, v3);
                v7 = alloc::vec::Vec<T,A>::push(&v38);
            }
        }
    }
    v61 = v22;
    uu_ls::sort_entries(v8, v9, v61);
    if *((v61 + 248) as &i8) == 1 || (v26 = v26, *((v61 + 234) as &i8)) {
        v24 = uu_ls::return_total(v8, v9, v61, a4);
        v60 = v26;
        if v33 == 0x8000000000000000 {
            return v60;
        }
        v33 = v24;
        v34 = v60;
        v35 = v27;
        v16 = v60;
        v17 = v35;
        v12 = Argument {
            value: &v16
            formatter: <&T as core::fmt::Display>::fmt
        };
        v24 = Arguments {
            pieces: [""]
            args: [&v12]
            fmt: 0
        };
        v63 = std::io::Write::write_fmt(a4, &v24);
        if v63 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v63);
            return v60;
        }
        if *((v61 + 238) as &i8) {
            uu_ls::dired::add_total(v39, v35);
        }
        v26 = v26;
    }
    v60 = uu_ls::display_items(v8, v9, v61, a4, v39, v40);
    if v60 {
        return v60;
    }
    if !*((v61 + 230) as &i8) {
        return 0;
    }
    v12 = struct24 {
        field_0: v8
        field_8: v9 * 304 + v12
        field_16: <UNKNOWN>
    };
    v64 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
    if v64 {
        v6 = *((v61 + 238) as &i8);
        do {
            v65 = v64 + 24;
            v10 = std::fs::read_dir(v64 + 24);
            if v11 != 2 {
                v24 = uucore::features::fs::FileInformation::from_path(v65, *((v64 + 296) as &i8));
                match v24 {
                    Some(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
                        return v60;
                    },
                    None => {
                        memcpy(&v37, &v24, 136);
                        v36 = struct8 {
                            field_0: v70
                        };
                    },
                }
                if !hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v36) {
                    v24 = struct40 {
                        field_0: "\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                        field_32: 0
                    };
                    v72 = std::io::Write::write_fmt(a4, &v24);
                    if v72 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
                        return v60;
                    }
                    if v6 {
                        *((v39 + 48) as &i64) = 2;
                        v60 = uu_ls::dired::indent(a4);
                        if v60 {
                            return v60;
                        }
                        v24 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v64 + 32) as &i64), *((v64 + 40) as &i64));
                        v74 = v27;
                        uu_ls::dired::calculate_subdired(v39, v74);
                        v75 = v39;
                        *((v75 + 48) as &i64) = *((v75 + 48) as &i64) + v74 + 3;
                    }
                    uu_ls::show_dir_name(v64, a4, v61);
                    v24 = struct40 {
                        field_0: "\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                        field_32: 0
                    };
                    v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v76 = std::io::Write::write_fmt(a4, &v24);
                    if v76 {
                        v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
                        return v60;
                    }
                    v77 = *((&v4 as &char + 8) as &i8);
                    v1 = v40;
                    v0 = v39;
                    v60 = uu_ls::enter_directory(v64, v4, v77, v61, a4, a5);
                    if v60 {
                        return v60;
                    }
                    v24 = uucore::features::fs::FileInformation::from_path(v65, *((v64 + 296) as &i8));
                    match v24 {
                        Some(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
                            return v60;
                        },
                        None => {
                            memcpy(&v33, &v24, 136);
                            v33 = struct8 {
                                field_0: v78
                            };
                            hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v33);
                            v26 = v26;
                            v35 = v35;
                        },
                    }
                } else {
                    v71 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                        return v60;
                    }
                    v33 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65);
                    v28 = v35;
                    v73 = v33;
                    v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
                    v26 = v73;
                    v24 = 5;
                    uucore::mods::error::set_exit_code(2);
                    v20 = uucore::util_name();
                    v21 = v59;
                    eprintln!("{:?}: {:?}", &v20, &v24);
                    v26 = v26;
                    v35 = v35;
                }
            } else {
                v67 = v10;
                v4 = v67;
                v68 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                if v68 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                    return v60;
                }
                v16 = v67;
                v33 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65);
                v29 = v35;
                v69 = v33;
                v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v27 = v69;
                v26 = v67;
                v25 = *((v64 + 297) as &i8);
                v24 = 2;
                uucore::mods::error::set_exit_code(2 - (v25 < 1));
                v20 = uucore::util_name();
                v21 = v59;
                eprintln!("{:?}: {:?}", &v20, &v24);
                v26 = v26;
                v35 = v35;
            }
        } while ((v35 = v35, v26 = v26, v64 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12), v64));
    }
}
