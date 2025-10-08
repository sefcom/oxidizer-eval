fn uu_uniq::filter_args(a0: i64, a1: i64, a2: i384, a3: u64, a4: i64, a5: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x78], Other Possible Types: struct24
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x70], Other Possible Types: struct24
    let v2: Option<struct24>;  // [bp-0x70]
    let v3: struct8;  // [bp-0x70]
    let v4: u64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x60]
    let v7: struct24;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: i64;  // [bp-0x48]
    let v11: u64;  // r12
    let v12: u32;  // r13d
    let v13: u32;  // ebx
    let v14: struct24;  // r13
    let v15: u64;  // rbx

    v0 = a2;
    v11 = *((a1 + 16) as &i64);
    v8 = *((a1 + 8) as &i64);
    v1 = core::str::converts::from_utf8(*((a1 + 8) as &i64), v11);
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: *(a1 as &i64)
                field_8: v8
                field_16: v11
            };
        },
        Ok(_) => {
            v12 = *(a4 as &i8) as u8 as u32;
            v13 = *(a5 as &i8) as u8 as u32;
            if uu_uniq::should_extract_obs_skip_fields(v4, v6, v12 as u64, v13 as u64) as u8 {
                v2 = uu_uniq::handle_extract_obs_skip_fields(v4, v6, v0);
                goto LABEL_466dcf;
            } else if uu_uniq::should_extract_obs_skip_chars(v4, v6, v12 as u64, v13 as u64) as u8 {
                v3 = uu_uniq::handle_extract_obs_skip_chars(v4, v6, a3);
LABEL_466dcf:
                v14 = v2 as i64;
                v7 = v4;
                v5 = v6;
            } else {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v4, v6);
                v14 = v1.field_0;
                v7 = v4;
                if core::slice::<impl [T]>::starts_with(v4, v6, "-f") as u8 {
                    *(v0 as &i64) = 0x8000000000000000;
                }
                v5 = v6;
                if core::slice::<impl [T]>::starts_with(v4, v5, "-s") as u8 {
                    v0 = v14;
                    *(v9 as &i64) = 0x8000000000000000;
                    v14 = v0;
                    v5 = v6;
                }
            }
            v15 = v5;
            uu_uniq::handle_preceding_options(v4, v6, a4, a5);
            return struct24 {
                field_0: v14
                field_8: v7
                field_16: v15
            };
        },
    }
}
