fn uu_truncate::parse_mode_and_size(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x188]
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: i8;  // [bp-0x58]
    let v4: i8;  // [bp-0x50]
    let v6: i192;  // [sp-0x38], Other Possible Types: struct24
    let v8: i64;  // r15
    let v9: i64;  // rdx
    let v10: Option<Result<struct32, struct16>>;  // rax
    let v11: i64;  // r14
    let v13: i128;  // xmm0

    v8 = core::str::<impl str>::trim_matches(a1, a2);
    v1 = v8;
    v2 = v9 + v8;
    if !core::str::validations::next_code_point(&v1) as i32 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, v9);
        *(a0 as &i64) = 1;
        *((a0 + 8) as &i192) = v6;
        v10 = *((&v6 as &char + 16) as &i64);
        *((a0 + 24) as &Option<Result<struct32, struct16>>) = v10;
        return v10;
    }
    if v9 as u32 <= 62 {
        v0 = 0x5000a82000000000;
        if (*((&v0 as &u8 + ((v9 as u32 & 63) >> 3)) as &i8) >> (v9 as u32 & 63 & 7) & 1) {
            v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v8, v9);
            if !v8 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    }
    v10 = uucore::parser::parse_size::parse_size_u64(v8, v11);
    switch (v9 as u32) {
    case 37:
        if v3 == 3 {
            v10 = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            *((a0 + 8) as &Option<Result<struct32, struct16>>) = v10;
            *((a0 + 16) as &i64) = v9;
            *(a0 as &i64) = 3;
            return v10;
        }
    case 43:
        if v3 == 3 {
            vvar_222{reg 16} = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            return struct24 {
                field_0: 3
                field_8: v10
                field_16: v9
            };
        }
    case 45:
        if v3 == 3 {
            vvar_228{reg 16} = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            return struct24 {
                field_0: 3
                field_8: v10
                field_16: v9
            };
        }
    case 47:
        goto LABEL_4ae4ea;
    case 60:
        if v3 == 3 {
            vvar_216{reg 16} = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            return struct24 {
                field_0: 3
                field_8: v10
                field_16: v9
            };
        }
    case 62:
        if v3 == 3 {
            vvar_210{reg 16} = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            return struct24 {
                field_0: 3
                field_8: v10
                field_16: v9
            };
        }
    default:
LABEL_4ae4ea:
        if v3 == 3 {
            vvar_234{reg 16} = core::ops::function::FnOnce::call_once(uu_truncate::TruncateMode::RoundUp, v4);
            return struct24 {
                field_0: 3
                field_8: v10
                field_16: v9
            };
        }
    }
    v13 = v3;
    return struct32 {
        field_0: v13
        field_16: v5
    };
}
