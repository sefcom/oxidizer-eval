long long fish::function::get_function_body_source(struct_0 *a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x44]
    char v2;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x38]
    uint128_t v4;  // [bp-0x30]
    unsigned long long v6;  // r14
    unsigned long long v7;  // rdx

    v0.try_source_range(a0->field_38 + 16);
    if (*((int *)&v0) == 1)
    {
        v0.try_source_range(a0->field_38);
        if ((v0 & 1))
        {
            v6 = *((int *)&v2) + v1;
            if (v6 > v1)
            {
                v0 = &g_14d8ee8;
                v2 = 1;
                v3 = 8;
                v4 = 0;
                core::panicking::panic_fmt(&v0, &g_14d8ef8); /* do not return */
            }
            return a0->field_30->field_18.slice_to(a0->field_30->field_20, v1).slice_from(v7, v6);
        }
    }
    return 4;
}
