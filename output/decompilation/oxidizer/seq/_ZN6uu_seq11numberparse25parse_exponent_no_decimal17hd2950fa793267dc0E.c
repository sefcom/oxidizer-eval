fn uu_seq::numberparse::parse_exponent_no_decimal(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: iNone;  // [bp-0x8f]
    let v3: iNone;  // [sp-0x80]
    let v4: struct41;  // [sp-0x70], Other Possible Types: Result<struct2, struct8>
    let v6: i64;  // rbp
    let v7: i64;  // rax
    let v8: i8;  // cl
    let v10: i64;  // cc_ndep

    v4 = core::num::<impl core::str::traits::FromStr for i64>::from_str(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3 + 1, a1, a2), a2);
    match v4 {
        Ok(_) => {
            return struct9 {
                field_0: 9223372036854775812
                field_8: 0
            };
        },
        Err(v6) => {
            v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
            v7 = v4.field_0;
            if v0 != 0x8000000000000000 {
                v8 = v4.field_8;
                *(&v2 as &u128) = v4.field_9;
                v3 = *((&v4.field_9 as &char + 15) as &i128);
                v0 = v7;
                v1 = v8;
                if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 && amd64g_calculate_condition(0, 4, a3, v6, v10) as char {
                    return struct9 {
                        field_0: 9223372036854775812
                        field_8: 0
                    };
                }
                if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
                    return struct56 {
                        field_0: v13
                        field_16: (&v2)[7] as i128
                        field_32: (&v3)[8] as i64
                        field_40: v9
                        field_48: v12
                    };
                }
                return struct24 {
                    field_0: 9223372036854775810
                    field_40: <UNKNOWN>
                    field_48: <UNKNOWN>
                };
            }
        },
    }
}
