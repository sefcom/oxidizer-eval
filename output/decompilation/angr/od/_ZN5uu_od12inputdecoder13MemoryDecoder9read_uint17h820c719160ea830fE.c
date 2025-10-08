long long uu_od::inputdecoder::MemoryDecoder::read_uint(unsigned long long a0[3], unsigned int a1, char *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long v9;  // rbx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdi
    unsigned long long v18;  // rdx

    v0 = a3;
    switch (a3)
    {
    case 1:
        if (a2 < a0[2])
            return a2[a0[1]];
        core::panicking::panic_bounds_check(a2, a0[2], &g_5022f0); /* do not return */
    case 2:
        v13 = a2.index(a2 + 2, a0[1], a0[2], &g_502308);
        if (!(char)v9 || (unsigned int)v9 != 1)
            return (unsigned int)v13.read_u16(v15);
        return v13.read_u16(v15);
        return (unsigned int)v13.read_u16(v15);
    case 4:
        v16 = a2.index(a2 + 4, a0[1], a0[2], &g_502320);
        if (!(char)v9 || (unsigned int)v9 != 1)
            return (unsigned int)v16.read_u32(v18);
        return (unsigned int)v16.read_u32(v18);
        return (unsigned int)v16.read_u32(v18);
    case 8:
        v10 = a2.index(a2 + 8, a0[1], a0[2], &g_502338);
        v12 = v11;
        if (!(char)v9 || (unsigned int)v9 != 1)
            return v10.read_u64(v11);
        return v10.read_u64(v11);
        return v10.read_u64(v11);
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v3 = &g_5022e0;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt(&v3, &g_502350); /* do not return */
    }
}
