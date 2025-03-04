long long uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(void* a0, unsigned long a1, void* a2, unsigned long a3, char a4, unsigned long a5, char a6)
{
    char v0;  // [sp-0x72]
    char v1;  // [sp-0x71]
    unsigned long v2;  // [sp-0x70]
    unsigned long long v3;  // [sp-0x68]
    char *v4;  // [sp-0x60]
    char *v5;  // [sp-0x58]
    unsigned long v6;  // [sp-0x50]
    unsigned long long v7;  // [sp-0x48]
    char *v8;  // [sp-0x40]
    char *v9;  // [sp-0x38]
    unsigned long long v10;  // rax
    unsigned long v12;  // rcx
    unsigned int v13;  // r13d
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // cc_ndep
    unsigned long long v17;  // rax
    unsigned long v18;  // rbx
    unsigned long long v20;  // rbx

    v10 = a6;
    v0 = a4;
    v1 = a5;
    if (!(unsigned int)a5 && !(char)v10 && !a4)
    {
        if (a1 < a3)
            v12 = a1;
        else
            v12 = a3;
        v17 = memcmp(a0, a2, v12);
        if ((unsigned int)v18)
            v20 = v17;
        else
            v20 = a1 - a3;
        v15 = ((char)amd64g_calculate_condition(9, 20, v20, 0, v16) ? v20 : 255);
        return v15;
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
        v13 = core::iter::traits::iterator::Iterator::try_fold::hd22c190233dc3738(&v2, &v4);
        v14 = core::iter::traits::iterator::Iterator::try_fold::hba92221d128020d6(&v6, &v8);
        if (v13 == 0x110000)
        {
            v15 = v14 & 0xffffffffffffff00 | -((unsigned int)v14 != 0x110000);
            return v15;
        }
        else if ((unsigned int)v14 == 0x110000)
        {
            v15 = v14 & 0xffffffffffffff00 | 1;
            return v15;
        }
        else
        {
            v15 = uu_sort::custom_str_cmp::cmp_chars::h48aa6e867f01ccd6(v13, v14 & 4294967295, v10 & 4294967295 & 4294967295);
            if ((char)v15)
                return v15;
        }
    }
}
