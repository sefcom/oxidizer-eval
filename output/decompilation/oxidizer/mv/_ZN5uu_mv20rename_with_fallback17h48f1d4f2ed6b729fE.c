fn uu_mv::rename_with_fallback(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0x288]
    let v1: void*;  // [bp-0x278]
    let v2: struct24;  // [bp-0x260]
    let v3: u128;  // [bp-0x260]
    let v4: Result<struct48, struct16>;  // [bp-0x260]
    let v5: u128;  // [bp-0x240]
    let v6: u64;  // [bp-0x230]
    let v7: void*;  // [bp-0x228]
    let v8: u32;  // [bp-0x220]
    let v9: u64;  // [bp-0x218]
    let v10: u64;  // [bp-0x210]
    let v11: u64;  // [bp-0x208]
    let v12: u64;  // [bp-0x200]
    let v13: i64;  // [bp-0x1f8]
    let v14: u64;  // [bp-0x1f0]
    let v15: Result<struct48, struct16>;  // [bp-0x1e8], Other Possible Types: u256, struct24
    let v16: Result<struct48, struct16>;  // [bp-0x1e8]
    let v17: u64;  // [bp-0x1e8]
    let v18: u64;  // [bp-0x1e0]
    let v19: i64;  // [bp-0x1d8]
    let v20: u64;  // [bp-0x1d0]
    let v21: void*;  // [bp-0x1c8]
    let v22: u8;  // [bp-0x138], Other Possible Types: struct48
    let v23: u256;  // [bp-0x138]
    let v24: u8;  // [bp-0x128]
    let v25: u128;  // [bp-0x118]
    let v26: u64;  // [bp-0x108]
    let v27: u64;  // [bp-0x100]
    let v28: u64;  // [bp-0xf8]
    let v29: u64;  // [bp-0xf0]
    let v30: u8;  // [bp-0xe8]
    let v31: u8;  // [bp-0xd0]
    let v32: u8;  // [bp-0xb8]
    let v33: u8;  // [bp-0xa8]
    let v34: u64;  // [bp-0xa0]
    let v35: u128;  // [bp-0x98]
    let v38: core::result::Result<(), std::io::error::Error>;  // rax
    let v39: core::result::Result<(), std::io::error::Error>;  // rax
    let v40: u64;  // rbp
    let v41: u64;  // rdx
    let v42: u64;  // rbp
    let v44: u64;  // rax

    v9 = a0;
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v17 = std::fs::rename(a0, a1, a2, a3);
    if !v17 {
        return 0;
    }
    v15 = std::fs::symlink_metadata(a0, a1);
    if let Err(_) = v15 {
        return v18;
    }
    match (*((&v15 as &char + 56) as &i32) & 0xf000) {
        16384 => {
            v15 = std::fs::metadata(a2, a3);
            if let Ok(_) = v15 {
                v40 = std::fs::remove_dir_all(a2, a3);
                if v40 {
                    return v40;
                }
            }
            v8 = 0x10000;
            v6 = 0xfa00;
            v7 = 0;
            v15 = fs_extra::dir::get_size(a0, a1);
            if let Err(_) = v15 {
                if a4 {
                    indicatif::progress_bar::ProgressBar::new(v18, a2);
                    indicatif::style::ProgressStyle::with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}", a3);
                    core::result::Result<T,E>::unwrap(&v32, &v15, "src/uu/mv/src/mv.rs");
                    v2 = indicatif::progress_bar::ProgressBar::with_style(&v32, a3);
                    indicatif::multi::MultiProgress::add(a4, &v30, a3);
                }
            }
            v16 = uucore::features::fsxattr::retrieve_xattrs(a0, a1);
            match v16 {
                Ok(_) => {
                    memcpy(&v25, &v16, 16);
                    memcpy(&v24, &v16, 16);
                    memcpy(&v22, &v16, 16);
                },
                Err(_) => {
                    v22 = uu_mv::rename_with_fallback::{{closure}}(v18);
                },
            }
            if v1 {
                v0 = &v1;
                fs_extra::dir::move_dir_with_progress(&v3, a0, a1, a2, a3, &v6);
            } else {
                v4 = fs_extra::dir::move_dir(a0, a1, a2, a3, &v6);
            }
            memcpy(&v16 as u8, &v25, 16);
            v15 = v23;
            core::result::Result<T,E>::unwrap(uucore::features::fsxattr::apply_xattrs(a2, a3, &v15));
            if let Ok(_) = v4 {
                memcpy(&v33, &v4 as u128, 16);
                v35 = v5;
                v32 = v4 as i128;
                if v34 == 9223372036854775809 {
                    v44 = std::io::error::Error::new(1, "Permission denied");
                } else {
                    v13 = &v32;
                    v14 = <fs_extra::error::Error as core::fmt::Debug>::fmt;
                    v15 = &g_41c350;
                    v18 = 1;
                    v21 = 0;
                    v19 = &v13;
                    v20 = 1;
                    v15 = core::option::Option<T>::map_or_else(a2);
                    v44 = std::io::error::Error::new(39, &v31);
                }
                return v44;
            }
            break;
        }
        40960 => {
            v38 = uu_mv::rename_symlink_fallback(a0, a1, a2);
        }
        _ => {
            if std::path::Path::is_symlink(a2, a3) {
                v39 = std::fs::remove_file(a2, a3);
                v26 = a2;
                v27 = a3;
                v28 = a0;
                v29 = a1;
                if let Err(_) = v39 {
                    return uu_mv::rename_with_fallback::{{closure}}(&v26, v39);
                }
            }
            if !std::fs::copy(a0, a1, a2, a3) {
                v42 = uucore::features::fsxattr::copy_xattrs(&v9, &v11);
                if v42 {
                    return v42;
                }
            } else if v41 {
                return v41;
            }
            v38 = std::fs::remove_file(a0, a1);
        }
    }
    return v38;
}
