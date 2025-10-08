long long uu_dd::Input::new_file(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned int v0[1];  // [bp-0x58], Other Possible Types: unsigned int
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
    if (((char)uu_dd::make_linux_iflags(&a3->padding_0[64]) & 1))
    {
        v2 = v9;
        v2 = v3;
    }
    v0.open(&v2, a1, a2);
    v6.map_err_context(&v0, a1, a2);
    if (v6)
    {
        v10 = *((long long *)&v7);
        *((unsigned long *)&a0[8]) = v6;
        *((struct_0 **)&a0[16]) = v10;
        *((unsigned long long *)a0) = 1;
        return a0;
    }
    v11 = *((int *)&v7);
    v1 = *((int *)&v7);
    v0 = 0;
    if (a3->field_80)
    {
        if (((char)v0.skip(a3->field_80) & 1))
        {
            *((long long *)&a0[8]) = v12.from();
            *((struct_0 **)&a0[16]) = v12;
            *((unsigned long long *)a0) = 1;
            core::ptr::drop_in_place<uu_dd::Source>(v1);
            return a0;
        }
        v1 = v1;
    }
    else
    {
        v1 = v11;
    }
    *((unsigned int *)&a0[8]) = 0;
    *((unsigned int *)&a0[12]) = v1;
    *((struct_0 **)&a0[16]) = a3;
    *((unsigned long long *)a0) = 0;
    return a0;
}
