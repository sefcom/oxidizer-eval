long long uu_csplit::InputSplitter<I>::add_line_to_buffer(unsigned long long *a0, struct_1 *a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x58]
    int v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40], Other Possible Types: unsigned long
    char v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x28]

    if (a1->field_58)
    {
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        a1.insert(0, &v0, &g_72ee50);
    }
    else if (a1->field_10 < a1->field_50)
    {
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        a1.push(&v0, &g_72edf0);
    }
    else
    {
        (char)v0.remove(a1, 0, &g_72ee08);
        v5 = v3;
        memcpy(&v4, &v1, 16);
        v3 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        a1.push(&v0, &g_72ee20);
        v2 = v5;
        memcpy(&v0, &v4, 16);
        return a0.unwrap(&v0, &g_72ee38);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
