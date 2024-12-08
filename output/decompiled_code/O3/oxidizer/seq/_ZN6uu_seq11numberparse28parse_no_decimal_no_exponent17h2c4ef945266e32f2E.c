fn uu_seq::numberparse::parse_no_decimal_no_exponent(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [bp-0x98]
    let v1: i128;  // [sp-0x88]
    let v2: i64;  // [sp-0x78]
    let v3: struct41;  // [sp-0x68], Other Possible Types: i328
    let v4: i8;  // [bp-0x38]
    let v5: i8;  // [bp-0x30]
    let v7: i64;  // r14
    let v8: i64;  // r15
    let v9: i64;  // r13
    let v10: i128;  // xmm0
    let v11: i128;  // xmm0

    v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    if v3 == 0x8000000000000000 {
        v3.40 = alloc::str::<impl str>::to_ascii_lowercase(vvar_1, vvar_2);
        v7 = v4;
        v8 = v5;
        v9 = 0x8000000000000000;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "inf") as i8 {
            v9 = 0x8000000000000000;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "infinity") as i8 {
                v9 = 9223372036854775809;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "-inf") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "-infinity") as i8 {
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "nan") as i8 {
                        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "-nan");
                    }
                    return struct9 {
                        field_0: 9223372036854775812
                        field_8: 1
                    };
                }
            }
        }
        v0 = v9;
        *((a0 + 32) as &i64) = v2;
        v11 = v0;
        *((a0 + 16) as &i128) = v1;
        *(a0 as &i128) = v11;
        *((a0 + 40) as &i128) = 0;
        return struct24 {
            field_0: 9223372036854775810
            field_40: <UNKNOWN>
            field_48: <UNKNOWN>
        };
    } else {
        v2 = *((&v3 as &char + 32) as &i64);
        v1 = *((&v3 as &char + 16) as &i128);
        v0 = v3;
        if !uu_seq::numberparse::is_minus_zero_int(a1, a2, &v0) as i8 {
            v10 = v0;
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
}
