fn uu_split::filter_args(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x68]
    let v1: Option<struct24>;  // [bp-0x68], Other Possible Types: std::sys::os_str::bytes::Buf, u192
    let v2: u64;  // [bp-0x60]
    let v3: u32;  // [bp-0x58]
    let v4: u128;  // [bp-0x48]
    let v5: u64;  // [bp-0x38]

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
        Ok(_) => {
            if uu_split::should_extract_obs_lines(v2, v3, *(a3 as &i8) as u8 as u64, *(a4 as &i8) as u8 as u64) as i8 {
                v1 = uu_split::handle_extract_obs_lines(v2, v3, a2);
            } else {
                v1 = std::sys::os_str::bytes::Slice::to_owned(v2, v3);
            }
            v5 = v3;
            v4 = v1 as i128;
            uu_split::handle_preceding_options(v2, v3, a3, a4);
            return struct24 {
                field_0: v4
                field_16: v5
            };
        },
    }
}
