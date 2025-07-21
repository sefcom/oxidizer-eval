fn uu_seq::numberparse::parse_exponent_no_decimal(a1: i64, a2: i64, a3: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: u128;  // [bp-0x8f]
    let v3: u128;  // [bp-0x80]
    let v4: u64;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: i8;  // [bp-0x68], Other Possible Types: u8
    let v7: u128;  // [bp-0x67]
    let v8: u128;  // [bp-0x58]
    let v13: core::option::Option<&str>;  // rax
    let v14: u64;  // rbp
    let v15: i64;  // rdi
    let v16: u64;  // r12
    let v17: u64;  // r12
    let v18: u64;  // cc_ndep
    let v19: i64;  // rdi
    let v20: u64;  // rbp
    let v21: i64;  // rdi
    let v22: i64;  // rdi
    let v23: u128;  // xmm0
    let v25: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx

    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get((a2 as &char + 1) as &u64, a0, a1) as u64;
    v25 = core::num::<impl core::str::traits::FromStr for i64>::from_str(&v5, v13);
    if !v5 {
        v14 = *(&v6 as &i64);
        bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a0, a1, a2);
        if v5 != 0x8000000000000000 {
            v2 = v7;
            v3 = v8;
            v0 = v5;
            v1 = v6;
            if !uu_seq::numberparse::is_minus_zero_float(a0, a1, &v0) as i8 && !((v17 = a2 + v14, !(amd64g_calculate_condition(0, 4, a2, v14, v18) as char))) {
                *((v19 + 8) as &i8) = 0;
                *(v19 as &i64) = 9223372036854775812;
            } else {
                v20 = v14 >> 63 & -(v14);
                if !uu_seq::numberparse::is_minus_zero_float(a0, a1, &v0) as i8 {
                    *((v22 + 32) as &u64) = v4;
                    v23 = *(&v0 as &i128);
                    *((v22 + 16) as &i128) = *((&v2 as &char + 7) as &i128);
                    *(v22 as &u128) = v23;
                    *((v22 + 40) as &u64) = v16;
                    *((v22 + 48) as &u64) = v20;
                    return;
                }
                *(v21 as &i64) = 9223372036854775810;
                *((v21 + 40) as &u64) = v16;
                *((v21 + 48) as &u64) = v20;
            }
            return;
        }
    }
    *((v15 + 8) as &i8) = 0;
    *(v15 as &i64) = 9223372036854775812;
    return;
}
