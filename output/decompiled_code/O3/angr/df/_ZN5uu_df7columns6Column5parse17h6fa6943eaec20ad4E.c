long long uu_df::columns::Column::parse::h6fa6943eaec20ad4(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v0 = v2;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "source", 6))
        return 0;
    v4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "fstype", 6);
    v3 = v4 | -0x100 | 11;
    if ((char)v4)
        return v3;
    v5 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "itotal", 6);
    v3 = v5 | -0x100 | 6;
    if ((char)v5)
        return v3;
    v6 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "iused", 5);
    v3 = v6 | -0x100 | 7;
    if ((char)v6)
        return v3;
    v7 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "iavail", 6);
    v3 = v7 | -0x100 | 8;
    if ((char)v7)
        return v3;
    v8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "ipcent", 6);
    v3 = v8 | -0x100 | 9;
    if ((char)v8)
        return v3;
    v9 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "size", 4);
    v3 = v9 | -0x100 | 1;
    if ((char)v9)
        return v3;
    v10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "used", 4);
    v3 = v10 | -0x100 | 2;
    if ((char)v10)
        return v3;
    v11 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "avail", 5);
    v3 = v11 | -0x100 | 3;
    if ((char)v11)
        return v3;
    v12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "pcent", 5);
    v3 = v12 | -0x100 | 4;
    if ((char)v12)
        return v3;
    v13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "filei128", 4);
    v3 = v13 | -0x100 | 10;
    if (!(char)v13)
    {
        v3 = ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2223e21cfaa1d5dc(a0, a1, "target", 6) ? 5 : 12);
        return v3;
    }
    return v3;
}
