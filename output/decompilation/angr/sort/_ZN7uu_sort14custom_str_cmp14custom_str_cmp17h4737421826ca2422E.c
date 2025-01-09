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
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // cc_ndep
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v11 = (char)v10;
    v1 = a5;
    if (!(unsigned int)a5 && !(char)v11 && !a4)
    {
        if (a1 < a3)
            v13 = a1;
        else
            v13 = a3;
        v18 = memcmp(a0, a2, v13);
        if ((unsigned int)v18)
            v19 = v18;
        else
            v19 = a1 - a3;
        v16 = ((char)amd64g_calculate_condition(9, 20, v19, 0, v17) ? v19 : 255);
        return v16;
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
        v14 = core::iter::traits::iterator::Iterator::try_fold::hd22c190233dc3738(&v2, &v4);
        v15 = core::iter::traits::iterator::Iterator::try_fold::hba92221d128020d6(&v6, &v8);
        if (v14 == 0x110000)
        {
            v16 = v15 & 0xffffffffffffff00 | -((unsigned int)v15 != 0x110000);
            return v16;
        }
        else if ((unsigned int)v15 == 0x110000)
        {
            v16 = v15 & 0xffffffffffffff00 | 1;
            return v16;
        }
        else
        {
            v16 = uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(v14, v15 & 4294967295, v11 & 4294967295 & 4294967295);
            if ((char)v16)
                return v16;
        }
    }
}
