fn uu_seq::numberparse::is_minus_zero_int(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: struct40;  // [bp-0x48], Other Possible Types: u32
    let v1: u128;  // [bp-0x48]
    let v5: &mut [u8];  // rax:rdx

    v0 = 0;
    v0 = v1 & 0xffffffffffffffffffffffff00000000;
    v5 = core::char::methods::encode_utf8_raw(45, &v0, a2);
    if !core::slice::<impl [T]>::starts_with(a0, a1, v5.data_ptr, 1) {
        return 0;
    }
    v0 = struct40 {
        field_0: 0x80000000000000000
        field_16: 0x10000000000000000
        field_32: 0
    };
    v0 = struct40 {
        field_0: 0x80000000000000000
        field_16: 0x10000000000000000
        field_32: 0
    };
    return bigdecimal::impl_cmp::<impl core::cmp::PartialEq for bigdecimal::BigDecimal>::eq(a2, &v0) as i32;
}
