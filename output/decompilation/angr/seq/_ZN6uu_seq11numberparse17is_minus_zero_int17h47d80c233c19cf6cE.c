long long uu_seq::numberparse::is_minus_zero_int::h47d80c233c19cf6c(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x48], Other Possible Types: unsigned int
    int v1;  // [sp-0x38]
    void* v2;  // [sp-0x28]

    v0 = 0;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(a0, a1, ::0x4cd1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), 1))
        return 0;
    *((uint128_t *)&v1) = 0x10000000000000000;
    *((uint128_t *)&v0) = 0x80000000000000000;
    v2 = 0;
    ::0x4ccea0::core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&v0);
    return (unsigned int)bigdecimal::impl_cmp::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$bigdecimal..BigDecimal$GT$::eq::h0c7161c8c911041f(a2, &v0);
}
