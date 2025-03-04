long long uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx

    v4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hfd19a60dd809a602(a1, a2);
    v6 = v5;
    v0 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(v4, v5, ::0x4cc1c0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v0), 1))
    {
        v7 = ::0x4cbc90::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v4, v5);
        if (!v7)
            core::str::slice_error_fail::h5dbb61534404fe7e(v4, v5, 1, v5, &g_543e10); /* do not return */
        v4 = v7;
        v6 = v5;
    }
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v0, v4, v6);
    if (core::str::_$LT$impl$u20$str$GT$::find::h1e180eda41b3ee27(*((long long *)&v1), *((long long *)&v2)) == 1 && v5 < 2)
    {
        uu_seq::numberparse::parse_hexadecimal::ha820262dcdf3b692(a0, v4, v6);
        ::0x4cbb00::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&v0);
        return a0;
    }
    ::0x4cbb00::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&v0);
    v8 = ::0x4cbc50::core::str::_$LT$impl$u20$str$GT$::find::h90335edd368651cb(v4, v6, 101);
    if (!::0x4cbc50::core::str::_$LT$impl$u20$str$GT$::find::h90335edd368651cb(v4, v6, 46))
    {
        v9 = v4;
        v10 = v6;
        if (!v8)
        {
            uu_seq::numberparse::parse_no_decimal_no_exponent::h94839c74700e929c(a0, v9, v10);
            return a0;
        }
        uu_seq::numberparse::parse_exponent_no_decimal::hd2950fa793267dc0(a0, v9, v10, v5);
        return a0;
    }
    else if (!v8)
    {
        uu_seq::numberparse::parse_decimal_no_exponent::hf3af1526d793a9d8(a0, v4, v6, v5);
        return a0;
    }
    else if (v5 < v5)
    {
        uu_seq::numberparse::parse_decimal_and_exponent::hfdc1c6342c162095(a0, v4, v6, v5, v5);
        return a0;
    }
    else
    {
        a0->field_8 = 0;
        a0->field_0 = 9223372036854775812;
        return a0;
    }
}
