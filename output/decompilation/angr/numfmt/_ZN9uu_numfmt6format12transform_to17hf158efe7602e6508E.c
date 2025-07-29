long long uu_numfmt::format::transform_to(struct_0 *a0, unsigned long a1, char a2, char a3, unsigned long long a4)
{
    struct struct_1 v0[1];  // [bp-0x128], Other Possible Types: char
    char v1;  // [bp-0x127]
    char v2;  // [bp-0x126]
    struct struct_1 v3[8];  // [bp-0x120], Other Possible Types: unsigned int
    struct struct_1 v4[4];  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned short v5;  // [bp-0x11c]
    unsigned long long v6;  // [bp-0x118]
    char *v7;  // [bp-0x110]
    unsigned long long v8;  // [bp-0x108]
    void* v9;  // [bp-0x100], Other Possible Types: char *
    unsigned long long v10;  // [bp-0xf8]
    struct struct_1 v11[8];  // [bp-0xf0]
    char *v12;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xe0]
    void* v14;  // [sp-0xd8], Other Possible Types: char *
    unsigned long long v15;  // [sp-0xd0]
    char *v16;  // [bp-0xc8]
    unsigned long long v17;  // [bp-0xc0]
    int v18;  // [bp-0xb8], Other Possible Types: void*, char, unsigned long long
    unsigned long v19;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v20;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v21;  // [bp-0xa7]
    unsigned int v22;  // [bp-0xa6]
    char v23;  // [bp-0xa2]
    void* v24;  // [sp-0x98]
    unsigned long long v25;  // [sp-0x90]
    char v26;  // [sp-0x88]
    unsigned long long v27;  // [sp-0x80]
    unsigned long long v28;  // [sp-0x70]
    unsigned long long v29;  // [sp-0x60]
    unsigned long long v30;  // [sp-0x58]
    char v31;  // [sp-0x50]
    struct struct_1 v32[16];  // [bp-0x48]
    char v33;  // [bp-0x38]
    char v35;  // cl
    unsigned long v36;  // rax
    char *v37;  // rdi
    char *v38;  // rsi
    unsigned long long v39;  // rax

    uu_numfmt::format::consider_suffix(&v18, a2);
    v35 = v20;
    v36 = v21;
    if (!((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63)))
    {
        v5 = *((short *)&v23);
        v3 = v22;
        *((short *)((char *)&a0[1].field_0 + 5)) = *((short *)&v23);
        *((unsigned int *)((char *)&a0[1].field_0 + 1)) = v22;
        *((void* *)&a0->field_8) = v18;
        *((unsigned long *)&a0->padding_9[7]) = v19;
        a0->field_18 = v35;
        *((char *)&a0[1].field_0) = v36;
        a0->field_0 = 1;
        return v36;
    }
    *((unsigned long long *)&v11[0]) = DivV(v19, AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000));
    if ((char)v36 == 2)
    {
        uu_numfmt::format::round_with_precision(a3, a4);
        *((struct struct_1 [8])&v0) = v11;
        v12 = &(char)v0;
        v13 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v14 = 0;
        v15 = a4;
        v18 = 1;
        v19 = 1;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        *((char **)&v4) = &g_415500;
        v6 = 1;
        v9 = &v18;
        v10 = 1;
        goto LABEL_4addd6;
    }
    else if (a4)
    {
        v1 = v35;
        v2 = (char)v36 & 1;
        *((struct struct_1 *[8])&v3[0]) = &v11;
        v6 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v7 = &(char)v0;
        v8 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
        v9 = 0;
        v10 = a4;
        v18 = 1;
        v19 = 2;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v12 = &g_4151a8;
        v13 = 2;
        v16 = &v18;
        v17 = 2;
        v14 = &(char)v3;
        v15 = 3;
        v37 = &v32;
        v38 = &v12;
    }
    else
    {
        if ((((char)(CmpF(0x4024000000000000, v11 & 9223372036854775807) & 69) | (char)((CmpF(0x4024000000000000, v11 & 9223372036854775807) & 69) >> 6)) & 1) != 1)
        {
            v1 = v35;
            v0 = a2;
            v12 = &v11[0].field_0;
            v13 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v14 = &v0;
            v15 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            v18 = 0;
            v19 = 1;
        }
        else
        {
            v1 = v35;
            v0 = a2;
            v12 = &v11[0].field_0;
            v13 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v14 = &v0;
            v15 = <uu_numfmt::units::DisplayableSuffix as core::fmt::Display>::fmt;
            *((uint128_t *)&v18) = 0;
        }
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v4 = &g_4151a8;
        v6 = 2;
        v9 = &v18;
        v10 = 2;
LABEL_4addd6:
        v7 = &v12;
        v8 = 2;
        v37 = &v32;
        v38 = &(char)v4;
    }
    v37.map_or_else(v38);
    v39 = *((long long *)&v33);
    *((unsigned long long *)&a0->field_18) = v39;
    *((struct struct_1 [16])&a0->field_8) = v32;
    a0->field_0 = 0;
    return v39;
}
