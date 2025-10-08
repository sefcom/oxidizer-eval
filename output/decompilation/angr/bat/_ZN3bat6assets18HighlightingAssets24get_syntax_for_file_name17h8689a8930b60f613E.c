long long bat::assets::HighlightingAssets::get_syntax_for_file_name(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x77]
    unsigned int v2;  // [bp-0x74]
    int v3;  // [bp-0x70], Other Possible Types: char
    int v4;  // [bp-0x60]
    int v5;  // [bp-0x50]
    int v6;  // [bp-0x40]
    char v7;  // [bp-0x30]
    unsigned int v9;  // ecx

    v0.find_syntax_by_extension(a1, a2, a3);
    if (v0 != 13)
    {
        v9 = *((int *)&v1);
        a0->field_1 = v2;
        *((unsigned int *)&(&a0->field_0)[1]) = v9;
        *((void*)((char *)&a0->field_8 + 8)) = v4;
        *((void*)((char *)&a0->field_18 + 8)) = v5;
        *((void*)((char *)&a0->field_28 + 8)) = v6;
        *((long long *)((char *)&a0->field_38 + 8)) = *((long long *)&v7);
        a0->field_0 = v0;
        *((void*)&a0->field_4) = v3;
        return a0;
    }
    if (!*((long long *)&v3))
    {
        v0.try_with_stripped_suffix(a4, a2, a3, a1, a4);
        if (v0 != 13)
        {
            v9 = *((int *)&v1);
            a0->field_1 = v2;
            *((unsigned int *)&(&a0->field_0)[1]) = v9;
            *((void*)((char *)&a0->field_8 + 8)) = v4;
            *((void*)((char *)&a0->field_18 + 8)) = v5;
            *((void*)((char *)&a0->field_28 + 8)) = v6;
            *((long long *)((char *)&a0->field_38 + 8)) = *((long long *)&v7);
            a0->field_0 = v0;
            *((void*)&a0->field_4) = v3;
            return a0;
        }
    }
    *((void*)&a0->field_4) = v3;
    a0->field_0 = 13;
    return a0;
}
