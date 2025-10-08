long long fish::wildcard::expander::WildCardExpander::new(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned short a3, unsigned long a4, unsigned long a5, unsigned long long a6[3])
{
    int v0;  // [bp-0x90], Other Possible Types: char
    int v1;  // [bp-0x80]
    int v2;  // [bp-0x70]
    int v3;  // [bp-0x60], Other Possible Types: char
    int v4;  // [bp-0x50]
    char v5;  // [bp-0x40]

    v0.collect(a6[1], a6[2] * 56 + a6[1]);
    v3.default();
    a0->field_50 = *((int128_t *)&v5);
    *((void*)&a0->field_40) = v4;
    *((void*)&a0->field_30) = v3;
    a0->field_60 = a4;
    a0->field_68 = a5;
    a0->field_70 = a1;
    a0->field_78 = a2;
    *((void*)&a0->field_0) = v0;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_20) = v2;
    a0->field_88 = a3;
    a0->field_80 = a6;
    a0->field_8a = 0;
    a0->field_8c = 0;
    return a0;
}
