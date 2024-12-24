fn uu_split::filter_args(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i128;  // [sp-0x68], Other Possible Types: Result<struct16, struct10>, struct24, Option<struct24>
    let v1: i8;  // [bp-0x58]
    let v2: i192;  // [bp-0x48]
    let v3: i64;  // [sp-0x38]
    let v5: i64;  // r13
    let v6: i64;  // rbp

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
        Ok(_) => {
            v5 = *((&v0 as &char + 8) as &i64);
            v6 = v1;
            if !uu_split::should_extract_obs_lines(v5, v6, *(a3 as &i8) as u8 as u64, *(a4 as &i8) as u8 as u64) as i8 {
                v0 = std::sys::os_str::bytes::Slice::to_owned(v5, v6);
            } else {
                v0 = uu_split::handle_extract_obs_lines(v5, v6, a2);
            }
            v2 = v0;
            uu_split::handle_preceding_options(v5, v6, a3, a4);
            *((a0 + 16) as &i64) = v3;
            *(a0 as &i128) = v2;
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
    }
}
