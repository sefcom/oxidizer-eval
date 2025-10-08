long long uu_ls::display_uname(unsigned int a0, char a1, unsigned long a2)
{
    void* v0;  // [bp-0x48]
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    char v4;  // [bp-0x28], Other Possible Types: unsigned long
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]

    v4.rustc_entry(a2 + 136, a0);
    if (v4)
    {
        v3 = *((long long *)&v6);
        *((int128_t *)&v1) = *((int128_t *)&v4);
    }
    else
    {
        *((int128_t *)&v2) = *((int128_t *)&v5);
        v0 = 0;
    }
    return (char)v1.or_insert_with(a1, a0);
}
