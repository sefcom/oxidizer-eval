fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: u64, a1: u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xb8], Other Possible Types: int, struct24, Result<struct24, struct8>
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0xa8]
    let v4: struct24;  // [sp-0x98], Other Possible Types: Result<struct24, struct8>, String
    let v5: i64;  // [sp-0x88]
    let v6: i32;  // [bp-0x80]
    let v7: iNone;  // [sp-0x68]
    let v8: i64;  // [sp-0x58]
    let v9: String;  // [sp-0x40]
    let v11: i64;  // r15
    let v12: i64;  // rdx
    let v14: i64;  // rbx

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    if std::path::Path::is_file(v1, v3) as i8 {
        v11 = std::path::Path::parent(v1, v3);
        if !v11 {
            v7 = *(&v0.field_8 as &i128);
            v9 = format!("cannot watch parent directory of {}", &v7);
            *(&v6 as &i32) = 1;
            v4 = v9;
            alloc::boxed::Box<T>::new(&v4);
            return v14;
        }
        if std::path::Path::is_dir(v11, v12) as i8 {
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v11, v12);
            v2 = v5;
        } else {
            v4 = std::sys::os_str::bytes::Slice::to_owned(".");
            v2 = v8;
        }
        *(&v0 as &i128) = *(&v4.field_0 as &i128);
    }
    if !std::path::Path::is_absolute(v1, v2) as i8 {
        v4 = std::fs::canonicalize(v1, v2);
        if v0 == 0x8000000000000000 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            return v14;
        }
        v0 = v4;
    }
    if uu_tail::follow::watch::WatcherRx::watch(a0, a1) {
        return v14;
    }
    return 0;
}
