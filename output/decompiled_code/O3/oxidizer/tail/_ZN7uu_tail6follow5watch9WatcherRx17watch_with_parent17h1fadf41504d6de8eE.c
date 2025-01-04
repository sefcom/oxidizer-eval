fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i192;  // [sp-0xb8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [bp-0x98], Other Possible Types: struct24, Result<struct24, struct16>
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: i192;  // [sp-0x40]
    let v10: i64;  // rdx
    let v11: i64;  // rcx
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v15: i64;  // r15
    let v16: i64;  // rdi

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    if std::path::Path::is_file(v1, v2) as i8 {
        v12 = std::path::Path::parent(v1, v2, v10, v11);
        if !v12 {
            v6 = *((&v0 as &char + 8) as &i128);
            v8 = format!("cannot watch parent directory of {:?}", &v6);
            v3 = v8;
            alloc::boxed::Box<T>::new(&v3);
            return v13;
        }
        if std::path::Path::is_dir(v12, v10) as i8 {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v12, v10);
            v2 = v5;
        } else {
            v3 = std::sys::os_str::bytes::Slice::to_owned(".");
            v7 = v5;
            v6 = v3;
            v2 = v7;
        }
        v0 = v3;
    }
    if !std::path::Path::is_absolute(v1, v2) as i8 {
        v3 = std::fs::canonicalize(v1, v2);
        v15 = v3;
        v16 = v4;
        if v15 == 0x8000000000000000 {
            v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
            return v13;
        }
        v0 = v15;
        v1 = v16;
        v2 = v5;
    }
    v13 = uu_tail::follow::watch::WatcherRx::watch(a0, a1);
    if v13 {
        return v13;
    }
    return 0;
}
