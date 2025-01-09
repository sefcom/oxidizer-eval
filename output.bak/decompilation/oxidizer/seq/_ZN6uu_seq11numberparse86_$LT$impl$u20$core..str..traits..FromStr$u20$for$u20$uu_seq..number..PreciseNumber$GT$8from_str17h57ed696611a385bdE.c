fn uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(a0: &struct9, a1: u64, a2: u64) -> u64 {
    let v0: struct1;  // [bp-0x40], Other Possible Types: struct24, i192
    let v2: i64;  // r15
    let v3: i64;  // r15
    let v4: i64;  // rdx
    let v5: i64;  // rax
    let v6: i64;  // r14
    let v7: i64;  // rax
    let v8: i64;  // rsi
    let v9: i64;  // rdx

    v2 = core::str::<impl str>::trim_start_matches(a1, a2);
    v0 = struct1 {
        field_0: 0
    };
    v3 = v2;
    if core::slice::<impl [T]>::starts_with(v2, v4, core::char::methods::encode_utf8_raw(43, &v0), 1) as i8 {
        v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v2, v4);
        if !v5 {
            core::str::slice_error_fail(v2, v4, 1, v4, "src/uu/seq/src/numberparse.rs"); /* do not return */
        }
        v3 = v5;
    }
    v0 = alloc::str::<impl str>::to_lowercase(v3, v6);
    if core::str::<impl str>::find(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) == 1 && v4 < 2 {
        uu_seq::numberparse::parse_hexadecimal(a0, v3, v6);
    }
    v7 = core::str::<impl str>::find(v3, v6, 101);
    if !core::str::<impl str>::find(v3, v6, 46) {
        v8 = v3;
        v9 = v6;
        if !v7 {
            uu_seq::numberparse::parse_no_decimal_no_exponent(a0, v8, v9);
        } else {
            uu_seq::numberparse::parse_exponent_no_decimal(a0, v8, v9, v4);
        }
    } else if !v7 {
        uu_seq::numberparse::parse_decimal_no_exponent(a0, v3, v6, v4);
    } else {
        if v4 >= v4 {
            return struct9 {
                field_0: 9223372036854775812
                field_8: 0
            };
        }
        uu_seq::numberparse::parse_decimal_and_exponent(a0, v3, v6, v4, v4);
    }
}
