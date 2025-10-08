long long uu_dd::progress::ProgUpdate::write_io_lines(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    char *v3;  // [bp-0x40], Other Possible Types: unsigned long long
    int v4;  // [bp-0x38], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x30]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned int v11;  // eax

    v9 = a0->padding_0[16].report(a1);
    if (v9)
        return v9;
    v10 = a0[1].padding_0[4].report(a1);
    if (v10)
        return v10;
    v11 = a0->field_28;
    if (!v11)
        return 0;
    if (v11 == 1)
    {
        v1 = &g_53d960;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
    }
    else
    {
        v0 = v11;
        v6 = &v0;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v1 = &g_53d970;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
    }
    return a1.write_fmt(&v1);
}
