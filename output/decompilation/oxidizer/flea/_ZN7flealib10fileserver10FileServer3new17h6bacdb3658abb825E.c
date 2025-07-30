fn flealib::fileserver::FileServer::new(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x40], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v1: void*;  // [bp-0x38]
    let v2: u32;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]

    v0 = std::env::current_dir();
    v3 = core::result::Result<T,E>::unwrap(&v0);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v4, v3.field_16);
    match v0 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v1, v2);
            return struct24 {
                field_0: v0.field_0
                field_16: v2
            };
        },
    }
}
