fn uu_ls::enter_directory(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> u64 {
    let v0: u8;  // [bp-0x551]
    let v1: Result<struct40, struct16>;  // [bp-0x544], Other Possible Types: u32
    let v2: u64;  // [bp-0x540]
    let v3: u64;  // [bp-0x538]
    let v4: u8;  // [bp-0x538]
    let v5: u8;  // [bp-0x530]
    let v6: u8;  // [bp-0x530]
    let v7: u64;  // [bp-0x528]
    let v8: u8;  // [bp-0x520]
    let v9: struct24;  // [bp-0x518], Other Possible Types: struct40, struct_0 *, u128
    let v10: u64;  // [bp-0x510]
    let v11: u64;  // [bp-0x508]
    let v12: u128;  // [bp-0x508]
    let v13: u64;  // [bp-0x4f8]
    let v14: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x4e8], Other Possible Types: struct17, u128
    let v15: void*;  // [bp-0x4e8]
    let v16: u64;  // [bp-0x4e0]
    let v17: u64;  // [bp-0x4d8]
    let v18: u64;  // [bp-0x4c0]
    let v19: struct24;  // [bp-0x4b0], Other Possible Types: u64
    let v21: u64;  // [bp-0x4a8]
    let v22: core::fmt::Arguments;  // [bp-0x48c]
    let v23: struct16;  // [bp-0x488], Other Possible Types: u64
    let v24: u64;  // [bp-0x480]
    let v25: u64;  // [bp-0x478]
    let v26: struct28;  // [bp-0x468]
    let v27: Result<struct24, struct24>;  // [bp-0x460], Other Possible Types: struct16, struct40, struct24, u64
    let v28: u64;  // [bp-0x460]
    let v29: struct40;  // [bp-0x460]
    let v30: struct24;  // [bp-0x460]
    let v31: u64;  // [bp-0x460]
    let v32: u64;  // [bp-0x458]
    let v33: u64;  // [bp-0x458]
    let v34: iNone;  // [bp-0x458]
    let v36: u64;  // [bp-0x450]
    let v37: u64;  // [bp-0x450]
    let v38: u64;  // [bp-0x450]
    let v39: u64;  // [bp-0x448]
    let v40: u64;  // [bp-0x448]
    let v41: u128;  // [bp-0x448]
    let v42: u64;  // [bp-0x438]
    let v43: u64;  // [bp-0x330]
    let v44: u8;  // [bp-0x328]
    let v45: struct24;  // [bp-0x320], Other Possible Types: u64
    let v46: u128;  // [bp-0x318]
    let v47: u64;  // [bp-0x318]
    let v48: u128;  // [bp-0x318]
    let v49: u64;  // [bp-0x310]
    let v50: u64;  // [bp-0x308]
    let v51: u64;  // [bp-0x300]
    let v52: u8;  // [bp-0x2f8]
    let v53: u64;  // [bp-0x1f0]
    let v54: iNone;  // [bp-0x1e8]
    let v55: iNone;  // [bp-0x160]
    let v56: Result<struct40, struct16>;  // r13d
    let v57: core::fmt::Arguments;  // r14d
    let v59: u64;  // r12
    let v60: Result<struct40, struct16>;  // ebp
    let v61: core::fmt::Arguments;  // r15d
    let v62: struct28;  // r13
    let v63: iNone;  // xmm0
    let v64: core::result::Result<(), std::io::error::Error>;  // rax
    let v65: u64;  // rdx
    let v66: u64;  // r15
    let v67: u64;  // r12
    let v68: struct17;  // rbx
    let v69: u64;  // rax
    let v70: u64;  // rax
    let v71: i64;  // rax
    let v72: i64;  // rbx
    let v73: u64;  // r14
    let v74: i64;  // r12
    let v75: core::result::Result<(), std::io::error::Error>;  // rax
    let v76: u64;  // rbx
    let v77: core::result::Result<(), std::io::error::Error>;  // rax
    let v78: u64;  // rax
    let v79: u64;  // rax
    let v80: u64;  // rax
    let v81: u64;  // rbx
    let v82: u64;  // rax

    v43 = a1;
    v44 = a2;
    v0 = *((a3 + 248) as &i8);
    if !*((a3 + 248) as &i8) {
        v1 = a2;
        v59 = alloc::alloc::Global::alloc_impl(8, 608, 0);
        v27 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
        v11 = v37;
        v9 = *(&v27.field_0 as &i128);
        v27 = 0;
        v45 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(".");
        v17 = v49;
        v14 = *(&v45.field_0 as &i128);
        v60 = v56;
        v61 = v57;
        uu_ls::PathData::new(&v45, &v9, &v27, &v14, v60, v61, 0);
        v19 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
        v15 = 0;
        v30 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("..");
        v11 = v37;
        v9 = *(&v30.field_0 as &i128);
        uu_ls::PathData::new(&v30, &v19, &v15, &v9, v60, v61, 0);
        memcpy(v59, &v45, 304);
        memcpy(v59 + 304, &v30, 304);
        v23 = 2;
        v24 = v59;
        v25 = 2;
    }
    v7 = a1;
    v8 = a2;
    v6 = 9223372036854775809;
    v1 = v56;
    v22 = v57;
    v31 = v27;
    loop {
        v14 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v7);
        if let None = v14 {
            break;
        }
        v62 = v17;
        if v16 {
            v9 = struct40 {
                field_0: v16
                field_8: v62
                field_16: *((&v14 as &char + 24) as &i128)
                field_32: v18
            };
            if uu_ls::should_display(&v9, a3) {
                v19 = std::fs::DirEntry::path(&v9);
                v42 = v13;
                v63 = *(&v9.field_0 as &i128);
                v41 = v12;
                v34 = v63;
                v27 = 1;
                v45 = 0x8000000000000000;
                uu_ls::PathData::new(&v55, &v19, &v27, &v45, v1, v22, 0);
                v23 = alloc::vec::Vec<T,A>::push(&v55, "src/uu/ls/src/ls.rs");
                v31 = v27;
            }
        } else {
            v26 = v62;
            v64 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
            match v64 {
                Ok(_) => {
                    v47 = v62;
                    v45 = 9223372036854775809;
                    uucore::mods::error::set_exit_code(1);
                    v2 = uucore::util_name();
                    v3 = v65;
                    eprintln!("{}: {}", &v2, &v45);
                    v31 = v28;
                    v37 = v36;
                    v33 = v32;
                    v39 = v40;
                },
                Err(_) => {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v64);
                },
            }
        }
    }
    v66 = v24;
    v67 = v25;
    uu_ls::sort_entries(v66, v67, a3);
    if *((a3 + 0x100) as &i8) != 1 {
        v38 = v37;
        if *((a3 + 242) as &i8) != 1 {
            goto LABEL_59b531;
        }
    }
    uu_ls::return_total(&v31, v66, v67, a3, a4);
    v68 = v33;
    if v31 == 0x8000000000000000 {
        return v82;
    }
    v45 = v31;
    v47 = v68;
    v49 = v37;
    v14 = v68;
    v16 = v49;
    v9 = &v14;
    v10 = <&T as core::fmt::Display>::fmt;
    v27 = struct40 {
        field_0: "\x01"
        field_16: &v9
        field_24: 1
    };
    v69 = std::io::Write::write_fmt(a4, &v27);
    if v69 {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v69);
    } else {
        v38 = v36;
        if *((a3 + 246) as &i8) {
            *((a6 + 48) as &u64) = v70 + v49 + 2;
            v38 = v36;
        }
    }
