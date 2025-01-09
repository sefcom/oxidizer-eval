fn uu_seq::numberparse::parse_decimal_and_exponent(a0: &struct56, a1: &u8, a2: u32, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i336;  // [sp-0x98], Other Possible Types: Result<struct2, struct8>, struct41, struct9
    let v4: i64;  // [sp-0x70]
    let v5: i8;  // [sp-0x68]
    let v6: i128;  // [bp-0x67]
    let v7: i128;  // [sp-0x58]
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: i8;  // cl
    let v12: i64;  // cc_ndep
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i8;  // al
    let v16: i64;  // rax
    let v17: i64;  // r14

    v3 = core::num::<impl core::str::traits::FromStr for i64>::from_str(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a4 + 1, a1, a2), v9);
    match v3 {
        Ok(_) => {
            return struct9 {
                field_0: 9223372036854775812
                field_8: 0
            };
        },
        Err(v2) => {
            v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
            v10 = v3;
            if v4 != 0x8000000000000000 {
                v11 = *((&v3 as &char + 8) as &i8);
                v6 = *((&v3 as &char + 9) as &i128);
                v7 = *((&v3 as &char + 24) as &i128);
                v4 = v10;
                v5 = v11;
                v3 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(a1, a4);
                if v3 {
                    return struct9 {
                        field_0: 9223372036854775812
                        field_8: 0
                    };
                }
                v13 = v2;
                v14 = v13 + 2;
                if v13 <= 0 {
                    v14 = 2;
                }
                if !((*((&v3 as &char + 8) as &i64) - 0 >> 63) as char) {
                    v14 = 1;
                }
                v0 = v14;
                if !(amd64g_calculate_condition(0, 4, a3, v13, v12) as char) {
                    v1 = a3 + v13;
                    v15 = core::slice::<impl [T]>::starts_with(a1, a2, "-.") as i8;
                    if v15 {
                        v16 = v1;
                        if amd64g_calculate_condition(0, 24, v16 + 1, 0, amd64g_calculate_rflags_c(17, v15 as u8 as u64, 0, v12)) as char {
                            return struct9 {
                                field_0: 9223372036854775812
                                field_8: 0
                            };
                        }
                    }
                    v0 = v0;
                    if !(v0 >= v0) || !((v0 = v16 + 1, v0 = v0, v0 < 0)) {
                        v17 = ~(a3) + a4;
                        if v17 >= v2 {
                            core::result::Result<T,E>::unwrap(v17 - v2 >> 63);
                        }
                        if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v4) as i8 {
                            return struct56 {
                                field_0: v19
                                field_16: *((&v6 as &char + 7) as &i128)
                                field_32: *((&v7 as &char + 8) as &i64)
                                field_40: v0
                                field_48: v18
                            };
                        }
                        return struct24 {
                            field_0: 9223372036854775810
                            field_40: <UNKNOWN>
                            field_48: <UNKNOWN>
                        };
                    }
                }
            }
        },
    }
}
