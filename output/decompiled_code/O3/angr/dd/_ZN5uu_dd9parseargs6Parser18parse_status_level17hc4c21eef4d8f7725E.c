long long uu_dd::parseargs::Parser::parse_status_level::hc4c21eef4d8f7725(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(a1, a2, "none", 4))
    {
        a0->field_8 = 2;
        goto LABEL_4d3762;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(a1, a2, "noxfer", 6))
    {
        a0->field_8 = 1;
        goto LABEL_4d3762;
    }
    else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(a1, a2, "progress", 8))
    {
        ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&a0->field_8, a1, a2);
        v1 = 10;
    }
    else
    {
        a0->field_8 = 0;
LABEL_4d3762:
        v1 = 14;
    }
    a0->field_0 = v1;
    return v1;
}
