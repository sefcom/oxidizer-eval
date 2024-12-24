fn uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [bp-0x40], Other Possible Types: struct24, struct1
    let v2: i64;  // r15
    let v3: i64;  // rdx
    let v4: i64;  // r14
    let v5: i64;  // rax
    let v6: i64;  // rsi
    let v7: i64;  // rdx

    v2 = core::str::<impl str>::trim_start_matches(a1, a2);
    v0 = struct1 {
        field_0: 0
    };
    if core::slice::<impl [T]>::starts_with(v2, v3, core::char::methods::encode_utf8_raw(43, &v0), 1) as i8 {
        v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v2, v3);
        if !v2 {
            core::str::slice_error_fail(); /* do not return */
        }
    }
    v0 = alloc::str::<impl str>::to_lowercase(v2, v4);
    if core::str::<impl str>::find(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) == 1 && v3 < 2 {
        uu_seq::numberparse::parse_hexadecimal(a0, v2, v4);
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    }
    v5 = core::str::<impl str>::find(v2, v4);
    if !core::str::<impl str>::find(v2, v4) {
        v6 = v2;
        v7 = v4;
        if !v5 {
            uu_seq::numberparse::parse_no_decimal_no_exponent(a0, v6, v7);
            return struct9 {
                field_0: 9223372036854775812
                field_8: 0
            };
        }
        uu_seq::numberparse::parse_exponent_no_decimal(a0, v6, v7, v3);
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    } else if !v5 {
        uu_seq::numberparse::parse_decimal_no_exponent(a0, v2, v4, v3);
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    } else if v3 < v3 {
        uu_seq::numberparse::parse_decimal_and_exponent(a0, v2, v4, v3, v3);
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    } else {
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    }
}
