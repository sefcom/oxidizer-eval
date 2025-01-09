long long uu_du::parse_time_style::h4c003b6524a78ee2(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x38]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax

    if (!a1)
    {
LABEL_4f3f92:
        a0[1] = "%Y-%m-%d %H:%M";
        a0[2] = 14;
        goto LABEL_4f3fa5;
    }
    else
    {
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(a1, a2, "full-iso", 8))
        {
            a0[1] = "%Y-%m-%d %H:%M:%S.%f %z";
            a0[2] = 23;
            goto LABEL_4f3fa5;
        }
        if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(a1, a2, "long-iso", 8)))
            goto LABEL_4f3f92;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb35b18b4f111dc4a(a1, a2, "iso", 3))
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1383527df360b9cf(&v1, a1, a2);
            v0 = 2;
            *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&v0);
            a0[2] = &g_584558;
            v3 = 1;
        }
        else
        {
            a0[1] = "%Y-%m-%d";
            a0[2] = 8;
LABEL_4f3fa5:
            v3 = 0;
        }
    }
    a0[0] = v3;
    return a0;
}
