long long uu_sort::GlobalSettings::parse_byte_count(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x58], Other Possible Types: unsigned long long
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned short v10;  // [bp-0x10]
    char v11;  // [bp-0xe]
    unsigned long long v14;  // rdx
    int v15;  // xmm0
    unsigned long long v16;  // rcx

    v10 = 0;
    v6 = &g_6703c8;
    v7 = 16;
    v8 = "KbkmMgGtTPEZYRQ%";
    v9 = 1;
    v11 = 1;
    v2.parse(&v6, core::str::<impl str>::trim_matches(a1, a2), v14);
    if (v2 != 4)
    {
        v15 = *((int128_t *)&v3);
        v16 = *((long long *)&v5);
        a0->field_0 = v2;
        *((void*)&a0->field_8) = v15;
        a0->field_18 = v16;
        return a0;
    }
    v1 = *((long long *)&v5);
    v0 = v4;
    if (*((long long *)&v5))
    {
        uu_sort::GlobalSettings::parse_byte_count::{{closure}}(a0, &v0);
    }
    else
    {
        *((unsigned long long *)&a0->field_8) = v4;
        a0->field_0 = 4;
    }
    return a0;
}
