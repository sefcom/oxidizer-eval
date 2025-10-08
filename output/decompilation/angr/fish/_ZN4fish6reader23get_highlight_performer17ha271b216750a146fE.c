double fish::reader::get_highlight_performer(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    int v2;  // [bp-0x48], Other Possible Types: char
    char v3;  // [bp-0x38]
    unsigned int v5;  // eax
    unsigned long long v6;  // r13

    v0 = a1 + 472.snapshot();
    v1 = &g_14d6790;
    v5 = fish::reader::read_generation_count();
    v6 = a2[15];
    v2.to_vec(a2[5], a2[6]);
    a0->field_10 = *((long long *)&v3);
    *((void*)&a0->field_0) = v2;
    a0->field_18 = v0;
    a0->field_20 = &g_14d6790;
    a0->field_30 = v5;
    a0->field_34 = a3;
    a0->field_28 = v6;
    return (unsigned long long)v2;
}
