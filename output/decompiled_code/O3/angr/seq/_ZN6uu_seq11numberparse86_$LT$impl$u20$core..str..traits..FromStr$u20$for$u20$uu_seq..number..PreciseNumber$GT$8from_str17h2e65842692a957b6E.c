long long uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h2e65842692a957b6(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx

    v4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h1e6dc61eeb822cd9(a1, a2);
    v0 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h56dc04e5b1d0462c(v4, v5, ::0x4cc840::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1))
    {
        v4 = ::0x4cc310::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v4, v5);
        if (!v4)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    }
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v0, v4, v6);
    if (core::str::_$LT$impl$u20$str$GT$::find::h556bb85a64539766(*((long long *)&v1), *((long long *)&v2)) == 1 && v5 < 2)
    {
        uu_seq::numberparse::parse_hexadecimal::h3b3e11632769a283(a0, v4, v6);
        ::0x4cc180::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h58559877abe05bd8(&v0);
        return a0;
    }
    ::0x4cc180::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h58559877abe05bd8(&v0);
    v7 = ::0x4cc2d0::core::str::_$LT$impl$u20$str$GT$::find::hde296b26ee893a46(v4, v6);
    if (!::0x4cc2d0::core::str::_$LT$impl$u20$str$GT$::find::hde296b26ee893a46(v4, v6))
    {
        v8 = v4;
        v9 = v6;
        if (!v7)
        {
            uu_seq::numberparse::parse_no_decimal_no_exponent::h2c4ef945266e32f2(a0, v8, v9);
            return a0;
        }
        uu_seq::numberparse::parse_exponent_no_decimal::h86a1563ad80b7e6f(a0, v8, v9, v5);
        return a0;
    }
    else if (!v7)
    {
        uu_seq::numberparse::parse_decimal_no_exponent::h079eb32957887a01(a0, v4, v6, v5);
        return a0;
    }
    else if (v5 < v5)
    {
        uu_seq::numberparse::parse_decimal_and_exponent::h003f6de4220ec4be(a0, v4, v6, v5, v5);
        return a0;
    }
    else
    {
        a0->field_8 = 0;
        a0->field_0 = 9223372036854775812;
        return a0;
    }
}
