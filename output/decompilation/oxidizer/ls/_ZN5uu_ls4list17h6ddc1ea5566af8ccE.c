fn uu_ls::list(a0: void*, a1: void*) -> u64 {
    let v0: i8;  // [bp-0x488]
    let v1: i64;  // [sp-0x480]
    let v2: i8;  // [sp-0x469]
    let v3: i64;  // [bp-0x460], Other Possible Types: char
    let v4: i64;  // [sp-0x458], Other Possible Types: struct16
    let v5: i64;  // [sp-0x450]
    let v6: i64;  // [sp-0x448]
    let v7: i64;  // [sp-0x440], Other Possible Types: int, struct16
    let v8: i64;  // [sp-0x430]
    let v9: struct33;  // [sp-0x428]
    let v10: i64;  // [sp-0x400], Other Possible Types: struct32
    let v11: i64;  // [sp-0x3f8]
    let v12: i64;  // [sp-0x3d8]
    let v13: i8;  // [sp-0x3d0]
    let v14: i64;  // [sp-0x3c8]
    let v15: i64;  // [sp-0x3c0], Other Possible Types: int
    let v16: iNone;  // [bp-0x3a8], Other Possible Types: unsigned long
    let v17: i64;  // [sp-0x3a0]
    let v18: i64;  // [sp-0x398]
    let v19: i64;  // [sp-0x390]
    let v20: i64;  // [sp-0x388]
    let v21: iNone;  // [sp-0x380]
    let v22: i64;  // [sp-0x370]
    let v23: iNone;  // [bp-0x368]
    let v24: i64;  // [sp-0x360]
    let v25: i8;  // [bp-0x358]
    let v26: i8;  // [bp-0x350]
    let v27: struct10;  // [sp-0x348]
    let v28: i8;  // [sp-0x32b]
    let v29: i64;  // [sp-0x328], Other Possible Types: struct24, int
    let v30: i64;  // [bp-0x328]
    let v31: i8;  // [bp-0x328], Other Possible Types: unsigned long
    let v32: i8;  // [sp-0x327]
    let v33: i64;  // [sp-0x320]
    let v34: i64;  // [sp-0x318], Other Possible Types: int
    let v35: iNone;  // [bp-0x310]
    let v36: iNone;  // [sp-0x308], Other Possible Types: unsigned long
    let v37: i64;  // [sp-0x308]
    let v38: struct24;  // [bp-0x1f8], Other Possible Types: int, char, struct16
    let v39: i64;  // [sp-0x1e8], Other Possible Types: int
    let v40: iNone;  // [bp-0x1d8]
    let v41: struct8;  // [bp-0xc0]
    let v42: i8;  // [bp-0xb8]
    let v44: iNone;  // ymm0
    let v45: iNone;  // ymm0
    let v46: i64;  // 4103
    let v47: struct8;  // rax
    let v48: i64;  // rcx
    let v49: i32;  // ebp
    let v50: i32;  // r15d
    let v51: i64;  // rdx
    let v52: iNone;  // xmm0
    let v53: i64;  // rax
    let v54: i64;  // r14
    let v56: i64;  // rdx
    let v57: i64;  // rbx
    let v58: i64;  // r12
    let v60: i64;  // r13
    let v61: i64;  // rbp
    let v62: iNone;  // ymm0
    let v63: iNone;  // ymm1
    let v64: iNone;  // ymm2
    let v65: i64;  // r15
    let v66: i8;  // al
    let v67: i64;  // rbx
    let v68: i64;  // rax
    let v69: iNone;  // xmm0
    let v70: i64;  // rax
    let v71: i64;  // rax
    let v72: i64;  // rbx
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm1
    let v75: iNone;  // xmm2
    let v76: i64;  // r15
    let v81: i64;  // rbx

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v7 = 8;
    v8 = 0;
    v9 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v19 = 0;
    v20 = 8;
    v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v21 = 0;
    v22 = 8;
    *(&v23 as &i128) = 0;
    v46 = *((a1 + 24) as &i64);
    if v46 == 0x8000000000000000 {
        v28 = 2;
    } else {
        v27 = core::ops::function::FnOnce::call_once(a1 + 24);
    }
    *(&v3 as &i64) = *((a0 + 16) as &i64);
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v47 {
        v48 = a1;
        v2 = *((v48 + 232) as &i8);
        v49 = *((v48 + 235) as &i8);
        v50 = *((v48 + 242) as &i8);
        do {
            v29 = std::sys::os_str::bytes::Slice::to_owned(v47, v51);
            v18 = v34;
            v52 = *(&v29.field_0 as &i128);
            v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256;
            v16 = v52;
            *(&v30 as &i64) = 0;
            v15 = 0x8000000000000000;
            uu_ls::PathData::new(&v38, &v16, &v30, &v15, v49 as u64, v50 as u64, v0);
            if !uu_ls::PathData::get_metadata(&v38, &v9) {
                continue;
            }
            v53 = uu_ls::PathData::file_type(&v38, &v9);
            if !v53 {
                uucore::mods::error::set_exit_code(1);
                goto LABEL_52725b;
            } else if !(!v2) || !((*(v53 as &i32) & 0xf000) == 0x4000) {
LABEL_52725b:
                memcpy(&v30, &v38, 304);
                v4 = alloc::vec::Vec<T,A>::push(&v30);
            } else {
                memcpy(&v30, &v38, 304);
                v7 = alloc::vec::Vec<T,A>::push(&v30);
            }
        } while ((v47 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v47));
    }
    v54 = a1;
    uu_ls::sort_entries(v5, v6, v54);
    uu_ls::sort_entries(v7, v8, v54);
    if v28 != 2 && uu_ls::colors::StyleManager::get_normal_style(&v27) {
        v38 = uu_ls::colors::StyleManager::reset(&v27, 0x1);
        v10 = &v38;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v30 as &&i64) = &g_423c10;
        v29 = 1;
        v36 = 0;
        v29 = &v10;
        v36 = 1;
        if std::io::Write::write_fmt(&v9, &v30) {
            return v81;
        }
    }
    if uu_ls::display_items(v5, v6, v54, &v9, &v19, &v27) {
        return v81;
    }
    v15 = (&v7)[8] as i192;
    if v56 {
        v57 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
        v58 = v56;
        v2 = !*((v54 + 230) as &i8) & v3 < 2;
        *(&v3 as &i8) = *((v54 + 238) as &i8);
        v60 = &v30;
        v61 = &v15;
        do {
            v65 = v58 + 24;
            std::fs::read_dir(&v25, v65);
            v66 = v26;
            if v13 == 2 {
                v67 = *(&v25 as &i64);
                v14 = v67;
                if <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush() {
                    return v81;
                }
                v10 = v67;
                v38 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v65);
                v37 = v39;
                v69 = *(&v38.field_0 as &i128);
                v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256;
                v34 = v69;
                v29 = v67;
                v32 = *((v58 + 297) as &i8);
                v31 = 2;
                uucore::mods::error::set_exit_code(2 - (v32 < 1));
                v16 = uucore::util_name();
                v17 = v56;
                eprintln!("{}: {}", &v16, v60);
                goto LABEL_527590;
                goto LABEL_527590;
            }
            v12 = *(&v25 as &i64);
            v13 = v66;
            if !v2 {
                if !v57 && !v6 {
                    if v3 && uu_ls::dired::indent(&v9) {
                        goto LABEL_527a79;
                    }
                    uu_ls::show_dir_name(v58, &v9, a1);
                    *(&v30 as &&str) = "\n";
                    v29 = 1;
                    v29 = 8;
                    v62 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *(&v36 as &i128) = 0;
                    v71 = std::io::Write::write_fmt(&v9, v60);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                        goto LABEL_527a79;
                    } else {
                        if v3 {
                            v72 = *((v58 + 16) as &i64);
                            uu_ls::dired::calculate_subdired(&v19, v72);
                            v24 = v24 + v72 + 3;
                            goto LABEL_527882;
                        }
                    }
                }
                *(&v31 as &&str) = "\n";
                v33 = 1;
                v34 = 8;
                *(&v35 as &i128) = 0;
                v68 = std::io::Write::write_fmt(&v9, v60);
                if v68 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                } else {
                    uu_ls::show_dir_name(v58, &v9, a1);
                    *(&v30 as &&str) = "\n";
                    v29 = 1;
                    v29 = 8;
                    v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *(&v36 as &i128) = 0;
                    v70 = std::io::Write::write_fmt(&v9, v60);
                    if !v70 {
                        goto LABEL_527882;
                    }
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                }
LABEL_527a79:
                return v81;
            }
