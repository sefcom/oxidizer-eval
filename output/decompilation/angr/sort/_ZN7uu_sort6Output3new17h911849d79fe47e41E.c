long long uu_sort::Output::new(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd0]
    char v2;  // [bp-0xcf]
    char v3;  // [bp-0xcc], Other Possible Types: unsigned short
    char v4;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xc4]
    unsigned long long v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    unsigned int v8;  // [bp-0xb0]
    char v9;  // [bp-0xac]
    int v10;  // [bp-0x9c]
    char v11;  // [bp-0x8c]
    unsigned int v12;  // [bp-0x7c]
    int v13;  // [bp-0x78], Other Possible Types: char
    char v14;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned int v15;  // [bp-0x60]
    char v16;  // [bp-0x5c]
    int v17;  // [bp-0x4c]
    char v18;  // [bp-0x3c]
    char v19;  // [bp-0x2c]
    unsigned long long v22;  // r12

    v22 = 0x8000000000000000;
    if (a1)
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v3 = 0;
        v2 = 1;
        v3 = 1;
        v4.open(&v0, a1, a2);
        if (v4 == 1)
        {
            uu_sort::Output::new::{{closure}}(&v14, a1, a2, v6);
            v12 = *((int *)&v19);
            memcpy(&v11, &v18, 16);
            v10 = v17;
            memcpy(&v9, &v16, 16);
            v7 = v14;
            v8 = v15;
            *((double *)&a0[8]) = v7.new();
            *((char **)&a0[16]) = &g_58c448;
            *((unsigned long long *)a0) = 9223372036854775809;
            return a0;
        }
        (char)v7.to_vec(a1, a2);
        memcpy(&v13, &(char)v8, 16);
        v22 = v7;
    }
    *((unsigned long long *)a0) = v22;
    a0[8] = v13;
    *((unsigned int *)&a0[24]) = v5;
    return a0;
}
