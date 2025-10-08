fn uu_ls::display_items(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u8;  // [bp-0x179]
    let v1: void*;  // [sp-0x170], Other Possible Types: u64
    let v2: &str;  // [bp-0x168], Other Possible Types: core::fmt::Arguments, struct24, struct32, struct40, u64
    let v3: Result<struct24, struct24>;  // [bp-0x168], Other Possible Types: u64
    let v4: Result<struct24, struct24>;  // [bp-0x168], Other Possible Types: core::fmt::Arguments, u64
    let v5: core::fmt::Arguments;  // [bp-0x168]
    let v6: struct40;  // [bp-0x160], Other Possible Types: u64
    let v7: struct40;  // [bp-0x160], Other Possible Types: unsigned long
    let v8: u64;  // [bp-0x160]
    let v9: i64;  // [bp-0x158], Other Possible Types: u64
    let v10: u64;  // [bp-0x158]
    let v11: u64;  // [bp-0x150]
    let v12: void*;  // [bp-0x148]
    let v13: Result<struct24, struct24>;  // [bp-0x138], Other Possible Types: u64
    let v14: u128;  // [bp-0x138]
    let v15: struct40;  // [bp-0x130], Other Possible Types: u64
    let v16: i64;  // [bp-0x128], Other Possible Types: int, u64
    let v17: &u64;  // [bp-0x110], Other Possible Types: u64
    let v18: struct32;  // [bp-0x108], Other Possible Types: struct_1 *, struct_2 *
    let v19: u64;  // [bp-0x100]
    let v20: iNone;  // [bp-0xf8], Other Possible Types: u128
    let v21: u64;  // [bp-0xe8]
    let v22: u32;  // [bp-0xe8]
    let v23: Option<struct24>;  // [bp-0xe0]
    let v24: u64;  // [bp-0xd8]
    let v25: u64;  // [bp-0xd0]
    let v26: u64;  // [bp-0xc8]
    let v27: void*;  // [bp-0xc0]
    let v28: struct16;  // [bp-0xc0]
    let v29: u64;  // [bp-0xb8]
    let v30: void*;  // [bp-0xb0]
    let v31: u64;  // [bp-0xa8]
    let v32: u64;  // [bp-0xa0]
    let v33: u64;  // [bp-0x98]
    let v34: struct16;  // [bp-0x90]
    let v35: u64;  // [bp-0x50]
    let v36: u8;  // [bp-0x48]
    let v38: u64;  // r15
    let v39: u64;  // rax
    let v40: u32;  // ecx
    let v41: struct24;  // rbp
    let v42: core::fmt::Arguments;  // 4096
    let v43: std::io::stdio::Stdout;  // rbx
    let v44: void*;  // r13
    let v46: std::io::stdio::Stdout;  // rbx
    let v47: std::io::stdio::Stdout;  // r12
    let v48: void*;  // r13
    let v49: u64;  // rax
    let v51: struct16;  // r13
    let v52: u64;  // rax
    let v55: struct17;  // rax
    let v56: void*;  // r12
    let v57: std::env::ArgsOs;  // rbp
    let v58: u64;  // rax
    let v60: core::fmt::rt::Argument;  // rbx
    let v61: std::io::stdio::Stdout;  // rbx
    let v62: std::io::stdio::Stdout;  // r15
    let v63: std::io::stdio::Stdout;  // rbx
    let v64: std::io::stdio::Stdout;  // r15
    let v65: struct24;  // r15
    let v66: struct24;  // rax
    let v67: u16;  // r14w
    let v68: u64;  // rbx
    let v69: u64;  // rax
    let v71: u64;  // rax
    let v72: u64;  // rax
    let v73: u64;  // rax
    let v74: core::result::Result<alloc::string::String, std::env::VarError>;  // rax

    v17 = a4;
    v38 = a1 * 304;
    v26 = a0 + v38;
    v34 = struct16 {
        field_0: a0
        field_8: v26
    };
    v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v34, a2);
    v40 = a2[0x100] as i8;
    v1 = a2;
    if v40 == 1 {
        uu_ls::calculate_padding_collection(&v34, a0, a1, a2, a3);
        v21 = v34.field_0;
        v31 = v35;
        v41 = &v3;
        v42 = a2;
        loop {
            v43 = a0;
            v44 = v51;
            v46 = v43 + 304;
            if v43 == v26 {
                break;
            }
            v47 = v46;
            v2 = v4;
            v7 = v6;
            v48 = v44;
            if ((a2[242] as i8 | a2[241] as i8) & 1) {
                uu_ls::display_additional_leading_info(v41, v43, v21, v31, v44, a3);
                if v4 == 0x8000000000000000 {
                    return v6;
                }
                v13 = v4;
                v15 = v6;
                v16 = v9;
                v18 = &v13;
                v19 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = "\x01";
                v12 = 0;
                v9 = &v18;
                v11 = 1;
                v49 = std::io::Write::write_fmt(a3, v41);
                v2 = v3;
                v7 = v8;
                v48 = v1;
                if v49 {
                    v55 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
                }
            }
            v51 = v48;
            v6 = v7;
            v4 = v2;
            v52 = uu_ls::display_item_long(v43, &v34, v51, a3, v17, v39 & 4294967295);
            v41 = &v3;
            a0 = v47;
            if v52 {
                return v52;
            }
        }
    } else {
        v0 = v39;
        v21 = v40;
        if a2[243] as i8 == 1 && a1 {
            do {
                v57 = core::cmp::Ord::max(*((64 + a0 + v56 as &u8) as &i64), v57);
                v56 += 304;
            } while (v38 != v56);
        }
        uu_ls::calculate_padding_collection(&v34, a0, a1, v1, a3);
        if *((a3 + 133) as &i8) != 2 {
            v13 = uu_ls::colors::StyleManager::apply_normal(a3 + 104);
            v18 = &v13;
            v19 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = struct40 {
                field_0: "\x01"
                field_16: &v18
                field_24: 1
            };
            v58 = std::io::Write::write_fmt(a3, &v2);
            if !v58 {
                goto LABEL_59c78d;
            }
            v55 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v58);
            v60 = v55;
        } else {
LABEL_59c78d:
            v27 = 0;
            v29 = 8;
            v30 = 0;
            v2 = v3;
            loop {
                v61 = a0;
                v62 = v61 + 304;
                v63 = v61;
                if v63 == v26 {
                    break;
                }
                v64 = v63;
                v2 = uu_ls::display_additional_leading_info(v61, v34.field_0, v35, v1, a3);
                if v2.field_0 == 0x8000000000000000 {
                    return v6;
                }
                v13 = v2.field_0;
                v15 = v6;
                v16 = v9;
                v2 = struct24 {
                    field_0: 0
                    field_8: alloc::boxed::Box<T>::new()
                    field_16: &g_686c80
                };
                uu_ls::display_item_name(&v36, v61, v1, v17, v57, &v13, a3, &v2);
                v28 = alloc::vec::Vec<T,A>::push(&v36);
                v2 = v4;
                v6 = v7;
                v9 = v10;
                a0 = v64;
            }
            v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27);
            match (v22) {
                0 => {
                    v2 = struct32 {
                        field_0: *(&v18.field_0 as &i128)
                        field_16: v20
                    };
                    return uu_ls::display_grid(&v2, v1[236] as i32, 1, a3, v0, v1[224] as i64);
                }
                3 => {
                    v2 = struct32 {
                        field_0: *(&v18.field_0 as &i128)
                        field_16: v20
                    };
                    return uu_ls::display_grid(&v2, v1[236] as i32, 0, a3, v0, v1[224] as i64);
                }
                4 => {
                    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18);
                    if let Some(_) = v14 as u192 {
                        v66 = uu_ls::write_os_str(a3, v15, v16);
                        if v66 {
                            v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v66);
                            return v60;
                        }
                        v3 = alloc::string::String::from_utf8_lossy(v15, v16);
                        v65 = (ansi_width::ansi_width(v6, v9) as u32 + 2) as u64;
                    }
                    v16 = v20;
                    v14 = *(&v18.field_0 as &i128);
                    v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14);
                    if let Some(_) = v23 {
                        v67 = v1[236] as i16;
                        do {
                            v4 = alloc::string::String::from_utf8_lossy(v24, v25);
                            v68 = ansi_width::ansi_width(v6, v9);
                            if v67 && (v65 as u16 + v68 as u16 + 1) as u64 * 0x1000000000000 > v67 as u64 * 0x1000000000000 {
                                v2 = struct40 {
                                    field_0: ",\n"
                                    field_8: 1
                                    field_16: 8
                                    field_24: 0
                                };
                                v69 = std::io::Write::write_fmt(a3, &v2);
                                if v69 {
                                    goto LABEL_59cd94;
                                }
                                v65 = (v68 as u32 + 2) as u64;
                                v2 = v5;
                                v6 = v7;
                                v9 = v10;
                                break;
                            } else {
                                v2 = struct40 {
                                    field_0: ", "
                                    field_8: 1
                                    field_16: 8
                                    field_24: 0
                                };
                                v69 = std::io::Write::write_fmt(a3, &v2);
                                if v69 {
                                    goto LABEL_59cd94;
                                }
                                v65 = (v65 as u32 + v68 as u32 + 2) as u64;
                                v2 = v5;
                                v6 = v7;
                                v9 = v10;
                                break;
                            }
                            v69 = uu_ls::write_os_str(a3, v24, v25);
                            if v69 {
LABEL_59cd94:
                                v60 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v69);
                            }
                            v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v14 as u192);
                        } while (v23 as i64 != 0x8000000000000000);
                    }
                    if v65 as u16 {
                        v13 = v1 + 258;
                        v15 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                        v2 = struct40 {
                            field_0: "\x01"
                            field_16: &v13
                            field_24: 1
                        };
                        v71 = std::io::Write::write_fmt(a3, &v2);
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v71);
                    }
                    break;
                }
                _ => {
                    v16 = v20;
                    v14 = *(&v18.field_0 as &i128);
                    v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13);
                    if let Some(_) = v23 {
                        v1 += 258;
                        do {
                            v72 = uu_ls::write_os_str(a3, v24, v25);
                            if !v72 {
                                v32 = v1;
                                v33 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                                v2 = struct40 {
                                    field_0: "\x01"
                                    field_16: &v32
                                    field_24: 1
                                };
                                v73 = std::io::Write::write_fmt(a3, &v2);
                                if v73 {
                                    v74 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v73);
                                    return v74;
                                }
                            } else {
                                v74 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v72);
                                break;
                            }
                            v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13);
                        } while (v23 as i64 != 0x8000000000000000);
                    }
                }
            }
        }
    }
    return 0;
}
