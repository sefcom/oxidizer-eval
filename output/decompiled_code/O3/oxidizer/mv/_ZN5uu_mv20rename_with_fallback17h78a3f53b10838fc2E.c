fn uu_mv::rename_with_fallback(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x288]
    let v1: struct24;  // [sp-0x278], Other Possible Types: i64
    let v2: i192;  // [sp-0x260], Other Possible Types: struct48, struct24
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x228]
    let v5: i32;  // [sp-0x220]
    let v6: i64;  // [sp-0x218]
    let v7: i64;  // [sp-0x210]
    let v8: i64;  // [sp-0x208]
    let v9: i64;  // [sp-0x200]
    let v10: i384;  // [sp-0x1e8], Other Possible Types: Result<struct176, struct16>, struct48
    let v11: i64;  // [sp-0x1e0]
    let v12: i128;  // [bp-0x1d8]
    let v13: i128;  // [bp-0x1c8]
    let v14: i8;  // [sp-0x138]
    let v15: i128;  // [sp-0x128]
    let v16: i128;  // [sp-0x118]
    let v17: i64;  // [sp-0x108]
    let v18: i64;  // [sp-0x100]
    let v19: i64;  // [sp-0xf8]
    let v20: i64;  // [sp-0xf0]
    let v21: struct24;  // [sp-0xe8], Other Possible Types: i192
    let v22: i192;  // [sp-0xd0]
    let v23: i128;  // [sp-0xb8], Other Possible Types: struct136
    let v25: i64;  // rbx
    let v26: i64;  // r14
    let v27: i64;  // r15
    let v28: i64;  // r12
    let v29: i32;  // eax
    let v31: i64;  // rdx
    let v32: i64;  // rax
    let v33: i64;  // rdx
    let v34: i64;  // rax

    v25 = a3;
    v26 = a2;
    v27 = a1;
    v28 = a0;
    v6 = a0;
    v7 = a1;
    v8 = a2;
    v9 = a3;
    v10 = std::fs::rename(a0, a1, a2, a3);
    if !v10 {
        return 0;
    }
    v10 = std::fs::symlink_metadata(v28, v27);
    if v10 == 2 {
        return v34;
    }
    switch (v29) {
    case 16384:
        v10 = std::fs::metadata(v26, v25);
        match v10 {
            Ok(_) => {
                v34 = std::fs::remove_dir_all(v26, v25, v33);
                if v34 {
                    return v34;
                }
            },
            Err(_) => {
                v5 = 0x10000;
                v3 = 0xfa00;
                v4 = 0;
                v10 = fs_extra::dir::get_size(v28, v27);
            },
        }
        if v10 != 0x8000000000000000 {
            goto LABEL_4eae3a;
        } else if !a4 {
LABEL_4eae3a:
            v1 = 0;
            break;
        } else {
            v2 = indicatif::progress_bar::ProgressBar::new(v10.8, v33);
            v10 = indicatif::style::ProgressStyle::with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
            v23 = core::result::Result<T,E>::unwrap(&v10, "src/uu/mv/src/mv.rs");
            v21 = indicatif::progress_bar::ProgressBar::with_style(&v2, &v23);
            v1 = indicatif::multi::MultiProgress::add(a4, &v21);
            break;
        }
        v10 = uucore::features::fsxattr::retrieve_xattrs(v28, v27);
        if v10 {
            v16 = *((&v10 as &char + 32) as &i128);
            v15 = *((&v10 as &char + 16) as &i128);
            v14 = v10;
        } else {
            uu_mv::rename_with_fallback::{{closure}}(&v14, v11, v33);
        }
        if !v1 {
            v2 = fs_extra::dir::move_dir(v28, v27, v26, v25, &v3);
        } else {
            v2 = fs_extra::dir::move_dir_with_progress(v28, v27, v26, v25, &v3, v0);
        }
        v13 = v16;
        v12 = v15;
        v10 = v14;
        core::result::Result<T,E>::unwrap(uucore::features::fsxattr::apply_xattrs(v26, v25, &v10));
        if v2 != 0x8000000000000000 {
            v23.16 = (stack_base)[592] as i128;
            v23.32 = (stack_base)[576] as i128;
            v23 = v2;
            if *((&v23 as &char + 24) as &i64) != 9223372036854775809 {
                v22 = format!("{:?}", &v23);
                v34 = std::io::error::Error::new(39, &v22);
            } else {
                v34 = std::io::error::Error::new(1, "Permission denied");
            }
            return v34;
        }
    case 40960:
        return uu_mv::rename_symlink_fallback(v28, v27, v26, v25);
    default:
        if !std::path::Path::is_symlink(v26, v25) as i8 || (v32 = std::fs::remove_file(v26, v25, v31), v17 = v26, v18 = v25, v19 = v28, v20 = v27, !v32) {
            if std::fs::copy(v28, v27, v26, v25) {
                return v34;
            }
            v34 = uucore::features::fsxattr::copy_xattrs(&v6, &v8, v31);
            if v34 {
                return v34;
            }
            v34 = std::fs::remove_file(v28, v27, v31);
        } else {
            v34 = uu_mv::rename_with_fallback::{{closure}}(&v17, v32);
        }
        return v34;
    }
}
