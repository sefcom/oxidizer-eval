fn uu_seq::numberparse::parse_exponent_no_decimal(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i128;  // [bp-0x8f]
    let v3: i128;  // [sp-0x80]
    let v4: i72;  // [sp-0x70], Other Possible Types: struct41, Result<struct2, struct9>
    let v5: i128;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rbp
    let v11: i64;  // rax
    let v12: i8;  // cl
    let v13: i64;  // rax
    let v14: i64;  // r12
    let v15: i64;  // cc_ndep
    let v16: i64;  // rbp
    let v17: i128;  // xmm0

    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3 + 1, a1, a2);
    if !v8 {
        core::str::slice_error_fail(); /* do not return */
    }
    v4 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v8, v9);
    match v4 {
        Err(_) => {
            v10 = v4;
            v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
            v11 = v4;
            if v0 == 0x8000000000000000 {
                v6 = *((&v4 as &char + 24) as &i64);
                v5 = *((&v4 as &char + 8) as &i128);
            } else {
                v12 = *((&v4 as &char + 8) as &i8);
                v2 = *((&v4 as &char + 9) as &i128);
                v3 = *((&v4 as &char + 24) as &i128);
                v0 = v11;
                v1 = v12;
                if uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                    v13 = v10 + 2;
                    if v10 <= 0 {
                        v13 = 2;
                    }
                } else {
                    v14 = a3 + v10;
                    if amd64g_calculate_condition(0, 4, a3, v10, v15) as char {
                        return struct9 {
                            field_0: 9223372036854775812
                            field_8: 0
                        };
                    }
                    if 2 > v14 {
                        v14 = 1;
                    }
                    v13 = v14 + (v3 < 1) as u8 as u64;
                }
                v16 = v10 >> 63 & -(v10);
                if uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                    return struct56 {
                        field_0: v17
                        field_16: *((&v2 as &char + 7) as &i128)
                        field_32: *((&v3 as &char + 8) as &i64)
                        field_40: v13
                        field_48: v16
                    };
                }
                v17 = v0;
                return struct56 {
                    field_0: v17
                    field_16: *((&v2 as &char + 7) as &i128)
                    field_32: *((&v3 as &char + 8) as &i64)
                    field_40: v13
                    field_48: v16
                };
            }
        },
        Ok(_) => {
            *((a0 + 8) as &i8) = 0;
            *(a0 as &i64) = 9223372036854775812;
        },
    }
    return struct56 {
        field_0: v17
        field_16: *((&v2 as &char + 7) as &i128)
        field_32: *((&v3 as &char + 8) as &i64)
        field_40: v13
        field_48: v16
    };
}
