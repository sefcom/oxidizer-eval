long long uu_numfmt::parse_unit::h1c4307f7a3223b20(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5906063cf22035c3(a1, a2, "auto", 4))
    {
        a0->field_8 = 2;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5906063cf22035c3(a1, a2, "si", 2))
    {
        a0->field_8 = 3;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5906063cf22035c3(a1, a2, "iec", 3))
    {
        a0->field_8 = 0;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5906063cf22035c3(a1, a2, "iec-i", 5))
    {
        a0->field_8 = 1;
    }
    else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5906063cf22035c3(a1, a2, "none", 4))
    {
        a0->field_8 = 5;
    }
    else
    {
        return ::0x4bfd50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1588336b2a04b0d6(a0, "Unsupported unit is specifiedsrc/uu/numfmt/src/numfmt.rs", 29);
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
