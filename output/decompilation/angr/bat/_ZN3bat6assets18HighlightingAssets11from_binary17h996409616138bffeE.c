long long bat::assets::HighlightingAssets::from_binary(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    char v4;  // [bp-0x18]

    v1 = &g_4a0048;
    v2 = 989809;
    v0 = 0x8000000000000000;
    bat::assets::get_integrated_themeset(&v3);
    a0->field_18 = 0x8000000000000000;
    a0->field_0 = *((int128_t *)&v0);
    a0->field_10 = 989809;
    *((void*)&(&a0->padding_20)[1]) = v3;
    *((long long *)((char *)&a0->field_68 + 8)) = *((long long *)&v4);
    a0->field_78 = 0;
    return a0;
}
