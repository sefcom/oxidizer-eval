fn uu_seq::numberparse::parse_decimal_no_exponent(a0: void*, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x88]
    let v1: i64;  // [sp-0x80]
    let v2: i8;  // [sp-0x78]
    let v3: i128;  // [bp-0x77]
    let v4: i128;  // [sp-0x68]
    let v5: i320;  // [sp-0x58], Other Possible Types: Enum
    let v7: i64;  // rcx
    let v8: i8;  // al
    let v10: i64;  // r14
    let v11: i64;  // r15
    let v12: i128;  // xmm0

    v5 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    v7 = v5;
    if v0 == 0x8000000000000000 {
        *((a0 + 8) as &i8) = 0;
        *(a0 as &i64) = 9223372036854775812;
        return a0;
    }
    v8 = *((&v5 as &char + 8) as &i8);
    v3 = *((&v5 as &char + 9) as &i128);
    v4 = *((&v5 as &char + 24) as &i128);
    v0 = v7;
    v1 = v0;
    v2 = v8;
    v10 = (a2 < 2 ? 0 : -0x100 | *(a1 as &i16) == 11821) + a3;
    v11 = ~(a3) + a2;
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v1) as i8 {
        *((a0 + 32) as &i64) = *((&v4 as &char + 8) as &i64);
        v12 = v1;
        *((a0 + 16) as &i128) = *((&v3 as &char + 7) as &i128);
        *(a0 as &i128) = v12;
        *((a0 + 40) as &i64) = v10;
        *((a0 + 48) as &i64) = v11;
        return a0;
    }
    *(a0 as &i64) = 9223372036854775810;
    *((a0 + 40) as &i64) = v10;
    *((a0 + 48) as &i64) = v11;
    if v0 {
        return a0;
    }
    return a0;
}
