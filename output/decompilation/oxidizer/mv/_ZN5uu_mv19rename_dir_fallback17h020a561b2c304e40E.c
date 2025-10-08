fn uu_mv::rename_dir_fallback(a0: u64, a1: u64, a2: u64, a3: u64, a4: &u64) -> long long {
    let v0: i64;  // [bp-0x258]
    let v1: u64;  // [bp-0x250]
    let v2: struct24;  // [bp-0x248]
    let v3: void*;  // [bp-0x248]
    let v4: struct24;  // [bp-0x230]
    let v5: struct48;  // [bp-0x230], Other Possible Types: u384
    let v6: u128;  // [bp-0x220]
    let v7: iNone;  // [bp-0x210]
    let v8: u64;  // [bp-0x200]
    let v9: void*;  // [bp-0x1f8]
    let v10: u32;  // [bp-0x1f0]
    let v11: struct48;  // [bp-0x1d8]
    let v12: iNone;  // [bp-0x1d8]
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1a0]
    let v14: u64;  // [bp-0x1a0]
    let v15: u64;  // [bp-0x198]
    let v16: alloc::string::String;  // [bp-0xf0]
    let v17: iNone;  // [bp-0xd8], Other Possible Types: struct136
    let v18: u128;  // [bp-0xc8]
    let v19: u64;  // [bp-0xc0]
    let v20: iNone;  // [bp-0xb8]
    let v21: struct24;  // [bp-0x48]
    let v22: i8;  // [bp+0x0]
    let v24: u64;  // 4096

    v13 = std::fs::metadata(a2, a3);
    if v13 as i32 == 2 || !std::fs::remove_dir_all(a2, a3) {
        v8 = 0xfa00;
        v10 = 0x10000;
        v9 = 0;
        v13 = fs_extra::dir::get_size(a0, v1);
        if (((0 ^ v13 as i64) & (0 ^ -(v14))) >> 63) as char && a4 {
            v13 = indicatif::style::ProgressStyle::with_template("{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}");
            v17 = core::result::Result<T,E>::unwrap(&v13, "src/uu/mv/src/mv.rs");
            v4 = indicatif::progress_bar::ProgressBar::new(v15);
            memcpy(&v13, &v17, 136);
            v21 = indicatif::progress_bar::ProgressBar::with_style(&v4, &v13);
            v2 = indicatif::multi::MultiProgress::add(a4, &v21, a3);
            v24 = a1;
        } else {
            v3 = 0;
            v24 = v1;
        }
        v13 = uucore::features::fsxattr::retrieve_xattrs(a0, v24);
        if let Err(_) = v13 {
            v11 = uu_mv::rename_dir_fallback::{{closure}}(v15);
        }
        if v3 {
            v0 = &v3 as u8;
            v5 = fs_extra::dir::move_dir_with_progress(a0, v24, a2, a3, &v8);
        } else {
            v5 = fs_extra::dir::move_dir(a0, v24, a2, a3, &v8);
        }
        if !uucore::features::fsxattr::apply_xattrs(a2, a3, &v12) && v5 as i64 != 0x8000000000000000 {
            v18 = v6;
            v20 = v7;
            v17 = v5 as i128;
            if v19 == 9223372036854775809 {
                std::io::error::Error::new(1, "Permission denied");
            } else {
                v16 = format!("{}", &v17);
                std::io::error::Error::new(40, &v16);
            }
        }
    }
    return &v22;
}
