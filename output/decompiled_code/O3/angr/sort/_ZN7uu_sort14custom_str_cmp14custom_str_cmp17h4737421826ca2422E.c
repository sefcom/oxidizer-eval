long long uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(void* a0, unsigned long a1, void* a2, unsigned long a3, char a4, unsigned long a5)
{
    char v0;  // [bp-0x72]
    char v1;  // [sp-0x71]
    unsigned long v2;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x68]
    char *v4;  // [sp-0x60]
    char *v5;  // [sp-0x58]
    unsigned long v6;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x48]
    char *v8;  // [sp-0x40]
    char *v9;  // [sp-0x38]
    unsigned long v10;  // [bp+0x8]
    unsigned long long v11;  // rax
    unsigned long v13;  // 4096
    unsigned int v14;  // r13d
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax

    v11 = (char)v10;
    v1 = a5;
    if (!(unsigned int)a5 && !(char)v11 && !a4)
    {
        if (a1 < a3)
            v13 = a1;
        else
            v13 = a3;
        v19 = memcmp(a0, a2, v13);
        if ((unsigned int)v19)
            v20 = v19;
        else
            v20 = a1 - a3;
        v17 = ((char)amd64g_calculate_condition(9, 20, v20, 0, v18) ? (-0x100 | v20) & 4294967295 & 4294967295 : 255);
        return v17;
    }
    v2 = a0;
    v3 = a1 + a0;
    v4 = &v0;
    v5 = &v1;
    v6 = a2;
    v7 = a3 + a2;
    v8 = &v0;
    v9 = &v1;
    while (true)
    {
        v14 = core::iter::traits::iterator::Iterator::try_fold::hd22c190233dc3738(&v2, &v4, a2);
        v16 = core::iter::traits::iterator::Iterator::try_fold::hba92221d128020d6(&v6, &v8, v15);
        if (v14 == 0x110000)
        {
            v17 = v16 | -0x100 | -((unsigned int)v16 != 0x110000);
            return v17;
        }
        else if ((unsigned int)v16 == 0x110000)
        {
            v17 = v16 | -0x100 | 1;
            return v17;
        }
        else
        {
            v17 = uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(v14, v16 & 4294967295, v11 & 4294967295 & 4294967295);
            if ((char)v17)
                return v17;
        }
    }
}
