fn uu_ls::list(a0: &struct24, a1: void*) -> u64 {
    let v0: i8;  // [sp-0x469]
    let v1: i64;  // [bp-0x460]
    let v2: struct16;  // [sp-0x458], Other Possible Types: i64
    let v3: i64;  // [sp-0x450]
    let v4: i64;  // [sp-0x448]
    let v5: i64;  // [sp-0x440], Other Possible Types: struct16
    let v6: i64;  // [sp-0x438]
    let v7: i64;  // [sp-0x430]
    let v8: i264;  // [sp-0x428], Other Possible Types: struct33
    let v9: i64;  // [sp-0x400], Other Possible Types: Argument, struct32
    let v10: i64;  // [sp-0x3d8]
    let v11: i8;  // [sp-0x3d0]
    let v12: i64;  // [sp-0x3c8]
    let v13: struct8;  // [bp-0x3c0], Other Possible Types: i192
    let v14: i128;  // [bp-0x3a8]
    let v15: i64;  // [sp-0x3a0]
    let v16: i64;  // [sp-0x398]
    let v17: i64;  // [sp-0x390]
    let v18: i64;  // [sp-0x388]
    let v19: i128;  // [sp-0x380]
    let v20: i64;  // [sp-0x370]
    let v21: i128;  // [bp-0x368]
    let v22: i8;  // [bp-0x358]
    let v23: i8;  // [bp-0x350]
    let v24: i80;  // [sp-0x348], Other Possible Types: struct10
    let v25: i8;  // [sp-0x32b]
    let v26: i64;  // [sp-0x328], Other Possible Types: struct24, struct8, Arguments
    let v27: i8;  // [sp-0x327]
    let v28: i64;  // [sp-0x320]
    let v29: i64;  // [sp-0x318]
    let v30: i128;  // [bp-0x310]
    let v31: i64;  // [sp-0x308]
    let v32: i8;  // [bp-0x1f8], Other Possible Types: struct24, struct16
    let v33: i64;  // [sp-0x1e8]
    let v34: i128;  // [bp-0x1d8]
    let v35: struct8;  // [bp-0xc0]
    let v36: i8;  // [bp-0xb8]
    let v38: i256;  // ymm0
    let v39: i256;  // ymm0
    let v40: i64;  // 4103
    let v41: struct8;  // rax
    let v42: i64;  // rcx
    let v43: i32;  // ebp
    let v44: i32;  // r15d
    let v45: i64;  // rdx
    let v46: i128;  // xmm0
    let v47: i64;  // rax
    let v48: i64;  // rdx
    let v49: i64;  // r14
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v54: i64;  // r13
    let v55: i64;  // rbp
    let v56: i64;  // rdx
    let v57: i64;  // r14
    let v59: i64;  // r12
    let v60: i64;  // rdx
    let v61: i256;  // ymm1
    let v62: i256;  // ymm2
    let v63: i64;  // r15
    let v64: i8;  // al
    let v65: i64;  // rbx
    let v66: i64;  // rsi
    let v67: i64;  // rax
    let v68: i64;  // rax
    let v69: i128;  // xmm0
    let v70: i64;  // rax
    let v71: i64;  // rax
    let v72: i64;  // rbx
    let v73: i64;  // rsi
    let v74: i64;  // rdx
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm2
    let v78: i64;  // r15
    let v80: i64;  // [sp-0x360]

    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v8 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v17 = 0;
    v18 = 8;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v19 = 0;
    v20 = 8;
    v21 = 0;
    v40 = *((a1 + 24) as &i64);
    if v40 == 0x8000000000000000 {
        v25 = 2;
    } else {
        v24 = core::ops::function::FnOnce::call_once(a1 + 24);
    }
    v1 = *((a0 + 16) as &i64);
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v41 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v41 {
        v42 = a1;
        v0 = *((v42 + 232) as &i8);
        v43 = *((v42 + 235) as &i8);
        v44 = *((v42 + 242) as &i8);
        do {
            v26 = std::sys::os_str::bytes::Slice::to_owned(v41, v45);
            v16 = v29;
            v46 = v26;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
            v14 = v46;
            v26 = struct8 {
                field_0: 0
            };
            v13 = struct8 {
                field_0: 0x8000000000000000
            };
            uu_ls::PathData::new(&v32, &v14, &v26, &v13, v43, v44);
            if !uu_ls::PathData::get_metadata(&v32, &v8) {
                continue;
            }
            v47 = uu_ls::PathData::file_type(&v32, &v8);
            if !v47 {
                uucore::mods::error::set_exit_code();
                goto LABEL_52725b;
            } else if !(!v0) || !((*(v47 as &i32) & 0xf000) == 0x4000) {
LABEL_52725b:
                memcpy(&v26, &v32, 304);
                v2 = alloc::vec::Vec<T,A>::push(&v26, v48);
            } else {
                memcpy(&v26, &v32, 304);
                v5 = alloc::vec::Vec<T,A>::push(&v26, v48);
            }
        } while ((v41 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v41));
    }
    v49 = a1;
    uu_ls::sort_entries(v3, v4, v49);
    uu_ls::sort_entries(v6, v7, v49);
    if v25 != 2 && uu_ls::colors::StyleManager::get_normal_style(&v24) {
        v32 = uu_ls::colors::StyleManager::reset(&v24, 0x1);
        v9 = Argument {
            value: &v32
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v26 = Arguments {
            pieces: [""]
            args: [&v9]
            fmt: 0
        };
        v50 = std::io::Write::write_fmt(&v8, &v26);
        if v50 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
            return v51;
        }
    }
    v51 = uu_ls::display_items(v3, v4, v49, &v8, &v17, &v24);
    if v51 {
        return v51;
    }
    v13 = *((&v5 as &char + 8) as &i192);
    v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13);
    if v48 {
        v0 = !*((v49 + 230) as &i8) & v1 < 2;
        v1 = *((v49 + 238) as &i8);
        v54 = &v26;
        v55 = &v13;
        do {
            v59 = v56;
            v63 = v59 + 24;
            std::fs::read_dir(&v22, v63, v60);
            v64 = v23;
            if v11 == 2 {
                v65 = v22;
                v12 = v65;
                v67 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v8, v66, v48);
                if v67 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                    return v51;
                }
                v9 = v65;
                v32 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v63);
                v31 = v33;
                v69 = v32;
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v29 = v69;
                v28 = v65;
                v27 = *((v59 + 297) as &i8);
                v26 = 2;
                uucore::mods::error::set_exit_code();
                v14 = uucore::util_name();
                v15 = v48;
                eprintln!("{:?}: {:?}", &v14, v54);
                v33 = v33;
                goto LABEL_527590;
            }
            v10 = v22;
            v11 = v64;
            if !v0 {
                if !(!v52) || !(!v4) {
                    *(&v26 as &&str) = "\n";
                    v28 = 1;
                    v29 = 8;
                    v30 = 0;
                    v68 = std::io::Write::write_fmt(&v8, v54);
                    if v68 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                        return v51;
                    }
                    uu_ls::show_dir_name(v59, &v8, a1);
                    *(&v26 as &&str) = "\n";
                    v28 = 1;
                    v29 = 8;
                    v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v30 = 0;
                    v70 = std::io::Write::write_fmt(&v8, v54);
                    if v70 {
                        v51 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
                        return v51;
                    }
                } else {
                    if v1 {
                        v51 = uu_ls::dired::indent(&v8);
                        if v51 {
                            return v51;
                        }
                    }
                    uu_ls::show_dir_name(v59, &v8, a1);
                    *(&v26 as &&str) = "\n";
                    v28 = 1;
                    v29 = 8;
                    v39 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v30 = 0;
                    v71 = std::io::Write::write_fmt(&v8, v54);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                        return v51;
                    }
                    if v1 {
                        v72 = *((v59 + 16) as &i64);
                        uu_ls::dired::calculate_subdired(&v17, v72);
                        v80 = v80 + v72 + 3;
                    }
                }
            }
            <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v54, v73, v74);
            v75 = v26;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v76 = *((&v26 as &char + 16) as &i128);
            v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            v77 = *((&v30 as &char + 8) as &i128);
            v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
            v34 = v77;
            v33 = v76;
            v32 = v75;
            uucore::features::fs::FileInformation::from_path(v54, v63, *((v59 + 296) as &i8));
            v78 = v26;
            if v78 {
                v51 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
                goto LABEL_527a40;
            }
            memcpy(&v36, &v26, 136);
            v35 = struct8 {
                field_0: v79
            };
            v32 = hashbrown::map::HashMap<K,V,S,A>::insert(&v35);
            v51 = uu_ls::enter_directory(v59, v10, v11, a1, &v8, &v32, &v17, &v24);
            if v51 {
LABEL_527a40:
                if !v78 {
                    return v51;
                }
                return v51;
            }
            v55 = &v13;
            v33 = v33;
LABEL_527590:
            v33 = v33;
            v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v55);
        } while (v60);
        if !v1 {
            return 0;
        }
    } else if !*((v49 + 238) as &i8) {
        return 0;
    }
    if *((v57 + 239) as &i8) {
        return 0;
    }
    v51 = uu_ls::dired::print_dired_output(v57, &v17, &v8);
    if !v51 {
        return 0;
    }
}
