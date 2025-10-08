long long fish::pager::Pager::completion_info_passes_filter(struct_0 *a0, unsigned long long a1[6])
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    unsigned int v8;  // r14d
    unsigned int v9;  // r14d
    unsigned long long v10;  // rbx
    void* v11;  // rbp
    void* v12;  // rbp
    unsigned long long v14;  // rdx
    unsigned long v15;  // r14
    unsigned int v16;  // r14d

    v9 = v8 & 0xffffff00 | 1;
    if (a0->field_111 != 1)
        return v9;
    v10 = a0->field_40;
    if (!v10)
        return v9;
    v2 = a0->field_38;
    if ((char)fish::wcstringutil::string_fuzzy_match_string(a0->field_38, v10, a1[4], a1[5], 0) != 3)
    {
        return v9;
    }
    else if (a1[2])
    {
        v1 = a0->field_d0;
        v0 = a1[2] * 24 - 24;
        v11 = 0;
        while (true)
        {
            v12 = v11;
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v1, a0->field_d8);
            v3.add(&v6, *((long long *)(8 + a1[1] + (char *)v12)).index(*((long long *)(16 + a1[1] + (char *)v12)), &g_14dc278), v14);
            v15 = (unsigned int)fish::wcstringutil::string_fuzzy_match_string(v2, v10, v4, v5, 0);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
            v16 = (unsigned int)v15 & 0xffffff00 | (char)v15 != 3;
            if ((char)v15 != 3)
                return v16;
            v11 = v12 + 24;
            if (v0 == v12)
                return v16;
        }
    }
    else
    {
        return 0;
    }
}
