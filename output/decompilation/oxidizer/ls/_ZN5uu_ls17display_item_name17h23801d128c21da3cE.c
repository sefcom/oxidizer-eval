fn uu_ls::display_item_name(a0: i64, a1: void*, a2: i64, a3: u64, a4: u32, a5: i64, a6: i64, a7: &u64) -> void {
    let v0: u32;  // [bp-0x2fc]
    let v1: u128;  // [bp-0x2f8]
    let v2: struct24;  // [bp-0x2f8]
    let v3: u128;  // [bp-0x2f8]
    let v4: u64;  // [bp-0x2f0]
    let v5: u64;  // [bp-0x2e8]
    let v6: u64;  // [bp-0x2e8]
    let v7: u64;  // [bp-0x2e8]
    let v8: i64;  // [bp-0x2e0]
    let v9: struct24;  // [bp-0x2d8], Other Possible Types: u64
    let v10: u128;  // [bp-0x2b8]
    let v11: void*;  // [bp-0x2b0], Other Possible Types: u64
    let v12: u64;  // [bp-0x2a8]
    let v13: void*;  // [bp-0x298]
    let v14: core::fmt::rt::Argument;  // [bp-0x290]
    let v15: iNone;  // [bp-0x288], Other Possible Types: struct24
    let v16: struct16;  // [bp-0x288]
    let v17: struct16;  // [bp-0x288]
    let v18: u64;  // [bp-0x278]
    let v19: u64;  // [bp-0x268]
    let v20: u64;  // [bp-0x258]
    let v21: i64;  // [bp-0x250]
    let v22: u64;  // [bp-0x248]
    let v23: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x240]
    let v24: u64;  // [bp-0x240]
    let v25: u64;  // [bp-0x238]
    let v26: u64;  // [bp-0x230]
    let v27: void*;  // [bp-0x228], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>, struct24, u128
    let v28: Result<struct176, struct16>;  // [bp-0x228]
    let v29: alloc::string::String;  // [bp-0x228]
    let v31: u128;  // [bp-0x220]
    let v32: u64;  // [bp-0x218]
    let v33: u64;  // [bp-0x210]
    let v34: u64;  // [bp-0x208]
    let v35: u8;  // [bp-0x200]
    let v36: struct24;  // [bp-0x178], Other Possible Types: u64
    let v37: struct24;  // [bp-0x178]
    let v38: struct24;  // [bp-0x178]
    let v39: u64;  // [bp-0x170]
    let v40: u64;  // [bp-0x168]
    let v41: u64;  // [bp-0x168]
    let v42: u64;  // [bp-0x168]
    let v43: u64;  // [bp-0x158]
    let v44: u8;  // [bp-0x150]
    let v45: u8;  // [bp-0x50]
    let v46: alloc::string::String;  // [bp-0x48]
    let v47: u64;  // r12
    let v48: struct24;  // eax
    let v49: core::fmt::rt::Argument;  // rax
    let v51: u8;  // bl
    let v52: u32;  // r15d
    let v53: u32;  // eax
    let v55: i64;  // rax
    let v56: u64;  // rdx
    let v57: u64;  // rax
    let v59: u64;  // r12
    let v60: &mut [u8];  // rax:rdx

    v20 = a3;
    v47 = a2 + 252;
    v48 = uucore::features::quoting_style::escape_name(a1[8] as i64, a1[16] as i64, v47);
    if *((a2 + 247) as &i8) {
        v0 = v48 & -0x100 | 1;
        v36 = uu_ls::create_hyperlink(v4, v5, a1);
        v7 = v42;
        v1 = v36.field_0;
    }
    v49 = a6 + 104;
    v14 = v49;
    if *((a6 + 133) as &i8) != 2 {
        uu_ls::colors::color_name(&v36, &v1, a1, v14, a6, 0, uu_ls::display_item_name::{{closure}}(a2, a7, v7));
        v49 = v42;
        v7 = v49;
        v1 = *(&v36 as &i128);
    }
    v51 = *((a2 + 0x100) as &i8);
    v0 = v49 as u32 & -0x100 | 1;
    v5 = v7;
    v40 = v42;
    if v51 != 1 {
        v5 = v7;
        v40 = v42;
        if *((a5 + 16) as &i64) {
            v37 = v2;
            v2 = struct24 {
                field_0: *(v8 as &i128)
                field_16: *((v8 + 16) as &i64)
            };
            std::ffi::os_str::OsString::push(&v2, &v37);
            v0 = 0;
            v5 = v6;
            v40 = v41;
        }
    }
    v52 = *((a2 + 255) as &i8);
    if v52 {
        v53 = uu_ls::classify_file(a1, a6);
        if v52 != 1 {
            if (v52 != 2 || v53 != 42) && v53 != 0x110000 {
                goto LABEL_59e74e;
            }
            goto LABEL_59e73f;
        }
        if v53 != 47 {
            goto LABEL_59e73f;
        }
LABEL_59e74e:
        v9 = 0;
        v60 = core::char::methods::encode_utf8_raw(v53, &v9, a2);
        v36 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v60.data_ptr, a2);
        v32 = v40;
        v27 = v36.field_0;
        std::ffi::os_str::OsString::push(&v2, *((&v27 as &char + 8) as &i64), v40);
        if v51 != 1 || !uu_ls::PathData::file_type(a1, a6) {
            goto LABEL_59e938;
        }
        v55 = uu_ls::PathData::file_type(a1, a6);
        core::option::unwrap(v55);
        if (0xf000 & *(v55 as &i32)) != 0xa000 || a1[296] as i8 == 1 {
            goto LABEL_59e938;
        }
        v23 = std::fs::read_link(a1[32] as i64, a1[40] as i64);
        if (((0 ^ v23 as i64) & (0 ^ -(v24))) >> 63) as char {
            v22 = v25;
            v36 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1[32] as i64, a1[40] as i64);
            v33 = v40;
            v31 = v36.field_0;
            v34 = v22;
            v35 = 0;
            v27 = 9223372036854775810;
            uucore::mods::error::set_exit_code(1);
            v10 = uucore::util_name();
            v11 = v56;
            eprintln!("{}: {}", &v10, &v27);
