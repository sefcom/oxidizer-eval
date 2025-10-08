long long uu_numfmt::format::remove_suffix(unsigned long long a0[2], char a1, char a2, char a3)
{
    char v0;  // [bp-0x79]
    char v1;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x58]
    char *v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    void* v7;  // [bp-0x40], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x28]
    char *v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    void* v13;  // [bp-0x10]
    unsigned long v15;  // xmm0lq
    char v16;  // al
    unsigned long v17;  // r8
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx

    if (a2 == 2)
    {
        a0[1] = v15;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v16 = a3 - 2;
    v17 = (v16 < 4 ? v16 : 2);
    if ((a2 & 1))
    {
        if ((char)v17)
        {
            if ((unsigned int)v17 == 2 && (a3 & 1))
                goto (long long)(g_41a3d8[a1] + (char *)&g_41a3d8[0]);
            if (v16 != 3)
                return a0.to_vec("This suffix is unsupported for specified unitmissing 'i' suffix in input: 'rejecting suffix in input: '' (consider using --from)", 45);
            v18 = 1;
            v19 = "iUnit 'auto' isn't supported with --to optionsNumber is too big and unsupported";
        }
        else
        {
            goto (long long)(g_41a3d8[a1] + (char *)&g_41a3d8[0]);
        }
    }
    else
    {
        if ((v17 & 255) < 2)
        {
            goto (long long)(g_41a3b8[a1] + (char *)&g_41a3b8[0]);
        }
        else if ((unsigned int)v17 == 2)
        {
            if ((a3 & 1))
            {
                v1 = a1;
                v9 = &v15;
                v10 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v11 = &v1;
                v12 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
                v3 = &g_5023d8;
                v4 = 3;
                v7 = 0;
                v5 = &v9;
                v6 = 2;
                return a0.map_or_else(&v3);
            }
            goto (long long)(g_41a3d8[a1] + (char *)&g_41a3d8[0]);
        }
        else if (v16 == 3)
        {
            v19 = 1;
            v18 = 0;
        }
        else
        {
            return a0.to_vec("This suffix is unsupported for specified unitmissing 'i' suffix in input: 'rejecting suffix in input: '' (consider using --from)", 45);
        }
    }
    v0 = a1;
    v1 = v19;
    v2 = v18;
    v3 = &v15;
    v4 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v5 = &v0;
    v6 = <uu_numfmt::units::RawSuffix as core::fmt::Debug>::fmt;
    v7 = &v1;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &g_502408;
    v10 = 4;
    v13 = 0;
    v11 = &v3;
    v12 = 3;
    return a0.map_or_else(&v9);
}
