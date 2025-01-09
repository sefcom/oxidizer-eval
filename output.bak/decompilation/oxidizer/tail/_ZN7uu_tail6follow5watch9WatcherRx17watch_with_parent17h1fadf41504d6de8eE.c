fn uu_tail::follow::watch::WatcherRx::watch_with_parent(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0xb8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i64;  // [sp-0x98], Other Possible Types: struct24, Result<struct24, struct8>, struct28
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [bp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i128;  // [sp-0x68], Other Possible Types: struct24
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: i64;  // [sp-0x48]
    let v15: i64;  // r15
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v19: i64;  // r15
    let v20: i64;  // rdi

    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    if std::path::Path::is_file(v1, v2) as i8 {
        v15 = std::path::Path::parent(v1, v2);
        if !v15 {
            v8 = *((&v0 as &char + 8) as &i128);
            v10 = &v8;
            v11 = <std::path::Display as core::fmt::Display>::fmt;
            v3 = "cannot watch parent directory of ";
            v4 = 1;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            core::option::Option<T>::map_or_else();
            v3 = struct28 {
                field_0: v12
                field_16: v13
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v3);
            return v17;
        }
        if std::path::Path::is_dir(v15, v16) as i8 {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v15, v16);
            v2 = v5;
        } else {
            v3 = std::sys::os_str::bytes::Slice::to_owned(".");
            v8 = v3;
            v2 = v9;
        }
        v0 = v3;
    }
    if !std::path::Path::is_absolute(v1, v2) as i8 {
        v3 = std::fs::canonicalize(v1, v2);
        v19 = v3;
        v20 = v4;
        if v19 == 0x8000000000000000 {
            v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
            return v17;
        }
        v0 = v19;
        v1 = v20;
        v2 = v5;
    }
    v17 = uu_tail::follow::watch::WatcherRx::watch(a0, a1);
    if v17 {
        return v17;
    }
    return 0;
}
