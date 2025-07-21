fn uu_uniq::filter_args(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x88]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x80], Other Possible Types: std::sys::os_str::bytes::Buf
    let v2: Option<struct24>;  // [bp-0x80], Other Possible Types: u192
    let v3: u32;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: u128;  // [bp-0x68]
    let v6: u64;  // [bp-0x58]
    let v7: i64;  // [bp-0x48]
    let v9: u32;  // r12d
    let v10: u32;  // r15d

    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
        Ok(_) => {
            v9 = *(a4 as &i8) as u8 as u32;
            v10 = *(a5 as &i8) as u8 as u32;
            v0 = v3;
            if uu_uniq::should_extract_obs_skip_fields(v3, v4, v9 as u64, v10 as u64) as i8 {
                v2 = uu_uniq::handle_extract_obs_skip_fields(v0, v4, a2);
                goto LABEL_4bd4d9;
            } else if uu_uniq::should_extract_obs_skip_chars(v0, v4, v9 as u64, v10 as u64) as i8 {
                v2 = uu_uniq::handle_extract_obs_skip_chars(v0, v4, a3);
LABEL_4bd4d9:
                v6 = v4;
                v5 = v2 as i128;
            } else {
                v1 = std::sys::os_str::bytes::Slice::to_owned(v0, v4);
                v6 = v4;
                v5 = *(&v1.inner.buf.cap as &i128);
                if core::slice::<impl [T]>::starts_with(v0, v4, "-f") as u8 {
                    *(a2 as &i64) = 0x8000000000000000;
                }
                if core::slice::<impl [T]>::starts_with(v0, v4, "-s") as u8 {
                    *(v7 as &i64) = 0x8000000000000000;
                }
            }
            uu_uniq::handle_preceding_options(v0, v4, a4, a5);
            return struct24 {
                field_0: v5
                field_16: v6
            };
        },
    }
}
