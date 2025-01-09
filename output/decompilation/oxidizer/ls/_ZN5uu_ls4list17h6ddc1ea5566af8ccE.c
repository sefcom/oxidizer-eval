fn uu_ls::list(a0: &struct24, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x488]
    let v1: i64;  // [sp-0x480]
    let v2: i8;  // [sp-0x469]
    let v3: i64;  // [bp-0x460]
    let v4: struct16;  // [sp-0x458], Other Possible Types: i64
    let v5: i64;  // [sp-0x450]
    let v6: i64;  // [sp-0x448]
    let v7: i128;  // [sp-0x440], Other Possible Types: struct16
    let v8: i64;  // [sp-0x438]
    let v9: i64;  // [sp-0x430]
    let v10: i264;  // [sp-0x428], Other Possible Types: struct33
    let v11: struct32;  // [sp-0x400], Other Possible Types: i64, Argument
    let v12: i64;  // [sp-0x3d8]
    let v13: i8;  // [sp-0x3d0]
    let v14: i64;  // [sp-0x3c8]
    let v15: i192;  // [bp-0x3c0], Other Possible Types: struct24
    let v16: i64;  // [bp-0x3a8]
    let v17: i64;  // [sp-0x3a0]
    let v18: i64;  // [sp-0x398]
    let v19: i64;  // [sp-0x390]
    let v20: i64;  // [sp-0x388]
    let v21: i128;  // [sp-0x380]
    let v22: i64;  // [sp-0x370]
    let v23: i128;  // [bp-0x368]
    let v24: i8;  // [bp-0x358]
    let v25: i8;  // [bp-0x350]
    let v26: i80;  // [sp-0x348], Other Possible Types: struct10
    let v27: i8;  // [sp-0x32b]
    let v28: i8;  // [sp-0x328], Other Possible Types: Arguments, struct24
    let v29: i8;  // [sp-0x327]
    let v30: i64;  // [sp-0x320]
    let v31: i128;  // [sp-0x318]
    let v32: i128;  // [bp-0x310]
    let v33: i64;  // [sp-0x308]
    let v34: i8;  // [bp-0x1f8], Other Possible Types: struct24, struct16
    let v35: i128;  // [sp-0x1e8]
    let v36: i128;  // [bp-0x1d8]
    let v37: struct8;  // [bp-0xc0]
    let v38: i8;  // [bp-0xb8]
    let v40: i256;  // ymm0
    let v41: i256;  // ymm0
    let v42: i64;  // 4103
    let v43: struct8;  // rax
    let v44: i64;  // rcx
    let v45: i32;  // ebp
    let v46: i32;  // r15d
    let v47: i64;  // rdx
    let v48: i128;  // xmm0
    let v49: i64;  // rax
    let v50: i64;  // r14
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rdx
    let v55: i64;  // r13
    let v56: i64;  // rbp
    let v57: i64;  // r14
    let v59: i64;  // r12
    let v60: i64;  // r12
    let v61: i256;  // ymm0
    let v62: i256;  // ymm1
    let v63: i256;  // ymm2
    let v64: i64;  // r15
    let v65: i8;  // al
    let v66: i64;  // rbx
    let v67: struct1;  // rax
    let v68: i64;  // rax
    let v69: i128;  // xmm0
    let v70: i64;  // rax
    let v71: i64;  // rax
    let v72: i64;  // rbx
    let v73: i128;  // xmm0
    let v74: i128;  // xmm1
    let v75: i128;  // xmm2
    let v76: i64;  // r15
    let v78: i64;  // rbx
    let v79: i64;  // [sp-0x360]

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v10 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v19 = 0;
    v20 = 8;
    v41 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v42 = *((a1 + 24) as &i64);
    if v42 == 0x8000000000000000 {
        v27 = 2;
    } else {
        v26 = core::ops::function::FnOnce::call_once(a1 + 24);
    }
    v3 = *((a0 + 16) as &i64);
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v43 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if v43 {
        v44 = a1;
        v2 = *((v44 + 232) as &i8);
        v45 = *((v44 + 235) as &i8);
        v46 = *((v44 + 242) as &i8);
        do {
            v28 = std::sys::os_str::bytes::Slice::to_owned(v43, v47);
            v18 = v31;
            v48 = v28;
            v41 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
            v16 = v48;
            v28 = 0;
            v15 = struct24 {
                field_0: 0x8000000000000000
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
            v0 = 1;
            uu_ls::PathData::new(&v34, &v16, &v28, &v15, v45, v46);
            if !uu_ls::PathData::get_metadata(&v34, &v10) {
                continue;
            }
            v49 = uu_ls::PathData::file_type(&v34, &v10);
            if !v49 {
                uucore::mods::error::set_exit_code(1);
                goto LABEL_52725b;
            } else if !(!v2) || !((*(v49 as &i32) & 0xf000) == 0x4000) {
LABEL_52725b:
                memcpy(&v28, &v34, 304);
                v4 = alloc::vec::Vec<T,A>::push(&v28);
            } else {
                memcpy(&v28, &v34, 304);
                v7 = alloc::vec::Vec<T,A>::push(&v28);
            }
        } while ((v43 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v43));
    }
    v50 = a1;
    uu_ls::sort_entries(v5, v6, v50);
    uu_ls::sort_entries(v8, v9, v50);
    if v27 != 2 && uu_ls::colors::StyleManager::get_normal_style(&v26) {
        v34 = uu_ls::colors::StyleManager::reset(&v26, 0x1);
        v11 = Argument {
            value: &v34
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v28 = Arguments {
            pieces: [""]
            args: [&v11]
            fmt: 0
        };
        v51 = std::io::Write::write_fmt(&v10, &v28);
        if v51 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
            return v78;
        }
    }
    if uu_ls::display_items(v5, v6, v50, &v10, &v19, &v26) {
        return v78;
    }
    v15 = *((&v7 as &char + 8) as &i192);
    v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
    if v53 {
        v2 = !*((v50 + 230) as &i8) & v3 < 2;
        v3 = *((v50 + 238) as &i8);
        v55 = &v28;
        v56 = &v15;
        do {
            v59 = v60;
            v64 = v59 + 24;
            std::fs::read_dir(&v24, v64);
            v65 = v25;
            if v13 == 2 {
                v66 = v24;
                v14 = v66;
                v67 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush();
                if v67 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                    return v78;
                }
                v11 = v66;
                v34 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v64);
                v33 = v35;
                v69 = v34;
                v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v31 = v69;
                v30 = v66;
                v29 = *((v59 + 297) as &i8);
                v28 = 2;
                uucore::mods::error::set_exit_code(2 - (v29 < 1));
                v16 = uucore::util_name();
                v17 = v53;
                eprintln!("{}: {}", &v16, v55);
                goto LABEL_527590;
            }
            v12 = v24;
            v13 = v65;
            if !v2 {
                if !v52 && !v6 {
                    if (v43 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v43) {
                        goto LABEL_527a79;
                    }
                    uu_ls::show_dir_name(v59, &v10, a1);
                    *(&v28 as &&str) = "\n";
                    v30 = 1;
                    v31 = 8;
                    v61 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v32 = 0;
                    v71 = std::io::Write::write_fmt(&v10, v55);
                    if v71 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                        goto LABEL_527a79;
                    } else {
                        if v3 {
                            v72 = *((v59 + 16) as &i64);
                            uu_ls::dired::calculate_subdired(&v19, v72);
                            v79 = v79 + v72 + 3;
                            goto LABEL_527882;
                        }
                    }
                }
                *(&v28 as &&str) = "\n";
                v30 = 1;
                v31 = 8;
                v32 = 0;
                v68 = std::io::Write::write_fmt(&v10, v55);
                if v68 {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v68);
                    goto LABEL_527a79;
                } else {
                    uu_ls::show_dir_name(v59, &v10, a1);
                    *(&v28 as &&str) = "\n";
                    v30 = 1;
                    v31 = 8;
                    v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v32 = 0;
                    v70 = std::io::Write::write_fmt(&v10, v55);
                    if v70 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v70);
