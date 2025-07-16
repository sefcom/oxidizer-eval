fn uu_seq::numberparse::parse_decimal_and_exponent(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u8;  // [bp-0x98]
    let v4: u8;  // [bp-0x90]
    let v5: u128;  // [bp-0x8f]
    let v6: i8;  // [bp-0x80]
    let v7: u64;  // [bp-0x70]
    let v8: u8;  // [bp-0x68]
    let v9: u128;  // [bp-0x67]
    let v10: u128;  // [bp-0x60]
    let v11: u64;  // [bp-0x50]
    let v12: u8;  // [bp-0x48]
    let v13: u64;  // [bp-0x38]
    let v17: i64;  // rdi
    let v18: u64;  // cc_ndep
    let v19: u64;  // rdx
    let v20: u8;  // al
    let v21: u64;  // rax
    let v22: i64;  // rdi
    let v23: u64;  // r14
    let v24: &mut [u8];  // r14
    let v25: i64;  // rdi
    let v26: i64;  // rdi
    let v27: u128;  // xmm0
    let v29: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx
    let v30: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx

    v29 = core::num::<impl core::str::traits::FromStr for i64>::from_str(&v3, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3 + 1, a0, a1) as u64);
    if !v3 {
        v2 = *(&v4 as &i64);
        bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a0, a1, a2);
        if v3 == 0x8000000000000000 {
            v13 = *(&v6 as &i64);
            memcpy(&v12, &v4, 16);
        } else {
            v9 = v5;
            memcpy(&v9, &v5, 16);
            v7 = v3;
            v8 = v4;
            v30 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v3, a0);
            if !v3 && (v19 = v2, v0 = (*(&v4 as &i64) - 0 >> 63 == 1 ? (v19 > 0 ? v19 + 2 : 2) : 1), !(amd64g_calculate_condition(0, 4, a2, v19, v18) as char)) {
                v1 = a2 + v19;
                v20 = core::slice::<impl [T]>::starts_with();
                if !v20 {
                    v21 = v1;
LABEL_4ce158:
                    if v21 < v0 || !((v0 = v21, v21 < 0)) {
                        v23 = ~(a2) + a3;
                        if v23 >= v2 {
                            core::result::Result<T,E>::unwrap(v23 - v2 >> 63);
                        }
                        if !uu_seq::numberparse::is_minus_zero_float(a0, a1, &v7) as i8 {
                            *((v26 + 32) as &u64) = v11;
                            v27 = *(&v7 as &i128);
                            *((v26 + 16) as &u128) = v10;
                            *(v26 as &u128) = v27;
                            *((v26 + 40) as &u64) = v0;
                            *((v26 + 48) as &&mut [u8]) = v24;
                            return;
                        }
                        *(v25 as &i64) = 9223372036854775810;
                        *((v25 + 40) as &u64) = v0;
                        *((v25 + 48) as &&mut [u8]) = v24;
                        return;
                    }
                } else if !(amd64g_calculate_condition(0, 24, v1 + 1, 0, amd64g_calculate_rflags_c(17, v20 as u64, 0, v18)) as char) {
                    goto LABEL_4ce158;
                }
            }
            *((v22 + 8) as &i8) = 0;
            *(v22 as &i64) = 9223372036854775812;
            return;
        }
    }
    *((v17 + 8) as &i8) = 0;
    *(v17 as &i64) = 9223372036854775812;
    return;
}
