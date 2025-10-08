fn uu_tail::follow::watch::Observer::add_path(a0: i64, a1: &u8, a2: u64, a3: u64, a4: u32, a5: u64, a6: u64, a7: u8) -> long long {
    let v0: struct24;  // [bp-0x288]
    let v1: u64;  // [bp-0x280]
    let v2: u64;  // [bp-0x278]
    let v3: struct216;  // [bp-0x260], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>
    let v4: u64;  // [bp-0x260]
    let v5: u64;  // [bp-0x258]
    let v6: u64;  // [bp-0x188]
    let v7: u8;  // [bp-0x180]
    let v8: iNone;  // [bp-0xd8], Other Possible Types: u8

    if *((a0 + 142) as &i8) == 2 {
        return 0;
    }
    if std::path::Path::is_absolute(a1, a2) {
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1 as u32);
    } else {
        v3 = std::env::current_dir();
        if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        }
        v0 = std::path::Path::join(v5, *((&v3 as &char + 16) as &i64), a1, a2);
    }
    v3 = std::fs::metadata(v1, v2);
    if let Ok(_) = v3 {
        memcpy(&v8, &v5, 168);
    }
    v6 = v3 as i64;
    memcpy(&v7, &v8, 168);
    v3 = uu_tail::follow::files::PathData::new(a5, a6, &v6, a3, a4);
    uu_tail::follow::files::FileHandling::insert(a0 + 56, v1, v2, &v3, a7);
    return 0;
}
