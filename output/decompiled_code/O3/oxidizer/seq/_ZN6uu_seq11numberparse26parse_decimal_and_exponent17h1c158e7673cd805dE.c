fn uu_seq::numberparse::parse_decimal_and_exponent() -> u32 {
    let v0: i64;  // [sp-0x98]
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i128;  // [sp-0x80], Other Possible Types: Enum
    let v4: i8;  // [bp-0x78]
    let v5: i64;  // [sp-0x58]
    let v6: i8;  // [sp-0x50]
    let v7: i128;  // [bp-0x4f]
    let v8: i128;  // [sp-0x40]
    let v9: i8;  // [bp-0x30]
    let v11: i64;  // r8
    let v12: i64;  // rsi
    let v13: i64;  // rdx
    let v14: i64;  // rsi
    let v15: i64;  // rcx
    let v16: i64;  // rsi
    let v17: i8;  // al
    let v18: i64;  // rdi
    let v19: i64;  // rdi
    let v22: i64;  // rdi
    let v23: i64;  // rdx
    let v24: i64;  // rcx
    let v25: i64;  // rax
    let v26: i64;  // r15
    let v27: i64;  // r15
    let v28: i64;  // rdi
    let v29: i64;  // rdi
    let v30: i128;  // xmm0

    v12 = v11 + 1;
    if !(amd64g_calculate_condition(4, 24, v11 + 1, 0, (&v9 < 104) as u8 as u64) as char) {
        if v13 <= v12 {
            if v13 != v12 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((v14 + v12) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    }
    v3 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v12 + v14, v13 - v12);
    if !v3 {
        v2 = v4;
        v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(v14, v13);
        v15 = v3;
        if v0 != 0x8000000000000000 {
            v17 = *((&v3 as &char + 8) as &i8);
            v7 = *((&v3 as &char + 9) as &i128);
            v8 = *((&v3 as &char + 24) as &i128);
            v0 = v15;
            v5 = v0;
            v6 = v17;
            if v11 {
                if v11 >= v13 {
                    if v11 != v13 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v14 + v11) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            v3 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v14, v11);
            if v3 {
                *((v19 + 8) as &i8) = 0;
                *(v19 as &i64) = 9223372036854775812;
                goto LABEL_497ea8;
            }
            v22 = v2;
            v23 = v22 + 2;
            if v22 <= 0 {
                v23 = 2;
            }
            if *((&v3 as &char + 8) as &i64) >= 0 {
                v23 = 1;
            }
            v25 = (v13 < 2 ? 0 : -0x100 | *(v14 as &i16) == 11821) + v22 + v24;
            v1 = v23;
            if v25 < v1 {
LABEL_497e68:
                v26 = ~(v24) + v11;
                v27 = v26 - vvar_320;
                if v26 < vvar_320 {
                    v27 = 0;
                    goto LABEL_497e80;
                } else {
                    if !(amd64g_calculate_condition(8, 8, v26, vvar_320, (&v9 < 104) as u8 as u64) as char) {
LABEL_497e80:
                        if !uu_seq::numberparse::is_minus_zero_float(v14, v13, &v5) as i8 {
                            *((v29 + 32) as &i64) = *((&v8 as &char + 8) as &i64);
                            v30 = v5;
                            *((v29 + 16) as &i128) = *((&v7 as &char + 7) as &i128);
                            *(v29 as &i128) = v30;
                            *((v29 + 40) as &i64) = v1;
                            *((v29 + 48) as &i64) = v27;
                        } else {
                            *(v28 as &i64) = 9223372036854775810;
                            *((v28 + 40) as &i64) = v1;
                            *((v28 + 48) as &i64) = v27;
LABEL_497ea8:
                        }
                        return;
                    }
                }
            } else if v25 >= 0 {
                v1 = v25;
                goto LABEL_497e68;
            }
            core::result::unwrap_failed(); /* do not return */
        }
        v16 = *((&v3 as &char + 8) as &i64);
    }
    *((v18 + 8) as &i8) = 0;
    *(v18 as &i64) = 9223372036854775812;
    return;
}
