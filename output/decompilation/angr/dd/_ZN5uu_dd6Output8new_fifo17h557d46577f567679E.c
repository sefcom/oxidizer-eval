long long uu_dd::Output::new_fifo(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_2 *a3)
{
    char v0[4];  // [bp-0x48], Other Possible Types: unsigned int
    char v1[4];  // [bp-0x48]
    unsigned int v2;  // [bp-0x44], Other Possible Types: unsigned long long
    char v3;  // [bp-0x3f]
    char v4;  // [bp-0x3e]
    char v5;  // [bp-0x3c]
    char v6;  // [bp-0x3b]
    char v7;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v8;  // [bp-0x34]
    char v9;  // [bp-0x30]
    struct_0 *v11;  // rdx
    unsigned int v12;  // eax
    unsigned int v13;  // edx
    struct_0 *v14;  // rdx

    if (*((long long *)&a3->field_88))
    {
        v7.open(a1, a2);
        if ((v7 & 1))
        {
            a0->field_8 = *((long long *)&v9).from();
            a0->field_10 = v14;
            a0->field_0 = 4;
            return a0;
        }
        v2 = v8;
        *(v0) = 2;
        if ((unsigned long long)(unsigned int)v0.seek(*((long long *)&a3->field_88)))
        {
            a0->field_8 = v11.from();
            a0->field_10 = v11;
            a0->field_0 = 4;
            ::0x4cbc70::core::ptr::drop_in_place<uu_dd::Dest>((char)v1, v2);
            return a0;
        }
        ::0x4cbc70::core::ptr::drop_in_place<uu_dd::Dest>((char)v1, v2);
    }
    if (a3->field_0 && (unsigned int)a3->field_0 != 1 || a3->field_8)
    {
        v2 = 438;
        v3 = 1;
        v5 = a3->field_92 ^ 1;
        v6 = a3->field_91;
        v4 = a3->field_96;
        v12 = uu_dd::make_linux_oflags(&a3->field_96);
        if (!v12)
            v13 = v12;
        v0 = v13;
        v7.open(&v0, a1, a2);
        if (((char)v7 & 1))
        {
            a0->field_8 = *((long long *)&v9).from();
            a0->field_10 = v14;
            a0->field_0 = 4;
            return a0;
        }
        a0->field_0 = 2;
        a0->field_4 = v8;
    }
    else
    {
        a0->field_0 = 3;
    }
    a0->field_10 = &a3->field_0;
    return a0;
}
