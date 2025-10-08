long long uu_sort::custom_str_cmp::custom_str_cmp(void* a0, unsigned long a1, void* a2, unsigned long a3, char a4, char a5, char a6)
{
    char v0;  // [bp-0x72]
    char v1;  // [bp-0x71]
    void* v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char *v4;  // [bp-0x60]
    char *v5;  // [bp-0x58]
    void* v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    char *v8;  // [bp-0x40]
    char *v9;  // [bp-0x38]
    unsigned long v10;  // rax
    unsigned int v11;  // r13d
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // rbx
    unsigned long v15;  // 4096
    unsigned long v16;  // rax
    unsigned long v17;  // rax

    v0 = a4;
    v1 = a5;
    if ((a4 | a5 | a6) == 1)
    {
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
            v11 = v2.try_fold(&v4);
            v12 = v6.try_fold(&v8);
            if (v11 == 0x110000)
            {
                return v12 & 0xffffffffffffff00 | -((unsigned int)v12 != 0x110000);
            }
            else if ((unsigned int)v12 != 0x110000)
            {
                v13 = uu_sort::custom_str_cmp::cmp_chars(v11, v12, (unsigned int)v10 & 255);
                if ((char)v13)
                    return v13;
            }
            else
            {
                return v12 & 0xffffffffffffff00 | 1;
            }
        }
    }
    else
    {
        v14 = a1 - a3;
        if (a1 < a3)
            v15 = a1;
        else
            v15 = a3;
        v16 = memcmp(a0, a2, v15);
        if ((unsigned int)v16)
            v17 = v16;
        else
            v17 = v14;
        return v16 & 0xffffff00 | (v17 > 0) - (v17 < 0);
    }
}
