fn flea::updater::find_update(a1: &std::sys::os_str::bytes::Slice, a2: i64, a3: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: std::sys::os_str::bytes::Buf;  // [bp-0xe8], Other Possible Types: struct16
    let v1: u64;  // [bp-0xe0]
    let v2: u64;  // [bp-0xd8]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xd0]
    let v5: struct24;  // [bp-0xd0]
    let v6: u32;  // [bp-0xc8]
    let v8: u64;  // rsi
    let v9: u64;  // rdx

    v0 = std::sys::os_str::bytes::Slice::to_owned(v8, v9);
    v0 = std::path::PathBuf::push(a2, a3);
    v3 = std::fs::metadata(v1, v2);
    if v3 as i64 == 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v4 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v1, v2);
    match v4 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6, *((&v4 as &char + 16) as &i64));
            return Some(struct24 {
                field_0: *(&v5.field_0 as &i128)
                field_16: v5.field_16
            });
        },
    }
}
