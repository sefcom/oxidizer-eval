fn uu_mv::rename_with_fallback(a0: u64, a1: u64, a2: u64, a3: u64, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x288]
    let v1: i64;  // [sp-0x278], Other Possible Types: struct24
    let v2: struct48;  // [sp-0x260], Other Possible Types: i384, struct24
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x228]
    let v5: i32;  // [sp-0x220]
    let v6: i64;  // [sp-0x218]
    let v7: i64;  // [sp-0x210]
    let v8: i64;  // [sp-0x208]
    let v9: i64;  // [sp-0x200]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i1096;  // [sp-0x1e8], Other Possible Types: struct16, Result<struct136, struct5>, struct48
    let v13: i64;  // [sp-0x1e0]
    let v14: i128;  // [bp-0x1d8]
    let v15: i64;  // [sp-0x1d0]
    let v16: i64;  // [bp-0x1c8]
    let v18: i128;  // [sp-0x138], Other Possible Types: struct48
    let v19: i128;  // [sp-0x128]
    let v20: i128;  // [sp-0x118]
    let v21: i64;  // [sp-0x108]
    let v22: i64;  // [sp-0x100]
    let v23: i64;  // [sp-0xf8]
    let v24: i64;  // [sp-0xf0]
    let v25: struct24;  // [sp-0xe8], Other Possible Types: i192
    let v26: i8;  // [bp-0xd0]
    let v27: i384;  // [sp-0xb8], Other Possible Types: struct136, struct48
    let v29: i64;  // r14
    let v30: i64;  // r12
    let v31: i64;  // rbx
    let v32: i64;  // r15
    let v33: i32;  // eax
    let v34: i64;  // rax
    let v36: i64;  // rax

    v29 = a3;
    v30 = a2;
    v31 = a1;
    v32 = a0;
    v6 = a0;
    v7 = a1;
    v8 = a2;
    v9 = a3;
    v12 = std::fs::rename(a0, a1, a2, a3);
    if !v12 {
        return 0;
    }
    v12 = std::fs::symlink_metadata(v32, v31);
    if v12 == 2 {
        return v34;
    }
    switch (v33) {
    case 16384:
        v12 = std::fs::metadata(v30, v29);
        if v12 != 2 {
            v34 = std::fs::remove_dir_all(v30, v29);
            if v34 {
                return v34;
            }
        }
        v5 = 0x10000;
        v3 = 0xfa00;
        v4 = 0;
        v12 = fs_extra::dir::get_size(v32, v31);
        if v12 != 0x8000000000000000 {
            goto LABEL_4eba5a;
        } else if !a4 {
LABEL_4eba5a:
            v1 = 0;
            break;
        } else {
            v2 = indicatif::progress_bar::ProgressBar::new(v13);
            v12 = indicatif::style::ProgressStyle::with_template(&g_426c5f);
            v27 = core::result::Result<T,E>::unwrap(&v12, "src/uu/mv/src/mv.rs");
            v25 = indicatif::progress_bar::ProgressBar::with_style(&v2, &v27);
            v1 = indicatif::multi::MultiProgress::add(a4, &v25);
            break;
        }
        v12 = uucore::features::fsxattr::retrieve_xattrs(v32, v31);
        if v12 {
            v20 = *((&v12 as &char + 32) as &i128);
            v19 = *((&v12 as &char + 16) as &i128);
            v18 = v12;
        } else {
            v18 = uu_mv::rename_with_fallback::{{closure}}(v13);
        }
        if !v1 {
            v2 = fs_extra::dir::move_dir(v32, v31, v30, v29, &v3);
        } else {
            v0 = &v1;
            v2 = fs_extra::dir::move_dir_with_progress(v32, v31, v30, v29, &v3);
        }
        v16 = v20;
        v14 = v19;
        v12 = v18;
        core::result::Result<T,E>::unwrap(uucore::features::fsxattr::apply_xattrs(v30, v29, &v12));
        if v2 != 0x8000000000000000 {
            v27 = v2;
            if *((&v27 as &char + 24) as &i64) != 9223372036854775809 {
                v10 = &v27;
                v11 = <fs_extra::error::Error as core::fmt::Debug>::fmt;
                v12 = &g_41c350;
                v13 = 1;
                v16 = 0;
                v14 = &v10;
                v15 = 1;
                core::option::Option<T>::map_or_else();
                v34 = std::io::error::Error::new(39, &v26);
            } else {
                v34 = std::io::error::Error::new(1, "Permission denied");
            }
            return v34;
        }
    case 40960:
        v34 = uu_mv::rename_symlink_fallback(v32, v31, v30);
        goto LABEL_4ebadc;
    default:
        if std::path::Path::is_symlink(v30, v29) as i8 {
            v36 = std::fs::remove_file(v30, v29);
            v21 = v30;
            v22 = v29;
            v23 = v32;
            v24 = v31;
            if v36 {
                v34 = uu_mv::rename_with_fallback::{{closure}}(&v21, v36);
                return v34;
            }
        }
        if !std::fs::copy(v32, v31, v30, v29) {
            v34 = uucore::features::fsxattr::copy_xattrs(&v6, &v8);
            if v34 {
                return v34;
            }
        } else if v34 {
            return v34;
        }
        v34 = std::fs::remove_file(v32, v31);
LABEL_4ebadc:
        if v34 {
            return v34;
        }
    }
}
