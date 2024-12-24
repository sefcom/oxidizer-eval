long long uu_sort::custom_str_cmp::custom_str_cmp::h4b6f228e69f081b7(void* a0, unsigned long a1, void* a2, unsigned long a3, char a4, unsigned long a5)
{
    char v0;  // [bp-0x72]
    char v1;  // [sp-0x71]
    unsigned long v2;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x68]
    unsigned long v4;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x58]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    unsigned long v8;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x38]
    unsigned long v10;  // [bp+0x8]
    unsigned long v11;  // rax
    unsigned int v13;  // r13d
    unsigned long long v14;  // rdx
    unsigned long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // cc_ndep
    unsigned long long v19;  // rax

    v11 = (char)v10;
    v1 = a5;
    if (!(unsigned int)a5 && !(char)v11 && !a4)
    {
        v16 = ((char)amd64g_calculate_condition(9, 20, v19, 0, v17) ? (-0x100 | v19) & 4294967295 & 4294967295 : 255);
        return v16;
    }
    v2 = a0;
    v3 = a3 + a0;
    v4 = &v0;
    v5 = &v1;
    v6 = a2;
    v7 = a3 + a2;
    v8 = &v0;
    v9 = &v1;
    while (true)
    {
        v13 = core::iter::traits::iterator::Iterator::try_fold::h23d2bffda3b310e5(&v2, &v4, a2);
        v15 = core::iter::traits::iterator::Iterator::try_fold::h1808b6581b4860fc(&v6, &v8, v14);
        if (v13 == 0x110000)
        {
            v16 = v15 | -0x100 | -((unsigned int)v15 != 0x110000);
            return v16;
        }
        else if ((unsigned int)v15 != 0x110000)
        {
            v16 = uu_sort::custom_str_cmp::cmp_chars::hd89be931d8fb18bb(v13, v15 & 4294967295, v11 & 4294967295 & 4294967295);
            if ((char)v16)
                return v16;
        }
        else
        {
            v16 = v15 | -0x100 | 1;
            return v16;
        }
    }
}
