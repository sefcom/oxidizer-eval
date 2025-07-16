fn uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(a1: i64, a2: i64) -> : struct56 {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x40]
    let v1: alloc::string::String;  // [bp-0x40]
    let v2: u32;  // [bp-0x38]
    let v4: core::option::Option<&str>;  // r15
    let v5: u64;  // rdx
    let v7: u64;  // r14
    let v8: u64;  // rdi
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rsi
    let v12: u64;  // rdx
    let v13: u64;  // rdi
    let v14: u64;  // rdi
    let v15: u64;  // rdi
    let v16: u64;  // rdi
    let v17: i64;  // rdi
    let v18: &mut [u8];  // rax:rdx

    v4 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = 0;
    v18 = core::char::methods::encode_utf8_raw(43, &v0, a1);
    if core::slice::<impl [T]>::starts_with(v4, v5, v18.data_ptr, 1) {
        v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v4, v5) as u64;
    }
    v1 = alloc::str::<impl str>::to_lowercase(v4, v7);
    if core::str::<impl str>::find(v2, v1.vec.len) == 1 && v5 < 2 {
        uu_seq::numberparse::parse_hexadecimal(v8, v4, v7);
        return;
    }
    v9 = core::str::<impl str>::find(v4, v7, 46);
    v10 = core::str::<impl str>::find(v4, v7, 101);
    if !v9 {
        v11 = v4;
        v12 = v7;
        if !v10 {
            uu_seq::numberparse::parse_no_decimal_no_exponent(v15, v11, v12);
            return;
        }
        uu_seq::numberparse::parse_exponent_no_decimal(v14, v11, v12, v5);
        return;
    } else if !v10 {
        uu_seq::numberparse::parse_decimal_no_exponent(v13, v4, v7, v5);
        return;
    } else if v5 < v5 {
        uu_seq::numberparse::parse_decimal_and_exponent(v16, v4, v7, v5, v5);
        return;
    } else {
        *((v17 + 8) as &i8) = 0;
        *(v17 as &i64) = 9223372036854775812;
        return;
    }
}
