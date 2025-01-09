fn uu_seq::numberparse::is_minus_zero_int(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u32;  // [bp-0x48], Other Possible Types: struct40

    v0 = 0;
    if core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        v0 = struct40 {
            field_0: 0x80000000000000000
            field_16: 0x10000000000000000
            field_32: 0
        };
        return bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(a2, &v0) as i32;
    }
    return 0;
}
