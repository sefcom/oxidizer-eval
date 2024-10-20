fn uu_seq::numberparse::parse_exponent_no_decimal(a0: void*, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x80]
    let v1: i8;  // [sp-0x78]
    let v2: i128;  // [bp-0x77]
    let v3: i128;  // [sp-0x68]
    let v4: Enum;  // [sp-0x58], Other Possible Types: i320
    let v5: i8;  // [bp-0x50]
    let v6: i8;  // [bp-0x30]
    let v8: i64;  // rsi
    let v9: i64;  // rbp
    let v10: i64;  // rax
    let v11: i64;  // rsi
    let v12: i8;  // cl
    let v13: i64;  // rax
    let v14: i64;  // r12
    let v15: i64;  // rbp
    let v16: i128;  // xmm0

    v8 = a3 + 1;
    if !(amd64g_calculate_condition(4, 24, a3 + 1, 0, (&v6 < 88) as u8 as u64) as char) {
        if a2 <= v8 {
            if a2 != v8 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((a1 + v8) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
    }
    v4 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v8 + a1, a2 - v8);
    if !v4 {
        v9 = v5;
        v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
        v10 = v4;
        if v0 != 0x8000000000000000 {
            v12 = *((&v4 as &char + 8) as &i8);
            v2 = *((&v4 as &char + 9) as &i128);
            v3 = *((&v4 as &char + 24) as &i128);
            v0 = v10;
            v1 = v12;
            if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                v14 = a3 + v9;
                if 2 > v14 {
                    v14 = 1;
                }
                v13 = v14 + (v3 < 1);
            } else {
                v13 = v9 + 2;
                if v9 <= 0 {
                    v13 = 2;
                }
            }
            v15 = v9 >> 63 & -(v9);
            if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                *((a0 + 32) as &i64) = *((&v3 as &char + 8) as &i64);
                v16 = v0;
                *((a0 + 16) as &i128) = *((&v2 as &char + 7) as &i128);
                *(a0 as &i128) = v16;
                *((a0 + 40) as &i64) = v13;
                *((a0 + 48) as &i64) = v15;
                return a0;
            }
            *(a0 as &i64) = 9223372036854775810;
            *((a0 + 40) as &i64) = v13;
            *((a0 + 48) as &i64) = v15;
            if v0 {
                return a0;
            }
            return a0;
        }
        v11 = *((&v4 as &char + 8) as &i64);
    }
    *((a0 + 8) as &i8) = 0;
    *(a0 as &i64) = 9223372036854775812;
    return a0;
}