LABEL_527a79:
                        return v78;
                    }
                }
            }
LABEL_527882:
            <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v55);
            v73 = v28;
            v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
            v74 = *((&v28 as &char + 16) as &i128);
            v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v75 = *((&v32 as &char + 8) as &i128);
            v63 = v63 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v36 = v75;
            v35 = v74;
            v34 = v73;
            uucore::features::fs::FileInformation::from_path(v55, v64, *((v59 + 296) as &i8));
            v76 = v28;
            if v76 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
LABEL_527a50:
                if v76 {
                    return v78;
                }
                return v78;
            }
            memcpy(&v38, &v28, 136);
            *(&v37.field_8 as &struct8) = struct8 {
                field_0: v77
            };
            v34 = hashbrown::map::HashMap<K,V,S,A>::insert(&v37);
            v1 = &v26;
            v0 = &v19;
            if (v43 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(), v43) {
                goto LABEL_527a50;
            }
            v56 = &v15;
LABEL_527590:
            v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v56);
        } while (v53);
        if !v3 {
            v78 = 0;
            return 0;
        }
    } else if !*((v50 + 238) as &i8) {
        return 0;
    }
    if *((v57 + 239) as &i8) {
        return 0;
    } else if !uu_ls::dired::print_dired_output(v57, &v19, &v10) {
        return 0;
    }
}
