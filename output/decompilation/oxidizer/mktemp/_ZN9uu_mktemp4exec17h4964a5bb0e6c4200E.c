fn uu_mktemp::exec(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i8) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x68], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: std::path::PathBuf;  // [bp-0x38]
    let v7: i64;  // rdi
    let v8: core::option::Option<&std::ffi::os_str::OsStr>;  // rax
    let v9: i64;  // rdi

    if vvar_7 {
        uu_mktemp::make_temp_dir(a0, a1, a2, a3, a4, a5, a6, *(&v0 as &i64));
    } else {
        uu_mktemp::make_temp_file(a0, a1, a2, a3, a4, a5, a6, *(&v0 as &i64));
    }
    if v0 == 0x8000000000000000 {
        *((v7 + 8) as &u64) = v4;
        *((v7 + 16) as &u64) = v5;
        *(v7 as &i64) = 0x8000000000000000;
        return;
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    v8 = std::path::Path::file_name(v4, v5) as u64;
    if let Some(_) = v8 {
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v8, a1);
        if let Ok(_) = v0 {
            v6 = std::path::Path::join(a0, a1, v1, v2);
            *((v9 + 16) as &u64) = v6.inner.inner.inner.len;
            *(v9 as &i128) = *(&v6.inner.inner.inner.buf.cap as &i128);
            return;
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
