fn uu_ls::enter_directory(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [bp-0x568], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x560]
    let v2: i8;  // [sp-0x549]
    let v3: i32;  // [sp-0x53c]
    let v4: i64;  // [sp-0x538], Other Possible Types: struct9
    let v5: i64;  // [bp-0x530]
    let v6: i8;  // [bp-0x528], Other Possible Types: unsigned long, unsigned int
    let v7: i8;  // [bp-0x520], Other Possible Types: int, unsigned long, struct16
    let v8: i64;  // [sp-0x518]
    let v9: i64;  // [sp-0x510]
    let v10: struct9;  // [sp-0x508], Other Possible Types: unsigned long
    let v11: i8;  // [sp-0x500]
    let v12: iNone;  // [bp-0x4f8], Other Possible Types: unsigned long
    let v13: i64;  // [sp-0x4f0]
    let v14: i64;  // [bp-0x4e8], Other Possible Types: int
    let v15: i64;  // [sp-0x4d8]
    let v16: i64;  // [bp-0x4c8], Other Possible Types: Option<struct40>, int
    let v17: i64;  // [sp-0x4c0]
    let v18: i64;  // [sp-0x4b8]
    let v19: struct24;  // [sp-0x490], Other Possible Types: unsigned long
    let v20: i64;  // [sp-0x488]
    let v21: i64;  // [sp-0x468]
    let v22: struct24;  // [sp-0x460], Other Possible Types: char, unsigned long, struct40, Option<struct8>
    let v23: i8;  // [sp-0x45f]
    let v24: iNone;  // [bp-0x458], Other Possible Types: unsigned long
    let v25: i64;  // [sp-0x450], Other Possible Types: int
    let v26: i64;  // [sp-0x450]
    let v27: i64;  // [sp-0x448], Other Possible Types: int
    let v28: i64;  // [sp-0x440]
    let v29: i64;  // [sp-0x438]
    let v30: i64;  // [sp-0x330]
    let v31: i8;  // [sp-0x328]
    let v32: struct24;  // [sp-0x320], Other Possible Types: unsigned long, struct8, int
    let v33: i64;  // [sp-0x318]
    let v34: i64;  // [sp-0x310]
    let v35: struct8;  // [bp-0x1f0]
    let v36: i8;  // [bp-0x1e8]
    let v37: i8;  // [bp-0x160]
    let v38: i64;  // [bp+0x8]
    let v39: i8;  // [bp+0x10]
    let v40: i32;  // eax
    let v41: i32;  // r12d
    let v43: i64;  // r14
    let v44: iNone;  // xmm0
    let v45: iNone;  // xmm0
    let v46: i32;  // eax
    let v47: i32;  // ebp
    let v48: i32;  // r15d
    let v49: iNone;  // xmm0
    let v50: iNone;  // ymm0
    let v51: iNone;  // ymm0
    let v52: iNone;  // ymm1
    let v53: i64;  // r12
    let v54: iNone;  // xmm0
    let v55: iNone;  // xmm0
    let v56: iNone;  // xmm1
    let v57: i64;  // rdx
    let v59: i64;  // r14
    let v60: i64;  // r14
    let v62: i64;  // rax
    let v63: i64;  // rbx
    let v64: i64;  // rbp
    let v66: i64;  // r14
    let v68: iNone;  // xmm0
    let v69: i64;  // rax
    let v70: i64;  // rax
    let v71: iNone;  // xmm0
    let v72: i64;  // r14
    let v73: i64;  // rcx
    let v74: i64;  // rax
    let v75: i64;  // rdx

    v30 = a1;
    v31 = a2 as u8;
    v2 = *((a3 + 240) as &i8);
    if v2 {
        v7 = 0;
        v8 = 8;
        v9 = 0;
        v40 = *((a3 + 235) as &i8);
        v41 = *((a3 + 242) as &i8);
    } else {
        v6 = a1;
        v3 = a2 as u32;
        v43 = alloc::alloc::Global::alloc_impl(608);
        v22 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a0 + 24);
        v14 = v25;
        v44 = *(&v22.field_0 as &i128);
        v12 = v44;
        *(&v22 as &i64) = 0;
        v32 = std::sys::os_str::bytes::Slice::to_owned(".");
        v18 = v34;
        v45 = *(&v32.field_0 as &i128);
        v16 = v45;
        v46 = *((a3 + 235) as &i8);
        v41 = *((a3 + 242) as &i8);
        *(&v0 as &i32) = 0;
        v47 = v46;
        v48 = v41;
        uu_ls::PathData::new(&v32, &v12, &v22, &v16, v47 as u64, v48 as u64, v0 as i8);
        v19 = std::path::Path::join(*((a0 + 32) as &i64), *((a0 + 40) as &i64), "..");
        v16 = 0;
        v22 = std::sys::os_str::bytes::Slice::to_owned("..");
        v14 = v25;
        v49 = *(&v22.field_0 as &i128);
        v51 = ((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u256;
        v12 = v49;
        *(&v0 as &i32) = 0;
        uu_ls::PathData::new(&v22, &v19, &v16, &v12, v47 as u64, v48 as u64, v0 as i8);
        memcpy(v43, &v32, 304);
        memcpy(v43 + 304, &v22, 304);
        v40 = alloc::slice::hack::into_vec(&v7, v43, 2) & -0x100 | v47 as u64;
    }
    v10 = v6;
    v11 = v3 as u64;
    v6 = v40;
    v3 = v41;
    loop {
        v16 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10);
        if !v16 {
            break;
        }
        v53 = v18;
        if !v12 {
            v21 = v53;
            if <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4) {
                return v60;
            }
            v24 = v53;
            v22 = 1;
            uucore::mods::error::set_exit_code(1);
            v4 = uucore::util_name();
            v5 = v57;
            eprintln!("{}: {}", &v4, &v22);
        } else {
            v15 = *((&v16 as &char + 40) as &i64);
            v54 = *((&v16 as &char + 24) as &i128);
            v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256;
            v14 = v54;
            v12 = v17;
            v13 = v53;
            if uu_ls::should_display(&v12, a3) as i8 {
                v19 = std::fs::DirEntry::path(&v12);
                v29 = v15;
                v55 = *(&v12 as &i128);
                v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256;
                v56 = v14 as i128;
                v52 = v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256;
                v27 = v56;
                v24 = v55;
                *(&v22 as &i64) = 1;
                v32 = 0x8000000000000000;
                *(&v0 as &i32) = 0;
                uu_ls::PathData::new(&v37, &v19, &v22, &v32, v6 as u64, v3 as u64, v0 as i8);
                v7 = alloc::vec::Vec<T,A>::push(&v37);
            }
        }
    }
    uu_ls::sort_entries(v8, v9, a3);
    if *((a3 + 248) as &i8) == 1 || *((a3 + 234) as &i8) {
        v22 = uu_ls::return_total(v8, v9, a3, a4);
        v59 = v24;
        if v32 == 0x8000000000000000 {
            return v60;
        }
        v32 = v22.field_0;
        v33 = v59;
        v34 = v26;
        v16 = v59;
        v17 = v34;
        v12 = &v16;
        v13 = <&T as core::fmt::Display>::fmt;
        *(&v22 as &&i64) = &g_423c10;
        v24 = 1;
        v28 = 0;
        v26 = &v12;
        v27 = 1;
        if std::io::Write::write_fmt(a4, &v22) {
            return v60;
        } else if *((a3 + 238) as &i8) {
            uu_ls::dired::add_total(v38, v34);
        }
    }
    v60 = uu_ls::display_items(v8, v9, a3, a4, v38, *(&v39 as &i64));
    if v60 {
        return v60;
    }
    if !*((a3 + 230) as &i8) {
        return 0;
    }
    v12 = (&v7)[8] as i192;
    v62 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12);
    if v62 {
        v63 = v62;
        *(&v6 as &i8) = *((a3 + 238) as &i8);
        do {
            v64 = v63 + 24;
            v10 = std::fs::read_dir(v63 + 24);
            if v11 == 2 {
                v66 = v10;
                v4 = v66;
                if <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4) {
                    return v60;
                }
                v16 = v66;
                v32 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v64);
                v28 = v34;
                v68 = *(&v32.field_0 as &i128);
                v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u256;
                v25 = v68;
                v24 = v66;
                v23 = *((v63 + 297) as &i8);
                v22 = 2;
                uucore::mods::error::set_exit_code(2 - (v23 < 1));
                v19 = uucore::util_name();
                v20 = v57;
                eprintln!("{}: {}", &v19, &v22);
                continue;
            }
            v4 = v10;
            v22 = uucore::features::fs::FileInformation::from_path(v64, *((v63 + 296) as &i8));
            match v22 {
                Some(_) => {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                    goto LABEL_528afd;
                },
                None => {
                    memcpy(&v36, &v26, 136);
                    v35 = struct8 {
                        field_0: v67
                    };
                },
            }
            if hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v35) {
                v69 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a4);
                if v69 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v69);
                    goto LABEL_528afd;
                } else {
                    v32 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v64);
                    v27 = v34;
                    v71 = *(&v32.field_0 as &i128);
                    v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u256;
                    v24 = v71;
                    v22 = 5;
                    uucore::mods::error::set_exit_code(2);
                    v19 = uucore::util_name();
                    v20 = v57;
                    eprintln!("{}: {}", &v19, &v22);
                    continue;
                }
            }
            v22 = struct40 {
                field_0: "\n"
                field_8: 1
                field_16: 8
                field_24: 0
                field_32: 0
            };
            v70 = std::io::Write::write_fmt(a4, &v22);
            if v70 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                goto LABEL_528afd;
            } else {
                if v6 {
                    *((v38 + 48) as &i64) = 2;
                    if !(!uu_ls::dired::indent(a4)) {
                        goto LABEL_528afd;
                    }
                    v22 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v63 + 32) as &i64), *((v63 + 40) as &i64));
                    uu_ls::dired::calculate_subdired(v38, v72);
                    v73 = v38;
                    *((v73 + 48) as &unsigned long) = *((v73 + 48) as &i64) + v72 + 3;
                }
                uu_ls::show_dir_name(v63, a4, a3);
                v22 = struct40 {
                    field_0: "\n"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                    field_32: 0
                };
                v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v74 = std::io::Write::write_fmt(a4, &v22);
                if v74 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v74);
LABEL_528afd:
                    return v60;
                }
                v75 = v4.field_8;
                v1 = *(&v39 as &i64);
                v0 = v38;
                v60 = uu_ls::enter_directory(v63, v4, v75, a3, a4, a5);
                if v60 {
                    return v60;
                }
                v22 = uucore::features::fs::FileInformation::from_path(v64, *((v63 + 296) as &i8));
                match v22 {
                    Some(_) => {
                        v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                        return v60;
                    },
                    None => {
                        memcpy(&v32, &v22, 136);
                        v32 = struct8 {
                            field_0: v76
                        };
                        hashbrown::map::HashMap<K,V,S,A>::remove(a5, &v32);
                    },
                }
            }
        } while ((v63 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v12), v63));
    }
}
