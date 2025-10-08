long long uu_sort::KeySettings::check_compatibility(unsigned long long *a0, char a1, char a2, char a3)
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    char *v7;  // [bp-0x20]
    unsigned long long v8;  // [bp-0x18]
    void* v9;  // [bp-0x10]
    unsigned long long v11;  // rax

    if (a1 > 3)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if (a3)
    {
        v0 = *((int *)(4355408 + 4 * a1));
        v11 = "d";
    }
    else if (a2)
    {
        v0 = *((int *)(4355408 + 4 * a1));
        v11 = "i";
    }
    else
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v1 = v11;
    v2 = <char as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <char as core::fmt::Display>::fmt;
    v5 = &g_58cdc0;
    v6 = 3;
    v9 = 0;
    v7 = &v1;
    v8 = 2;
    return a0.map_or_else(&v5);
}
