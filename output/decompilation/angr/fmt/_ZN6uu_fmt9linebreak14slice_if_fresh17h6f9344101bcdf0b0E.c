long long uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(unsigned long long a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7, char a8)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    void* v4;  // rsi
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long v7;  // rsi

    v0 = v1;
    if (!a1)
    {
        v2 = a6;
        v3 = ((v2 & 255 & 255) ? 0 : (a8 & (char)v2 | a7) + 1);
        if (!a5)
        {
            v4 = v3;
            v6 = a3;
        }
        else
        {
            v4 = v7;
            v6 = a3;
        }
    }
    else
    {
        v2 = ::0x4bad70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a4, a2, a3);
        if (!v2)
            core::str::slice_error_fail::h5dbb61534404fe7e(a2, a3, a4, a3, &g_5268a0); /* do not return */
        v4 = 0;
        a2 = v2;
        v6 = v5;
    }
    a0[0] = v4;
    a0[1] = a2;
    a0[2] = v6;
    return v2;
}
