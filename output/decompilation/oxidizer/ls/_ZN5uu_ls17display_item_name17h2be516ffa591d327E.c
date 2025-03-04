fn uu_ls::display_item_name(a0: &struct24, a1: void*, a2: &u64, a3: u32, a4: u32, a5: &struct24, a6: u32, a7: void*, a8: u32) -> u64 {
    let v0: i8;  // [bp-0x318]
    let v1: i8;  // [bp-0x310]
    let v2: i32;  // [sp-0x2fc]
    let v3: struct16;  // [sp-0x2f8], Other Possible Types: struct24, int
    let v4: i8;  // [bp-0x2f0]
    let v5: i64;  // [sp-0x2e8]
    let v6: i64;  // [sp-0x2e0], Other Possible Types: struct24
    let v7: struct24;  // [sp-0x2e0], Other Possible Types: int
    let v8: i64;  // [sp-0x2d8]
    let v9: i64;  // [sp-0x2d0]
    let v10: Result<struct24, struct8>;  // [sp-0x2b8]
    let v11: i64;  // [sp-0x2a8]
    let v12: struct24;  // [sp-0x298], Other Possible Types: int
    let v13: i64;  // [sp-0x288]
    let v14: iNone;  // [sp-0x278], Other Possible Types: unsigned long
    let v15: i64;  // [sp-0x270]
    let v16: i64;  // [sp-0x268]
    let v17: struct24;  // [sp-0x248], Other Possible Types: Result<struct24, struct8>, unsigned long
    let v18: i64;  // [sp-0x240]
    let v19: i64;  // [sp-0x238]
    let v20: i64;  // [sp-0x230]
    let v21: Result<struct24, struct8>;  // [sp-0x198]
    let v22: struct24;  // [sp-0x180]
    let v23: struct24;  // [sp-0x168], Other Possible Types: unsigned long, unsigned short
    let v24: iNone;  // [sp-0x168], Other Possible Types: struct24
    let v25: i64;  // [sp-0x160]
    let v26: i64;  // [sp-0x158], Other Possible Types: struct24
    let v27: i64;  // [sp-0x150]
    let v28: i64;  // [sp-0x148]
    let v29: i8;  // [bp-0x140]
    let v30: i8;  // [bp-0x40]
    let v31: i64;  // r12
    let v33: i64;  // rcx
    let v34: i8;  // r15b
    let v35: i64;  // rcx
    let v36: i32;  // ecx
    let v38: i32;  // r14d
    let v39: i32;  // eax
    let v40: i64;  // rax
    let v41: i64;  // rdx
    let v42: i64;  // rax

    v31 = a2 + 245;
    if *((a2 + 239) as &i8) {
        v2 = (uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v31) & -0x100 | 1) as u32;
        v23 = uu_ls::create_hyperlink(*(&v4 as &i64), v5, a1);
        v3 = v23;
    }
    if *((a7 + 29) as &i8) != 2 {
        v2 = (v33 & -0x100 | 1) as u32;
        v23 = uu_ls::colors::color_name((&v3)[8] as i64, v5, a1, a7, a6, 0, v1);
        v3 = v23;
    }
    v34 = *((a2 + 248) as &i8);
    v35 = a5;
    v36 = (v35 & -0x100 | 1) as u32;
    if (*((v35 + 16) as &i64) & v34 != 1) {
        v23 = struct24 {
            field_0: *(v37 as &i128)
            field_16: *((v37 + 16) as &i64)
        };
        v2 = 0;
        v17 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v23, (&v3)[8] as i64, v5);
        v3 = v17;
        v36 = 0;
    }
    v2 = v36;
    v38 = *((a2 + 244) as &i8);
    if v38 {
        v39 = uu_ls::classify_file(a1, a6) as i32;
        if v38 == 3 {
LABEL_52c2e7:
            if !(v39 == 0x110000) {
                goto LABEL_52c2f5;
            }
        } else if v38 == 2 {
            if v39 == 42 {
                goto LABEL_52c301;
            }
            goto LABEL_52c2e7;
        } else if v39 == 47 {
LABEL_52c2f5:
            v3 = alloc::string::String::push(v39 as u64);
        }
    }
LABEL_52c301:
    if v34 == 1 && uu_ls::PathData::file_type(a1, a6) {
        v40 = uu_ls::PathData::file_type(a1, a6);
        if !v40 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        } else if (0xf000 & *(v40 as &i32)) == 0xa000 && !*((a1 + 296) as &i8) {
            v21 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v21 {
                Err(_) => {
                    v6 = v25;
                    v17 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24);
                    v26 = v17;
                    v25 = v6;
                    *(&v23 as &i16) = 2;
                    uucore::mods::error::set_exit_code(1);
                    v14 = uucore::util_name();
                    v15 = v41;
                    eprintln!("{}: {}", &v14, &v23);
                },
                Ok(_) => {
                    v10 = v21;
                    v3 = alloc::vec::Vec<T,A>::append_elements(" -> ");
                    if *((a7 + 29) as &i8) != 2 {
                        v24 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v10);
                        v12 = v24;
                        if !std::path::Path::is_absolute(*((&v10 as &char + 8) as &i64), v11) as i8 {
                            v42 = std::path::Path::parent(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                            if v42 {
                                v24 = *(&v12.field_0 as &i192);
                                v17 = std::path::Path::join(v42, a2, &v24);
                                v12 = v17;
                            }
                        }
                        v16 = v13;
                        v14 = v12;
                        v17 = 0;
                        v6 = 0x8000000000000000;
                        uu_ls::PathData::new(&v24, &v14, &v17, &v6, *((a2 + 235) as &i8) as u8 as u64, *((a2 + 242) as &i8) as u8 as u64, v0);
                        if uu_ls::PathData::get_metadata(a1, a6) || (v17 = uu_ls::get_metadata_with_deref_opt(v28, *(&v29 as &i64), v30 as u64), v17 as i32 != 2) {
                            v17 = uucore::features::quoting_style::escape_name(*((&v10 as &char + 8) as &i64), v11, v31);
                            v6 = uu_ls::colors::color_name(v18, v19, a1, a7, a6, &v24, v1);
                            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8, v9 + v8), a2);
                        } else {
                            v17 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                            v6 = core::result::Result<T,E>::unwrap(&v17);
                            v17 = std::sys::os_str::bytes::Slice::to_string_lossy(v8, v9);
                            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v18, v19 + v18), a2);
                        }
                    } else {
                        v23 = uucore::features::quoting_style::escape_name(*((&v10 as &char + 8) as &i64), v11, v31);
                        v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v25, v26 + v25), a2);
                    }
                },
            }
        }
    }
    v5 = v5;
    v3 = v3;
    if a3 != 1 {
        return struct24 {
            field_0: v3
            field_16: v43
        };
    }
    v5 = v5;
    v3 = v3;
    if *((a2 + 235) as &i8) {
        if v34 != 4 {
            v7 = uu_ls::pad_left(*((a1 + 56) as &i64), *((a1 + 64) as &i64), a4);
        } else {
            v7 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
        }
        v17 = &v7;
        v18 = <alloc::string::String as core::fmt::Display>::fmt;
        v19 = &v3;
        v20 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v23 as &&i64) = &g_6125e8;
        v25 = 2;
        v28 = 0;
        v26 = &v17;
        v27 = 2;
        v22 = core::option::Option<T>::map_or_else(&v23);
        v5 = v5;
        v3 = v3;
    }
}
