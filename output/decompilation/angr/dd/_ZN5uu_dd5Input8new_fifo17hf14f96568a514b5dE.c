long long uu_dd::Input::new_fifo(void* a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0[1];  // [bp-0x40], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x2c]
    char v5;  // [bp-0x28]
    unsigned short v6;  // [bp-0x24]
    unsigned int v8;  // edx
    struct_1 *v10;  // rdx
    unsigned int v11;  // eax
    struct_1 *v12;  // rdx
    unsigned int v13;  // ecx

    v4 = 438;
    v6 = 0;
    v5 = 1;
    v3 = (((char)uu_dd::make_linux_iflags(&a3->padding_0[64]) & 1) ? v8 : 0);
    v0.open(&v3, a1, a2);
    if (v0 == 1)
    {
        *((long long *)&a0[8]) = v2.from();
        *((struct_1 **)&a0[16]) = v10;
        *((unsigned long long *)a0) = 1;
        return a0;
    }
    v11 = v1;
    v1 = v11;
    v0 = 2;
    if (a3->field_80)
    {
        if (((char)v0.skip(a3->field_80) & 1))
        {
            *((long long *)&a0[8]) = v12.from();
            *((struct_1 **)&a0[16]) = v12;
            *((unsigned long long *)a0) = 1;
            core::ptr::drop_in_place<uu_dd::Source>(v1);
            return a0;
        }
        v13 = v0;
        v11 = v1;
    }
    else
    {
        v13 = 2;
    }
    *((unsigned int *)&a0[8]) = v13;
    *((unsigned int *)&a0[12]) = v11;
    *((struct_1 **)&a0[16]) = a3;
    *((unsigned long long *)a0) = 0;
    return a0;
}
