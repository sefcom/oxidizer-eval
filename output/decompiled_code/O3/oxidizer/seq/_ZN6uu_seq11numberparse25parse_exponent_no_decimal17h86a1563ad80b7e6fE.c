fn uu_seq::numberparse::parse_exponent_no_decimal(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i128;  // [bp-0x8f]
    let v3: i128;  // [sp-0x80]
    let v4: i72;  // [sp-0x70], Other Possible Types: Result<struct2, struct9>, struct41
    let v5: i64;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rbp
    let v10: i64;  // rax
    let v11: i8;  // cl
    let v12: i64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // cc_ndep
    let v15: i64;  // rbp
    let v16: i128;  // xmm0

    v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3 + 1, a1, a2);
    if !v7 {
        core::str::slice_error_fail(); /* do not return */
    }
    v4 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v7, v8);
    match v4 {
        Err(_) => {
            v9 = v4;
            v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
            v10 = v4;
            if v0 == 0x8000000000000000 {
                v5 = *((&v4 as &char + 24) as &i64);
                v4.40 = (stack_base)[104] as i128;
            } else {
                v11 = *((&v4 as &char + 8) as &i8);
                v2 = *((&v4 as &char + 9) as &i128);
                v3 = *((&v4 as &char + 24) as &i128);
                v0 = v10;
                v1 = v11;
                if uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                    v12 = v9 + 2;
                    if v9 <= 0 {
                        v12 = 2;
                    }
                } else {
                    v13 = a3 + v9;
                    if amd64g_calculate_condition(0, 4, a3, v9, v14) as char {
                        return struct9 {
                            field_0: 9223372036854775812
                            field_8: 0
                        };
                    }
                    if 2 > v13 {
                        v13 = 1;
                    }
                    v12 = v13 + (v3 < 1) as u8 as u64;
                }
                v15 = v9 >> 63 & -(v9);
                if uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                    return struct56 {
                        field_0: v16
                        field_16: *((&v2 as &char + 7) as &i128)
                        field_32: *((&v3 as &char + 8) as &i64)
                        field_40: v12
                        field_48: v15
                    };
                }
                v16 = v0;
                return struct56 {
                    field_0: v16
                    field_16: *((&v2 as &char + 7) as &i128)
                    field_32: *((&v3 as &char + 8) as &i64)
                    field_40: v12
                    field_48: v15
                };
            }
        },
        Ok(_) => {
            *((a0 + 8) as &i8) = 0;
            *(a0 as &i64) = 9223372036854775812;
        },
    }
    return struct56 {
        field_0: v16
        field_16: *((&v2 as &char + 7) as &i128)
        field_32: *((&v3 as &char + 8) as &i64)
        field_40: v12
        field_48: v15
    };
}
