long long uu_dd::Input::new_fifo(struct_1 *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x3c]
    char v4;  // [bp-0x38]
    unsigned short v5;  // [bp-0x34]
    char v6;  // [bp-0x30]
    unsigned int v7;  // [bp-0x2c]
    char v8;  // [bp-0x28]
    unsigned int v10;  // eax
    unsigned int v11;  // edx
    struct_0 *v12;  // rdx
    unsigned int v13;  // eax
    struct_0 *v14;  // rdx
    unsigned int v15;  // ecx

    v3 = 438;
    v5 = 0;
    v4 = 1;
    v10 = uu_dd::make_linux_iflags(&a3->padding_0[64]);
    if (!v10)
        v11 = v10;
    v2 = v11;
    v6.open(&v2, a1, a2);
    if ((v6 & 1))
    {
        *((long long *)&a0->field_8) = *((long long *)&v8).from();
        a0->field_10 = v12;
        a0->field_0 = 1;
        return a0;
    }
    v13 = v7;
    v1 = v13;
    v0 = 2;
    if (a3->field_80)
    {
        if (v0.skip(a3->field_80))
        {
            *((long long *)&a0->field_8) = v14.from();
            a0->field_10 = v14;
            a0->field_0 = 1;
            core::ptr::drop_in_place<uu_dd::Source>(v1);
            return a0;
        }
        v15 = v0;
        v13 = v1;
    }
    else
    {
        v15 = 2;
    }
    *((unsigned int *)&a0->field_8) = v15;
    *((unsigned int *)&a0->padding_9[3]) = v13;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
