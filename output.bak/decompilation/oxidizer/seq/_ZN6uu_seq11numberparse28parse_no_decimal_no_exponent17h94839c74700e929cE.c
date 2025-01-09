fn uu_seq::numberparse::parse_no_decimal_no_exponent(a0: &struct56, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0x98]
    let v1: i128;  // [sp-0x88]
    let v2: i64;  // [sp-0x78]
    let v3: i328;  // [sp-0x68], Other Possible Types: struct41
    let v4: i192;  // [sp-0x40], Other Possible Types: struct24
    let v6: i64;  // r14
    let v7: i64;  // r15
    let v8: i64;  // r13

    v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    if v3 == 0x8000000000000000 {
        v4 = alloc::str::<impl str>::to_ascii_lowercase(a1, a2);
        v6 = *((&v4 as &char + 8) as &i64);
        v7 = *((&v4 as &char + 16) as &i64);
        v8 = 0x8000000000000000;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "inf") as i8 {
            v0 = v8;
            return struct56 {
                field_0: v10
                field_16: v1
                field_32: v2
                field_40: 0
            };
        }
        v8 = 0x8000000000000000;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "infinity") as i8 {
            v8 = 9223372036854775809;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "-inf") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "-infinity") as i8 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "nan") as i8 {
                    return struct9 {
                        field_0: 9223372036854775812
                        field_8: 1
                    };
                }
                <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, "-nan");
            }
        }
    } else {
        v2 = *((&v3 as &char + 32) as &i64);
        v1 = *((&v3 as &char + 16) as &i128);
        v0 = v3;
        if !uu_seq::numberparse::is_minus_zero_int(a1, a2, &v0) as i8 {
            return struct56 {
                field_0: v9
                field_16: v1
                field_32: v2
                field_40: a2
                field_48: 0
            };
        }
        return struct24 {
            field_0: 9223372036854775810
            field_40: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    }
}
