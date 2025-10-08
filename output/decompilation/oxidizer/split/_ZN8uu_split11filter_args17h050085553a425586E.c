fn uu_split::filter_args(a0: i64, a1: i64, a2: void*, a3: i64, a4: i64) -> long long {
    let v0: void*;  // [bp-0x60], Other Possible Types: u64
    let v1: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x58]
    let v2: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x50]
    let v3: Option<struct24>;  // [bp-0x50], Other Possible Types: struct24, u192
    let v4: u64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v7: u64;  // rbx
    let v8: u64;  // r12

    v0 = a2;
    v7 = *((a1 + 8) as &i64);
    v8 = *((a1 + 16) as &i64);
    v2 = core::str::converts::from_utf8(v7, v8);
    match v2 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i64)
                field_8: v7
                field_16: v8
            };
        },
        Ok(_) => {
            if uu_split::should_extract_obs_lines(v4, v5, *(a3 as &i8) as u8 as u64, *(a4 as &i8) as u8 as u64) as u8 {
                v3 = uu_split::handle_extract_obs_lines(v4, v5, v0);
            } else {
                v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v4, v5);
            }
            v1 = v3 as i64;
            v0 = v4;
            uu_split::handle_preceding_options(v4, v5, a3, a4);
            return struct24 {
                field_0: v1
                field_8: v0
                field_16: v5
            };
        },
    }
}
