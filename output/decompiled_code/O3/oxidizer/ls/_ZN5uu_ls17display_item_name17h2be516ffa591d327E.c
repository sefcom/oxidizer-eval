fn uu_ls::display_item_name(a0: &struct24, a1: void*, a2: &u64, a3: u32, a4: u64, a5: &struct24) -> u64 {
    let v0: i8;  // [bp-0x310]
    let v1: i32;  // [sp-0x2fc]
    let v2: i128;  // [sp-0x2f8], Other Possible Types: struct16
    let v3: i8;  // [bp-0x2f0]
    let v4: i64;  // [sp-0x2e8]
    let v5: struct24;  // [sp-0x2e0], Other Possible Types: i64
    let v6: i64;  // [sp-0x2d8]
    let v7: i64;  // [sp-0x2d0]
    let v8: i192;  // [bp-0x2b8]
    let v9: i64;  // [sp-0x2a8]
    let v10: i128;  // [sp-0x298]
    let v11: i64;  // [sp-0x288]
    let v12: i192;  // [sp-0x278]
    let v13: i64;  // [sp-0x270]
    let v14: i192;  // [sp-0x248], Other Possible Types: struct24, Result<struct176, struct16>
    let v15: i64;  // [sp-0x240]
    let v16: i64;  // [sp-0x238]
    let v17: i192;  // [sp-0x198], Other Possible Types: Result<struct24, struct16>
    let v18: i192;  // [sp-0x180]
    let v19: i16;  // [sp-0x168], Other Possible Types: struct24
    let v20: i64;  // [sp-0x160]
    let v21: i192;  // [sp-0x158]
    let v22: i64;  // [sp-0x148]
    let v23: i8;  // [bp-0x140]
    let v24: i8;  // [bp-0x40]
    let v25: i64;  // [bp+0x8]
    let v26: i8;  // [bp+0x10]
    let v27: i64;  // r12
    let v29: i64;  // rcx
    let v30: i8;  // r15b
    let v31: i32;  // ecx
    let v32: i64;  // rcx
    let v33: i32;  // r14d
    let v34: i32;  // eax
    let v35: i64;  // rdx
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rax

    v27 = a2 + 245;
    if *((a2 + 239) as &i8) {
        v1 = (uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v27) | -0x100 | 1) as u32;
        v19 = uu_ls::create_hyperlink(v3, v4, a1);
        v4 = v21;
        v2 = v19;
    }
    if *((v26 + 29) as &i8) != 2 {
        v1 = v29 | -0x100 | 1;
        v19 = uu_ls::colors::color_name(*((&v2 as &char + 8) as &i64), v4, a1, v26, v25, 0, v0);
        v4 = v21;
        v2 = v19;
    }
    v30 = *((a2 + 248) as &i8);
    v31 = a5 | -0x100 | 1;
    v4 = v4;
    v2 = v2;
    if (*((a5 + 16) as &i64) & v30 != 1) {
        *(&v19.field_0 as &struct24) = struct24 {
            field_0: *(v32 as &i128)
            field_16: *((v32 + 16) as &i64)
        };
        v1 = 0;
        v14 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v19, *((&v2 as &char + 8) as &i64), v4);
        v2 = v14;
        v31 = 0;
        v4 = v4;
        v2 = v2;
    }
    v1 = v31;
    v33 = *((a2 + 244) as &i8);
    if v33 {
        v34 = uu_ls::classify_file(a1, v25);
        if v33 == 3 {
LABEL_52c2e7:
            if !(v34 == 0x110000) {
                goto LABEL_52c2f5;
            }
        } else if v33 == 2 {
            if v34 == 42 {
                goto LABEL_52c301;
            }
            goto LABEL_52c2e7;
        } else if v34 == 47 {
LABEL_52c2f5:
            v2 = alloc::string::String::push(v34, v35);
        }
    }
LABEL_52c301:
    if v30 == 1 && uu_ls::PathData::file_type(a1, v25) {
        v36 = uu_ls::PathData::file_type(a1, v25);
        if !v36 {
            core::option::unwrap_failed(); /* do not return */
        } else if (0xf000 & *(v36 as &i32)) == 0xa000 && !*((a1 + 296) as &i8) {
            v17 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v17 {
                Err(_) => {
                    v5 = v20;
                    v14 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24);
                    v21 = v14;
                    v20 = v5;
                    v19 = 2;
                    uucore::mods::error::set_exit_code();
                    v12 = uucore::util_name();
                    v13 = v35;
                    eprintln!("{:?}: {:?}", &v12, &v19);
                },
                Ok(_) => {
                    v8 = v17;
                    v2 = alloc::vec::Vec<T,A>::append_elements(" -> ");
                    if *((v26 + 29) as &i8) == 2 {
                        v19 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v27);
                        v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v20, v21 + v20), v35);
                    } else {
                        v19 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8);
                        v11 = v21;
                        v10 = v19;
                        if !std::path::Path::is_absolute(*((&v8 as &char + 8) as &i64), v9) as i8 {
                            v37 = std::path::Path::parent(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v35, v32);
                            if v37 {
                                v19 = v10;
                                v14 = std::path::Path::join(v37, v35, &v19);
                                v10 = v14;
                                v11 = v16;
                            }
                        }
                        v12 = v10;
                        v14 = 0;
                        v5 = 0x8000000000000000;
                        uu_ls::PathData::new(&v19, &v12, &v14, &v5, *((a2 + 235) as &i8) as u8 as u64, *((a2 + 242) as &i8) as u8 as u64);
                        if uu_ls::PathData::get_metadata(a1, v25) {
LABEL_52c719:
                            v14 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v27);
                            v5 = uu_ls::colors::color_name(v15, v16, a1, v26, v25, &v19, v0);
                            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v6, v7 + v6), v35);
                        } else {
                            v14 = uu_ls::get_metadata_with_deref_opt(v22, v23, v24 as u8 as u64);
                            if v14 == 2 {
                                v14 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                                v5 = core::result::Result<T,E>::unwrap(&v14);
                                v14 = std::sys::os_str::bytes::Slice::to_string_lossy(v6, v7);
                                v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v15, v16 + v15), v35);
                            } else {
                                goto LABEL_52c719;
                            }
                        }
                    }
                },
            }
        }
    }
    v2 = v2;
    if a3 == 1 {
        v2 = v2;
        if *((a2 + 235) as &i8) {
            if v30 != 4 {
                v5 = uu_ls::pad_left(*((a1 + 56) as &i64), *((a1 + 64) as &i64), a4);
            } else {
                v5 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
            }
            v18 = format!("{:?} {:?}", &v5, &v2);
            v4 = *((&v18 as &char + 16) as &i64);
            v2 = v18;
            v2 = v2;
        }
    }
    v38 = v4;
    return struct24 {
        field_0: v2
        field_16: v38
    };
}
