long long fish::fallback::wcscasecmp_fuzzy::ToLowerBuffer<Canonicalize>::new(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x50], Other Possible Types: char
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x2c]
    unsigned int v4;  // eax
    unsigned int v5;  // edx
    unsigned long long v7;  // rax
    int v8;  // xmm1

    v4 = a1.next();
    if (v4 == 2)
    {
        fish::fallback::wcscasecmp_fuzzy::ToLowerBuffer<Canonicalize>::new::{{closure}}(&v0);
    }
    else
    {
        v4.unwrap(v5, &g_14bd1b0);
        core::unicode::unicode_data::conversions::to_lower(&v2, (unsigned int)a1->field_10.call_mut(v5));
        v0.new(&v2);
    }
    v7 = a1->field_10;
    a0->field_10 = v7;
    a0->field_0 = a1->field_0;
    v8 = *((int128_t *)&v1);
    *((void*)&(&a0->field_10)[1]) = v0;
    *((void*)((char *)&a0->field_18 + 8)) = v8;
    return v7;
}
