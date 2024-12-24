long long uu_seq::numberparse::is_minus_zero_float::h8545b6ec0fcbdc7a(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x48], Other Possible Types: unsigned int
    int v1;  // [sp-0x38]
    void* v2;  // [sp-0x28]

    v0 = 0;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h56dc04e5b1d0462c(a0, a1, ::0x4cd820::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
        return 0;
    *((int128_t *)&v1) = 0x10000000000000000;
    *((int128_t *)&v0) = 0x80000000000000000;
    v2 = 0;
    ::0x4cd520::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9f319f80350f5d60(&v0);
    return (unsigned int)bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h4e91834ed0ba9525(a2, &v0);
}