LABEL_527882:
            <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v60);
            v73 = *(&v30 as &i128);
            v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u256;
            v74 = v29 as i128;
            v63 = v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256;
            v75 = (&v36)[8] as i128;
            v64 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u256;
            v40 = v75;
            v39 = v74;
            v38 = v73;
            uucore::features::fs::FileInformation::from_path(v60, v65, *((v58 + 296) as &i8));
            v76 = v30;
            if v76 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
LABEL_527a50:
                if v76 {
                    return v81;
                }
                return v81;
            }
            memcpy(&v42, &v29, 136);
            *(&v41.field_8 as &struct8) = struct8 {
                field_0: v77
            };
            v38 = hashbrown::map::HashMap<K,V,S,A>::insert(&v41);
            v1 = &v27;
            if !(!uu_ls::enter_directory(v58, v12, v13, a1, &v9, &v38)) {
                goto LABEL_527a50;
            }
            v61 = &v15;
LABEL_527590:
            v57 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v61);
            v58 = v56;
        } while (v56);
        v54 = a1;
        if !v3 {
            return 0;
        }
    } else if !*((v54 + 238) as &i8) {
        return 0;
    }
    if *((v54 + 239) as &i8) {
        return 0;
    } else if !uu_ls::dired::print_dired_output(v54, &v19, &v9) {
        return 0;
    }
}
