long long uu_sort::KeySettings::set_sort_mode(void* a0, char a1[6], unsigned int a2)
{
    unsigned int v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x6c]
    unsigned long long v2[1];  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    char *v4;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x50]
    void* v6;  // [bp-0x48]
    char *v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    char *v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long v12;  // rbx
    unsigned long v13;  // rax

    v12 = a2;
    v13 = a1[5];
    if (((char)v13 != (char)v12 & (char)v13 != 6))
    {
        v0 = *((int *)(4375200 + 4 * v13));
        v1 = *((int *)(4375200 + 4 * (v12 & 4294967295)));
        v7 = &v0;
        v8 = <char as core::fmt::Display>::fmt;
        v9 = &v1;
        v10 = <char as core::fmt::Display>::fmt;
        v2 = &g_58cdc0;
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        return a0.map_or_else(&v2);
    }
    v2.check_compatibility(v12, a1[3], a1[2]);
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        *((unsigned long *)&a0[16]) = v4;
        *((int128_t *)a0) = *((int128_t *)&v2);
        return v4;
    }
    a1[5] = v12;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
