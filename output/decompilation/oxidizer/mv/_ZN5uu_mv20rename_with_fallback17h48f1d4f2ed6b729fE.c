fn uu_mv::rename_with_fallback(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x288]
    let v1: struct24;  // [sp-0x278], Other Possible Types: unsigned long
    let v2: struct24;  // [sp-0x260]
    let v3: struct48;  // [sp-0x260], Other Possible Types: int
    let v4: i64;  // [sp-0x230]
    let v5: i64;  // [sp-0x228]
    let v6: i32;  // [sp-0x220]
    let v7: i64;  // [sp-0x218]
    let v8: i64;  // [sp-0x210]
    let v9: i64;  // [sp-0x208]
    let v10: i64;  // [sp-0x200]
    let v11: Result<struct176, struct8>;  // [sp-0x1e8], Other Possible Types: struct48, unsigned long, int
    let v12: i64;  // [sp-0x1e0]
    let v13: iNone;  // [bp-0x1d8]
    let v14: iNone;  // [bp-0x1c8]
    let v15: iNone;  // [sp-0x138], Other Possible Types: Result<struct48, struct8>, struct48
    let v16: iNone;  // [sp-0x128]
    let v17: iNone;  // [sp-0x118]
    let v18: i64;  // [sp-0x108]
    let v19: i64;  // [sp-0x100]
    let v20: i64;  // [sp-0xf8]
    let v21: i64;  // [sp-0xf0]
    let v22: struct24;  // [sp-0xe8]
    let v23: String;  // [sp-0xd0]
    let v24: struct136;  // [sp-0xb8], Other Possible Types: struct48
    let v27: i64;  // rbp
    let v28: i32;  // eax
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rbp
    let v32: i64;  // rdx

    v7 = a0;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    if !v11 {
        return 0;
    }
    v11 = std::fs::symlink_metadata(a0, a1);
    match v11 {
        Err(v27) => {
            return v27;
        },
        Ok(_) => {
            match (v28) {
                16384 => {
                    v11 = std::fs::metadata(a2, a3);
                    if vvar_168{reg 56} != 2 {
                        v31 = std::fs::remove_dir_all(a2, a3);
                        if v31 {
                            return v27;
                        }
                    }
                    v6 = 0x10000;
                    v4 = 0xfa00;
                    v5 = 0;
                    v11 = fs_extra::dir::get_size(a0, a1);
                    if v11 != 0x8000000000000000 || !a4 {
                        v1 = 0;
                        break;
                    } else {
                        v2 = indicatif::progress_bar::ProgressBar::new(v12);
                        v11 = indicatif::style::ProgressStyle::with_template(&g_426c5f);
                        v24 = core::result::Result<T,E>::unwrap(&v11, "src/uu/mv/src/mv.rs");
                        v22 = indicatif::progress_bar::ProgressBar::with_style(&v2, &v24);
                        v1 = indicatif::multi::MultiProgress::add(a4, &v22);
                        break;
                    }
                    v11 = uucore::features::fsxattr::retrieve_xattrs(a0, a1);
                    if v11 {
                        v15 = v11;
                    } else {
                        v15 = uu_mv::rename_with_fallback::{{closure}}(v12);
                    }
                    if !v1 {
                        v3 = fs_extra::dir::move_dir(a0, a1, a2, a3, &v4);
                    } else {
                        v0 = &v1;
                        v3 = fs_extra::dir::move_dir_with_progress(a0, a1, a2, a3, &v4);
                    }
                    v14 = v17;
                    v13 = v16;
                    v11 = v15;
                    core::result::Result<T,E>::unwrap(uucore::features::fsxattr::apply_xattrs(a2, a3, &v11));
                    if v3 as i64 != 0x8000000000000000 {
                        v24 = v3;
                        if *((&v24.field_16 as &char + 8) as &i64) != 9223372036854775809 {
                            v23 = format!("{:?}", &v24);
                            std::io::error::Error::new(39, &v23);
                        } else {
                            std::io::error::Error::new(1, "Permission denied");
                        }
                        return v27;
                    }
                }
                40960 => {
                    v29 = uu_mv::rename_symlink_fallback(a0, a1, a2);
                    goto LABEL_4ebadc;
                }
                _ => {
                    if std::path::Path::is_symlink(a2, a3) as i8 {
                        v30 = std::fs::remove_file(a2, a3);
                        v18 = a2;
                        v19 = a3;
                        v20 = a0;
                        v21 = a1;
                        if v30 {
                            v27 = uu_mv::rename_with_fallback::{{closure}}(&v18, v30);
                            return v27;
                        }
                    }
                    if !std::fs::copy(a0, a1, a2, a3) {
                        v27 = uucore::features::fsxattr::copy_xattrs(&v7, &v9);
                        if v27 {
                            return v27;
                        }
                    } else {
                        v27 = v32;
                        if v32 {
                            return v27;
                        }
                    }
                    v29 = std::fs::remove_file(a0, a1);
LABEL_4ebadc:
                    v27 = v29;
                    if v29 {
                        return v27;
                    }
                }
            }
        },
    }
}
