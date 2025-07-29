long long uu_od::inputdecoder::MemoryDecoder::read_uint(struct_0 *a0, char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned int v9;  // ebx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rdx
    unsigned int v13;  // ebx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned int v17;  // ebx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdx

    v0 = a2;
    switch (a2)
    {
    case 1:
        if (a0->field_0->field_10 > a1)
            return a1[a0->field_0->field_8];
        core::panicking::panic_bounds_check(a1, a0->field_0->field_10, &g_5962f8); /* do not return */
    case 2:
        v17 = a0->field_18;
        v18 = a1.index(a1 + 2, a0->field_0->field_8, a0->field_0->field_10, &g_596310);
        if (!(v17 && v17 == 1))
            return (unsigned int)v18.read_u16(v20);
        return v18.read_u16(v19);
        return (unsigned int)v18.read_u16(v20);
    case 4:
        v9 = a0->field_18;
        v10 = a1.index(a1 + 4, a0->field_0->field_8, a0->field_0->field_10, &g_596328);
        if (!(v9 && v9 == 1))
            return (unsigned int)v10.read_u32(v12);
        return (unsigned int)v10.read_u32(v11);
        return (unsigned int)v10.read_u32(v12);
    case 8:
        v13 = a0->field_18;
        v14 = a1.index(a1 + 8, a0->field_0->field_8, a0->field_0->field_10, &g_596340);
        if (!(v13 && v13 == 1))
            return v14.read_u64(v16);
        return v14.read_u64(v15);
        return v14.read_u64(v16);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = &g_5962e8;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_596358); /* do not return */
    }
}
