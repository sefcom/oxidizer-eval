long long fish::wcstringutil::ifind(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x41]
    void* v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    char *v7;  // [bp-0x10]
    char *v8;  // [bp-0x8]

    v0 = a4;
    if (!a3)
        return 1;
    v2 = a0;
    v3 = a1;
    v4 = a3;
    v1 = 0;
    v5 = a2;
    v6 = a3;
    v7 = &v0;
    v8 = &v1;
    return (int)v2.try_fold(&v5) & 1;
}
