fn flea::updater::start_new_process(a0: i64, a1: &struct24) -> int {
    let v0: struct24;  // [bp-0x188]
    let v1: struct24;  // [bp-0x188]
    let v2: u64;  // [bp-0x180]
    let v3: u64;  // [bp-0x178]
    let v4: i64;  // [bp-0x168], Other Possible Types: u64
    let v5: u64;  // [bp-0x160]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0x158]
    let v7: &str;  // [bp-0x148], Other Possible Types: core::result::Result<std::process::Child, std::io::error::Error>, struct24
    let v8: struct32;  // [bp-0x120], Other Possible Types: struct_0 *
    let v9: u64;  // [bp-0x118]
    let v10: std::sys::os_str::bytes::Buf;  // [bp-0x100]
    let v11: u64;  // [bp-0xf0]
    let v12: std::sys::os_str::bytes::Buf;  // [bp-0xe8], Other Possible Types: struct208, struct24, u64
    let v13: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xe8], Other Possible Types: struct24
    let v14: u64;  // [bp-0xe0]
    let v15: i64;  // [bp-0xd8]
    let v16: u64;  // [bp-0xd0]
    let v17: void*;  // [bp-0xc8]
    let v19: u64;  // rdx
    let v20: u64;  // rcx
    let v21: u64;  // r8

    v12 = std::sys::os_str::bytes::Slice::to_owned(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    v1 = v13;
    v12 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    std::path::PathBuf::push(&v1, &v12);
    v13 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v2, v3);
    match v13 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(v7) => {
            v4 = &v7;
            v8 = &v4;
            v9 = <&T as core::fmt::Display>::fmt;
            v12 = "Starting a new process (path=";
            v14 = 2;
            v17 = 0;
            v15 = &v8;
            v16 = 1;
            v10 = core::option::Option<T>::map_or_else(&v12, v19, v20, v21);
            *(&v4 as &i128) = *(&v10.inner.buf.inner.cap as &i128);
            v6 = v11;
            v7 = v0;
            v12 = std::process::Command::new(&v7);
            v7 = std::process::Command::spawn(&v12);
            v8 = core::result::Result<T,E>::expect(&v7, v5, v6);
            return;
        },
    }
}
