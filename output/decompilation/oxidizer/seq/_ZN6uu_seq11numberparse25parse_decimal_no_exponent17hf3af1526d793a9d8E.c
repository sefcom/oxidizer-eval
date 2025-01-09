fn uu_seq::numberparse::parse_decimal_no_exponent(a0: &Result<struct56, struct1>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i128;  // [bp-0x8f]
    let v3: i128;  // [sp-0x80]
    let v4: struct41;  // [sp-0x70], Other Possible Types: i336
    let v6: i64;  // rax
    let v7: i8;  // cl
    let v8: i64;  // rcx
    let v9: i128;  // xmm0

    v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    v6 = v4;
    if v0 == 0x8000000000000000 {
        return Err(struct1 {
            field_0: 0
        });
    }
    v7 = *((&v4 as &char + 8) as &i8);
    v2 = *((&v4 as &char + 9) as &i128);
    v3 = *((&v4 as &char + 24) as &i128);
    v0 = v6;
    v1 = v7;
    v8 = core::slice::<impl [T]>::starts_with(a1, a2, "-.") as i32 + a3;
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
        v9 = v0;
        return Ok(struct56 {
            field_0: v9
            field_16: *((&v2 as &char + 7) as &i128)
            field_32: *((&v3 as &char + 8) as &i64)
            field_40: v8
            field_48: ~(a3) + a2
        });
    }
}
