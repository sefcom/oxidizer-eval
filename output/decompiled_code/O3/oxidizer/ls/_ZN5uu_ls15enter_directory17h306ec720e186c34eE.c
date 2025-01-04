fn uu_ls::enter_directory(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [bp-0x568]
    let v1: i64;  // [sp-0x560]
    let v2: i8;  // [sp-0x549]
    let v3: i32;  // [sp-0x53c]
    let v4: i64;  // [sp-0x538]
    let v5: i64;  // [bp-0x530]
    let v6: i8;  // [bp-0x528]
    let v7: i128;  // [sp-0x520], Other Possible Types: struct16
    let v8: i64;  // [sp-0x518]
    let v9: i64;  // [sp-0x510]
    let v10: i64;  // [sp-0x508], Other Possible Types: struct9
    let v11: i8;  // [sp-0x500]
    let v12: i128;  // [bp-0x4f8], Other Possible Types: Argument, struct24
    let v13: i64;  // [bp-0x4e8]
    let v14: i64;  // [sp-0x4d8]
    let v15: i64;  // [bp-0x4c8], Other Possible Types: struct8, Option<struct40>
    let v16: i64;  // [sp-0x4c0]
    let v17: i64;  // [sp-0x4b8]
    let v18: i8;  // [bp-0x4a0]
    let v19: i192;  // [sp-0x490], Other Possible Types: struct24
    let v20: i64;  // [sp-0x488]
    let v21: i64;  // [sp-0x470]
    let v22: i64;  // [sp-0x468]
    let v23: i192;  // [sp-0x460], Other Possible Types: struct24, Option<struct8>, struct40, Arguments, struct8
    let v24: i8;  // [sp-0x45f]
    let v25: i128;  // [sp-0x458]
    let v26: i64;  // [sp-0x450]
    let v27: i128;  // [bp-0x448]
    let v28: i64;  // [sp-0x440]
    let v29: i64;  // [sp-0x438]
    let v30: i64;  // [sp-0x330]
    let v31: i8;  // [sp-0x328]
    let v32: i64;  // [sp-0x320], Other Possible Types: struct24, struct8
    let v33: i64;  // [sp-0x318]
    let v34: i64;  // [sp-0x310]
    let v35: struct8;  // [bp-0x1f0]
    let v36: i8;  // [bp-0x1e8]
    let v37: i8;  // [bp-0x160]
    let v38: i64;  // [bp+0x8]
    let v39: i8;  // [bp+0x10]
    let v40: i32;  // eax
    let v41: i32;  // r12d
    let v42: i64;  // r15
    let v43: i64;  // r14
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i32;  // eax
    let v47: i32;  // ebp
    let v48: i32;  // r15d
    let v49: i128;  // xmm0
    let v50: i256;  // ymm0
    let v51: i256;  // ymm0
    let v52: i256;  // ymm1
    let v53: i128;  // xmm0
    let v55: i64;  // rsi
    let v56: i64;  // rdx
    let v57: i64;  // rax
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i64;  // rax
    let v61: i64;  // r13
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rdx
    let v66: i64;  // rbp
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

    v30 = a1;
    v31 = a2;
    v2 = *((a3 + 240) as &i8);
    v21 = a3;
    if v2 {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v40 = *((a3 + 235) as &i8);
        v41 = *((a3 + 242) as &i8);
    } else {
        v42 = a3;
        v6 = a1;
        v3 = a2;
        v43 = alloc::alloc::Global::alloc_impl(608);
        v23 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
        v13 = v26;
        v44 = v23;
        v12 = v44;
        v23 = 0;
        v32 = std::sys::os_str::bytes::Slice::to_owned(".");
        v17 = v34;
        v45 = v32;
        v15 = v45;
        v46 = *((v42 + 235) as &i8);
        v41 = *((v42 + 242) as &i8);
        v0 = 0;
        v47 = v46;
        v48 = v41;
        uu_ls::PathData::new(&v32, &v12, &v23, &v15, v47, v48);
        v19 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v15 = struct8 {
            field_0: 0
        };
        v23 = std::sys::os_str::bytes::Slice::to_owned("..");
        v13 = v26;
        v49 = v23;
        v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v12 = v49;
        v0 = 0;
        uu_ls::PathData::new(&v23, &v19, &v15, &v12, v47, v48);
        memcpy(v43, &v32, 304);
        memcpy(v43 + 304, &v23, 304);
        a2 = v3;
        v40 = alloc::slice::hack::into_vec(&v7, v43, 2) | -0x100 | v47;
    }
    v10 = v6;
    v11 = a2;
    v6 = v40;
    v3 = v41;
    loop {
        v34 = v34;
        v15 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10, a2);
        if !v15 {
            break;
        }
        if !v12 {
            v22 = v17;
            v57 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v55, v56);
            if v57 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v57);
                return v60;
            }
            v25 = v22;
            v23 = 1;
            uucore::mods::error::set_exit_code();
            v4 = uucore::util_name();
            v5 = v56;
            eprintln!("{:?}: {:?}", &v4, &v23);
            v34 = v34;
        } else {
            v14 = v18;
            v53 = *((&v15 as &char + 24) as &i128);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
            v13 = v53;
            v12 = struct24 {
                field_0: v16
                field_8: v54
                field_16: <UNKNOWN>
            };
            if uu_ls::should_display(&v12, v21) as i8 {
                v19 = std::fs::DirEntry::path(&v12);
                v29 = v14;
                v58 = *(&v12.field_0 as &i128);
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
                v59 = *(&v12.field_16 as &i128);
                v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
                v27 = v59;
                v25 = v58;
                v23 = struct8 {
                    field_0: 1
                };
                v32 = struct8 {
                    field_0: 0x8000000000000000
                };
                v0 = 0;
                uu_ls::PathData::new(&v37, &v19, &v23, &v32, v6, v3);
                v7 = alloc::vec::Vec<T,A>::push(&v37, v56);
            }
        }
    }
    v61 = v21;
    uu_ls::sort_entries(v8, v9, v61);
    if *((v61 + 248) as &i8) == 1 || (v25 = v25, *((v61 + 234) as &i8)) {
        v23 = uu_ls::return_total(v8, v9, v61, a4);
        v60 = v25;
        if v32 == 0x8000000000000000 {
            return v60;
        }
        v32 = v23;
        v33 = v60;
        v34 = v26;
        v15 = v60;
        v16 = v34;
        v12 = Argument {
            value: &v15
            formatter: <&T as core::fmt::Display>::fmt
        };
        v23 = Arguments {
            pieces: [""]
            args: [&v12]
            fmt: 0
        };
        v63 = std::io::Write::write_fmt(a4, &v23);
        if v63 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v63);
            return v60;
        }
        if *((v61 + 238) as &i8) {
            uu_ls::dired::add_total(v38, v34);
        }
        v25 = v25;
    }
    v60 = uu_ls::display_items(v8, v9, v61, a4, v38, v39);
    if v60 {
        return v60;
    }
    if !*((v61 + 230) as &i8) {
        return 0;
    }
    v12 = *((&v7 as &char + 8) as &i192);
    v64 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
    if v64 {
        v6 = *((v61 + 238) as &i8);
        do {
            v66 = v64 + 24;
            v10 = std::fs::read_dir(v64 + 24, v65);
            if v11 != 2 {
                v4 = v10;
                v23 = uucore::features::fs::FileInformation::from_path(v66, *((v64 + 296) as &i8));
                match v23 {
                    Some(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
                        return v60;
                    },
                    None => {
                        memcpy(&v36, &v23, 136);
                        v35 = struct8 {
                            field_0: v70
                        };
                    },
                }
                if !hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v35) as i8 {
                    v23 = struct40 {
                        field_0: "\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                        field_32: 0
                    };
                    v72 = std::io::Write::write_fmt(a4, &v23);
                    if v72 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
                        return v60;
                    }
                    if v6 {
                        *((v38 + 48) as &i64) = 2;
                        v60 = uu_ls::dired::indent(a4);
                        if v60 {
                            return v60;
                        }
                        v23 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v64 + 32) as &i64), *((v64 + 40) as &i64));
                        v74 = v26;
                        uu_ls::dired::calculate_subdired(v38, v74);
                        v75 = v38;
                        *((v75 + 48) as &i64) = *((v75 + 48) as &i64) + v74 + 3;
                    }
                    uu_ls::show_dir_name(v64, a4, v61);
                    *(&v23 as &&str) = "\n";
                    v25 = 1;
                    v26 = 8;
                    v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v27 = 0;
                    v76 = std::io::Write::write_fmt(a4, &v23);
                    if v76 {
                        v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
                        return v60;
                    }
                    v77 = *((&v4 as &char + 8) as &i8);
                    v1 = v39;
                    v0 = v38;
                    v60 = uu_ls::enter_directory(v64, v4, v77, v61, a4, a5);
                    if v60 {
                        return v60;
                    }
                    v23 = uucore::features::fs::FileInformation::from_path(v66, *((v64 + 296) as &i8));
                    match v23 {
                        Some(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
                            return v60;
                        },
                        None => {
                            memcpy(&v32, &v26, 136);
                            v32 = struct8 {
                                field_0: v78
                            };
                            hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v32);
                            v34 = v34;
                        },
                    }
                } else {
                    v71 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v55, v56);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                        return v60;
                    }
                    v32 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v66);
                    v27 = v34;
                    v73 = v32;
                    v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
                    v25 = v73;
                    v23 = 5;
                    uucore::mods::error::set_exit_code();
                    v19 = uucore::util_name();
                    v20 = v56;
                    eprintln!("{:?}: {:?}", &v19, &v23);
                    v34 = v34;
                }
            } else {
                v67 = v10;
                v4 = v67;
                v68 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4, v55, v56);
                if v68 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                    return v60;
                }
                v15 = v67;
                v32 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v66);
                v28 = v34;
                v69 = v32;
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v26 = v69;
                v25 = v67;
                v24 = *((v64 + 297) as &i8);
                v23 = 2;
                uucore::mods::error::set_exit_code();
                v19 = uucore::util_name();
                v20 = v56;
                eprintln!("{:?}: {:?}", &v19, &v23);
                v34 = v34;
            }
        } while ((v34 = v34, v64 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12), v64));
    }
}
