fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0xb8], Other Possible Types: Result<struct24, struct8>, struct24
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i224;  // [bp-0x98], Other Possible Types: struct24, struct28, Result<struct24, struct8>
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [bp-0x80]
    let v6: i64;  // [sp-0x78]
    let v7: i128;  // [sp-0x68]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i64;  // [sp-0x48]
    let v11: i8;  // [bp-0x40]
    let v13: i64;  // r15
    let v14: i64;  // rdx
    let v16: i64;  // rbx

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    if std::path::Path::is_file(v1, v2) as i8 {
        v13 = std::path::Path::parent(v1, v2);
        if !v13 {
            v7 = *((&v0 as &char + 8) as &i128);
            v9 = &v7;
            v10 = <std::path::Display as core::fmt::Display>::fmt;
            v3 = struct28 {
                field_0: "cannot watch parent directory of "
                field_16: &v9
                field_24: <UNKNOWN>
            };
            v6 = 0;
            v5 = 1;
            core::option::Option<T>::map_or_else();
            v3 = v11;
            alloc::boxed::Box<T>::new(&v3);
            return v16;
        }
        if std::path::Path::is_dir(v13, v14) as i8 {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v13, v14);
            v2 = v4;
        } else {
            v3 = std::sys::os_str::bytes::Slice::to_owned(".");
            v2 = v8;
        }
        v0 = v3;
    }
    if !std::path::Path::is_absolute(v1, v2) as i8 {
        v3 = std::fs::canonicalize(v1, v2);
        if v0 == 0x8000000000000000 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
            return v16;
        }
        v0 = v3;
    }
    if uu_tail::follow::watch::WatcherRx::watch(a0, a1) {
        return v16;
    }
    return 0;
}
