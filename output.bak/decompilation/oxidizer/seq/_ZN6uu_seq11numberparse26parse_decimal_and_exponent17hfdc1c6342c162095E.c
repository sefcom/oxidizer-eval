fn uu_seq::numberparse::parse_decimal_and_exponent(a0: &struct56, a1: &u8, a2: u32, a3: u32, a4: &u8) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [bp-0xa0]
    let v3: struct41;  // [sp-0x98], Other Possible Types: i328, Result<struct2, struct8>, struct9
    let v4: i8;  // [bp-0x90]
    let v5: i64;  // [sp-0x70]
    let v6: i8;  // [sp-0x68]
    let v7: i128;  // [bp-0x67]
    let v8: i128;  // [sp-0x58]
    let v9: i128;  // [sp-0x48]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // rbp
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i8;  // cl
    let v17: i64;  // rdx
    let v18: i64;  // rax
    let v21: i64;  // r14

    v12 = a4 + 1;
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v12, a1, a2);
    if !v13 {
        core::str::slice_error_fail(a1, a2, v12, a2, "src/uu/seq/src/numberparse.rs"); /* do not return */
    }
    v3 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v13, v14) as u64;
    return struct9 {
        field_0: 9223372036854775812
        field_8: 0
    };
    v2 = v4;
    v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    v15 = v3;
    if v5 == 0x8000000000000000 {
        v10 = *((&v3 as &char + 24) as &i64);
        v9 = *((&v3 as &char + 8) as &i128);
    }
    v16 = *((&v3 as &char + 8) as &i8);
    v7 = *((&v3 as &char + 9) as &i128);
    v8 = *((&v3 as &char + 24) as &i128);
    v5 = v15;
    v6 = v16;
    if a4 {
        if a4 >= a2 {
            if a4 != a2 {
                core::str::slice_error_fail(a1, a2, 0, a4, "src/uu/seq/src/numberparse.rs"); /* do not return */
            }
        } else {
            if *((a1 + a4) as &i8) <= 191 {
                core::str::slice_error_fail(a1, a2, 0, a4, "src/uu/seq/src/numberparse.rs"); /* do not return */
            }
        }
    }
    v3 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(a1, a4);
    return struct9 {
        field_0: 9223372036854775812
        field_8: 0
    };
    v17 = v2;
    v18 = v17 + 2;
    if v17 <= 0 {
        v18 = 2;
    }
    if !((*((&v3 as &char + 8) as &i64) - 0 >> 63) as char) {
        v18 = 1;
    }
    v0 = v18;
    v1 = a3 + v17;
    v0 = v0;
    if v0 >= v0 {
        v0 = v1 + 1;
        v0 = v0;
    }
    v21 = ~(a3) + a4;
    if v21 >= v2 {
        core::result::Result<T,E>::unwrap(v21 - v2 >> 63);
    }
    if !uu_seq::numberparse::is_minus_zero_float(a1, a2, &v5) as i8 {
        return struct56 {
            field_0: v23
            field_16: *((&v7 as &char + 7) as &i128)
            field_32: *((&v8 as &char + 8) as &i64)
            field_40: v0
            field_48: v22
        };
    }
    return struct24 {
        field_0: 9223372036854775810
        field_40: <UNKNOWN>
        field_48: <UNKNOWN>
    };
}
