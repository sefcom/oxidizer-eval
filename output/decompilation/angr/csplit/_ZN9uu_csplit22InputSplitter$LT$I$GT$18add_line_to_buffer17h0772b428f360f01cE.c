long long uu_csplit::InputSplitter<I>::add_line_to_buffer(unsigned long long *a0, struct_1 *a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x58]
    int v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x40], Other Possible Types: unsigned long
    int v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x28]

    if (a1->field_58)
    {
        v0 = a2;
        *((uint128_t *)&v1) = a3->field_0;
        v2 = a3->field_10;
        a1.insert(&v0);
    }
    else if (a1->field_10 < a1->field_50)
    {
        v0 = a2;
        *((uint128_t *)&v1) = a3->field_0;
        v2 = a3->field_10;
        a1.push(&v0, &g_641ca0);
    }
    else
    {
        (char)v0.remove(a1, &g_641cb8);
        v4 = v2;
        v3 = v1;
        v0 = a2;
        *((uint128_t *)&v1) = a3->field_0;
        v2 = a3->field_10;
        a1.push(&v0, &g_641cd0);
        return a0.unwrap(&v3, &g_641ce8);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
