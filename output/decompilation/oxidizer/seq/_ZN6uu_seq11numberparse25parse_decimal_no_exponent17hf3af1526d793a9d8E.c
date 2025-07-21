fn uu_seq::numberparse::parse_decimal_no_exponent(a1: i64, a2: i64, a3: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x98]
    let v1: u8;  // [bp-0x90]
    let v2: u128;  // [bp-0x8f]
    let v3: u128;  // [bp-0x80]
    let v4: struct24;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: u8;  // [bp-0x68]
    let v7: i8;  // [bp-0x67]
    let v8: u128;  // [bp-0x58]
    let v12: i64;  // rdi
    let v13: u64;  // rcx
    let v14: u64;  // r14
    let v15: i64;  // rdi
    let v16: i64;  // rdi
    let v17: u128;  // xmm0

    bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a0, a1, a2);
    if v5 == 0x8000000000000000 {
        *((v12 + 8) as &i8) = 0;
        *(v12 as &i64) = 9223372036854775812;
        return;
    }
    v2 = *(&v7 as &i128);
    v3 = v8;
    v0 = v5;
    v1 = v6;
    v13 = core::slice::<impl [T]>::starts_with() + a2;
    v14 = ~(a2) + a1;
    if !uu_seq::numberparse::is_minus_zero_float(a0, a1, &v0) as i8 {
        *((v16 + 32) as &struct24) = v4;
        v17 = *(&v0 as &i128);
        *((v16 + 16) as &i128) = *((&v2 as &char + 7) as &i128);
        *(v16 as &u128) = v17;
        *((v16 + 40) as &u64) = v13;
        *((v16 + 48) as &u64) = v14;
        return;
    }
    *(v15 as &i64) = 9223372036854775810;
    *((v15 + 40) as &u64) = v13;
    *((v15 + 48) as &u64) = v14;
    return;
}
