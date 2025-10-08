long long uu_sort::GlobalSettings::parse_byte_count(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    char *v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58], Other Possible Types: unsigned short
    char v5;  // [bp-0x56]
    char *v6;  // [bp-0x48], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    int v16;  // xmm0

    v4 = 0;
    v0 = &g_58ccc0;
    v1 = 16;
    v2 = "KBuffer size  does not fit in address spacebkmMgGtTPEZYRQ%options '-' are incompatiblesrc/uu/sort/src/sort.rs";
    v3 = 1;
    v5 = 1;
    v6.parse(&v0, core::str::<impl str>::trim_matches(a1, a2), v14);
    if (v6 != 4)
    {
        v16 = *((int128_t *)&v7);
        *((unsigned long long *)a0) = v6;
        a0[8] = v16;
        *((unsigned long *)&a0[24]) = v9;
        return a0;
    }
    v11 = v9;
    v10 = v8;
    if (v9)
    {
        v6 = &v10;
        v7 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v0 = &g_58cca0;
        v1 = 2;
        v4 = 0;
        v2 = &v6;
        v3 = 1;
        a0 + 8.map_or_else(&v0);
        v15 = 2;
    }
    else
    {
        *((unsigned long long *)&a0[8]) = v8;
        v15 = 4;
    }
    *((unsigned long long *)a0) = v15;
    return a0;
}
