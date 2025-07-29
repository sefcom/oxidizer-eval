long long uu_ls::display_uname(unsigned int a0, char a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x3c]
    void* v1;  // [bp-0x38]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char v5;  // [bp-0x20], Other Possible Types: unsigned long
    char v6;  // [bp-0x18]
    char v7;  // [bp-0x10]

    v0 = a0;
    v5.rustc_entry(a2 + 72, a0);
    if (v5)
    {
        v4 = *((long long *)&v7);
        *((int128_t *)&v2) = *((int128_t *)&v5);
    }
    else
    {
        *((int128_t *)&v3) = *((int128_t *)&v6);
        v1 = 0;
    }
    return (char)v2.or_insert_with(a1, &v0);
}
