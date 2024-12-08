long long uu_cp::Attributes::parse_single_string::h35e2aa80757127eb(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0xb8]
    unsigned int v1;  // [sp-0xb0]
    char v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x98]
    unsigned long v5;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x88]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    void* v13;  // [sp-0x48]
    void* v14;  // [sp-0x38]
    int v15;  // [sp-0x30]
    char v16;  // [sp-0x20]
    unsigned long long v18;  // r14
    unsigned long long v19;  // r15
    unsigned long long v20;  // rax

    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v2, a1, a2);
    v18 = *((long long *)&v3);
    v19 = *((long long *)&v4);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "all", 3))
    {
        a0[1] = 1103823438081;
        *((int *)&a0[2]) = 65793;
        goto LABEL_5010c1;
    }
    v1 = 0;
    v0 = 0;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "mode", 4))
    {
        v20 = &v0;
        goto LABEL_5010ad;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "ownership", 9))
    {
        v20 = &v0;
        goto LABEL_5010ad;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "timestamps", 10))
    {
        v20 = &v0;
        goto LABEL_5010ad;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "context", 7))
    {
        v20 = &v0;
        goto LABEL_5010ad;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "link", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "links", 5))
    {
        v20 = &v1;
        goto LABEL_5010ad;
    }
    else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(v18, v19, "xattr", 5))
    {
        v14 = 0;
        *((int128_t *)&v15) = *((int128_t *)&v3);
        v16 = 1;
        v5 = &v14;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v9 = &g_5b5570;
        v10 = 1;
        v13 = 0;
        v11 = &v5;
        v12 = 1;
        ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v7, &v9);
        a0[3] = *((long long *)&v8);
        *((int128_t *)&a0[1]) = *((int128_t *)&v7);
        a0[0] = 9;
    }
    else
    {
        v20 = &v1;
LABEL_5010ad:
        *((short *)v20) = 257;
        *((unsigned int *)&a0[2]) = v1;
        a0[1] = v0;
LABEL_5010c1:
        a0[0] = 13;
    }
    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v2);
    return a0;
}
