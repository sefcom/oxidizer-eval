fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: u64, a1: void*, a2: u32, a3: i64) -> long long {
    let v0: struct24;  // [bp-0xc8], Other Possible Types: struct44
    let v1: u64;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: struct24;  // [sp-0xa8], Other Possible Types: u64
    let v4: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xa8]
    let v5: u64;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: u64;  // [bp-0x98]
    let v8: core::fmt::Arguments;  // [bp-0x90]
    let v9: struct44;  // [bp-0x78], Other Possible Types: u64
    let v10: u64;  // [bp-0x70]
    let v11: u64;  // [bp-0x68]
    let v12: alloc::string::String;  // [bp-0x48]
    let v14: u64;  // rbx
    let v15: u64;  // r12
    let v16: u64;  // r13
    let v17: u64;  // rdx
    let v18: struct44;  // xmm0
    let v19: struct80;  // r14

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
    v14 = v1;
    v15 = v2;
    if std::path::Path::is_file(v14, v15) {
        v16 = std::path::Path::parent(v14, v15);
        if !v16 {
            v9 = v14;
            v10 = v15;
            v12 = format!("cannot watch parent directory of {}", &v9);
            v8 = 1;
            v3 = *(&v12.vec.buf.inner.cap as &i128);
            v6 = v12.vec.len;
            alloc::boxed::Box<T>::new(&v3);
            return v19;
        }
        if std::path::Path::is_dir(v16, v17) {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v16);
            v2 = v7;
        } else {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(".");
            v11 = v7;
            *(&v9.field_0 as &i128) = *(&v3.field_0 as &i128);
            v2 = v11;
        }
        v0 = v18;
    }
    if std::path::Path::is_absolute(v1, v2) {
        uu_tail::follow::watch::WatcherRx::watch(a0, a1);
        return 0;
    }
    v4 = std::fs::canonicalize(v1, v2);
    if !((((0 ^ v4 as i64) & (0 ^ -(v3))) >> 63) as char) {
        uu_tail::follow::watch::WatcherRx::watch(a0, a1);
        return 0;
    }
    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    return v19;
}
