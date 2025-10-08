long long uu_numfmt::format::transform_to(void* a0, unsigned long a1, char a2, char a3, unsigned long long a4)
{
    unsigned long v0;  // [bp-0xb8], Other Possible Types: char
    char v1;  // [bp-0xb7]
    char v2;  // [bp-0xb6]
    char *v3;  // [bp-0xb0], Other Possible Types: char, unsigned long long
    unsigned long v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xa0], Other Possible Types: char, unsigned long long
    char v6;  // [bp-0x9f]
    unsigned int v7;  // [bp-0x9e]
    unsigned short v8;  // [bp-0x9a]
    int v9;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned short v11;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x80]
    char *v13;  // [bp-0x78], Other Possible Types: unsigned int, unsigned long, unsigned long long
    unsigned short v14;  // [bp-0x74]
    unsigned long long v15;  // [bp-0x70]
    void* v16;  // [bp-0x68], Other Possible Types: char *
    unsigned short v17;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    int v20;  // [bp-0x48], Other Possible Types: char
    char v21;  // [bp-0x38]
    char v23;  // cl
    unsigned long v24;  // rax
    char *v25;  // rdi
    char *v26;  // rsi
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax

    uu_numfmt::format::consider_suffix(&v3, a2);
    v23 = v5;
    v24 = v6;
    if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
    {
        v14 = v8;
        v13 = v7;
        *((unsigned short *)&a0[30]) = v8;
        *((unsigned int *)&a0[26]) = v7;
        *((unsigned long long *)&a0[8]) = v3;
        *((unsigned long *)&a0[16]) = v4;
        *((char *)&a0[24]) = v23;
        *((char *)&a0[25]) = v24;
        *((unsigned long long *)a0) = 1;
        return v24;
    }
    v12 = DivV(v4, AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000));
    if ((char)v24 == 2)
    {
        uu_numfmt::format::round_with_precision(a3, a4);
        v0 = v12;
        if (a4 > 65535)
        {
            v3 = &g_502460;
            v4 = 1;
            v5 = 8;
            *((uint128_t *)&v9) = 0;
            core::panicking::panic_fmt(&v3, &g_502470); /* do not return */
        }
        v13 = &(char)v0;
        v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v16 = 0;
        v17 = a4;
        v3 = &g_4198c0;
        v4 = 1;
        v10 = &g_41ab58;
        v11 = 1;
        goto LABEL_46a49b;
    }
    else
    {
        if (a4)
        {
            v1 = v23;
            v2 = (char)v24 & 1;
            if (a4 > 65535)
            {
                v3 = &g_502460;
                v4 = 1;
                v5 = 8;
                *((uint128_t *)&v9) = 0;
                core::panicking::panic_fmt(&v3, &g_502488); /* do not return */
            }
            v3 = &v12;
            v4 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v5 = &(char)v0;
            v9 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v10 = 0;
            v11 = a4;
            v13 = &g_4195a0;
            v15 = 2;
            v18 = &g_41ac48;
            v19 = 2;
            v16 = &v3;
            v17 = 3;
            v25 = &v20;
            v26 = &(char)v13;
        }
        else
        {
            if (((CmpF(0x4024000000000000, v12 & 9223372036854775807) & 69 | (char)((CmpF(0x4024000000000000, v12 & 9223372036854775807) & 69) >> 6)) & 1) != 1)
            {
                v1 = v23;
                v0 = a2;
                v13 = &v12;
                v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v16 = &v0;
                v17 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
                v3 = &g_4195a0;
                v4 = 2;
                v27 = &g_41abe8;
            }
            else
            {
                v1 = v23;
                v0 = a2;
                v13 = &v12;
                v15 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v16 = &v0;
                v17 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
                v3 = &g_4195a0;
                v4 = 2;
                v27 = &g_41ab88;
            }
            v10 = v27;
            v11 = 2;
LABEL_46a49b:
            v5 = &(char)v13;
            v9 = 2;
            v25 = &v20;
            v26 = &v3;
        }
        v25.map_or_else(v26);
        v28 = *((long long *)&v21);
        *((unsigned long long *)&a0[24]) = v28;
        a0[8] = v20;
        *((unsigned long long *)a0) = 0;
        return v28;
    }
}
