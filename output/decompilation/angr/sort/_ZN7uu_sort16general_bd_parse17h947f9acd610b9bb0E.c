void uu_sort::general_bd_parse(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x80]
    int v5;  // [bp-0x70]
    char v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rcx

    v9 = v11;
    v8 = v12;
    v7 = v13;
    v3.extended_parse(a1, a2);
    if (*((long long *)&v3) == 9223372036854775812)
    {
        memcpy(&v0, &v4, 16);
        v1 = v5;
        v2 = *((long long *)&v6);
        goto (long long)(g_443b0c[(*((long long *)&v0) < 9223372036854775813 ? *((long long *)&v0) + 9223372036854775809 : 0)] + (char *)&g_443b0c[0]);
    }
    else
    {
        v14 = *((long long *)&v3) ^ 0x8000000000000000;
        if (v14 >= 4)
            v14 = 1;
        goto (long long)(g_443afc[v14] + (char *)&g_443afc[0]);
    }
}
