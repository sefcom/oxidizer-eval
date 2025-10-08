fn uu_truncate::parse_mode_and_size(a1: &str) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x188]
    let v1: core::fmt::Arguments;  // [bp-0x60]
    let v2: struct32;  // [bp-0x58]
    let v3: u32;  // [bp-0x50]
    let v4: u128;  // [bp-0x48]
    let v5: struct24;  // [bp-0x38]
    let v7: u64;  // rdx
    let v9: core::option::Option<&str>;  // rax
    let v10: u64;  // r14
    let v12: &str;  // rax:rdx
    let v13: core::option::Option<u32>;  // rax:rax

    v12 = core::str::<impl str>::trim_matches(a1, v7);
    v1 = &v12.data_ptr[v12.length];
    v13 = core::str::validations::next_code_point(&v12.data_ptr) as u128;
    match v13 {
        None => {
            v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12.data_ptr, v12.length);
            return struct32 {
                field_0: 1
                field_8: *(&v5.field_0 as &i128)
                field_24: v5.field_16
            };
        },
        Some(_) => {
            if v7 as u32 <= 62 {
                v0 = 0x5000a82000000000;
                if (*((&v0 as &u8 + ((v7 as u32 & 63) as u64 >> 3)) as &i8) >> (v7 as u32 as u8 & 63 & 7) as u64 & 1) {
                    core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v12.data_ptr, v12.length, v7);
                }
            }
            v2 = uucore::features::parser::parse_size::parse_size_u64(v9, v10);
            match (v7 as u32) {
                37 => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                    break;
                }
                43 => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                    break;
                }
                45 => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                    break;
                }
                47 => {
                    break;
                }
                60 => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                    break;
                }
                62 => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                    break;
                }
                _ => {
                    if v2.field_0 as i32 != 4 {
                        return struct32 {
                            field_0: v2.field_0
                            field_16: v4
                        };
                    }
                }
            }
            return struct24 {
                field_0: 4
                field_8: uu_truncate::TruncateMode::Absolute(v3)
                field_16: v7
            };
        },
    }
}
