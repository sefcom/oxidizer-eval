fn uu_ls::display_item_name(a0: void*, a1: void*, a2: &u64, a3: u32, a4: u64, a5: void*) -> u64 {
    let v0: i8;  // [bp-0x310]
    let v1: i32;  // [sp-0x2fc]
    let v2: i128;  // [sp-0x2f8], Other Possible Types: struct16
    let v3: i8;  // [bp-0x2f0]
    let v4: i64;  // [sp-0x2e8]
    let v5: struct24;  // [sp-0x2e0], Other Possible Types: i64
    let v6: i192;  // [bp-0x2b8]
    let v7: i64;  // [sp-0x2a8]
    let v8: i128;  // [sp-0x298]
    let v9: i64;  // [sp-0x288]
    let v10: i192;  // [sp-0x278]
    let v11: i64;  // [sp-0x270]
    let v12: i192;  // [sp-0x248], Other Possible Types: struct24, Result<struct24, struct16>
    let v13: Result<struct24, struct16>;  // [sp-0x198], Other Possible Types: i192
    let v14: i192;  // [sp-0x180]
    let v15: i192;  // [sp-0x168], Other Possible Types: struct24
    let v16: i64;  // [sp-0x160]
    let v17: i192;  // [bp-0x158]
    let v18: i64;  // [sp-0x148]
    let v19: i8;  // [bp-0x140]
    let v20: i8;  // [bp-0x40]
    let v21: i64;  // [bp+0x8]
    let v22: i8;  // [bp+0x10]
    let v23: i64;  // r12
    let v25: i64;  // rcx
    let v26: i8;  // r15b
    let v27: i32;  // ecx
    let v28: i64;  // rcx
    let v29: i32;  // r14d
    let v30: i32;  // eax
    let v31: i64;  // rdx
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax

    v23 = a2 + 245;
    if *((a2 + 239) as &i8) {
        v1 = (uucore::features::quoting_style::escape_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v23) | -0x100 | 1) as u32;
        v15 = uu_ls::create_hyperlink(v3, v4, a1);
        v4 = v15.field_16;
        v2 = v15;
    }
    if *((v22 + 29) as &i8) != 2 {
        v1 = v25 | -0x100 | 1;
        v15 = uu_ls::colors::color_name(*((&v2 as &char + 8) as &i64), v4, a1, v22, v21, 0, v0);
        v4 = v15.field_16;
        v2 = v15;
    }
    v26 = *((a2 + 248) as &i8);
    v27 = a5 | -0x100 | 1;
    v4 = v4;
    v2 = v2;
    if (*((a5 + 16) as &i64) & v26 != 1) {
        *(&v15.field_0 as &struct24) = struct24 {
            field_0: *(v28 as &i128)
            field_16: *((v28 + 16) as &i64)
        };
        v1 = 0;
        v12 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v15, *((&v2 as &char + 8) as &i64), v4);
        v2 = v12;
        v27 = 0;
        v4 = v4;
        v2 = v2;
    }
    v1 = v27;
    v29 = *((a2 + 244) as &i8);
    if v29 {
        v30 = uu_ls::classify_file(a1, v21) as i32;
        if v29 == 3 {
LABEL_52c287:
            if !(v30 == 0x110000) {
                goto LABEL_52c295;
            }
        } else if v29 == 2 {
            if v30 == 42 {
                goto LABEL_52c2a1;
            }
            goto LABEL_52c287;
        } else if v30 == 47 {
LABEL_52c295:
            v2 = alloc::string::String::push(v30, v31);
        }
    }
LABEL_52c2a1:
    if v26 == 1 && uu_ls::PathData::file_type(a1, v21) {
        v32 = uu_ls::PathData::file_type(a1, v21);
        if !v32 {
            core::option::unwrap_failed(); /* do not return */
        } else if (0xf000 & *(v32 as &i32)) == 0xa000 && !*((a1 + 296) as &i8) {
            v13 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v13 {
                Err(_) => {
                    v5 = v16;
                    v12 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1 + 24);
                    v17 = v12;
                    v16 = v5;
                    v15 = 2;
                    uucore::mods::error::set_exit_code();
                    v10 = uucore::util_name();
                    v11 = v31;
                    eprintln!("{:?}: {:?}", &v10, &v15);
                },
                Ok(_) => {
                    v6 = v13;
                    v2 = alloc::vec::Vec<T,A>::append_elements(" -> ");
                    if *((v22 + 29) as &i8) == 2 {
                        v15 = uucore::features::quoting_style::escape_name(*((&v6 as &char + 8) as &i64), v7, v23);
                        v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v15.8, v15.field_16 + v15.8), v31);
                    } else {
                        v15 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v6);
                        v9 = v15.field_16;
                        v8 = v15;
                        if !std::path::Path::is_absolute(*((&v6 as &char + 8) as &i64), v7) as i8 {
                            v33 = std::path::Path::parent(*((a1 + 32) as &i64), *((a1 + 40) as &i64), v31, v28);
                            if v33 {
                                v15 = v8;
                                v12 = std::path::Path::join(v33, v31, &v15);
                                v8 = v12;
                                v9 = v12.field_16;
                            }
                        }
                        v10 = v8;
                        v12 = 0;
                        v5 = 0x8000000000000000;
                        uu_ls::PathData::new(&v15, &v10, &v12, &v5, *((a2 + 235) as &i8) as u8 as u64, *((a2 + 242) as &i8) as u8 as u64);
                        if uu_ls::PathData::get_metadata(a1, v21) {
LABEL_52c6b9:
                            v12 = uucore::features::quoting_style::escape_name(*((&v6 as &char + 8) as &i64), v7, v23);
                            v5 = uu_ls::colors::color_name(v12.8, v12.field_16, a1, v22, v21, &v15, v0);
                            v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v5.8, v5.field_16 + v5.8), v31);
                        } else {
                            v12 = uu_ls::get_metadata_with_deref_opt(v18, v19, v20 as u8 as u64);
                            if v12 == 2 {
                                v12 = std::fs::read_link(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
                                v5 = core::result::Result<T,E>::unwrap(&v12);
                                v12 = std::sys::os_str::bytes::Slice::to_string_lossy(v5.8, v5.field_16);
                                v2 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v12.field_8, v12.field_16 + v12.field_8), v31);
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
            if v26 != 4 {
                v5 = uu_ls::pad_left(*((a1 + 56) as &i64), *((a1 + 64) as &i64), a4);
            } else {
                v5 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
            }
            v14 = format!("{:?} {:?}", &v5, &v2);
            v4 = *((&v14 as &char + 16) as &i64);
            v2 = v14;
            v2 = v2;
        }
    }
    v34 = v4;
    return struct24 {
        field_0: v2
        field_16: v34
    };
}