LABEL_59b531:
    uu_ls::display_items(v66, v67, a3, a4, a6);
    if v68 || *((a3 + 238) as &i8) != 1 {
        return v82;
    }
    v9 = struct24 {
        field_0: v66
        field_8: v67 * 304 + v66
        field_16: ((!v0) as u8 as u32 * 2) as u64
    };
    v71 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v9);
    if v71 {
        v72 = v71;
        v6 = *((a3 + 246) as &i8);
        do {
            v73 = v72 + 24;
            std::fs::read_dir(&v7, v73);
            v74 = v72;
            if v8 == 2 {
                v2 = v7;
                v75 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                match v75 {
                    Ok(_) => {
                        v27 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v74 + 32) as &i64), *((v74 + 40) as &i64) as i32);
                        v50 = v38;
                        v48 = *(&v27.field_0 as &i128) as u128;
                        v51 = v2;
                        v52 = *((v74 + 297) as &i8);
                        v45 = 9223372036854775810;
                        uucore::mods::error::set_exit_code((v52 + 1) as u64);
                        v19 = uucore::util_name();
                        v21 = v65;
                        eprintln!("{}: {}", &v19, &v45);
                        v27 = v28;
                        v37 = v36;
                        v33 = v32;
                        v39 = v40;
                        continue;
                    },
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v75);
                    },
                }
            }
            v2 = v7;
            v3 = v8;
            v27 = uucore::features::fs::FileInformation::from_path(v73, *((v72 + 296) as &i8));
            v76 = v32;
            if v27.field_0 as i32 == 1 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v76);
                goto LABEL_59bb01;
            }
            memcpy(&v54, &v38, 136);
            v53 = v76;
            if hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v53) {
                v77 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                match v77 {
                    Ok(_) => {
                        v27 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v74 + 32) as &i64), *((v74 + 40) as &i64) as i32);
                        v50 = v38;
                        v46 = *(&v27.field_0 as &i128) as u128;
                        v45 = 9223372036854775813;
                        uucore::mods::error::set_exit_code(2);
                        v19 = uucore::util_name();
                        v21 = v65;
                        eprintln!("{}: {}", &v19, &v45);
                        v27 = v28;
                        v37 = v36;
                        v33 = v32;
                        v39 = v40;
                        continue;
                    },
                    Err(_) => {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v77);
                    },
                }
                goto LABEL_59bb01;
            }
            v27 = struct40 {
                field_0: "\n"
                field_8: 1
                field_16: 8
                field_24: 0
            };
            v78 = std::io::Write::write_fmt(a4, &v27);
            if v78 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v78);
                goto LABEL_59bb01;
            }
            if (v5 & 1) {
                *((a6 + 48) as &i64) = 2;
                uu_ls::dired::indent(a4);
                if v82 {
                    break;
                }
                v27 = alloc::string::String::from_utf8_lossy(*((v74 + 32) as &i64), *((v74 + 40) as &i64));
                uu_ls::dired::calculate_subdired(a6, 8);
                *((a6 + 48) as &i64) = *((a6 + 48) as &i64) + 11;
            }
            v79 = uu_ls::show_dir_name(v74, a4, a3);
            if !v79 {
                v29 = struct40 {
                    field_0: "\n"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v80 = std::io::Write::write_fmt(a4, &v29);
                if !v80 {
                    uu_ls::enter_directory(v74, v2, v4, a3, a4, a5, a6);
                    if v68 {
                        break;
                    }
                    v27 = uucore::features::fs::FileInformation::from_path(v73, *((v74 + 296) as &i8));
                    v81 = v32;
                    if v27.field_0 as i32 != 1 {
                        memcpy(&v47, &v29 as u64, 136);
                        v45 = v81;
                        hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v45);
                        v27 = v28;
                        v37 = v36;
                        v33 = v32;
                        v39 = v40;
                    } else {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v81);
                        break;
                    }
                } else {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v80);
LABEL_59bb01:
                    break;
                }
            } else {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v79);
                goto LABEL_59bb01;
            }
            v38 = v37;
            <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v9);
        } while (v72);
    }
    return v82;
}
