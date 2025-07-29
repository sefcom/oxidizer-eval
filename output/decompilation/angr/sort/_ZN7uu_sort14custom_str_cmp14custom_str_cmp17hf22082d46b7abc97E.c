long long uu_sort::custom_str_cmp::custom_str_cmp(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4, char a5, char a6)
{
    char v0;  // [bp-0x72]
    char v1;  // [bp-0x71]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char *v4;  // [bp-0x60]
    char *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    char *v8;  // [bp-0x40]
    char *v9;  // [bp-0x38]
    unsigned long v10;  // rax
    unsigned int v11;  // r13d
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v0 = a4;
    v1 = a5;
    if ((a5 | a4 | a6) != 1)
        return a0.compare(a1, a2, a3);
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
