fn uu_ls::is_hidden(a0: i64) -> long long {
    let v0: u32;  // [bp-0x40], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: std::ffi::os_str::OsString;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v6: u32;  // ebx
    let v7: u64;  // rdx
    let v9: &mut [u8];  // rax:rdx

    v3 = std::fs::DirEntry::file_name(a0);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v4, v3.inner.inner.len);
    if let Ok(_) = v0 {
        v0 = 0;
        v9 = core::char::methods::encode_utf8_raw(46, &v0, v7);
        v6 = core::slice::<impl [T]>::starts_with(v1, v2, v9.data_ptr, v9.length) as u32;
    }
    return v6;
}
