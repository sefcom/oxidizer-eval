fn uu_ls::enter_directory(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> long long {
    let v0: u8;  // [bp-0x549]
    let v1: u32;  // [bp-0x53c]
    let v2: u64;  // [sp-0x538]
    let v3: u8;  // [bp-0x530]
    let v4: u8;  // [bp-0x530]
    let v5: u8;  // [bp-0x528]
    let v6: u32;  // [bp-0x528]
    let v7: void*;  // [bp-0x520], Other Possible Types: struct24
    let v8: u64;  // [bp-0x518]
    let v9: void*;  // [bp-0x510]
    let v10: u64;  // [bp-0x508]
    let v11: u8;  // [bp-0x500]
    let v12: u64;  // [bp-0x4f8], Other Possible Types: int
    let v13: u128;  // [bp-0x4f8]
    let v14: u64;  // [bp-0x4f0]
    let v15: u64;  // [bp-0x4e8]
    let v16: u128;  // [bp-0x4e8]
    let v17: u64;  // [bp-0x4d8]
    let v18: u64;  // [bp-0x4c8], Other Possible Types: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>, void*
    let v19: u64;  // [bp-0x4c0], Other Possible Types: alloc::string::String
    let v20: u64;  // [bp-0x4b8]
    let v21: u64;  // [bp-0x4a0]
    let v22: std::path::PathBuf;  // [bp-0x490], Other Possible Types: u64
    let v24: u64;  // [bp-0x488]
    let v25: u64;  // [bp-0x468]
    let v26: u384;  // [bp-0x460], Other Possible Types: void*, alloc::borrow::Cow<str>
    let v27: u384;  // [bp-0x460]
    let v28: u384;  // [bp-0x460], Other Possible Types: alloc::string::String
    let v29: u8;  // [bp-0x460]
    let v30: u8;  // [bp-0x45f]
    let v31: u64;  // [bp-0x458]
    let v32: u64;  // [bp-0x458]
    let v33: u128;  // [bp-0x458]
    let v34: u64;  // [bp-0x458]
    let v35: u64;  // [bp-0x450]
    let v36: u64;  // [bp-0x450]
    let v37: u128;  // [bp-0x450]
    let v38: alloc::string::String;  // [bp-0x448]
    let v39: u128;  // [bp-0x448]
    let v40: alloc::string::String;  // [bp-0x448]
    let v41: alloc::string::String;  // [bp-0x440]
    let v42: u64;  // [bp-0x438]
    let v43: u64;  // [bp-0x330]
    let v44: u8;  // [bp-0x328]
    let v45: u64;  // [bp-0x320], Other Possible Types: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>
    let v46: u64;  // [bp-0x320], Other Possible Types: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>, alloc::string::String
    let v47: u64;  // [bp-0x318]
    let v48: u64;  // [bp-0x318]
    let v49: alloc::string::String;  // [bp-0x310]
    let v50: alloc::string::String;  // [bp-0x310], Other Possible Types: u64
    let v51: u64;  // [bp-0x1f0]
    let v52: u1088;  // [bp-0x1e8]
    let v53: struct16;  // [bp-0x160], Other Possible Types: u2880
    let v54: u32;  // r12d
    let v58: u64;  // r14
    let v59: u32;  // ebp
    let v60: u32;  // r15d
    let v62: u8;  // al
    let v63: u64;  // r12
    let v64: core::result::Result<(), std::io::error::Error>;  // rax
    let v65: u128;  // xmm0
    let v66: u64;  // rdx
    let v67: core::result::Result<&str, core::str::error::Utf8Error>;  // r14
    let v68: u64;  // rax
    let v69: alloc::string::String;  // rax
    let v70: alloc::string::String;  // rbx
    let v71: struct24;  // rdx
    let v72: struct24;  // rbp
    let v73: u64;  // r14
    let v74: core::result::Result<(), std::io::error::Error>;  // rax
    let v75: u64;  // r14
    let v76: core::result::Result<(), std::io::error::Error>;  // rax
    let v77: u64;  // rax
    let v78: u64;  // rax
    let v79: u64;  // rbx
    let v80: u64;  // rax

    v43 = a1;
    v44 = a2;
    v0 = *((a3 + 240) as &i8);
    if *((a3 + 240) as &i8) {
        v7 = 0;
        v8 = 8;
        v9 = 0;
    } else {
        v6 = a1;
        v1 = a2;
        v58 = alloc::alloc::Global::alloc_impl(0x260, a1, a2) as u64;
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24, a2);
        v15 = v37;
        v12 = *(&v26 as u8 as &i128);
        v26 = 0;
        v46 = std::sys::os_str::bytes::Slice::to_owned(".");
        v20 = v50;
        v18 = *(&v46.vec.buf.ptr as &i128);
        v59 = *((a3 + 235) as &i8);
        v60 = v54;
        uu_ls::PathData::new(&v46, &v12, &v26 as u8, &v18, v59, v60, 0);
        v22 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v18 = 0;
        v28 = std::sys::os_str::bytes::Slice::to_owned("..");
        v15 = v37;
        v12 = *(&v28.vec.buf.ptr as &i128);
        uu_ls::PathData::new(&v28, &v22, &v18, &v12, v59, v60, 0);
        memcpy(v58, &v46, 304);
        memcpy(v58 + 304, &v28, 304);
        v7 = alloc::slice::hack::into_vec(v58, 2);
    }
    v10 = v6;
    v11 = v1;
    v6 = v62;
    v1 = v54;
    loop {
        v18 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10);
        match v18 {
            Some(_) => {
                v63 = v20;
                if v19 {
                    v17 = v21;
                    memcpy(&v15, &v18, 16);
                    v12 = v19;
                    v14 = v63;
                    if uu_ls::should_display(&v12, a3) as i8 {
                        v22 = std::fs::DirEntry::path(&v12);
                        v42 = v17;
                        v65 = *(&v12 as &i128);
                        v39 = v16;
                        v33 = v65;
                        v26 = 1 as u64;
                        v46 = 0x8000000000000000;
                        uu_ls::PathData::new(&v53, &v22, &v29, &v46, v5, v1, 0);
                        v53 = alloc::vec::Vec<T,A>::push(a2);
                        v46 = v46;
                    }
                    continue;
                }
                v25 = v63;
                v64 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                match v64 {
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v64);
                        return v67;
                    },
                    Ok(_) => {
                        v31 = v63;
                        v29 = 1;
                        uucore::mods::error::set_exit_code(1);
                        v2 = uucore::util_name();
                        v4 = v66;
                        eprintln!("{}: {}", &v2, &v29);
                        v46 = v45;
                        v50 = v49;
                    },
                }
            },
            None => {
                uu_ls::sort_entries(v8, v9, a3);
                if *((a3 + 248) as &i8) != 1 && (v36 = v37, v34 = v31, !*((a3 + 234) as &i8)) {
LABEL_5283c8:
                    uu_ls::display_items(v8, v9, a3, a4, a6, a7);
                    match v67 {
                        Err(_) => {
                            return v67;
                        },
                        Ok(_) => {
                            if !*((a3 + 230) as &i8) {
                                return 0;
                            }
                            v12 = struct24 {
                                field_0: v8
                                field_8: v9 * 304 + v8
                                field_16: ((!v0) as u8 as u32 * 2) as u64
                            };
                            v69 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
                            if v69 {
                                v70 = v69;
                                v6 = *((a3 + 238) as &i8);
                                do {
                                    v72 = v70 + 24;
                                    std::fs::read_dir(v70 + 24, v71);
                                    if v11 == 2 {
                                        v73 = v10;
                                        v2 = v73;
                                        v74 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                                        match v74 {
                                            Ok(_) => {
                                                v18 = v73;
                                                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v72, a2);
                                                v41 = v50;
                                                v37 = *(&v46.buf.buf.ptr as &i128) as u128;
                                                v31 = v73;
                                                v30 = *((v70 + 297) as &i8);
                                                v29 = 2;
                                                uucore::mods::error::set_exit_code((2 - (*((v70 + 297) as &i8) < 1) as u8 as u32) as u64);
                                                v22 = uucore::util_name();
                                                v24 = v66;
                                                eprintln!("{}: {}", &v22, &v29);
                                                v46 = v45;
                                                v50 = v49;
                                                v47 = v48;
                                                continue;
                                            },
                                            Err(_) => {
                                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
                                            },
                                        }
                                    }
                                    v2 = v10;
                                    v4 = v11;
                                    uucore::features::fs::FileInformation::from_path(v72, *((v70 + 296) as &i8) as u8 as u64, v10 as u32);
                                    v75 = v34;
                                    if *(&v29 as &i64) {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v75);
                                        goto LABEL_528afd;
                                    }
                                    memcpy(&v52, &v36, 136);
                                    v51 = v75;
                                    if hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v51, a2, a3 as u32) as u8 {
                                        v76 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                                        match v76 {
                                            Ok(_) => {
                                                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v72, a2);
                                                v38 = v50;
                                                v31 = *(&v46.buf.buf.ptr as &i128) as u128;
                                                v29 = 5;
                                                uucore::mods::error::set_exit_code(2);
                                                v22 = uucore::util_name();
                                                v24 = v66;
                                                eprintln!("{}: {}", &v22, &v29);
                                                v31 = v34;
                                                v46 = v45;
                                                v50 = v49;
                                                v47 = v48;
                                                continue;
                                            },
                                            Err(_) => {
                                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
                                            },
                                        }
                                        goto LABEL_528afd;
                                    }
                                    v26 = core::fmt::Arguments {
                                        pieces: ["\n"]
                                        args: []
                                        fmt: 0
                                    };
                                    v77 = std::io::Write::write_fmt(a4, &v26);
                                    if !v77 {
                                        if v5 {
                                            *((a6 + 48) as &i64) = 2;
                                            uu_ls::dired::indent(a4);
                                            if (v67)
                                                break;
                                            v26 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v70 + 32) as &i64), *((v70 + 40) as &i64));
                                            uu_ls::dired::calculate_subdired(a6, 8);
                                            *((a6 + 48) as &i64) = *((a6 + 48) as &i64) + 11;
                                        }
                                        uu_ls::show_dir_name(v70, a4, a3);
                                        v27 = core::fmt::Arguments {
                                            pieces: ["\n"]
                                            args: []
                                            fmt: 0
                                        };
                                        v78 = std::io::Write::write_fmt(a4, &v27);
                                        if !v78 {
                                            uu_ls::enter_directory(v70, v2, v3 as u64, a3, a4, a5, a6, a7);
                                            if (v67)
                                                break;
                                            uucore::features::fs::FileInformation::from_path(v72, *((v70 + 296) as &i8) as u8 as u64, a3 as u32);
                                            v79 = v32;
                                            if !v27 as i64 {
                                                memcpy(&v47, &v27 as u64, 136);
                                                v46 = v79;
                                                hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v46);
                                                v36 = v35;
                                                v31 = v32;
                                            } else {
                                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                                                break;
                                            }
                                        } else {
                                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
LABEL_528afd:
                                            v67 = v80;
                                            break;
                                        }
                                    } else {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                                        goto LABEL_528afd;
                                    }
                                    v34 = v31;
                                    <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
                                } while (v70);
                            }
                            return 0;
                        },
                    }
                } else {
                    uu_ls::return_total(&v29, v8, v9, a3, a4);
                    v67 = v31;
                    if *(&v29 as &i64) == 0x8000000000000000 {
                        return v67;
                    }
                    v46 = v28.vec.buf.ptr.pointer.pointer;
                    v47 = v67;
                    v50 = v37;
                    v18 = v67;
                    v19 = v50;
                    v12 = core::fmt::rt::Argument {
                        ty: &v18
                    };
                    v28 = core::fmt::Arguments {
                        pieces: [&g_423c10]
                        args: [v13]
                        fmt: 0
                    };
                    v68 = std::io::Write::write_fmt(a4, &v28);
                    if v68 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                    } else {
                        if *((a3 + 238) as &i8) {
                            uu_ls::dired::add_total(v50, a2);
                        }
                        v36 = v35;
                        v34 = v32;
                        v38 = v40;
                        goto LABEL_5283c8;
                    }
                }
                goto LABEL_0x52850b;
            },
        }
    }
}
