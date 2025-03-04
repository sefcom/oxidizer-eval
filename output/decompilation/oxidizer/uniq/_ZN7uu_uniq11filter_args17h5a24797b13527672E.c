fn uu_uniq::filter_args(a0: &struct24, a1: u32, a2: u32, a3: &struct8, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x88]
    let v1: Option<struct24>;  // [sp-0x80], Other Possible Types: Result<struct16, struct10>, struct24
    let v2: struct24;  // [sp-0x68], Other Possible Types: Option<struct24>
    let v4: i64;  // rbp
    let v5: i32;  // r12d
    let v6: i32;  // r15d

    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i64)
            };
        },
        Ok(_) => {
            v4 = *((&v1 as &char + 16) as &i64);
            v5 = *(a4 as &i8) as u8 as u32;
            v6 = *(a5 as &i8) as u8 as u32;
            v0 = *((&v1 as &char + 8) as &i64);
        },
    }
    if uu_uniq::should_extract_obs_skip_fields(*((&v1 as &char + 8) as &i64), v4, v5 as u64, v6 as u64) as i8 {
        v1 = uu_uniq::handle_extract_obs_skip_fields(v0, v4, a2);
        goto LABEL_4bd4d9;
    } else if !uu_uniq::should_extract_obs_skip_chars(v0, v4, v5 as u64, v6 as u64) as i8 {
        v1 = std::sys::os_str::bytes::Slice::to_owned(v0, v4);
        v2 = v1;
        if core::slice::<impl [T]>::starts_with(v0, v4, "-f") as i8 {
            *(a2 as &i64) = 0x8000000000000000;
        }
        if core::slice::<impl [T]>::starts_with(v0, v4, "-s") as i8 {
            *(a3 as &i64) = 0x8000000000000000;
        }
    } else {
        v1 = uu_uniq::handle_extract_obs_skip_chars(v0, v4, a3);
LABEL_4bd4d9:
        v2 = v1;
    }
    uu_uniq::handle_preceding_options(v0, v4, a4, a5);
}
