fn uu_seq::numberparse::parse_decimal_and_exponent(a0: void*, a1: &u8, a2: u32, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i72;  // [sp-0x98], Other Possible Types: struct9, Result<struct2, struct9>, struct41
    let v4: i128;  // [bp-0x70]
    let v5: i8;  // [sp-0x68]
    let v6: i128;  // [bp-0x67]
    let v7: i128;  // [sp-0x58]
    let v8: i128;  // [sp-0x48]
    let v9: i64;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // rdx
    let v13: i64;  // rax
    let v14: i8;  // cl
    let v15: i64;  // cc_ndep
    let v16: i64;  // rdx
    let v17: i64;  // rax
    let v18: i8;  // al
    let v19: i64;  // rax
    let v20: i64;  // r14
    let v21: i64;  // r14
    let v22: i128;  // xmm0

    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4 + 1, a1, a2);
    if !v11 {
        core::str::slice_error_fail(); /* do not return */
    }
    v3 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v11, v12);
    match v3 {
        Err(_) => {
            v2 = v3;
            v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
            v13 = v3;
            if v3.40 == 0x8000000000000000 {
                v9 = *((&v3 as &char + 24) as &i64);
                v8 = *((&v3 as &char + 8) as &i128);
            } else {
                v14 = *((&v3 as &char + 8) as &i8);
                v6 = *((&v3 as &char + 9) as &i128);
                v7 = *((&v3 as &char + 24) as &i128);
                v3.40 = vvar_135{reg 16};
                v5 = v14;
                if a4 {
                    if a4 >= a2 {
                        if a4 != a2 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((a1 + a4) as &i8) <= 191 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v3 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(a1, a4);
                if !v3 {
                    v16 = v2;
                    v17 = v16 + 2;
                    if v16 <= 0 {
                        v17 = 2;
                    }
                    if !((*((&v3 as &char + 8) as &i64) - 0 >> 63) as char) {
                        v17 = 1;
                    }
                    v0 = v17;
                    if !(amd64g_calculate_condition(0, 4, a3, v16, v15) as char) {
                        v1 = a3 + v16;
                        v18 = core::slice::<impl [T]>::starts_with(a1, a2, "-.") as i8;
                        if v18 {
                            v19 = v1;
                            if amd64g_calculate_condition(0, 24, v19 + 1, 0, amd64g_calculate_rflags_c(17, v18 as u8 as u64, 0, v15)) as char {
                                return struct9 {
                                    field_0: 9223372036854775812
                                    field_8: 0
                                };
                            }
                        }
                        v0 = v0;
                        if !(v0 >= v0) || !((v0 = v19 + 1, v0 = v0, v0 < 0)) {
                            v20 = ~(a3) + a4;
                            v21 = v20 - v2;
                            if v20 < v2 {
                                v21 = 0;
                            } else {
                                core::result::Result<T,E>::unwrap(v21 >> 63);
                            }
                            if uu_seq::numberparse::is_minus_zero_float(a1, a2, &v3) as i8 {
                                return struct56 {
                                    field_0: v22
                                    field_16: *((&v6 as &char + 7) as &i128)
                                    field_32: *((&v7 as &char + 8) as &i64)
                                    field_40: v0
                                    field_48: v21
                                };
                            }
                            v22 = v4;
                            return struct56 {
                                field_0: v22
                                field_16: *((&v6 as &char + 7) as &i128)
                                field_32: *((&v7 as &char + 8) as &i64)
                                field_40: v0
                                field_48: v21
                            };
                        }
                    }
                }
                return struct9 {
                    field_0: 9223372036854775812
                    field_8: 0
                };
            }
        },
        Ok(_) => {
            *((a0 + 8) as &i8) = 0;
            *(a0 as &i64) = 9223372036854775812;
        },
    }
    return struct56 {
        field_0: v22
        field_16: *((&v6 as &char + 7) as &i128)
        field_32: *((&v7 as &char + 8) as &i64)
        field_40: v0
        field_48: v21
    };
}
