long long uu_dd::Input::new_file(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned short v5;  // [bp-0x3c]
    char v6;  // [bp-0x38], Other Possible Types: unsigned long
    char v7;  // [bp-0x30]
    unsigned int v9;  // edx
    struct_0 *v10;  // rcx
    unsigned int v11;  // eax
    struct_0 *v12;  // rdx

    v2 = 0x1b600000000;
    v4 = 0;
    v5 = 0;
    v4 = 1;
    v2 = v2;
    if ((int)uu_dd::make_linux_iflags(&a3->padding_0[64]) == 1)
    {
        v2 = v9;
        v2 = v3;
    }
    v0.open(&v2, a1, a2);
    v6.map_err_context(&v0, a1, a2);
    if (v6)
    {
        v10 = *((long long *)&v7);
        *((unsigned long *)&a0->field_8) = v6;
        a0->field_10 = v10;
        a0->field_0 = 1;
        return a0;
    }
    v11 = *((int *)&v7);
    v1 = *((int *)&v7);
    v0 = 0;
    if (a3->field_80)
    {
        if (v0.skip(a3->field_80))
        {
            *((long long *)&a0->field_8) = v12.from();
            a0->field_10 = v12;
            a0->field_0 = 1;
            core::ptr::drop_in_place<uu_dd::Source>(v1);
            return a0;
        }
        v1 = v1;
    }
    else
    {
        v1 = v11;
    }
    *((unsigned int *)&a0->field_8) = 0;
    *((unsigned int *)&a0->padding_9[3]) = v1;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