LABEL_59e938:
            v6 = v5;
            if *((a2 + 243) as &i8) {
                goto LABEL_59e946;
            }
        } else {
            v12 = v26;
            v10 = v23 as i128;
            std::ffi::os_str::OsString::push(&v2, " -> ");
            if *((a6 + 133) as &i8) == 2 {
                v36 = uucore::features::quoting_style::escape_name(v11, v12, v47);
                std::ffi::os_str::OsString::push(&v2, &v36);
            } else {
                v13 = v11;
                v36 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v11, v12);
                v18 = v40;
                v15 = v36.field_0;
                v19 = v12;
                v16 = v15;
                if !std::path::Path::is_absolute(v13, v19) {
                    v57 = std::path::Path::parent(a1[32] as i64, a1[40] as i64);
                    v16 = v15;
                    if v57 {
                        v37 = std::path::Path::join(v57, a2, &v15);
                        v15 = v38;
                        v16 = v17;
                    }
                }
                v27 = 0;
                v9 = 0x8000000000000000;
                uu_ls::PathData::new(&v36, &v16, &v27, &v9, *((a2 + 243) as &i8), *((a2 + 250) as &i8), 0);
                if !uu_ls::PathData::get_metadata(a1, a6) {
                    v28 = uu_ls::get_metadata_with_deref_opt(v43, *(&v44 as &i64), v45);
                    if let Ok(_) = v28 {
                        goto LABEL_59eca1;
                    }
                    v27 = std::fs::read_link(a1[32] as i64, a1[40] as i64);
                    v9 = core::result::Result<T,E>::unwrap(&v27);
                    std::ffi::os_str::OsString::push(&v2, &v9);
                } else {
LABEL_59eca1:
                    v27 = uucore::features::quoting_style::escape_name(v13, v19, v47);
                    uu_ls::colors::color_name(&v9, &v27, a1, v14, a6, &v36, uu_ls::display_item_name::{{closure}}(a2, a7, v5));
                    std::ffi::os_str::OsString::push(&v2, &v9);
                }
            }
            v6 = v5;
            if *((a2 + 243) as &i8) {
LABEL_59e946:
                v6 = v5;
                if (v20 as i8 & 1) {
                    if v51 == 4 {
                        v29 = <alloc::string::String as core::clone::Clone>::clone(a1 + 48);
                    } else {
                        v27 = uu_ls::pad_left(a1[56] as i64, a1[64] as i64, a4);
                    }
                    v59 = v1;
                    v46 = format!("{} ", &v29);
                    v3 = *(&v46.vec.buf.inner.cap as &i128);
                    v6 = v46.vec.len;
                    v36 = v59;
                    v39 = v4;
                    v40 = v5;
                    std::ffi::os_str::OsString::push(&v2, &v36);
                }
            }
        }
    } else {
LABEL_59e73f:
        goto LABEL_59e938;
    }
    *((v21 + 16) as &u64) = v6;
    *(v21 as &u128) = v1;
    return;
}
