long long uu_du::parse_time_style::hfbbbff54d6a58033(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x38]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax

    if (!a1)
    {
LABEL_4f3bc2:
        a0[1] = "%Y-%m-%d %H:%M";
        a0[2] = 14;
        goto LABEL_4f3bd5;
    }
    else
    {
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8a11194562092a9a(a1, a2, "full-iso", 8))
        {
            a0[1] = "%Y-%m-%d %H:%M:%S.%f %z";
            a0[2] = 23;
            goto LABEL_4f3bd5;
        }
        if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8a11194562092a9a(a1, a2, "long-iso", 8)))
            goto LABEL_4f3bc2;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8a11194562092a9a(a1, a2, "iso", 3))
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8434be8f27859977(&v1, a1, a2);
            v0 = 2;
            *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h65b741b2d8b6c1fe(&v0);
            a0[2] = &g_583ff8;
            v3 = 1;
        }
        else
        {
            a0[1] = "%Y-%m-%d";
            a0[2] = 8;
LABEL_4f3bd5:
            v3 = 0;
        }
    }
    a0[0] = v3;
    return a0;
}
