fn uu_seq::numberparse::parse_decimal_no_exponent(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i128;  // [bp-0x8f]
    let v3: i128;  // [sp-0x80]
    let v4: struct41;  // [sp-0x70], Other Possible Types: i328
    let v5: i128;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]
    let v8: i64;  // rax
    let v9: i8;  // cl
    let v10: i64;  // rcx
    let v11: i64;  // r14
    let v12: i128;  // xmm0

    v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    v8 = v4;
    if v0 == 0x8000000000000000 {
        v6 = *((&v4 as &char + 24) as &i64);
        v5 = *((&v4 as &char + 8) as &i128);
        *((a0 + 8) as &i8) = 0;
        *(a0 as &i64) = 9223372036854775812;
        return struct24 {
            field_0: 9223372036854775810
            field_40: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    }
    v9 = *((&v4 as &char + 8) as &i8);
    v2 = *((&v4 as &char + 9) as &i128);
    v3 = *((&v4 as &char + 24) as &i128);
    v0 = v8;
    v1 = v9;
    v10 = core::slice::<impl [T]>::starts_with(a1, a2, "-.") as i32 + a3;
    v11 = ~(a3) + a2;
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
        v12 = v0;
        return struct24 {
            field_0: 9223372036854775810
            field_40: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    }
    return struct24 {
        field_0: 9223372036854775810
        field_40: <UNKNOWN>
        field_48: <UNKNOWN>
    };
}
