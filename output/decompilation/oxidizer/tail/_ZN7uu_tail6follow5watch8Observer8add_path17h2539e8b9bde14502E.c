fn uu_tail::follow::watch::Observer::add_path(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i8) -> long long {
    let v0: std::path::PathBuf;  // [bp-0x280]
    let v1: u64;  // [bp-0x278]
    let v2: u64;  // [bp-0x270]
    let v3: struct216;  // [bp-0x260], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>
    let v4: u64;  // [bp-0x258]
    let v5: u64;  // [bp-0x188]
    let v6: struct32;  // [bp-0x180]
    let v7: u64;  // [bp-0x178]
    let v8: u8;  // [bp-0xd8]

    if *((a0 + 142) as &i8) == 2 {
        return 0;
    }
    if std::path::Path::is_absolute(a1, a2) {
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
    } else {
        v3 = std::env::current_dir();
        match v3 {
            Err(_) => {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            },
            Ok(_) => {
                v5 = v3 as i64;
                v6 = v4;
                v7 = *((&v3 as &char + 16) as &i64);
                v0 = std::path::Path::join(v6, *((&v3 as &char + 16) as &i64), a1, a2);
            },
        }
    }
    v3 = std::fs::metadata(v1, v2);
    if let Ok(_) = v3 {
        memcpy(&v8, &v4, 168);
    }
    v5 = v3 as i64;
    memcpy(&v6, &v8, 168);
    v3 = uu_tail::follow::files::PathData::new(a5, a6, &v5, a3, a4);
    uu_tail::follow::files::FileHandling::insert(a0 + 56, v1, v2, &v3, a7);
    return 0;
}
