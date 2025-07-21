fn uu_ls::enter_directory(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64) -> long long {
    let v0: u8;  // [bp-0x549]
    let v1: u32;  // [bp-0x53c]
    let v2: struct16;  // [bp-0x538], Other Possible Types: u64
    let v3: u8;  // [bp-0x530]
    let v4: u64;  // [bp-0x530]
    let v5: u32;  // [bp-0x528]
    let v6: u32;  // [bp-0x528]
    let v7: void*;  // [bp-0x520], Other Possible Types: struct24
    let v8: u64;  // [bp-0x518]
    let v9: void*;  // [bp-0x510]
    let v10: core::fmt::Arguments;  // [bp-0x508]
    let v11: struct16;  // [bp-0x508]
    let v12: u8;  // [bp-0x500]
    let v13: core::fmt::rt::Argument;  // [bp-0x4f8], Other Possible Types: struct24, u128
    let v14: u128;  // [bp-0x4f8]
    let v15: u64;  // [bp-0x4f0]
    let v16: u128;  // [bp-0x4e8]
    let v17: u64;  // [bp-0x4d8]
    let v18: void*;  // [bp-0x4c8], Other Possible Types: core::fmt::Arguments, core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>, struct16, u128
    let v19: u64;  // [bp-0x4c0]
    let v20: u64;  // [bp-0x4b8]
    let v21: u64;  // [bp-0x4a0]
    let v22: std::path::PathBuf;  // [bp-0x490], Other Possible Types: u64
    let v24: u64;  // [bp-0x488]
    let v25: u64;  // [bp-0x468]
    let v26: void*;  // [bp-0x460], Other Possible Types: alloc::borrow::Cow<str>, core::fmt::Arguments, u64
    let v27: core::fmt::Arguments;  // [bp-0x460]
    let v28: core::fmt::Arguments;  // [bp-0x460], Other Possible Types: std::sys::os_str::bytes::Buf
    let v29: u8;  // [bp-0x460]
    let v30: u8;  // [bp-0x45f]
    let v31: struct16;  // [bp-0x458], Other Possible Types: struct24, u64
    let v32: struct24;  // [bp-0x458], Other Possible Types: u64
    let v33: u128;  // [bp-0x458]
    let v34: struct24;  // [bp-0x458]
    let v35: core::fmt::Arguments;  // [bp-0x450]
    let v36: core::fmt::Arguments;  // [bp-0x450]
    let v37: u128;  // [bp-0x450]
    let v38: u64;  // [bp-0x448]
    let v39: u128;  // [bp-0x448]
    let v40: u64;  // [bp-0x448]
    let v41: u64;  // [bp-0x440]
    let v42: u64;  // [bp-0x438]
    let v43: u64;  // [bp-0x330]
    let v44: u8;  // [bp-0x328]
    let v45: u64;  // [bp-0x320]
    let v46: std::sys::os_str::bytes::Buf;  // [bp-0x320], Other Possible Types: u64
    let v47: u64;  // [bp-0x320]
    let v48: core::fmt::Arguments;  // [bp-0x318]
    let v49: core::fmt::Arguments;  // [bp-0x318]
    let v50: core::fmt::Arguments;  // [bp-0x318]
    let v51: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x310], Other Possible Types: u64
    let v52: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x310], Other Possible Types: u64
    let v53: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x310], Other Possible Types: u64
    let v54: u64;  // [bp-0x1f0]
    let v55: u1088;  // [bp-0x1e8]
    let v56: struct16;  // [bp-0x160], Other Possible Types: u2880
    let v57: u32;  // r12d
    let v61: i64;  // r14
    let v62: u32;  // ebp
    let v63: u32;  // r15d
    let v65: u8;  // al
    let v66: u64;  // r12
    let v67: core::result::Result<(), std::io::error::Error>;  // rax
    let v68: u128;  // xmm0
    let v69: u64;  // rdx
    let v70: core::fmt::Arguments;  // r14
    let v71: u64;  // rax
    let v72: struct24;  // rax
    let v73: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rbx
    let v74: struct24;  // rdx
    let v75: struct24;  // rbp
    let v76: struct16;  // r14
    let v77: core::result::Result<(), std::io::error::Error>;  // rax
    let v78: struct24;  // r14
    let v79: core::result::Result<(), std::io::error::Error>;  // rax
    let v80: u64;  // rax
    let v81: u64;  // rax
    let v82: u64;  // rbx
    let v83: core::fmt::Arguments;  // rax

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
        v61 = alloc::alloc::Global::alloc_impl(0x260, a1, a2) as u64;
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24, a2);
        v16 = v37;
        v13 = *(&v26 as u8 as &i128);
        v26 = 0;
        v46 = std::sys::os_str::bytes::Slice::to_owned(".");
        v20 = v52;
        v18 = *(&v46.inner.buf.cap as &i128);
        v62 = *((a3 + 235) as &i8);
        v63 = v57;
        uu_ls::PathData::new(&v46, &v13, &v26 as u8, &v18, v62, v63, 0);
        v22 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v18 = 0;
        v28 = std::sys::os_str::bytes::Slice::to_owned("..");
        v16 = v37;
        v13 = *(&v28.inner.buf.cap as &i128);
        uu_ls::PathData::new(&v28, &v22, &v18, &v13, v62, v63, 0);
        memcpy(v61, &v46, 304);
        memcpy(v61 + 304, &v28, 304);
        v7 = alloc::slice::hack::into_vec(v61, 2);
    }
    v10 = v6;
    v12 = v1;
    v6 = v65;
    v1 = v57;
    v47 = v46;
    v53 = v52;
    loop {
        v18 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10);
        match v18 {
            Some(_) => {
                v66 = v20;
                if v19 {
                    v17 = v21;
                    v16 = *((&v18 as &char + 24) as &i128);
                    v13 = v19;
                    v15 = v66;
                    if uu_ls::should_display(&v13, a3) as i8 {
                        v22 = std::fs::DirEntry::path(&v13);
                        v42 = v17;
                        v68 = *(&v13 as &i128);
                        v39 = v16;
                        v33 = v68;
                        v26 = 1 as u64;
                        v46 = 0x8000000000000000;
                        uu_ls::PathData::new(&v56, &v22, &v29, &v46, v5, v1, 0);
                        v56 = alloc::vec::Vec<T,A>::push(a2);
                        v47 = v46;
                    }
                    continue;
                }
                v25 = v66;
                v67 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                match v67 {
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                        return v70;
                    },
                    Ok(_) => {
                        v31 = v66;
                        v29 = 1;
                        uucore::mods::error::set_exit_code(1);
                        v2 = uucore::util_name();
                        v4 = v69;
                        eprintln!("{}: {}", &v2, &v29);
                        v47 = v45;
                        v53 = v51;
                    },
                }
            },
            None => {
                uu_ls::sort_entries(v8, v9, a3);
                if *((a3 + 248) as &i8) != 1 && (v35 = v37, v34 = v31, !*((a3 + 234) as &i8)) {
LABEL_5283c8:
                    uu_ls::display_items(v8, v9, a3, a4, a6, a7);
                    if v70 {
                        return v70;
                    }
                    if !*((a3 + 230) as &i8) {
                        return 0;
                    }
                    v13 = struct24 {
                        field_0: v8
                        field_8: v9 * 304 + v8
                        field_16: ((!v0) as u8 as u32 * 2) as u64
                    };
                    v13 = struct24 {
                        field_0: v8
                        field_8: v9 * 304 + v8
                        field_16: ((!v0) as u8 as u32 * 2) as u64
                    };
                    v72 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v13);
                    if v72 {
                        v73 = v72;
                        v6 = *((a3 + 238) as &i8);
                        do {
                            v75 = v73 + 24;
                            std::fs::read_dir(v73 + 24, v74);
                            if v12 == 2 {
                                v76 = v10;
                                v2 = v76;
                                v77 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                                match v77 {
                                    Ok(_) => {
                                        v18 = v76;
                                        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v75, a2);
                                        v41 = v53;
                                        v37 = *(&v47 as &i128) as u128;
                                        v31 = v76;
                                        v30 = *((v73 + 297) as &i8);
                                        v29 = 2;
                                        uucore::mods::error::set_exit_code((2 - (*((v73 + 297) as &i8) < 1) as u8 as u32) as u64);
                                        v22 = uucore::util_name();
                                        v24 = v69;
                                        eprintln!("{}: {}", &v22, &v29);
                                        v46 = v45;
                                        v52 = v51;
                                        v49 = v48;
                                        continue;
                                    },
                                    Err(_) => {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                                    },
                                }
                            }
                            v2 = v11;
                            uucore::features::fs::FileInformation::from_path(v75, *((v73 + 296) as &i8) as u8 as u64, v10 as u32);
                            v78 = v34;
                            if *(&v29 as &i64) {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
                                goto LABEL_528afd;
                            }
                            memcpy(&v55, &v35, 136);
                            v54 = v78;
                            if hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v54, a2, a3 as u32) as u8 {
                                v79 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                                match v79 {
                                    Ok(_) => {
                                        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v75, a2);
                                        v38 = v53;
                                        v31 = *(&v47 as &i128) as u128;
                                        v29 = 5;
                                        uucore::mods::error::set_exit_code(2);
                                        v22 = uucore::util_name();
                                        v24 = v69;
                                        eprintln!("{}: {}", &v22, &v29);
                                        v31 = v34;
                                        v46 = v45;
                                        v52 = v51;
                                        v49 = v48;
                                        continue;
                                    },
                                    Err(_) => {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                                    },
                                }
                                goto LABEL_528afd;
                            }
                            v26 = core::fmt::Arguments {
                                pieces: ["\n"]
                                args: []
                                fmt: 0
                            };
                            v80 = std::io::Write::write_fmt(a4, &v26);
                            if !v80 {
                                if v5 {
                                    *((a6 + 48) as &i64) = 2;
                                    uu_ls::dired::indent(a4);
                                    if (v70)
                                        break;
                                    v26 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v73 + 32) as &i64), *((v73 + 40) as &i64));
                                    uu_ls::dired::calculate_subdired(a6, 8);
                                    *((a6 + 48) as &i64) = *((a6 + 48) as &i64) + 11;
                                }
                                uu_ls::show_dir_name(v73, a4, a3);
                                v27 = core::fmt::Arguments {
                                    pieces: ["\n"]
                                    args: []
                                    fmt: 0
                                };
                                v81 = std::io::Write::write_fmt(a4, &v27);
                                if !v81 {
                                    uu_ls::enter_directory(v73, v2.field_0, v3 as u64, a3, a4, a5, a6, a7);
                                    if (v70)
                                        break;
                                    uucore::features::fs::FileInformation::from_path(v75, *((v73 + 296) as &i8) as u8 as u64, a3 as u32);
                                    v82 = v32;
                                    if !v27.pieces.ptr {
                                        memcpy(&v50, &v27 as u64, 136);
                                        v46 = v82;
                                        hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v46);
                                        v35 = v36;
                                        v31 = v32;
                                        v52 = v53;
                                    } else {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v82);
                                        break;
                                    }
                                } else {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
LABEL_528afd:
                                    v70 = v83;
                                    break;
                                }
                            } else {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
                                goto LABEL_528afd;
                            }
                            v50 = v49;
                            v53 = v52;
                            v47 = v46;
                            v34 = v31;
                            <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v13);
                        } while (v73);
                    }
                    return 0;
                } else {
                    uu_ls::return_total(&v29, v8, v9, a3, a4);
                    v70 = v31;
                    if *(&v29 as &i64) == 0x8000000000000000 {
                        return v70;
                    }
                    v47 = v28.inner.buf.cap.__0;
                    v50 = v70;
                    v53 = v37;
                    v18 = v70;
                    v19 = v53;
                    v13 = core::fmt::rt::Argument {
                        ty: &v18
                    };
                    v28 = core::fmt::Arguments {
                        pieces: [&g_423c10]
                        args: [v14]
                        fmt: 0
                    };
                    v71 = std::io::Write::write_fmt(a4, &v28);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                    } else {
                        if *((a3 + 238) as &i8) {
                            uu_ls::dired::add_total(v53, a2);
                        }
                        v35 = v36;
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
