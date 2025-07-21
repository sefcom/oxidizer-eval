fn uu_cp::platform::linux::copy_fifo_contents(a0: i64, a1: i64, a2: i64, a3: i384) -> long long {
    let v0: struct40;  // [bp-0xf8]
    let v1: std::fs::File;  // [bp-0xf4]
    let v2: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0xf0]
    let v3: Result<struct4, struct8>;  // [bp-0xe0], Other Possible Types: struct24
    let v4: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xc8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0], Other Possible Types: u32
    let v8: u32;  // [bp-0xc0]
    let v9: core::result::Result<(), std::io::error::Error>;  // [bp-0xbc], Other Possible Types: struct24
    let v10: u32;  // [bp-0xb8]
    let v11: u8;  // [bp-0xb7]
    let v12: struct32;  // [bp-0xb4], Other Possible Types: struct64
    let v15: u32;  // eax

    v3 = a0;
    v4 = a1;
    v5 = a2;
    v6 = a3;
    v3 = std::fs::File::open(a2);
    if v7 {
        return 1;
    }
    v0 = v9;
    v15 = uucore::features::mode::get_umask() as i32;
    v8 = 0;
    v12 = 0;
    v10 = 0;
    v12 = 1;
    v11 = 1;
    v9 = ~(v15) & 402;
    v2 = std::fs::OpenOptions::open(&v8, &v5, a3);
    if let Err(_) = v2 {
        return 1;
    }
    v1 = *((&v2 as &char + 4) as &i32);
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v0, &v1) {
        v7 = std::fs::File::metadata(&v0);
    }
    return 1;
}
