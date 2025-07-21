fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: std::path::PathBuf;  // [bp-0xb8], Other Possible Types: u128
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa8]
    let v3: alloc::string::String;  // [bp-0x98], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>, std::path::PathBuf, u128
    let v4: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: std::io::stdio::Stdin;  // [bp-0x80]
    let v8: u128;  // [bp-0x68]
    let v10: alloc::string::String;  // [bp-0x40]
    let v12: core::option::Option<&std::path::Path>;  // r15
    let v13: u64;  // rdx
    let v14: core::fmt::Arguments;  // rbx
    let v15: u128;  // xmm0

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    if std::path::Path::is_file(v1, v2) {
        v12 = std::path::Path::parent(v1, v2) as u64;
        match v12 {
            None => {
                v8 = *(&v0.inner.inner.vec.buf.ptr as &i128);
                v10 = format!("cannot watch parent directory of {}", &v8);
                v7 = 1;
                v3 = *(&v10.vec.buf.cap as &i128) as u128;
                v6 = v10.vec.len;
                v14 = alloc::boxed::Box<T>::new(&v3 as u384);
                return v14;
            },
            Some(_) => {
                if std::path::Path::is_dir(v12, v13) as u8 {
                    v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v12, v13);
                } else {
                    v3 = std::sys::os_str::bytes::Slice::to_owned(".");
                }
                v0 = v15;
            },
        }
    }
    if !std::path::Path::is_absolute(v1, v2) {
        v3 = std::fs::canonicalize(v1, v2);
        if let Err(_) = v3 {
            v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v14;
        }
    }
    v14 = uu_tail::follow::watch::WatcherRx::watch(a0, a1);
    return 0;
}
