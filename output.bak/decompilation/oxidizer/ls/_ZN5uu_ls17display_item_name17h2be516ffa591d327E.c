fn uu_ls::display_item_name(a0: &struct24, a1: void*, a2: &u64, a3: u32, a4: u32, a5: &struct24) -> u64 {
    let v0: i8;  // [bp-0x310]
    let v1: i32;  // [sp-0x2fc]
    let v2: i128;  // [sp-0x2f8], Other Possible Types: struct16, struct24
    let v3: i8;  // [bp-0x2f0]
    let v4: i64;  // [sp-0x2e8]
    let v5: i64;  // [sp-0x2e0], Other Possible Types: struct24
    let v6: i64;  // [sp-0x2d8]
    let v7: i64;  // [sp-0x2d0]
    let v8: i192;  // [bp-0x2b8]
    let v9: i64;  // [sp-0x2a8]
    let v10: struct24;  // [sp-0x298], Other Possible Types: i128
    let v11: i64;  // [sp-0x288]
    let v12: i64;  // [sp-0x278]
    let v13: i64;  // [sp-0x270]
    let v14: i64;  // [sp-0x268]
    let v15: i200;  // [sp-0x248], Other Possible Types: struct24, struct16, Result<struct24, struct8>
    let v16: i64;  // [sp-0x240]
    let v17: i64;  // [sp-0x238]
    let v18: i64;  // [sp-0x230]
    let v19: i200;  // [sp-0x198], Other Possible Types: Result<struct24, struct8>
    let v20: i8;  // [bp-0x170]
    let v21: struct24;  // [bp-0x168], Other Possible Types: i64
    let v22: i64;  // [sp-0x160]
    let v23: i64;  // [sp-0x158], Other Possible Types: struct24
    let v24: i64;  // [sp-0x150]
    let v25: i64;  // [sp-0x148]
    let v26: i8;  // [bp-0x140]
    let v27: i8;  // [bp-0x40]
    let v28: i64;  // [bp+0x8]
    let v29: i8;  // [bp+0x10]
    let v30: i64;  // r12
    let v32: i64;  // rcx
    let v33: i8;  // r15b
    let v34: i32;  // ecx
    let v36: i32;  // r14d
    let v37: i32;  // eax
    let v38: i64;  // rax
    let v39: i64;  // rdx
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rdx

    v30 = a2 + 245;
    if *((a2 + 239) as &i8) {
        v1 = (uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v30) | -0x100 | 1) as u32;
        uu_ls::create_hyperlink(&v21, v3, v4, a1);
        v4 = v23;
        v2 = v21;
    }
    if *((v29 + 29) as &i8) != 2 {
        v1 = v32 | -0x100 | 1;
        v21 = uu_ls::colors::color_name(*((&v2 as &char + 8) as &i64), v4, a1, v29, v28, 0, v0);
        v2 = v21;
    }
    v33 = *((a2 + 248) as &i8);
    v34 = a5 | -0x100 | 1;
    if (*((a5 + 16) as &i64) & v33 != 1) {
        v21 = struct24 {
            field_0: *(v35 as &i128)
            field_16: *((v35 + 16) as &i64)
        };
        v1 = 0;
        v15 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v21, *((&v2 as &char + 8) as &i64), v4);
        v2 = v15;
        v34 = 0;
    }
    v1 = v34;
    v36 = *((a2 + 244) as &i8);
    if v36 {
        v37 = uu_ls::classify_file(a1, v28) as i32;
        if v36 == 3 {
LABEL_52c2e7:
            if !(v37 == 0x110000) {
                goto LABEL_52c2f5;
            }
        } else if v36 == 2 {
            if v37 == 42 {
                goto LABEL_52c301;
            }
            goto LABEL_52c2e7;
        } else if v37 == 47 {
LABEL_52c2f5:
            v2 = alloc::string::String::push(v37);
        }
    }
LABEL_52c301:
    if v33 == 1 && uu_ls::PathData::file_type(a1, v28) {
        v38 = uu_ls::PathData::file_type(a1, v28);
        if !v38 {
            core::option::unwrap_failed("src/uu/ls/src/ls.rs"); /* do not return */
        } else if (0xf000 & *(v38 as &i32)) == 0xa000 && !*((a1 + 296) as &i8) {
            v19 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v19 {
                Err(_) => {
                    v5 = v22;
                    v15 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24);
                    v23 = v15;
                    v22 = v5;
                    v21 = 2;
                    uucore::mods::error::set_exit_code(1);
                    v12 = uucore::util_name();
                    v13 = v39;
                    eprintln!("{:?}: {:?}", &v12, &v21);
                },
                Ok(v8) => {
                    v2 = alloc::vec::Vec<T,A>::append_elements(" -> ");
                    if *((v29 + 29) as &i8) == 2 {
                        v21 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v30);
                        v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v22, v23 + v22), v40);
                    } else {
                        v21 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8);
                        v10 = v21;
                        if !std::path::Path::is_absolute(*((&v8 as &char + 8) as &i64), v9) as i8 {
                            v41 = std::path::Path::parent(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                            if v41 {
                                v21 = struct24 {
                                    field_0: v10
                                    field_16: v11
                                };
                                v15 = std::path::Path::join(v41, v42, &v21);
                                v10 = v15;
                            }
                        }
                        v14 = v11;
                        v12 = v10;
                        v15 = 0;
                        v5 = 0x8000000000000000;
                        uu_ls::PathData::new(&v21, &v12, &v15, &v5, *((a2 + 235) as &i8) as u8 as u64, *((a2 + 242) as &i8) as u8 as u64);
                        if uu_ls::PathData::get_metadata(a1, v28) {
LABEL_52c719:
                            v15 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v30);
                            v5 = uu_ls::colors::color_name(v16, v17, a1, v29, v28, &v21, v0);
                            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v6, v7 + v6), v42);
                        } else {
                            v15 = uu_ls::get_metadata_with_deref_opt(v25, v26, v27 as u8 as u64);
                            if v15 == 2 {
                                v15 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                                v5 = core::result::Result<T,E>::unwrap(&v15);
                                v15 = std::sys::os_str::bytes::Slice::to_string_lossy(v6, v7);
                                v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v16, v17 + v16), v42);
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
    if a3 != 1 {
        return struct24 {
            field_0: v2
            field_16: v43
        };
    }
    v2 = v2;
    if *((a2 + 235) as &i8) {
        if v33 != 4 {
            uu_ls::pad_left(&v5, *((a1 + 56) as &i64), *((a1 + 64) as &i64), a4);
        } else {
            v5 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
        }
        v15 = &v5;
        v16 = <alloc::string::String as core::fmt::Display>::fmt;
        v17 = &v2;
        v18 = <alloc::string::String as core::fmt::Display>::fmt;
        v21 = &g_6125e8;
        v22 = 2;
        v25 = 0;
        v23 = &v15;
        v24 = 2;
        core::option::Option<T>::map_or_else();
        v4 = v20;
        v2 = v19;
        v2 = v2;
    }
}
