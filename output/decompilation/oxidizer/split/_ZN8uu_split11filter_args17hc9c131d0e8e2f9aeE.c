fn uu_split::filter_args(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: Result<struct16, struct10>;  // [sp-0x68], Other Possible Types: struct24, Option<struct24>
    let v1: Option<struct24>;  // [sp-0x48]
    let v3: i64;  // r13
    let v4: i64;  // rbp

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v0 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
        Ok(_) => {
            v3 = *((&v0 as &char + 8) as &i64);
            v4 = *((&v0 as &char + 16) as &i64);
        },
    }
    if !uu_split::should_extract_obs_lines(v3, v4, *(a3 as &i8), *(a4 as &i8)) as i8 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(v3, v4);
    } else {
        v0 = uu_split::handle_extract_obs_lines(v3, v4, a2);
    }
    v1 = v0;
    uu_split::handle_preceding_options(v3, v4, a3, a4);
}
