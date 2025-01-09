long long uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(unsigned long long a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v1;  // [bp+0x8]
    char v2;  // [bp+0x10]
    char v3;  // [bp+0x18]
    unsigned long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    void* v9;  // rsi
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long long v12;  // rdx

    v0 = v4;
    if (!a1)
    {
        v5 = (char)v1;
        v6 = (v3 & (char)v5 | v2) + 1;
        if ((char)v5)
            v7 = v6;
        else
            v7 = 0;
        if (a5)
        {
            v9 = v6;
            v10 = a2;
            v12 = a3;
        }
        else
        {
            v9 = v7;
        }
    }
    else
    {
        v5 = ::0x4bad70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a4, a2, a3);
        if (!v5)
            core::str::slice_error_fail::h5dbb61534404fe7e(a2, a3, a4, a3, &g_5268a0); /* do not return */
        v9 = 0;
        v10 = v5;
        v12 = v11;
    }
    a0[0] = v9;
    a0[1] = v10;
    a0[2] = v12;
    return v5;
}
