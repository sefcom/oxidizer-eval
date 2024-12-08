long long uu_join::parse_file_number::he28e1e609b35509d(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    char v5;  // [sp-0x70]
    unsigned long v6;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x60]
    unsigned long long v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    void* v10;  // [sp-0x48]
    char v11;  // [bp-0x38]
    unsigned int v12;  // [sp-0x20]
    unsigned long long v14;  // rax

    v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he3c4ae2851c65488(a1, a2, "1", 1);
    if ((char)v14)
    {
        a0->field_8 = 0;
    }
    else
    {
        v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he3c4ae2851c65488(a1, a2, "2", 1);
        if (!(char)v14)
        {
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v6 = &g_536060;
            v7 = 1;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            ::0x4c29f0::core::option::Option$LT$T$GT$::map_or_else::h194c0e6a97f2c7f4(&v11, &v6);
            v12 = 1;
            *((double *)&a0->field_0) = alloc::boxed::Box$LT$T$GT$::new::h30919857a4b52c57(&v11);
            *((char **)&a0->field_8) = &g_535e48;
            return &g_535e48;
        }
        a0->field_8 = 1;
    }
    a0->field_0 = 0;
    return v14;
}
