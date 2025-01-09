fn uu_seq::numberparse::parse_exponent_no_decimal(a0: &struct56, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x98]
    let v1: i8;  // [sp-0x90]
    let v2: i128;  // [bp-0x8f]
    let v3: i128;  // [sp-0x80]
    let v4: struct41;  // [sp-0x70], Other Possible Types: Result<struct2, struct8>, i328
    let v5: i8;  // [bp-0x68]
    let v6: i128;  // [sp-0x48]
    let v7: i64;  // [sp-0x38]
    let v9: i64;  // r13
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rbp
    let v13: i64;  // rax
    let v14: i8;  // cl
    let v17: i64;  // cc_ndep

    v9 = a3 + 1;
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v9, a1, a2);
    if !v10 {
        core::str::slice_error_fail(a1, a2, v9, a2, "src/uu/seq/src/numberparse.rs"); /* do not return */
    }
    v4 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v10, v11) as u64;
    return struct9 {
        field_0: 9223372036854775812
        field_8: 0
    };
    v12 = v5;
    v4 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    v13 = v4;
    if v0 == 0x8000000000000000 {
        v7 = *((&v4 as &char + 24) as &i64);
        v6 = *((&v4 as &char + 8) as &i128);
    }
    v14 = *((&v4 as &char + 8) as &i8);
    v2 = *((&v4 as &char + 9) as &i128);
    v3 = *((&v4 as &char + 24) as &i128);
    v0 = v13;
    v1 = v14;
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 && amd64g_calculate_condition(0, 4, a3, v12, v17) as char {
        return struct9 {
            field_0: 9223372036854775812
            field_8: 0
        };
    }
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v0) as i8 {
        return struct56 {
            field_0: v19
            field_16: *((&v2 as &char + 7) as &i128)
            field_32: *((&v3 as &char + 8) as &i64)
            field_40: v15
            field_48: v18
        };
    }
    return struct24 {
        field_0: 9223372036854775810
        field_40: <UNKNOWN>
        field_48: <UNKNOWN>
    };
}
