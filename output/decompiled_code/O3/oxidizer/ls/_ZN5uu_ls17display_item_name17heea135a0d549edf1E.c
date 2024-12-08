fn uu_ls::display_item_name(a0: void*, a1: void*, a2: &u64, a3: u32, a4: u64, a5: void*) -> u64 {
    let v0: i8;  // [bp-0x310]
    let v1: i32;  // [sp-0x2fc]
    let v2: struct16;  // [sp-0x2f8], Other Possible Types: i128
    let v3: i8;  // [bp-0x2f0]
    let v4: i64;  // [sp-0x2e8]
    let v5: struct24;  // [sp-0x2e0], Other Possible Types: i192, struct8
    let v6: i64;  // [sp-0x2d8]
    let v7: i64;  // [sp-0x2d0]
    let v8: i128;  // [sp-0x2b8]
    let v9: i64;  // [sp-0x2a8]
    let v10: i128;  // [sp-0x298]
    let v11: i64;  // [sp-0x288]
    let v12: i64;  // [sp-0x278], Other Possible Types: struct24
    let v13: i64;  // [sp-0x270]
    let v14: i1408;  // [sp-0x248], Other Possible Types: struct24, Result<struct24, struct16>, struct8
    let v15: i64;  // [sp-0x230]
    let v16: Result<struct24, struct16>;  // [sp-0x198], Other Possible Types: i192
    let v17: i192;  // [sp-0x180], Other Possible Types: struct24
    let v18: i64;  // [bp-0x168], Other Possible Types: struct24
    let v19: i64;  // [sp-0x160]
    let v20: i64;  // [sp-0x158]
    let v21: i64;  // [sp-0x150]
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
        uu_ls::create_hyperlink(&v18, v3, v4, a1);
        v4 = v20;
        v2 = v18;
    }
    if *((v26 + 29) as &i8) != 2 {
        v1 = v29 | -0x100 | 1;
        uu_ls::colors::color_name(&v18, *((&v2 as &char + 8) as &i64), v4, a1, v26, v25, 0, v0);
        v4 = v20;
        v2 = v18;
    }
    v30 = *((a2 + 248) as &i8);
    v31 = a5 | -0x100 | 1;
    if (*((a5 + 16) as &i64) & v30 != 1) {
        *(&v18.field_0 as &struct24) = struct24 {
            field_0: *(v32 as &i128)
            field_16: *((v32 + 16) as &i64)
        };
        v1 = 0;
        v14 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v18, *((&v2 as &char + 8) as &i64), v4);
        v4 = v14.field_16;
        v2 = v14;
        v31 = 0;
    }
    v1 = v31;
    v33 = *((a2 + 244) as &i8);
    if v33 {
        v34 = uu_ls::classify_file(a1, v25) as i32;
        if v33 == 3 {
LABEL_52c287:
            if !(v34 == 0x110000) {
                goto LABEL_52c295;
            }
        } else if v33 == 2 {
            if v34 == 42 {
                goto LABEL_52c2a1;
            }
            goto LABEL_52c287;
        } else if v34 == 47 {
LABEL_52c295:
            v2 = alloc::string::String::push(v34, v35);
        }
    }
LABEL_52c2a1:
    if v30 == 1 && uu_ls::PathData::file_type(a1, v25) {
        v36 = uu_ls::PathData::file_type(a1, v25);
        if !v36 {
            core::option::unwrap_failed(); /* do not return */
        } else if (0xf000 & *(v36 as &i32)) == 0xa000 && !*((a1 + 296) as &i8) {
            v16 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v16 {
                Err(_) => {
                    v5 = v19;
                    v14 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24);
                    v22 = v14.field_16;
                    v20 = v14;
                    v19 = v5;
                    v18 = 2;
                    uucore::mods::error::set_exit_code();
                    v12 = uucore::util_name();
                    v13 = v35;
                    eprintln!("{:?}: {:?}", &v12, &v18);
                },
                Ok(_) => {
                    v9 = *((&v16 as &char + 16) as &i64);
                    v8 = v16;
                    v2 = alloc::vec::Vec<T,A>::append_elements(" -> ");
                    if *((v26 + 29) as &i8) == 2 {
                        v18 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v27);
                        v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v18.8, v18.field_16 + v18.8), v35);
                    } else {
                        v18 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8);
                        v11 = v18.field_16;
                        v10 = v18;
                        if !std::path::Path::is_absolute(*((&v8 as &char + 8) as &i64), v9) as i8 {
                            v37 = std::path::Path::parent(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v35, v32);
                            if v37 {
                                *(&v18.field_0 as &struct24) = struct24 {
                                    field_0: v10
                                    field_16: v11
                                };
                                v14 = std::path::Path::join(v37, v35, &v18);
                                v10 = v14;
                                v11 = v14.field_16;
                            }
                        }
                        *(&v12.field_0 as &struct24) = struct24 {
                            field_0: v10
                            field_16: v11
                        };
                        v14 = struct8 {
                            field_0: 0
                        };
                        v5 = struct8 {
                            field_0: 0x8000000000000000
                        };
                        uu_ls::PathData::new(&v18, &v12, &v14, &v5, *((a2 + 235) as &i8) as u8 as u64, *((a2 + 242) as &i8) as u8 as u64);
                        if uu_ls::PathData::get_metadata(a1, v25) {
LABEL_52c6b9:
                            v14 = uucore::features::quoting_style::escape_name(*((&v8 as &char + 8) as &i64), v9, v27);
                            uu_ls::colors::color_name(&v5, v14.8, v14.field_16, a1, v26, v25, &v18, v0);
                            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v6, v7 + v6), v35);
                        } else {
                            v14 = uu_ls::get_metadata_with_deref_opt(v22, v23, v24 as u8 as u64);
                            if v14 == 2 {
                                v14 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                                v5 = core::result::Result<T,E>::unwrap(&v14);
                                v14 = std::sys::os_str::bytes::Slice::to_string_lossy(v5.8, v5.field_16);
                                v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v14.field_8, v14.field_16 + v14.field_8), v35);
                            } else {
                                goto LABEL_52c6b9;
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
            v14 = &v5;
            v14.8 = <alloc::string::String as core::fmt::Display>::fmt;
            v14.field_16 = stack_base + -760;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v18 = &g_6127e8;
            v19 = 2;
            v22 = 0;
            v18.field_16 = stack_base + -584;
            v21 = 2;
            v17 = core::option::Option<T>::map_or_else(&v18);
            v4 = *((&v17 as &char + 16) as &i64);
            v2 = v17;
            v2 = v2;
        }
    }
    v38 = v4;
    return struct24 {
        field_0: v2
        field_16: v38
    };
}
