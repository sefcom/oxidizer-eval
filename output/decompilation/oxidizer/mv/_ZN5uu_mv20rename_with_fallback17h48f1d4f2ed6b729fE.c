fn uu_mv::rename_with_fallback(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: i64;  // [bp-0x288]
    let <0x4eb800[is_37]|Stack bp-0x1f8, 1 B>: i64;  // [bp-0x1f8]
    let v1: void*;  // [bp-0x278]
    let v2: struct24;  // [bp-0x260], Other Possible Types: u128
    let v3: Result<struct48, struct16>;  // [bp-0x260]
    let v4: u128;  // [bp-0x250]
    let v5: u128;  // [bp-0x240]
    let v6: u64;  // [bp-0x230]
    let v7: void*;  // [bp-0x228]
    let v8: u32;  // [bp-0x220]
    let v9: u64;  // [bp-0x218]
    let v10: u64;  // [bp-0x210]
    let v11: u64;  // [bp-0x208]
    let v12: u64;  // [bp-0x200]
    let v13: struct56;  // [bp-0x1f8]
    let v14: struct24;  // [bp-0x1e8], Other Possible Types: struct48, core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v15: Result<struct48, struct16>;  // [bp-0x1e8]
    let v16: u64;  // [bp-0x1e8]
    let v17: u64;  // [bp-0x1e0]
    let v19: struct48;  // [bp-0x138]
    let v20: struct48;  // [bp-0x138]
    let v23: struct32;  // [bp-0x108]
    let v24: u8;  // [bp-0xe8]
    let v25: u8;  // [bp-0xd0]
    let v26: u8;  // [bp-0xb8]
    let v27: u128;  // [bp-0xa8]
    let v28: u64;  // [bp-0xa0]
    let v29: u128;  // [bp-0x98]
    let v31: u32;  // eax
    let v32: core::result::Result<(), std::io::error::Error>;  // rax
    let v33: core::result::Result<(), std::io::error::Error>;  // rax
    let v34: core::fmt::Arguments;  // rbp
    let v35: u64;  // rdx
    let v36: u64;  // rbp
    let v38: u64;  // rax

    v9 = a0;
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v16 = std::fs::rename(a0, a1, a2, a3);
    if !v16 {
        return 0;
    }
    v14 = std::fs::symlink_metadata(a0, a1);
    if let Err(_) = v14 {
        return v17;
    }
    v31 = *((&v14 as &char + 56) as &i32) & 0xf000;
    match (v31) {
        16384 => {
            v14 = std::fs::metadata(a2, a3);
            if let Ok(_) = v14 {
                v34 = std::fs::remove_dir_all(a2, a3);
                if v34 {
                    return v34;
                }
            }
            v8 = 0x10000;
            v6 = 0xfa00;
            v7 = 0;
            v14 = fs_extra::dir::get_size(a0, a1);
            if let Err(_) = v14 {
                if a4 {
                    indicatif::progress_bar::ProgressBar::new(v17, a2);
                    indicatif::style::ProgressStyle::with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}", a3);
                    core::result::Result<T,E>::unwrap(&v26, &v14, "src/uu/mv/src/mv.rs");
                    v2 = indicatif::progress_bar::ProgressBar::with_style(&v26, a3);
                    indicatif::multi::MultiProgress::add(a4, &v24, a3);
                }
            }
            v15 = uucore::features::fsxattr::retrieve_xattrs(a0, a1);
            if let Err(_) = v15 {
                v19 = uu_mv::rename_with_fallback::{{closure}}(v17);
            }
            if v1 {
                v0 = &v1;
                fs_extra::dir::move_dir_with_progress(&v2, a0, a1, a2, a3, &v6);
            } else {
                v3 = fs_extra::dir::move_dir(a0, a1, a2, a3, &v6);
            }
            v14 = v20;
            core::result::Result<T,E>::unwrap(uucore::features::fsxattr::apply_xattrs(a2, a3, &v14));
            if v3 as i64 != 0x8000000000000000 {
                v27 = v4;
                v29 = v5;
                v26 = v2;
                if v28 == 9223372036854775809 {
                    v38 = std::io::error::Error::new(1, "Permission denied");
                } else {
                    v13 = struct56 {
                        field_0: &v26
                        field_8: <fs_extra::error::Error as core::fmt::Debug>::fmt
                        field_16: &g_41c350
                        field_24: 1
                        field_32: &<0x4eb800[is_37]|Stack bp-0x1f8, 1 B> as u64
                        field_40: 1
                        field_48: 0
                    };
                    v14 = core::option::Option<T>::map_or_else(a2);
                    v38 = std::io::error::Error::new(39, &v25);
                }
                return v38;
            }
            break;
        }
        40960 => {
            v32 = uu_mv::rename_symlink_fallback(a0, a1, a2);
        }
        _ => {
            if std::path::Path::is_symlink(a2, a3) {
                v33 = std::fs::remove_file(a2, a3);
                v23 = struct32 {
                    field_0: a2
                    field_8: a3
                    field_16: a0
                    field_24: a1
                };
                if let Err(_) = v33 {
                    return uu_mv::rename_with_fallback::{{closure}}(&v23, v33);
                }
            }
            if !std::fs::copy(a0, a1, a2, a3) {
                v36 = uucore::features::fsxattr::copy_xattrs(&v9, &v11);
                if v36 {
                    return v36;
                }
            } else if v35 {
                return v35;
            }
            v32 = std::fs::remove_file(a0, a1);
        }
    }
    return v32;
}
