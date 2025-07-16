fn uu_dd::stdout_canonicalized() -> : struct24 {
    let a0: i64;  // rdi
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x38]
    let v1: u64;  // [bp-0x28]
    let v2: std::sys::os_str::bytes::Buf;  // [bp-0x20]

    v0 = std::fs::canonicalize("/dev/stdout");
    match v0 {
        Ok(_) => {
            return struct24 {
                field_0: v0 as i128
                field_16: v1
            };
        },
        Err(_) => {
            v2 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdout");
            return struct24 {
                field_0: *(&v2.inner.buf.cap as &i128)
                field_16: v2.inner.len
            };
        },
    }
}
