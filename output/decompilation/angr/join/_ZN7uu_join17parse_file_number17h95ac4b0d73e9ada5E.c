long long uu_join::parse_file_number::h95ac4b0d73e9ada5(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    unsigned long long v3;  // [sp-0x80]
    unsigned long long v4;  // [sp-0x78]
    char v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    struct struct_0 **v8;  // [sp-0x58]
    unsigned long long v9;  // [sp-0x50]
    void* v10;  // [sp-0x48]
    char v11;  // [bp-0x38]
    unsigned int v12;  // [sp-0x20]
    unsigned long long v14;  // rax

    v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(a1, a2, "1", 1);
    if ((char)v14)
    {
        a0->field_8 = 0;
    }
    else
    {
        v14 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(a1, a2, "2", 1);
        if (!(char)v14)
        {
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v6 = &g_5354c0;
            v7 = 1;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            ::0x4c2990::core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4();
            v12 = 1;
            *((double *)&a0->field_0) = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&v11);
            *((char **)&a0->field_8) = &g_5352b8;
            return &g_5352b8;
        }
        a0->field_8 = 1;
    }
    a0->field_0 = 0;
    return v14;
}
