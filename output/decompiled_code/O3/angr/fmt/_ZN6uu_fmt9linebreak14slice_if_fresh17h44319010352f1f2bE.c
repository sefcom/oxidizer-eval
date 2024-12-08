long long uu_fmt::linebreak::slice_if_fresh::h44319010352f1f2b(unsigned long long a0[3], unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v1;  // [bp+0x8]
    char v2;  // [bp+0x10]
    char v3;  // [bp+0x18]
    unsigned long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdi

    v0 = v4;
    if (!a1)
    {
        v5 = (char)v1;
        v6 = (v3 & (char)v5 | v2) + 1;
    }
    else
    {
        v5 = ::0x4bc5d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a4, a2, a3);
        if (!v5)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
    }
    a0[0] = 0;
    a0[1] = a2;
    a0[2] = a3;
    return v5;
}
